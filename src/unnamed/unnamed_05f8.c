#include "protos.h"

void f_005f83d0(void) /* sub_5F83D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f83d0);
    /* 005f83d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f83d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f83d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f83d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f83d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f83da: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 005f83e0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f83e3: jne 0x5f83f3 */ if (!fZ) goto L_005f83f3;
L_005f83e5:; BB(0x005f83e5);
    /* 005f83e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f83e8: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 005f83ee: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f83f1: je 0x5f8413 */ if (fZ) goto L_005f8413;
L_005f83f3:; BB(0x005f83f3);
    /* 005f83f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f83f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f83f9: mov dword ptr [ecx + 0x114], edx */ W32((u32)(r_ecx+0x114u), r_edx);
    /* 005f83ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8402: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f8405: mov dword ptr [eax + 0x118], ecx */ W32((u32)(r_eax+0x118u), r_ecx);
    /* 005f840b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f840e: call 0x5f95e0 */ r_esp -= 4; W32(r_esp, 0x5f8413u); f_005f95e0();
L_005f8413:; BB(0x005f8413);
    /* 005f8413: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8416: ret 8 */ FN_RET(0x005f83d0); r_esp += 12; return;
}

void f_005f8420(void) /* sub_5F8420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8420);
    /* 005f8420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8421: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8423: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8426: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f8429: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f842c: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f8431u); f_005f88f0();
    /* 005f8431: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f8434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8436: jne 0x5f8440 */ if (!fZ) goto L_005f8440;
L_005f8438:; BB(0x005f8438);
    /* 005f8438: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f843b: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f8440u); f_005f9a80();
L_005f8440:; BB(0x005f8440);
    /* 005f8440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8443: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8446: mov eax, dword ptr [ecx + 0x110] */ r_eax = R32((u32)(r_ecx+0x110u));
    /* 005f844c: sub eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8452: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f8455: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8458: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f845b: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 005f8461: sub eax, dword ptr [edx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8467: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f846a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f846d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8470: mov dword ptr [ecx + 0x108], edx */ W32((u32)(r_ecx+0x108u), r_edx);
    /* 005f8476: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8479: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f847c: mov dword ptr [eax + 0x104], ecx */ W32((u32)(r_eax+0x104u), r_ecx);
    /* 005f8482: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8485: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 005f848b: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f848e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8491: mov dword ptr [ecx + 0x110], eax */ W32((u32)(r_ecx+0x110u), r_eax);
    /* 005f8497: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f849a: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 005f84a0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f84a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f84a6: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 005f84ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f84af: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f84b4u); f_005f88f0();
    /* 005f84b4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f84b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f84b9: jne 0x5f84c3 */ if (!fZ) goto L_005f84c3;
L_005f84bb:; BB(0x005f84bb);
    /* 005f84bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f84be: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f84c3u); f_005f9a80();
L_005f84c3:; BB(0x005f84c3);
    /* 005f84c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f84c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f84c6: ret 8 */ FN_RET(0x005f8420); r_esp += 12; return;
}

void f_005f84f0(void) /* sub_5F84F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f84f0);
    /* 005f84f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f84f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f84f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f84f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f84f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f84fa: mov eax, dword ptr [eax + 0x104] */ r_eax = R32((u32)(r_eax+0x104u));
    /* 005f8500: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8502: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8503: ret  */ FN_RET(0x005f84f0); r_esp += 4; return;
}

void f_005f8510(void) /* sub_5F8510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8510);
    /* 005f8510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8511: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8517: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f851a: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 005f8520: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8523: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8526: mov dword ptr [edx + 0x110], ecx */ W32((u32)(r_edx+0x110u), r_ecx);
    /* 005f852c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f852f: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 005f8535: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8538: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f853b: mov dword ptr [edx + 0x10c], ecx */ W32((u32)(r_edx+0x10cu), r_ecx);
    /* 005f8541: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8544: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f8549u); f_005f9a80();
    /* 005f8549: mov esp, ebp */ r_esp = r_ebp;
    /* 005f854b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f854c: ret 8 */ FN_RET(0x005f8510); r_esp += 12; return;
}

