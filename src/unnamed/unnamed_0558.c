#include "protos.h"

void f_00558040(void) /* sub_558040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558040);
    /* 00558040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558041: mov ebp, esp */ r_ebp = r_esp;
    /* 00558043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558046: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00558049: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00558050: jmp 0x55805b */ goto L_0055805b;
L_00558052:; BB(0x00558052);
    /* 00558052: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558055: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558058: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055805b:; BB(0x0055805b);
    /* 0055805b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055805f: jge 0x5580a8 */ if ((fS==fO)) goto L_005580a8;
L_00558061:; BB(0x00558061);
    /* 00558061: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00558065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00558066: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00558069: call 0x5573a0 */ r_esp -= 4; W32(r_esp, 0x55806eu); f_005573a0();
    /* 0055806e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00558071: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558073: je 0x55808e */ if (fZ) goto L_0055808e;
L_00558075:; BB(0x00558075);
    /* 00558075: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00558079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055807a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055807d: call 0x557a80 */ r_esp -= 4; W32(r_esp, 0x558082u); f_00557a80();
    /* 00558082: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00558085: mov word ptr [ecx + eax*2 + 0x18], 0 */ W16((u32)(r_ecx+r_eax*2+0x18u), 0x0u);
    /* 0055808c: jmp 0x55809b */ goto L_0055809b;
L_0055808e:; BB(0x0055808e);
    /* 0055808e: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00558092: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558093: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00558096: call 0x557a30 */ r_esp -= 4; W32(r_esp, 0x55809bu); f_00557a30();
L_0055809b:; BB(0x0055809b);
    /* 0055809b: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 005580a1: call 0x554950 */ r_esp -= 4; W32(r_esp, 0x5580a6u); f_00554950();
    /* 005580a6: jmp 0x558052 */ goto L_00558052;
L_005580a8:; BB(0x005580a8);
    /* 005580a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005580aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005580ab: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005580b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005580b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005580b5: fld1  */ FPUSH(1.0);
    /* 005580b7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005580ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005580bc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005580be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005580c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005580c2: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005580c7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005580cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005580ce: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005580d4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005580da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5580dcu); call_ind(t); }
    /* 005580dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005580de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005580df: ret 4 */ FN_RET(0x00558040); r_esp += 8; return;
}

void f_005580f0(void) /* sub_5580F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005580f0);
    /* 005580f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005580f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005580f3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005580f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005580f9: mov dword ptr [ebp - 0x18], 0x85 */ W32((u32)(r_ebp+0xffffffe8u), 0x85u);
    /* 00558100: mov dword ptr [ebp - 0x14], 0xbc */ W32((u32)(r_ebp+0xffffffecu), 0xbcu);
    /* 00558107: mov dword ptr [ebp - 0x10], 0xf3 */ W32((u32)(r_ebp+0xfffffff0u), 0xf3u);
    /* 0055810e: mov dword ptr [ebp - 0xc], 0x12a */ W32((u32)(r_ebp+0xfffffff4u), 0x12au);
    /* 00558115: mov dword ptr [ebp - 8], 0x161 */ W32((u32)(r_ebp+0xfffffff8u), 0x161u);
    /* 0055811c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00558123: jmp 0x55812e */ goto L_0055812e;
L_00558125:; BB(0x00558125);
    /* 00558125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558128: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055812b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055812e:; BB(0x0055812e);
    /* 0055812e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558132: jge 0x55817e */ if ((fS==fO)) goto L_0055817e;
L_00558134:; BB(0x00558134);
    /* 00558134: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558137: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 0055813d: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00558141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558144: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 0055814a: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0055814e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00558150: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00558153: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x558155u); call_ind(t); }
    /* 00558155: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00558158: cmp eax, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055815c: jne 0x55817c */ if (!fZ) goto L_0055817c;
L_0055815e:; BB(0x0055815e);
    /* 0055815e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558161: mov eax, dword ptr [0x793424] */ r_eax = R32((u32)(0x793424u));
    /* 00558166: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0055816a: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00558171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558172: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558175: call 0x558040 */ r_esp -= 4; W32(r_esp, 0x55817au); f_00558040();
    /* 0055817a: jmp 0x55817e */ goto L_0055817e;
L_0055817c:; BB(0x0055817c);
    /* 0055817c: jmp 0x558125 */ goto L_00558125;
L_0055817e:; BB(0x0055817e);
    /* 0055817e: mov esp, ebp */ r_esp = r_ebp;
    /* 00558180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558181: ret 4 */ FN_RET(0x005580f0); r_esp += 8; return;
}

void f_00558190(void) /* sub_558190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558190);
    /* 00558190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558191: mov ebp, esp */ r_ebp = r_esp;
    /* 00558193: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558196: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00558199: mov dword ptr [ebp - 0x18], 0x85 */ W32((u32)(r_ebp+0xffffffe8u), 0x85u);
    /* 005581a0: mov dword ptr [ebp - 0x14], 0xbc */ W32((u32)(r_ebp+0xffffffecu), 0xbcu);
    /* 005581a7: mov dword ptr [ebp - 0x10], 0xf3 */ W32((u32)(r_ebp+0xfffffff0u), 0xf3u);
    /* 005581ae: mov dword ptr [ebp - 0xc], 0x12a */ W32((u32)(r_ebp+0xfffffff4u), 0x12au);
    /* 005581b5: mov dword ptr [ebp - 8], 0x161 */ W32((u32)(r_ebp+0xfffffff8u), 0x161u);
    /* 005581bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005581bf: call 0x557310 */ r_esp -= 4; W32(r_esp, 0x5581c4u); f_00557310();
    /* 005581c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005581c7: mov byte ptr [eax + 0x2c], 1 */ W8((u32)(r_eax+0x2cu), 0x1u);
    /* 005581cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005581ce: mov dword ptr [ecx + 0x14], 2 */ W32((u32)(r_ecx+0x14u), 0x2u);
    /* 005581d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005581dc: jmp 0x5581e7 */ goto L_005581e7;
L_005581de:; BB(0x005581de);
    /* 005581de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005581e1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005581e4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005581e7:; BB(0x005581e7);
    /* 005581e7: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005581eb: jge 0x55821f */ if ((fS==fO)) goto L_0055821f;