void f_005f8550(void) /* sub_5F8550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8550);
    /* 005f8550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8551: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f855a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f855d: mov eax, dword ptr [eax + 0x110] */ r_eax = R32((u32)(r_eax+0x110u));
    /* 005f8563: sub eax, dword ptr [ecx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8569: mov esp, ebp */ r_esp = r_ebp;
    /* 005f856b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f856c: ret  */ FN_RET(0x005f8550); r_esp += 4; return;
}

void f_005f8570(void) /* sub_5F8570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8570);
    /* 005f8570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8571: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f857a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f857d: mov eax, dword ptr [eax + 0x10c] */ r_eax = R32((u32)(r_eax+0x10cu));
    /* 005f8583: sub eax, dword ptr [ecx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8589: mov esp, ebp */ r_esp = r_ebp;
    /* 005f858b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f858c: ret  */ FN_RET(0x005f8570); r_esp += 4; return;
}

void f_005f8590(void) /* sub_5F8590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8590);
    /* 005f8590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8591: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f859a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f859d: mov eax, dword ptr [eax + 0x198] */ r_eax = R32((u32)(r_eax+0x198u));
    /* 005f85a3: sub eax, dword ptr [ecx + 0x190] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x190u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f85a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f85ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f85ac: ret  */ FN_RET(0x005f8590); r_esp += 4; return;
}

void f_005f85b0(void) /* sub_5F85B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f85b0);
    /* 005f85b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f85b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f85b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f85b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f85b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f85ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f85bd: mov eax, dword ptr [eax + 0x19c] */ r_eax = R32((u32)(r_eax+0x19cu));
    /* 005f85c3: sub eax, dword ptr [ecx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x194u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f85c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f85cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f85cc: ret  */ FN_RET(0x005f85b0); r_esp += 4; return;
}

void f_005f85d0(void) /* sub_5F85D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f85d0);
    /* 005f85d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f85d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f85d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f85d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f85d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f85dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f85df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f85e2: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f85e8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f85eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f85ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f85f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f85f3: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005f85f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f85f8u); call_ind(t); }
    /* 005f85f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f85fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f85fd: jne 0x5f861e */ if (!fZ) goto L_005f861e;
L_005f85ff:; BB(0x005f85ff);
    /* 005f85ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8602: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f8605: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8608: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f860e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f8611: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8614: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f8616: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8619: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f861c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f861eu); call_ind(t); }
L_005f861e:; BB(0x005f861e);
    /* 005f861e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8622: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8628: call 0x5f3f70 */ r_esp -= 4; W32(r_esp, 0x5f862du); f_005f3f70();
    /* 005f862d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8630: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8631: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8637: call 0x5f3ee0 */ r_esp -= 4; W32(r_esp, 0x5f863cu); f_005f3ee0();
    /* 005f863c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f863f: call 0x5f8970 */ r_esp -= 4; W32(r_esp, 0x5f8644u); f_005f8970();
    /* 005f8644: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f8647: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8649: je 0x5f8689 */ if (fZ) goto L_005f8689;
L_005f864b:; BB(0x005f864b);
    /* 005f864b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f864e: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f8653u); f_005f88f0();
    /* 005f8653: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f8656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8658: je 0x5f8689 */ if (fZ) goto L_005f8689;
L_005f865a:; BB(0x005f865a);
    /* 005f865a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f865d: cmp dword ptr [ecx + 0x170], 0 */ {  u32 a = R32((u32)(r_ecx+0x170u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8664: jne 0x5f867a */ if (!fZ) goto L_005f867a;
L_005f8666:; BB(0x005f8666);
    /* 005f8666: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f866c: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f8671u); f_005f3fe0();
    /* 005f8671: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8674: mov dword ptr [edx + 0x170], eax */ W32((u32)(r_edx+0x170u), r_eax);
L_005f867a:; BB(0x005f867a);
    /* 005f867a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f867d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f867e: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8684: call 0x5f3f90 */ r_esp -= 4; W32(r_esp, 0x5f8689u); f_005f3f90();
L_005f8689:; BB(0x005f8689);
    /* 005f8689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f868c: mov byte ptr [ecx + 0x138], 1 */ W8((u32)(r_ecx+0x138u), 0x1u);
    /* 005f8693: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8696: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f869bu); f_005f9a80();
    /* 005f869b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f869d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f869e: ret  */ FN_RET(0x005f85d0); r_esp += 4; return;
}

void f_005f8720(void) /* sub_5F8720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8720);
    /* 005f8720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8721: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8723: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8726: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f8729: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8730: jmp 0x5f873b */ goto L_005f873b;
L_005f8732:; BB(0x005f8732);
    /* 005f8732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8735: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8738: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f873b:; BB(0x005f873b);
    /* 005f873b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f873e: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8741: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f8746u); f_0060c9a0();
    /* 005f8746: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8749: jge 0x5f879d */ if ((fS==fO)) goto L_005f879d;
L_005f874b:; BB(0x005f874b);
    /* 005f874b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f874e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f874f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8752: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8755: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f875au); f_0060ca40();
    /* 005f875a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f875d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8760: call 0x602810 */ r_esp -= 4; W32(r_esp, 0x5f8765u); f_00602810();
    /* 005f8765: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8768: jne 0x5f877c */ if (!fZ) goto L_005f877c;
L_005f876a:; BB(0x005f876a);
    /* 005f876a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f876c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f876f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f8771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8774: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 005f877a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f877cu); call_ind(t); }
L_005f877c:; BB(0x005f877c);
    /* 005f877c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f877f: call 0x602810 */ r_esp -= 4; W32(r_esp, 0x5f8784u); f_00602810();
    /* 005f8784: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8787: jne 0x5f879b */ if (!fZ) goto L_005f879b;
L_005f8789:; BB(0x005f8789);
    /* 005f8789: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f878b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f878e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f8790: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8793: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005f8799: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f879bu); call_ind(t); }
L_005f879b:; BB(0x005f879b);
    /* 005f879b: jmp 0x5f8732 */ goto L_005f8732;
L_005f879d:; BB(0x005f879d);
    /* 005f879d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f87a0: cmp dword ptr [ecx + 0x1a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f87a7: je 0x5f87cb */ if (fZ) goto L_005f87cb;
L_005f87a9:; BB(0x005f87a9);
    /* 005f87a9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f87ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f87ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f87b1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005f87b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f87b6u); call_ind(t); }
    /* 005f87b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f87b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f87bb: je 0x5f87cb */ if (fZ) goto L_005f87cb;
L_005f87bd:; BB(0x005f87bd);
    /* 005f87bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f87c0: mov ecx, dword ptr [ecx + 0x1a4] */ r_ecx = R32((u32)(r_ecx+0x1a4u));
    /* 005f87c6: call 0x5f8720 */ r_esp -= 4; W32(r_esp, 0x5f87cbu); f_005f8720();
L_005f87cb:; BB(0x005f87cb);
    /* 005f87cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f87cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f87ce: ret  */ FN_RET(0x005f8720); r_esp += 4; return;
}

void f_005f88f0(void) /* sub_5F88F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f88f0);
    /* 005f88f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f88f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f88f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f88f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f88f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88fa: movzx eax, byte ptr [eax + 0x138] */ r_eax = (u32)R8((u32)(r_eax+0x138u));
    /* 005f8901: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005f8903: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005f8905: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8908: mov esp, ebp */ r_esp = r_ebp;
    /* 005f890a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f890b: ret  */ FN_RET(0x005f88f0); r_esp += 4; return;
}

void f_005f8910(void) /* sub_5F8910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8910);
    /* 005f8910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8911: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8917: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f891a: mov al, byte ptr [eax + 0x138] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x138u))) & 0xffu);
    /* 005f8920: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8923: ret  */ FN_RET(0x005f8910); r_esp += 4; return;
}

void f_005f8970(void) /* sub_5F8970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8970);
    /* 005f8970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8971: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8977: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f897a: mov al, byte ptr [eax + 0x11c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x11cu))) & 0xffu);
    /* 005f8980: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8983: ret  */ FN_RET(0x005f8970); r_esp += 4; return;
}