L_005581ed:; BB(0x005581ed);
    /* 005581ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005581f0: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005581f3: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5581f8u); f_006436c0();
    /* 005581f8: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 005581fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005581ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00558200: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00558204: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558205: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 0055820b: call 0x555270 */ r_esp -= 4; W32(r_esp, 0x558210u); f_00555270();
    /* 00558210: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00558214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558215: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00558218: call 0x557e90 */ r_esp -= 4; W32(r_esp, 0x55821du); f_00557e90();
    /* 0055821d: jmp 0x5581de */ goto L_005581de;
L_0055821f:; BB(0x0055821f);
    /* 0055821f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00558222: call 0x558330 */ r_esp -= 4; W32(r_esp, 0x558227u); f_00558330();
    /* 00558227: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055822a: mov byte ptr [ecx + 0x2c], 0 */ W8((u32)(r_ecx+0x2cu), 0x0u);
    /* 0055822e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00558231: call 0x557310 */ r_esp -= 4; W32(r_esp, 0x558236u); f_00557310();
    /* 00558236: mov esp, ebp */ r_esp = r_ebp;
    /* 00558238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558239: ret  */ FN_RET(0x00558190); r_esp += 4; return;
}

void f_00558240(void) /* sub_558240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558240);
    /* 00558240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558241: mov ebp, esp */ r_ebp = r_esp;
    /* 00558243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00558244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00558247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055824a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0055824d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00558250: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558253: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00558256: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558259: cmp dword ptr [eax + 0x14], 1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055825d: jne 0x5582f4 */ if (!fZ) goto L_005582f4;
L_00558263:; BB(0x00558263);
    /* 00558263: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558266: call 0x558c10 */ r_esp -= 4; W32(r_esp, 0x55826bu); f_00558c10();
    /* 0055826b: push 0x7422a0 */ { u32 v = 0x7422a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558270: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00558272: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00558278: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x55827du); f_0057ab80();
    /* 0055827d: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00558283: call 0x551c70 */ r_esp -= 4; W32(r_esp, 0x558288u); f_00551c70();
    /* 00558288: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055828a: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0055828f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558295: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x55829au); f_005f2b20();
    /* 0055829a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055829c: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 005582a1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005582a7: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5582acu); f_005f2b20();
    /* 005582ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005582ae: push 0x30f343 */ { u32 v = 0x30f343u; r_esp -= 4; W32(r_esp, v); }
    /* 005582b3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005582b9: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5582beu); f_005f2b20();
    /* 005582be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005582c0: push 0x30f344 */ { u32 v = 0x30f344u; r_esp -= 4; W32(r_esp, v); }
    /* 005582c5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005582cb: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5582d0u); f_005f2b20();
    /* 005582d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005582d2: push 0x30f345 */ { u32 v = 0x30f345u; r_esp -= 4; W32(r_esp, v); }
    /* 005582d7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005582dd: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5582e2u); f_005f2b20();
    /* 005582e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005582e4: push 0x30f346 */ { u32 v = 0x30f346u; r_esp -= 4; W32(r_esp, v); }
    /* 005582e9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005582ef: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5582f4u); f_005f2b20();
L_005582f4:; BB(0x005582f4);
    /* 005582f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005582f7: cmp dword ptr [ecx + 0x14], 2 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005582fb: jne 0x558327 */ if (!fZ) goto L_00558327;
L_005582fd:; BB(0x005582fd);
    /* 005582fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558300: call 0x558330 */ r_esp -= 4; W32(r_esp, 0x558305u); f_00558330();
    /* 00558305: push 0x740a90 */ { u32 v = 0x740a90u; r_esp -= 4; W32(r_esp, v); }
    /* 0055830a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055830c: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00558312: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x558317u); f_0057ab80();
    /* 00558317: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0055831c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558322: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x558327u); f_005f2ba0();
L_00558327:; BB(0x00558327);
    /* 00558327: mov esp, ebp */ r_esp = r_ebp;
    /* 00558329: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055832a: ret  */ FN_RET(0x00558240); r_esp += 4; return;
}

void f_00558330(void) /* sub_558330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558330);
    /* 00558330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558331: mov ebp, esp */ r_ebp = r_esp;
    /* 00558333: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558336: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00558339: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055833c: call 0x558c10 */ r_esp -= 4; W32(r_esp, 0x558341u); f_00558c10();
    /* 00558341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558342: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558345: call 0x558450 */ r_esp -= 4; W32(r_esp, 0x55834au); f_00558450();
    /* 0055834a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055834d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558351: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558357: call 0x554c80 */ r_esp -= 4; W32(r_esp, 0x55835cu); f_00554c80();
    /* 0055835c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055835f: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00558366: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558369: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 0055836d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055836f: jne 0x558389 */ if (!fZ) goto L_00558389;
L_00558371:; BB(0x00558371);
    /* 00558371: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558374: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00558377: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0055837a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055837d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558381: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558384: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x558389u); f_005d0a20();
L_00558389:; BB(0x00558389);
    /* 00558389: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055838c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00558393: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558396: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00558399: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0055839c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055839f: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x5583a4u); f_005d0aa0();
    /* 005583a4: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005583a8: cmp eax, 0x5f5e100 */ {  u32 a = r_eax; u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005583ad: jle 0x5583f7 */ if ((fZ||fS!=fO)) goto L_005583f7;
L_005583af:; BB(0x005583af);
    /* 005583af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005583b2: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x5583b7u); f_005d13e0();
    /* 005583b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005583b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005583ba: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005583c0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005583c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005583c4: fld1  */ FPUSH(1.0);
    /* 005583c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005583c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005583cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005583cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005583cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005583d1: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005583d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005583dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005583de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005583e4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005583ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5583ecu); call_ind(t); }
    /* 005583ec: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 005583f2: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x5583f7u); f_005542c0();
L_005583f7:; BB(0x005583f7);
    /* 005583f7: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 005583fd: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x558402u); f_005542c0();
    /* 00558402: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558405: movzx edx, byte ptr [ecx + 0x2c] */ r_edx = (u32)R8((u32)(r_ecx+0x2cu));
    /* 00558409: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055840b: jne 0x55843e */ if (!fZ) goto L_0055843e;
L_0055840d:; BB(0x0055840d);
    /* 0055840d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00558412: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 00558415: mov byte ptr [ebp - 0xd], cl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_ecx);
    /* 00558418: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0055841c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055841e: je 0x55843e */ if (fZ) goto L_0055843e;
L_00558420:; BB(0x00558420);
    /* 00558420: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558422: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00558424: mov eax, dword ptr [0x79341c] */ r_eax = R32((u32)(0x79341cu));
    /* 00558429: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0055842c: mov edx, dword ptr [0x79341c] */ r_edx = R32((u32)(0x79341cu));
    /* 00558432: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00558435: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00558437: mov ecx, eax */ r_ecx = r_eax;
    /* 00558439: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0055843c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55843eu); call_ind(t); }
L_0055843e:; BB(0x0055843e);
    /* 0055843e: mov esp, ebp */ r_esp = r_ebp;
    /* 00558440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558441: ret  */ FN_RET(0x00558330); r_esp += 4; return;
}