void f_005f8990(void) /* sub_5F8990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8990);
    /* 005f8990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8991: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f899a: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x5f899fu); f_005f87d0();
    /* 005f899f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f89a2: mov byte ptr [eax + 0x1a0], 1 */ W8((u32)(r_eax+0x1a0u), 0x1u);
    /* 005f89a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f89ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f89ac: ret  */ FN_RET(0x005f8990); r_esp += 4; return;
}

void f_005f89b0(void) /* sub_5F89B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f89b0);
    /* 005f89b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f89b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f89b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f89b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f89b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f89ba: mov al, byte ptr [eax + 0x1a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1a0u))) & 0xffu);
    /* 005f89c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f89c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f89c3: ret  */ FN_RET(0x005f89b0); r_esp += 4; return;
}

void f_005f89f0(void) /* sub_5F89F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f89f0);
    /* 005f89f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f89f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f89f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f89f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f89f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f89fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f89fd: mov dword ptr [eax + 0x16c], ecx */ W32((u32)(r_eax+0x16cu), r_ecx);
    /* 005f8a03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8a06: cmp dword ptr [edx + 0x16c], 0 */ {  u32 a = R32((u32)(r_edx+0x16cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8a0d: je 0x5f8a20 */ if (fZ) goto L_005f8a20;
L_005f8a0f:; BB(0x005f8a0f);
    /* 005f8a0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a13: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8a19: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f8a1eu); f_005f41c0();
    /* 005f8a1e: jmp 0x5f8a2d */ goto L_005f8a2d;
L_005f8a20:; BB(0x005f8a20);
    /* 005f8a20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a22: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8a28: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f8a2du); f_005f41c0();
L_005f8a2d:; BB(0x005f8a2d);
    /* 005f8a2d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8a2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8a30: ret 4 */ FN_RET(0x005f89f0); r_esp += 8; return;
}

void f_005f8a40(void) /* sub_5F8A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8a40);
    /* 005f8a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8a43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8a46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f8a49: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f8a4c: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 005f8a4f: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f8a52: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 005f8a55: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f8a58: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005f8a5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a5c: mov eax, esp */ r_eax = r_esp;
    /* 005f8a5e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005f8a62: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005f8a65: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005f8a68: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005f8a6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8a6e: call 0x5f8a80 */ r_esp -= 4; W32(r_esp, 0x5f8a73u); f_005f8a80();
    /* 005f8a73: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8a75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8a76: ret 0xc */ FN_RET(0x005f8a40); r_esp += 16; return;
}

void f_005f8a80(void) /* sub_5F8A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8a80);
    /* 005f8a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8a81: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8a83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8a86: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f8a89: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8a8c: mov byte ptr [eax + 0x178], 1 */ W8((u32)(r_eax+0x178u), 0x1u);
    /* 005f8a93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8a96: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f8a99: mov byte ptr [ecx + 0x174], dl */ W8((u32)(r_ecx+0x174u), (u8)r_edx);
    /* 005f8a9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8aa2: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005f8aa5: mov byte ptr [eax + 0x175], cl */ W8((u32)(r_eax+0x175u), (u8)r_ecx);
    /* 005f8aab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8aae: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005f8ab1: mov byte ptr [edx + 0x176], al */ W8((u32)(r_edx+0x176u), (u8)r_eax);
    /* 005f8ab7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8aba: mov byte ptr [ecx + 0x177], 0xff */ W8((u32)(r_ecx+0x177u), 0xffu);
    /* 005f8ac1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8ac4: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005f8aca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f8acd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8ad0: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 005f8ad6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f8ad9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8adc: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 005f8ae2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f8ae5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8ae8: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 005f8aee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f8af1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f8af4: add ecx, 0x180 */ {  u32 a = r_ecx; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8afa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8afd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8b00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8b03: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005f8b05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8b08: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f8b0b: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005f8b0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8b11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f8b14: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f8b17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8b1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f8b1d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005f8b20: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8b22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8b23: ret 4 */ FN_RET(0x005f8a80); r_esp += 8; return;
}

void f_005f8ba0(void) /* sub_5F8BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8ba0);
    /* 005f8ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8ba3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8ba6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ba7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f8baa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8bad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8bae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8bb1: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8bb7: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f8bbcu); f_0060c9e0();
    /* 005f8bbc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8bbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8bc1: jne 0x5f8cd1 */ if (!fZ) goto L_005f8cd1;
L_005f8bc7:; BB(0x005f8bc7);
    /* 005f8bc7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8bca: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8bd0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f8bd5u); f_0060c9a0();
    /* 005f8bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8bd7: jne 0x5f8bf0 */ if (!fZ) goto L_005f8bf0;
L_005f8bd9:; BB(0x005f8bd9);
    /* 005f8bd9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8bdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8bdd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8be0: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8be6: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f8bebu); f_0060c840();
    /* 005f8beb: jmp 0x5f8cd1 */ goto L_005f8cd1;
L_005f8bf0:; BB(0x005f8bf0);
    /* 005f8bf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f8bf3: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5f8bf8u); f_005f53c0();
    /* 005f8bf8: mov esi, eax */ r_esi = r_eax;
    /* 005f8bfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8bfd: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c03: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f8c08u); f_0060c9a0();
    /* 005f8c08: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8c0f: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c15: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f8c1au); f_0060ca40();
    /* 005f8c1a: mov ecx, eax */ r_ecx = r_eax;
    /* 005f8c1c: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5f8c21u); f_005f53c0();
    /* 005f8c21: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8c23: jg 0x5f8c3c */ if ((!fZ&&fS==fO)) goto L_005f8c3c;
L_005f8c25:; BB(0x005f8c25);
    /* 005f8c25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8c2c: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c32: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f8c37u); f_0060c840();
    /* 005f8c37: jmp 0x5f8cd1 */ goto L_005f8cd1;
L_005f8c3c:; BB(0x005f8c3c);
    /* 005f8c3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8c43: jmp 0x5f8c4e */ goto L_005f8c4e;
L_005f8c45:; BB(0x005f8c45);
    /* 005f8c45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8c48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c4b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f8c4e:; BB(0x005f8c4e);
    /* 005f8c4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8c51: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c57: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f8c5cu); f_0060c9a0();
    /* 005f8c5c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8c5f: jge 0x5f8cd1 */ if ((fS==fO)) goto L_005f8cd1;
L_005f8c61:; BB(0x005f8c61);
    /* 005f8c61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f8c64: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5f8c69u); f_005f53c0();
    /* 005f8c69: mov esi, eax */ r_esi = r_eax;
    /* 005f8c6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8c6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8c72: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c78: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f8c7du); f_0060ca40();
    /* 005f8c7d: mov ecx, eax */ r_ecx = r_eax;
    /* 005f8c7f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5f8c84u); f_005f53c0();
    /* 005f8c84: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8c86: jle 0x5f8ccc */ if ((fZ||fS!=fO)) goto L_005f8ccc;
L_005f8c88:; BB(0x005f8c88);
    /* 005f8c88: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8c8c: jle 0x5f8cb8 */ if ((fZ||fS!=fO)) goto L_005f8cb8;
L_005f8c8e:; BB(0x005f8c8e);
    /* 005f8c8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8c95: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8c98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8c99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8c9c: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8ca2: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f8ca7u); f_0060ca40();
    /* 005f8ca7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ca8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8cab: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8cb1: call 0x60cb20 */ r_esp -= 4; W32(r_esp, 0x5f8cb6u); f_0060cb20();
    /* 005f8cb6: jmp 0x5f8cca */ goto L_005f8cca;
L_005f8cb8:; BB(0x005f8cb8);
    /* 005f8cb8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8cbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8cbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8cbf: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8cc5: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5f8ccau); f_0060c7d0();
L_005f8cca:; BB(0x005f8cca);
    /* 005f8cca: jmp 0x5f8cd1 */ goto L_005f8cd1;
L_005f8ccc:; BB(0x005f8ccc);
    /* 005f8ccc: jmp 0x5f8c45 */ goto L_005f8c45;
L_005f8cd1:; BB(0x005f8cd1);
    /* 005f8cd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f8cd2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8cd5: ret 4 */ FN_RET(0x005f8ba0); r_esp += 8; return;
}

void f_005f8ce0(void) /* sub_5F8CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8ce0);
    /* 005f8ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8ce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f8ce9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ced: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8cf0: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8cf6: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f8cfbu); f_0060c9e0();
    /* 005f8cfb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8cfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d00: je 0x5f8d5f */ if (fZ) goto L_005f8d5f;
L_005f8d02:; BB(0x005f8d02);
    /* 005f8d02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8d05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8d09: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8d0f: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f8d14u); f_0060c890();
    /* 005f8d14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8d1b: jmp 0x5f8d26 */ goto L_005f8d26;
L_005f8d1d:; BB(0x005f8d1d);
    /* 005f8d1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8d20: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8d23: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f8d26:; BB(0x005f8d26);
    /* 005f8d26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8d29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8d2c: cmp edx, dword ptr [ecx + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8d32: jge 0x5f8d5f */ if ((fS==fO)) goto L_005f8d5f;
L_005f8d34:; BB(0x005f8d34);
    /* 005f8d34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8d37: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 005f8d3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8d40: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005f8d43: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8d46: jne 0x5f8d5d */ if (!fZ) goto L_005f8d5d;
L_005f8d48:; BB(0x005f8d48);
    /* 005f8d48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f8d4b: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 005f8d51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8d54: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005f8d5b: jmp 0x5f8d5f */ goto L_005f8d5f;