void f_00558450(void) /* sub_558450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558450);
    /* 00558450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558451: mov ebp, esp */ r_ebp = r_esp;
    /* 00558453: sub esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558459: mov dword ptr [ebp - 0x264], ecx */ W32((u32)(r_ebp+0xfffffd9cu), r_ecx);
    /* 0055845f: mov dword ptr [ebp - 0x238], 0xfa */ W32((u32)(r_ebp+0xfffffdc8u), 0xfau);
    /* 00558469: mov dword ptr [ebp - 0x234], 0x32 */ W32((u32)(r_ebp+0xfffffdccu), 0x32u);
    /* 00558473: mov dword ptr [ebp - 0x230], 0x19 */ W32((u32)(r_ebp+0xfffffdd0u), 0x19u);
    /* 0055847d: mov dword ptr [ebp - 0x22c], 9 */ W32((u32)(r_ebp+0xfffffdd4u), 0x9u);
    /* 00558487: mov dword ptr [ebp - 0x228], 6 */ W32((u32)(r_ebp+0xfffffdd8u), 0x6u);
    /* 00558491: mov dword ptr [ebp - 0x224], 4 */ W32((u32)(r_ebp+0xfffffddcu), 0x4u);
    /* 0055849b: mov dword ptr [ebp - 0x220], 3 */ W32((u32)(r_ebp+0xfffffde0u), 0x3u);
    /* 005584a5: mov dword ptr [ebp - 0x21c], 2 */ W32((u32)(r_ebp+0xfffffde4u), 0x2u);
    /* 005584af: mov dword ptr [ebp - 0x218], 1 */ W32((u32)(r_ebp+0xfffffde8u), 0x1u);
    /* 005584b9: mov dword ptr [ebp - 0xd0], 0xfa */ W32((u32)(r_ebp+0xffffff30u), 0xfau);
    /* 005584c3: mov dword ptr [ebp - 0xcc], 0x32 */ W32((u32)(r_ebp+0xffffff34u), 0x32u);
    /* 005584cd: mov dword ptr [ebp - 0xc8], 0x19 */ W32((u32)(r_ebp+0xffffff38u), 0x19u);
    /* 005584d7: mov dword ptr [ebp - 0xc4], 6 */ W32((u32)(r_ebp+0xffffff3cu), 0x6u);
    /* 005584e1: mov dword ptr [ebp - 0xc0], 5 */ W32((u32)(r_ebp+0xffffff40u), 0x5u);
    /* 005584eb: mov dword ptr [ebp - 0xbc], 4 */ W32((u32)(r_ebp+0xffffff44u), 0x4u);
    /* 005584f5: mov dword ptr [ebp - 0xb8], 3 */ W32((u32)(r_ebp+0xffffff48u), 0x3u);
    /* 005584ff: mov dword ptr [ebp - 0xb4], 2 */ W32((u32)(r_ebp+0xffffff4cu), 0x2u);
    /* 00558509: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 00558513: mov dword ptr [ebp - 0x2c], 0x177 */ W32((u32)(r_ebp+0xffffffd4u), 0x177u);
    /* 0055851a: mov dword ptr [ebp - 0x28], 0x4b */ W32((u32)(r_ebp+0xffffffd8u), 0x4bu);
    /* 00558521: mov dword ptr [ebp - 0x24], 0x50 */ W32((u32)(r_ebp+0xffffffdcu), 0x50u);
    /* 00558528: mov dword ptr [ebp - 0x20], 0x28 */ W32((u32)(r_ebp+0xffffffe0u), 0x28u);
    /* 0055852f: mov dword ptr [ebp - 0x1c], 0x19 */ W32((u32)(r_ebp+0xffffffe4u), 0x19u);
    /* 00558536: mov dword ptr [ebp - 0x18], 8 */ W32((u32)(r_ebp+0xffffffe8u), 0x8u);
    /* 0055853d: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 00558544: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 0055854b: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00558552: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00558559: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00558560: mov dword ptr [ebp - 0x214], 0xfa */ W32((u32)(r_ebp+0xfffffdecu), 0xfau);
    /* 0055856a: mov dword ptr [ebp - 0x210], 0x32 */ W32((u32)(r_ebp+0xfffffdf0u), 0x32u);
    /* 00558574: mov dword ptr [ebp - 0x20c], 0x19 */ W32((u32)(r_ebp+0xfffffdf4u), 0x19u);
    /* 0055857e: mov dword ptr [ebp - 0x208], 6 */ W32((u32)(r_ebp+0xfffffdf8u), 0x6u);
    /* 00558588: mov dword ptr [ebp - 0x204], 5 */ W32((u32)(r_ebp+0xfffffdfcu), 0x5u);
    /* 00558592: mov dword ptr [ebp - 0x200], 4 */ W32((u32)(r_ebp+0xfffffe00u), 0x4u);
    /* 0055859c: mov dword ptr [ebp - 0x1fc], 3 */ W32((u32)(r_ebp+0xfffffe04u), 0x3u);
    /* 005585a6: mov dword ptr [ebp - 0x1f8], 2 */ W32((u32)(r_ebp+0xfffffe08u), 0x2u);
    /* 005585b0: mov dword ptr [ebp - 0x1f4], 1 */ W32((u32)(r_ebp+0xfffffe0cu), 0x1u);
    /* 005585ba: mov dword ptr [ebp - 0x25c], 0xfa */ W32((u32)(r_ebp+0xfffffda4u), 0xfau);
    /* 005585c4: mov dword ptr [ebp - 0x258], 0x32 */ W32((u32)(r_ebp+0xfffffda8u), 0x32u);
    /* 005585ce: mov dword ptr [ebp - 0x254], 0x19 */ W32((u32)(r_ebp+0xfffffdacu), 0x19u);
    /* 005585d8: mov dword ptr [ebp - 0x250], 9 */ W32((u32)(r_ebp+0xfffffdb0u), 0x9u);
    /* 005585e2: mov dword ptr [ebp - 0x24c], 6 */ W32((u32)(r_ebp+0xfffffdb4u), 0x6u);
    /* 005585ec: mov dword ptr [ebp - 0x248], 4 */ W32((u32)(r_ebp+0xfffffdb8u), 0x4u);
    /* 005585f6: mov dword ptr [ebp - 0x244], 3 */ W32((u32)(r_ebp+0xfffffdbcu), 0x3u);
    /* 00558600: mov dword ptr [ebp - 0x240], 1 */ W32((u32)(r_ebp+0xfffffdc0u), 0x1u);
    /* 0055860a: mov dword ptr [ebp - 0x23c], 1 */ W32((u32)(r_ebp+0xfffffdc4u), 0x1u);
    /* 00558614: mov dword ptr [ebp - 0xac], 0x1f4 */ W32((u32)(r_ebp+0xffffff54u), 0x1f4u);
    /* 0055861e: mov dword ptr [ebp - 0xa8], 0x64 */ W32((u32)(r_ebp+0xffffff58u), 0x64u);
    /* 00558628: mov dword ptr [ebp - 0xa4], 0x19 */ W32((u32)(r_ebp+0xffffff5cu), 0x19u);
    /* 00558632: mov dword ptr [ebp - 0xa0], 0x10 */ W32((u32)(r_ebp+0xffffff60u), 0x10u);
    /* 0055863c: mov dword ptr [ebp - 0x9c], 0xd */ W32((u32)(r_ebp+0xffffff64u), 0xdu);
    /* 00558646: mov dword ptr [ebp - 0x98], 4 */ W32((u32)(r_ebp+0xffffff68u), 0x4u);
    /* 00558650: mov dword ptr [ebp - 0x94], 3 */ W32((u32)(r_ebp+0xffffff6cu), 0x3u);
    /* 0055865a: mov dword ptr [ebp - 0x90], 2 */ W32((u32)(r_ebp+0xffffff70u), 0x2u);
    /* 00558664: mov dword ptr [ebp - 0x8c], 2 */ W32((u32)(r_ebp+0xffffff74u), 0x2u);
    /* 0055866e: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 00558678: mov dword ptr [ebp - 0x80], 0x177 */ W32((u32)(r_ebp+0xffffff80u), 0x177u);
    /* 0055867f: mov dword ptr [ebp - 0x7c], 0x4b */ W32((u32)(r_ebp+0xffffff84u), 0x4bu);
    /* 00558686: mov dword ptr [ebp - 0x78], 0x19 */ W32((u32)(r_ebp+0xffffff88u), 0x19u);
    /* 0055868d: mov dword ptr [ebp - 0x74], 0xf */ W32((u32)(r_ebp+0xffffff8cu), 0xfu);
    /* 00558694: mov dword ptr [ebp - 0x70], 0xb */ W32((u32)(r_ebp+0xffffff90u), 0xbu);
    /* 0055869b: mov dword ptr [ebp - 0x6c], 4 */ W32((u32)(r_ebp+0xffffff94u), 0x4u);
    /* 005586a2: mov dword ptr [ebp - 0x68], 3 */ W32((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 005586a9: mov dword ptr [ebp - 0x64], 2 */ W32((u32)(r_ebp+0xffffff9cu), 0x2u);
    /* 005586b0: mov dword ptr [ebp - 0x60], 2 */ W32((u32)(r_ebp+0xffffffa0u), 0x2u);
    /* 005586b7: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 005586be: mov dword ptr [ebp - 0x1f0], 0x1f4 */ W32((u32)(r_ebp+0xfffffe10u), 0x1f4u);
    /* 005586c8: mov dword ptr [ebp - 0x1ec], 0x64 */ W32((u32)(r_ebp+0xfffffe14u), 0x64u);
    /* 005586d2: mov dword ptr [ebp - 0x1e8], 0x14 */ W32((u32)(r_ebp+0xfffffe18u), 0x14u);
    /* 005586dc: mov dword ptr [ebp - 0x1e4], 0xa */ W32((u32)(r_ebp+0xfffffe1cu), 0xau);
    /* 005586e6: mov dword ptr [ebp - 0x1e0], 8 */ W32((u32)(r_ebp+0xfffffe20u), 0x8u);
    /* 005586f0: mov dword ptr [ebp - 0x1dc], 4 */ W32((u32)(r_ebp+0xfffffe24u), 0x4u);
    /* 005586fa: mov dword ptr [ebp - 0x1d8], 4 */ W32((u32)(r_ebp+0xfffffe28u), 0x4u);
    /* 00558704: mov dword ptr [ebp - 0x1d4], 2 */ W32((u32)(r_ebp+0xfffffe2cu), 0x2u);
    /* 0055870e: mov dword ptr [ebp - 0x1d0], 2 */ W32((u32)(r_ebp+0xfffffe30u), 0x2u);
    /* 00558718: mov dword ptr [ebp - 0x1cc], 1 */ W32((u32)(r_ebp+0xfffffe34u), 0x1u);
    /* 00558722: mov dword ptr [ebp - 0x1c8], 0x3e8 */ W32((u32)(r_ebp+0xfffffe38u), 0x3e8u);
    /* 0055872c: mov dword ptr [ebp - 0x1c4], 0xc8 */ W32((u32)(r_ebp+0xfffffe3cu), 0xc8u);
    /* 00558736: mov dword ptr [ebp - 0x1c0], 0x28 */ W32((u32)(r_ebp+0xfffffe40u), 0x28u);
    /* 00558740: mov dword ptr [ebp - 0x1bc], 0x14 */ W32((u32)(r_ebp+0xfffffe44u), 0x14u);
    /* 0055874a: mov dword ptr [ebp - 0x1b8], 0x10 */ W32((u32)(r_ebp+0xfffffe48u), 0x10u);
    /* 00558754: mov dword ptr [ebp - 0x1b4], 8 */ W32((u32)(r_ebp+0xfffffe4cu), 0x8u);
    /* 0055875e: mov dword ptr [ebp - 0x1b0], 8 */ W32((u32)(r_ebp+0xfffffe50u), 0x8u);
    /* 00558768: mov dword ptr [ebp - 0x1ac], 4 */ W32((u32)(r_ebp+0xfffffe54u), 0x4u);
    /* 00558772: mov dword ptr [ebp - 0x1a8], 4 */ W32((u32)(r_ebp+0xfffffe58u), 0x4u);
    /* 0055877c: mov dword ptr [ebp - 0x1a4], 2 */ W32((u32)(r_ebp+0xfffffe5cu), 0x2u);
    /* 00558786: mov dword ptr [ebp - 0x1a0], 0x5dc */ W32((u32)(r_ebp+0xfffffe60u), 0x5dcu);
    /* 00558790: mov dword ptr [ebp - 0x19c], 0xe1 */ W32((u32)(r_ebp+0xfffffe64u), 0xe1u);
    /* 0055879a: mov dword ptr [ebp - 0x198], 0x3c */ W32((u32)(r_ebp+0xfffffe68u), 0x3cu);
    /* 005587a4: mov dword ptr [ebp - 0x194], 0x1e */ W32((u32)(r_ebp+0xfffffe6cu), 0x1eu);
    /* 005587ae: mov dword ptr [ebp - 0x190], 0x18 */ W32((u32)(r_ebp+0xfffffe70u), 0x18u);
    /* 005587b8: mov dword ptr [ebp - 0x18c], 0xc */ W32((u32)(r_ebp+0xfffffe74u), 0xcu);
    /* 005587c2: mov dword ptr [ebp - 0x188], 0xc */ W32((u32)(r_ebp+0xfffffe78u), 0xcu);
    /* 005587cc: mov dword ptr [ebp - 0x184], 6 */ W32((u32)(r_ebp+0xfffffe7cu), 0x6u);
    /* 005587d6: mov dword ptr [ebp - 0x180], 6 */ W32((u32)(r_ebp+0xfffffe80u), 0x6u);
    /* 005587e0: mov dword ptr [ebp - 0x17c], 3 */ W32((u32)(r_ebp+0xfffffe84u), 0x3u);
    /* 005587ea: mov dword ptr [ebp - 0x178], 0x7d0 */ W32((u32)(r_ebp+0xfffffe88u), 0x7d0u);
    /* 005587f4: mov dword ptr [ebp - 0x174], 0x12c */ W32((u32)(r_ebp+0xfffffe8cu), 0x12cu);
    /* 005587fe: mov dword ptr [ebp - 0x170], 0x32 */ W32((u32)(r_ebp+0xfffffe90u), 0x32u);
    /* 00558808: mov dword ptr [ebp - 0x16c], 0x28 */ W32((u32)(r_ebp+0xfffffe94u), 0x28u);
    /* 00558812: mov dword ptr [ebp - 0x168], 0x20 */ W32((u32)(r_ebp+0xfffffe98u), 0x20u);
    /* 0055881c: mov dword ptr [ebp - 0x164], 0x10 */ W32((u32)(r_ebp+0xfffffe9cu), 0x10u);
    /* 00558826: mov dword ptr [ebp - 0x160], 0x10 */ W32((u32)(r_ebp+0xfffffea0u), 0x10u);
    /* 00558830: mov dword ptr [ebp - 0x15c], 8 */ W32((u32)(r_ebp+0xfffffea4u), 0x8u);
    /* 0055883a: mov dword ptr [ebp - 0x158], 8 */ W32((u32)(r_ebp+0xfffffea8u), 0x8u);
    /* 00558844: mov dword ptr [ebp - 0x154], 4 */ W32((u32)(r_ebp+0xfffffeacu), 0x4u);
    /* 0055884e: mov dword ptr [ebp - 0x150], 0xfa0 */ W32((u32)(r_ebp+0xfffffeb0u), 0xfa0u);
    /* 00558858: mov dword ptr [ebp - 0x14c], 0x177 */ W32((u32)(r_ebp+0xfffffeb4u), 0x177u);
    /* 00558862: mov dword ptr [ebp - 0x148], 0x64 */ W32((u32)(r_ebp+0xfffffeb8u), 0x64u);
    /* 0055886c: mov dword ptr [ebp - 0x144], 0x32 */ W32((u32)(r_ebp+0xfffffebcu), 0x32u);
    /* 00558876: mov dword ptr [ebp - 0x140], 0x28 */ W32((u32)(r_ebp+0xfffffec0u), 0x28u);
    /* 00558880: mov dword ptr [ebp - 0x13c], 0x14 */ W32((u32)(r_ebp+0xfffffec4u), 0x14u);
    /* 0055888a: mov dword ptr [ebp - 0x138], 0x14 */ W32((u32)(r_ebp+0xfffffec8u), 0x14u);
    /* 00558894: mov dword ptr [ebp - 0x134], 0xa */ W32((u32)(r_ebp+0xfffffeccu), 0xau);
    /* 0055889e: mov dword ptr [ebp - 0x130], 0xa */ W32((u32)(r_ebp+0xfffffed0u), 0xau);
    /* 005588a8: mov dword ptr [ebp - 0x12c], 5 */ W32((u32)(r_ebp+0xfffffed4u), 0x5u);
    /* 005588b2: mov dword ptr [ebp - 0x58], 0x3e8 */ W32((u32)(r_ebp+0xffffffa8u), 0x3e8u);
    /* 005588b9: mov dword ptr [ebp - 0x54], 0xc8 */ W32((u32)(r_ebp+0xffffffacu), 0xc8u);
    /* 005588c0: mov dword ptr [ebp - 0x50], 0x64 */ W32((u32)(r_ebp+0xffffffb0u), 0x64u);
    /* 005588c7: mov dword ptr [ebp - 0x4c], 0x32 */ W32((u32)(r_ebp+0xffffffb4u), 0x32u);
    /* 005588ce: mov dword ptr [ebp - 0x48], 0x11 */ W32((u32)(r_ebp+0xffffffb8u), 0x11u);
    /* 005588d5: mov dword ptr [ebp - 0x44], 7 */ W32((u32)(r_ebp+0xffffffbcu), 0x7u);
    /* 005588dc: mov dword ptr [ebp - 0x40], 5 */ W32((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 005588e3: mov dword ptr [ebp - 0x3c], 3 */ W32((u32)(r_ebp+0xffffffc4u), 0x3u);
    /* 005588ea: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 005588f1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005588f8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005588ff: mov dword ptr [ebp - 0x124], 0x1f4 */ W32((u32)(r_ebp+0xfffffedcu), 0x1f4u);
    /* 00558909: mov dword ptr [ebp - 0x120], 0x64 */ W32((u32)(r_ebp+0xfffffee0u), 0x64u);
    /* 00558913: mov dword ptr [ebp - 0x11c], 0x32 */ W32((u32)(r_ebp+0xfffffee4u), 0x32u);
    /* 0055891d: mov dword ptr [ebp - 0x118], 0x32 */ W32((u32)(r_ebp+0xfffffee8u), 0x32u);
    /* 00558927: mov dword ptr [ebp - 0x114], 0x14 */ W32((u32)(r_ebp+0xfffffeecu), 0x14u);
    /* 00558931: mov dword ptr [ebp - 0x110], 8 */ W32((u32)(r_ebp+0xfffffef0u), 0x8u);
    /* 0055893b: mov dword ptr [ebp - 0x10c], 5 */ W32((u32)(r_ebp+0xfffffef4u), 0x5u);
    /* 00558945: mov dword ptr [ebp - 0x108], 4 */ W32((u32)(r_ebp+0xfffffef8u), 0x4u);
    /* 0055894f: mov dword ptr [ebp - 0x104], 2 */ W32((u32)(r_ebp+0xfffffefcu), 0x2u);
    /* 00558959: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
    /* 00558963: mov dword ptr [ebp - 0xfc], 0xfa0 */ W32((u32)(r_ebp+0xffffff04u), 0xfa0u);
    /* 0055896d: mov dword ptr [ebp - 0xf8], 0x320 */ W32((u32)(r_ebp+0xffffff08u), 0x320u);
    /* 00558977: mov dword ptr [ebp - 0xf4], 0x19 */ W32((u32)(r_ebp+0xffffff0cu), 0x19u);
    /* 00558981: mov dword ptr [ebp - 0xf0], 0xc */ W32((u32)(r_ebp+0xffffff10u), 0xcu);
    /* 0055898b: mov dword ptr [ebp - 0xec], 9 */ W32((u32)(r_ebp+0xffffff14u), 0x9u);
    /* 00558995: mov dword ptr [ebp - 0xe8], 6 */ W32((u32)(r_ebp+0xffffff18u), 0x6u);
    /* 0055899f: mov dword ptr [ebp - 0xe4], 3 */ W32((u32)(r_ebp+0xffffff1cu), 0x3u);
    /* 005589a9: mov dword ptr [ebp - 0xe0], 3 */ W32((u32)(r_ebp+0xffffff20u), 0x3u);
    /* 005589b3: mov dword ptr [ebp - 0xdc], 3 */ W32((u32)(r_ebp+0xffffff24u), 0x3u);
    /* 005589bd: mov dword ptr [ebp - 0xd8], 2 */ W32((u32)(r_ebp+0xffffff28u), 0x2u);
    /* 005589c7: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 005589d1: mov eax, dword ptr [ebp - 0x264] */ r_eax = R32((u32)(r_ebp+0xfffffd9cu));
    /* 005589d7: movzx ecx, byte ptr [eax + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+0x2cu));
    /* 005589db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005589dd: je 0x5589eb */ if (fZ) goto L_005589eb;
L_005589df:; BB(0x005589df);
    /* 005589df: mov dword ptr [ebp - 0x268], 1 */ W32((u32)(r_ebp+0xfffffd98u), 0x1u);
    /* 005589e9: jmp 0x5589fa */ goto L_005589fa;
L_005589eb:; BB(0x005589eb);
    /* 005589eb: mov edx, dword ptr [ebp - 0x264] */ r_edx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 005589f1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005589f4: mov dword ptr [ebp - 0x268], eax */ W32((u32)(r_ebp+0xfffffd98u), r_eax);
L_005589fa:; BB(0x005589fa);
    /* 005589fa: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00558a00: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00558a06: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558a0a: jge 0x558a13 */ if ((fS==fO)) goto L_00558a13;
L_00558a0c:; BB(0x00558a0c);
    /* 00558a0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558a0e: jmp 0x558bd7 */ goto L_00558bd7;
L_00558a13:; BB(0x00558a13);
    /* 00558a13: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00558a19: mov dword ptr [ebp - 0x26c], edx */ W32((u32)(r_ebp+0xfffffd94u), r_edx);
    /* 00558a1f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00558a24: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00558a2a: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 00558a30: cmp dword ptr [ebp - 0x26c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffd94u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00558a37: ja 0x558bd5 */ if ((!fC&&!fZ)) goto L_00558bd5;
L_00558a3d:; BB(0x00558a3d);
    /* 00558a3d: mov edx, dword ptr [ebp - 0x26c] */ r_edx = R32((u32)(r_ebp+0xfffffd94u));
    /* 00558a43: jmp dword ptr [edx*4 + 0x558be0] */ { u32 t = R32((u32)(r_edx*4+0x558be0u)); switch (t) { case 0x558a4au: goto L_00558a4a; case 0x558a79u: goto L_00558a79; case 0x558aa8u: goto L_00558aa8; case 0x558ad4u: goto L_00558ad4; case 0x558b03u: goto L_00558b03; case 0x558b32u: goto L_00558b32; case 0x558b5eu: goto L_00558b5e; case 0x558b84u: goto L_00558b84; case 0x558b9fu: goto L_00558b9f; case 0x558bafu: goto L_00558baf; case 0x558bc2u: goto L_00558bc2; default: UNSUP(0x00558a43, "jump table entry is not a known target"); } }
L_00558a4a:; BB(0x00558a4a);
    /* 00558a4a: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a51: jne 0x558a63 */ if (!fZ) goto L_00558a63;
L_00558a53:; BB(0x00558a53);
    /* 00558a53: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a57: jne 0x558a63 */ if (!fZ) goto L_00558a63;
L_00558a59:; BB(0x00558a59);
    /* 00558a59: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 00558a5e: jmp 0x558bd7 */ goto L_00558bd7;
L_00558a63:; BB(0x00558a63);
    /* 00558a63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00558a66: mov eax, dword ptr [ebp + eax*4 - 0x238] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffdc8u));
    /* 00558a6d: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558a74: jmp 0x558bd7 */ goto L_00558bd7;
L_00558a79:; BB(0x00558a79);
    /* 00558a79: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a80: jne 0x558a92 */ if (!fZ) goto L_00558a92;
L_00558a82:; BB(0x00558a82);
    /* 00558a82: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558a86: jne 0x558a92 */ if (!fZ) goto L_00558a92;
L_00558a88:; BB(0x00558a88);
    /* 00558a88: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 00558a8d: jmp 0x558bd7 */ goto L_00558bd7;
L_00558a92:; BB(0x00558a92);
    /* 00558a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00558a95: mov eax, dword ptr [ebp + ecx*4 - 0xd0] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffff30u));
    /* 00558a9c: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558aa3: jmp 0x558bd7 */ goto L_00558bd7;
L_00558aa8:; BB(0x00558aa8);
    /* 00558aa8: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558aaf: jne 0x558ac1 */ if (!fZ) goto L_00558ac1;
L_00558ab1:; BB(0x00558ab1);
    /* 00558ab1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ab5: jne 0x558ac1 */ if (!fZ) goto L_00558ac1;
L_00558ab7:; BB(0x00558ab7);
    /* 00558ab7: mov eax, 0x9c4 */ r_eax = 0x9c4u;
    /* 00558abc: jmp 0x558bd7 */ goto L_00558bd7;
L_00558ac1:; BB(0x00558ac1);
    /* 00558ac1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00558ac4: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 00558ac8: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558acf: jmp 0x558bd7 */ goto L_00558bd7;
L_00558ad4:; BB(0x00558ad4);
    /* 00558ad4: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558adb: jne 0x558aed */ if (!fZ) goto L_00558aed;
L_00558add:; BB(0x00558add);
    /* 00558add: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ae1: jne 0x558aed */ if (!fZ) goto L_00558aed;
L_00558ae3:; BB(0x00558ae3);
    /* 00558ae3: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00558ae8: jmp 0x558bd7 */ goto L_00558bd7;
L_00558aed:; BB(0x00558aed);
    /* 00558aed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00558af0: mov eax, dword ptr [ebp + eax*4 - 0x214] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffdecu));
    /* 00558af7: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558afe: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b03:; BB(0x00558b03);
    /* 00558b03: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b0a: jne 0x558b1c */ if (!fZ) goto L_00558b1c;
L_00558b0c:; BB(0x00558b0c);
    /* 00558b0c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b10: jne 0x558b1c */ if (!fZ) goto L_00558b1c;
L_00558b12:; BB(0x00558b12);
    /* 00558b12: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00558b17: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b1c:; BB(0x00558b1c);
    /* 00558b1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00558b1f: mov eax, dword ptr [ebp + ecx*4 - 0x25c] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffda4u));
    /* 00558b26: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558b2d: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b32:; BB(0x00558b32);
    /* 00558b32: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b39: jne 0x558b4b */ if (!fZ) goto L_00558b4b;
L_00558b3b:; BB(0x00558b3b);
    /* 00558b3b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b3f: jne 0x558b4b */ if (!fZ) goto L_00558b4b;
L_00558b41:; BB(0x00558b41);
    /* 00558b41: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00558b46: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b4b:; BB(0x00558b4b);
    /* 00558b4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00558b4e: mov eax, dword ptr [ebp + edx*4 - 0xac] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff54u));
    /* 00558b55: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558b5c: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b5e:; BB(0x00558b5e);
    /* 00558b5e: cmp dword ptr [ebp - 0x84], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b65: jne 0x558b74 */ if (!fZ) goto L_00558b74;
L_00558b67:; BB(0x00558b67);
    /* 00558b67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558b6b: jne 0x558b74 */ if (!fZ) goto L_00558b74;
L_00558b6d:; BB(0x00558b6d);
    /* 00558b6d: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00558b72: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b74:; BB(0x00558b74);
    /* 00558b74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00558b77: mov eax, dword ptr [ebp + eax*4 - 0x80] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffff80u));
    /* 00558b7b: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558b82: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b84:; BB(0x00558b84);
    /* 00558b84: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00558b8a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00558b8d: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558b90: lea edx, [ebp + ecx - 0x1f0] */ r_edx = (u32)(r_ebp+r_ecx+0xfffffe10u);
    /* 00558b97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00558b9a: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00558b9d: jmp 0x558bd7 */ goto L_00558bd7;
L_00558b9f:; BB(0x00558b9f);
    /* 00558b9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00558ba2: mov eax, dword ptr [ebp + ecx*4 - 0x58] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffa8u));
    /* 00558ba6: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558bad: jmp 0x558bd7 */ goto L_00558bd7;
L_00558baf:; BB(0x00558baf);
    /* 00558baf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00558bb2: mov eax, dword ptr [ebp + edx*4 - 0x124] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffedcu));
    /* 00558bb9: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558bc0: jmp 0x558bd7 */ goto L_00558bd7;
L_00558bc2:; BB(0x00558bc2);
    /* 00558bc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00558bc5: mov eax, dword ptr [ebp + eax*4 - 0xfc] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffff04u));
    /* 00558bcc: imul eax, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00558bd3: jmp 0x558bd7 */ goto L_00558bd7;
L_00558bd5:; BB(0x00558bd5);
    /* 00558bd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00558bd7:; BB(0x00558bd7);
    /* 00558bd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00558bd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558bda: ret 4 */ FN_RET(0x00558450); r_esp += 8; return;
}

void f_00558c10(void) /* sub_558C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558c10);
    /* 00558c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00558c13: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558c16: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00558c19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00558c20: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00558c25: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00558c2b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00558c2e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558c31: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558c34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558c35: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00558c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558c39: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00558c3f: call 0x54c460 */ r_esp -= 4; W32(r_esp, 0x558c44u); f_0054c460();
    /* 00558c44: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00558c47: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558c4b: jne 0x558c54 */ if (!fZ) goto L_00558c54;
L_00558c4d:; BB(0x00558c4d);
    /* 00558c4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558c50: mov byte ptr [ecx + 0x2d], 1 */ W8((u32)(r_ecx+0x2du), 0x1u);
L_00558c54:; BB(0x00558c54);
    /* 00558c54: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558c5a: call 0x554950 */ r_esp -= 4; W32(r_esp, 0x558c5fu); f_00554950();
    /* 00558c5f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558c62: cmp dword ptr [edx + 0x14], 1 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558c66: jne 0x558c8c */ if (!fZ) goto L_00558c8c;
L_00558c68:; BB(0x00558c68);
    /* 00558c68: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00558c6d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00558c73: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00558c76: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558c79: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00558c7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558c7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558c81: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00558c87: call 0x54d6a0 */ r_esp -= 4; W32(r_esp, 0x558c8cu); f_0054d6a0();
L_00558c8c:; BB(0x00558c8c);
    /* 00558c8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558c8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00558c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558c92: ret  */ FN_RET(0x00558c10); r_esp += 4; return;
}

void f_00558fa0(void) /* sub_558FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558fa0);
    /* 00558fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00558fa3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558fa6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00558fa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00558fb0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00558fb7: mov eax, dword ptr [0x793428] */ r_eax = R32((u32)(0x793428u));
    /* 00558fbc: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 00558fc0: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fc3: jne 0x558fd2 */ if (!fZ) goto L_00558fd2;
L_00558fc5:; BB(0x00558fc5);
    /* 00558fc5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558fc8: call 0x5573f0 */ r_esp -= 4; W32(r_esp, 0x558fcdu); f_005573f0();
    /* 00558fcd: jmp 0x55912a */ goto L_0055912a;
L_00558fd2:; BB(0x00558fd2);
    /* 00558fd2: mov edx, dword ptr [0x793428] */ r_edx = R32((u32)(0x793428u));
    /* 00558fd8: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 00558fdc: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558fdf: jne 0x558ff0 */ if (!fZ) goto L_00558ff0;
L_00558fe1:; BB(0x00558fe1);
    /* 00558fe1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558fe3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558fe6: call 0x5574b0 */ r_esp -= 4; W32(r_esp, 0x558febu); f_005574b0();
    /* 00558feb: jmp 0x55912a */ goto L_0055912a;
L_00558ff0:; BB(0x00558ff0);
    /* 00558ff0: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00558ff6: movsx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x19u));
    /* 00558ffa: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558ffd: jne 0x55900e */ if (!fZ) goto L_0055900e;
L_00558fff:; BB(0x00558fff);
    /* 00558fff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00559001: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559004: call 0x5574b0 */ r_esp -= 4; W32(r_esp, 0x559009u); f_005574b0();
    /* 00559009: jmp 0x55912a */ goto L_0055912a;
L_0055900e:; BB(0x0055900e);
    /* 0055900e: mov eax, dword ptr [0x793428] */ r_eax = R32((u32)(0x793428u));
    /* 00559013: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 00559017: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055901a: jne 0x55902b */ if (!fZ) goto L_0055902b;
L_0055901c:; BB(0x0055901c);
    /* 0055901c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055901e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559021: call 0x5577e0 */ r_esp -= 4; W32(r_esp, 0x559026u); f_005577e0();
    /* 00559026: jmp 0x55912a */ goto L_0055912a;
L_0055902b:; BB(0x0055902b);
    /* 0055902b: mov edx, dword ptr [0x793428] */ r_edx = R32((u32)(0x793428u));
    /* 00559031: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 00559035: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559038: jne 0x559049 */ if (!fZ) goto L_00559049;
L_0055903a:; BB(0x0055903a);
    /* 0055903a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055903c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055903f: call 0x5577e0 */ r_esp -= 4; W32(r_esp, 0x559044u); f_005577e0();
    /* 00559044: jmp 0x55912a */ goto L_0055912a;
L_00559049:; BB(0x00559049);
    /* 00559049: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00559050: jmp 0x55905b */ goto L_0055905b;
L_00559052:; BB(0x00559052);
    /* 00559052: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559055: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00559058: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0055905b:; BB(0x0055905b);
    /* 0055905b: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055905f: jge 0x559095 */ if ((fS==fO)) goto L_00559095;
L_00559061:; BB(0x00559061);
    /* 00559061: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559064: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559067: movzx ecx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x18u));
    /* 0055906c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055906e: je 0x559079 */ if (fZ) goto L_00559079;
L_00559070:; BB(0x00559070);
    /* 00559070: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559073: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559076: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00559079:; BB(0x00559079);
    /* 00559079: mov eax, dword ptr [0x793428] */ r_eax = R32((u32)(0x793428u));
    /* 0055907e: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559081: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00559085: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559088: je 0x559093 */ if (fZ) goto L_00559093;
L_0055908a:; BB(0x0055908a);
    /* 0055908a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055908d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559090: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00559093:; BB(0x00559093);
    /* 00559093: jmp 0x559052 */ goto L_00559052;
L_00559095:; BB(0x00559095);
    /* 00559095: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559098: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055909b: je 0x5590a4 */ if (fZ) goto L_005590a4;
L_0055909d:; BB(0x0055909d);
    /* 0055909d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055909f: jmp 0x55912a */ goto L_0055912a;
L_005590a4:; BB(0x005590a4);
    /* 005590a4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005590ab: jmp 0x5590b6 */ goto L_005590b6;
L_005590ad:; BB(0x005590ad);
    /* 005590ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005590b0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005590b3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005590b6:; BB(0x005590b6);
    /* 005590b6: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005590ba: jge 0x559128 */ if ((fS==fO)) goto L_00559128;
L_005590bc:; BB(0x005590bc);
    /* 005590bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005590bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005590c2: movzx ecx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x18u));
    /* 005590c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005590c9: je 0x559126 */ if (fZ) goto L_00559126;
L_005590cb:; BB(0x005590cb);
    /* 005590cb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005590d2: jmp 0x5590dd */ goto L_005590dd;
L_005590d4:; BB(0x005590d4);
    /* 005590d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005590d7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005590da: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005590dd:; BB(0x005590dd);
    /* 005590dd: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005590e1: jge 0x55911c */ if ((fS==fO)) goto L_0055911c;
L_005590e3:; BB(0x005590e3);
    /* 005590e3: mov eax, dword ptr [0x793428] */ r_eax = R32((u32)(0x793428u));
    /* 005590e8: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005590eb: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005590ef: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005590f2: je 0x55911a */ if (fZ) goto L_0055911a;
L_005590f4:; BB(0x005590f4);
    /* 005590f4: mov edx, dword ptr [0x793428] */ r_edx = R32((u32)(0x793428u));
    /* 005590fa: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005590fd: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00559101: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559104: movzx edx, word ptr [ecx + eax*2 + 0x22] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x22u));
    /* 00559109: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055910c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055910f: movzx eax, word ptr [ecx + eax*2 + 0x18] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2+0x18u));
    /* 00559114: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559116: jne 0x55911a */ if (!fZ) goto L_0055911a;
L_00559118:; BB(0x00559118);
    /* 00559118: jmp 0x55911c */ goto L_0055911c;
L_0055911a:; BB(0x0055911a);
    /* 0055911a: jmp 0x5590d4 */ goto L_005590d4;
L_0055911c:; BB(0x0055911c);
    /* 0055911c: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559120: jne 0x559126 */ if (!fZ) goto L_00559126;
L_00559122:; BB(0x00559122);
    /* 00559122: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559124: jmp 0x55912a */ goto L_0055912a;
L_00559126:; BB(0x00559126);
    /* 00559126: jmp 0x5590ad */ goto L_005590ad;
L_00559128:; BB(0x00559128);
    /* 00559128: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0055912a:; BB(0x0055912a);
    /* 0055912a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055912c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055912d: ret  */ FN_RET(0x00558fa0); r_esp += 4; return;
}