L_005f8d5d:; BB(0x005f8d5d);
    /* 005f8d5d: jmp 0x5f8d1d */ goto L_005f8d1d;
L_005f8d5f:; BB(0x005f8d5f);
    /* 005f8d5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8d61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8d62: ret 4 */ FN_RET(0x005f8ce0); r_esp += 8; return;
}

void f_005f8d90(void) /* sub_5F8D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8d90);
    /* 005f8d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d91: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8d9a: add eax, 0x13c */ {  u32 a = r_eax; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8d9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8da1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8da2: ret  */ FN_RET(0x005f8d90); r_esp += 4; return;
}

void f_005f8dd0(void) /* sub_5F8DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8dd0);
    /* 005f8dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8dd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ddb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8dde: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8de4: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f8de9u); f_0060c9e0();
    /* 005f8de9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8dec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8dee: je 0x5f8e0e */ if (fZ) goto L_005f8e0e;
L_005f8df0:; BB(0x005f8df0);
    /* 005f8df0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8df3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8df4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8df7: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8dfd: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f8e02u); f_0060c890();
    /* 005f8e02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8e05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8e09: call 0x5f8ba0 */ r_esp -= 4; W32(r_esp, 0x5f8e0eu); f_005f8ba0();
L_005f8e0e:; BB(0x005f8e0e);
    /* 005f8e0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8e11: ret 4 */ FN_RET(0x005f8dd0); r_esp += 8; return;
}

void f_005f8e20(void) /* sub_5F8E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8e20);
    /* 005f8e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e21: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8e27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8e2e: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8e34: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f8e39u); f_0060c9e0();
    /* 005f8e39: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8e3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8e3e: jne 0x5f8e52 */ if (!fZ) goto L_005f8e52;
L_005f8e40:; BB(0x005f8e40);
    /* 005f8e40: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8e43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8e47: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8e4d: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5f8e52u); f_0060c7d0();
L_005f8e52:; BB(0x005f8e52);
    /* 005f8e52: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8e55: ret 4 */ FN_RET(0x005f8e20); r_esp += 8; return;
}

void f_005f8e60(void) /* sub_5F8E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8e60);
    /* 005f8e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f8e67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8e6e: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8e74: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f8e79u); f_0060c9e0();
    /* 005f8e79: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8e7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8e7e: je 0x5f8e92 */ if (fZ) goto L_005f8e92;
L_005f8e80:; BB(0x005f8e80);
    /* 005f8e80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8e83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8e84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8e87: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8e8d: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f8e92u); f_0060c890();
L_005f8e92:; BB(0x005f8e92);
    /* 005f8e92: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8e94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8e95: ret 4 */ FN_RET(0x005f8e60); r_esp += 8; return;
}

