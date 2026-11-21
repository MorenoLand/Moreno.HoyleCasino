#include "protos.h"

void f_005243d0(void) /* sub_5243D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005243d0);
    /* 005243d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005243d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005243d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005243d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005243d7: push 0x7228e0 */ { u32 v = 0x7228e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005243dc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005243de: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005243e4: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5243e9u); f_0057ab80();
    /* 005243e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005243eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005243ec: ret  */ FN_RET(0x005243d0); r_esp += 4; return;
}

void f_005243f0(void) /* sub_5243F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005243f0);
    /* 005243f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005243f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005243f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005243f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005243f9: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 005243fd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524400: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 00524404: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524407: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 0052440b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052440e: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 00524412: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524415: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 00524419: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052441c: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00524420: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524423: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00524427: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052442a: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 0052442e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524431: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 00524435: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052443b: call 0x527e50 */ r_esp -= 4; W32(r_esp, 0x524440u); f_00527e50();
    /* 00524440: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524442: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00524448: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052444b: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524451: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00524454: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524456: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524459: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52445bu); call_ind(t); }
    /* 0052445b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00524462: jmp 0x52446d */ goto L_0052446d;
L_00524464:; BB(0x00524464);
    /* 00524464: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524467: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052446a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052446d:; BB(0x0052446d);
    /* 0052446d: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524471: jge 0x5244df */ if ((fS==fO)) goto L_005244df;
L_00524473:; BB(0x00524473);
    /* 00524473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524477: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52447cu); f_005dcb00();
    /* 0052447c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052447f: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524486: je 0x5244dd */ if (fZ) goto L_005244dd;
L_00524488:; BB(0x00524488);
    /* 00524488: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052448b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052448c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524491u); f_005dcb00();
    /* 00524491: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524494: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0052449a: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x52449fu); f_005f54a0();
    /* 0052449f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005244a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005244a4: je 0x5244dd */ if (fZ) goto L_005244dd;
L_005244a6:; BB(0x005244a6);
    /* 005244a6: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005244aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005244ac: je 0x5244b7 */ if (fZ) goto L_005244b7;
L_005244ae:; BB(0x005244ae);
    /* 005244ae: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005244b5: jmp 0x5244c2 */ goto L_005244c2;
L_005244b7:; BB(0x005244b7);
    /* 005244b7: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005244bc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005244bf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005244c2:; BB(0x005244c2);
    /* 005244c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005244c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005244c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005244c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005244ca: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5244cfu); f_005dcb00();
    /* 005244cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005244d2: mov ecx, eax */ r_ecx = r_eax;
    /* 005244d4: call 0x5d6980 */ r_esp -= 4; W32(r_esp, 0x5244d9u); f_005d6980();
    /* 005244d9: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_005244dd:; BB(0x005244dd);
    /* 005244dd: jmp 0x524464 */ goto L_00524464;
L_005244df:; BB(0x005244df);
    /* 005244df: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005244e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005244e5: jne 0x5244ef */ if (!fZ) goto L_005244ef;
L_005244e7:; BB(0x005244e7);
    /* 005244e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005244ea: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x5244efu); f_00524500();
L_005244ef:; BB(0x005244ef);
    /* 005244ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005244f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005244f2: ret  */ FN_RET(0x005243f0); r_esp += 4; return;
}

void f_00524500(void) /* sub_524500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00524500);
    /* 00524500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524501: mov ebp, esp */ r_ebp = r_esp;
    /* 00524503: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524506: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00524509: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 0052450f: call 0x523440 */ r_esp -= 4; W32(r_esp, 0x524514u); f_00523440();
    /* 00524514: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00524517: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524519: je 0x52453c */ if (fZ) goto L_0052453c;
L_0052451b:; BB(0x0052451b);
    /* 0052451b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052451d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052451f: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524525: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00524528: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 0052452d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00524530: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00524532: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524535: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524537u); call_ind(t); }
    /* 00524537: jmp 0x5249ec */ goto L_005249ec;
L_0052453c:; BB(0x0052453c);
    /* 0052453c: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524542: call 0x522560 */ r_esp -= 4; W32(r_esp, 0x524547u); f_00522560();
    /* 00524547: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052454d: mov edx, dword ptr [ecx + 0xdb0] */ r_edx = R32((u32)(r_ecx+0xdb0u));
    /* 00524553: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00524556: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052455a: je 0x524569 */ if (fZ) goto L_00524569;
L_0052455c:; BB(0x0052455c);
    /* 0052455c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052455f: call 0x524ec0 */ r_esp -= 4; W32(r_esp, 0x524564u); f_00524ec0();
    /* 00524564: jmp 0x5249ec */ goto L_005249ec;
L_00524569:; BB(0x00524569);
    /* 00524569: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052456c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00524570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524572: jne 0x5245c0 */ if (!fZ) goto L_005245c0;
L_00524574:; BB(0x00524574);
    /* 00524574: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524577: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0052457b: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00524580: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00524583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524586: mov dword ptr [ecx + 0xdb0], 3 */ W32((u32)(r_ecx+0xdb0u), 0x3u);
    /* 00524590: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524593: mov dword ptr [edx + 0xdb4], 4 */ W32((u32)(r_edx+0xdb4u), 0x4u);
    /* 0052459d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052459f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005245a6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005245a9: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 005245af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005245b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005245b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005245b6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005245b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5245bbu); call_ind(t); }
    /* 005245bb: jmp 0x5249ec */ goto L_005249ec;
L_005245c0:; BB(0x005245c0);
    /* 005245c0: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005245c6: call 0x528880 */ r_esp -= 4; W32(r_esp, 0x5245cbu); f_00528880();
    /* 005245cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005245ce: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005245d4: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005245d7: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 005245da: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005245de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005245e0: je 0x52465c */ if (fZ) goto L_0052465c;
L_005245e2:; BB(0x005245e2);
    /* 005245e2: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005245e6: je 0x52465c */ if (fZ) goto L_0052465c;
L_005245e8:; BB(0x005245e8);
    /* 005245e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005245eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005245ec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5245f1u); f_005dcb00();
    /* 005245f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245f4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005245f7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005245fa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5245ffu); f_0063aac0();
    /* 005245ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524601: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00524604: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524608: je 0x524626 */ if (fZ) goto L_00524626;
L_0052460a:; BB(0x0052460a);
    /* 0052460a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052460d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x524612u); f_0063aac0();
    /* 00524612: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00524614: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00524617: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052461b: je 0x524626 */ if (fZ) goto L_00524626;
L_0052461d:; BB(0x0052461d);
    /* 0052461d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00524624: jmp 0x52462d */ goto L_0052462d;
L_00524626:; BB(0x00524626);
    /* 00524626: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_0052462d:; BB(0x0052462d);
    /* 0052462d: movzx ecx, byte ptr [ebp - 0x4c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 00524631: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524633: je 0x52465c */ if (fZ) goto L_0052465c;
L_00524635:; BB(0x00524635);
    /* 00524635: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524639: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52463eu); f_005dcb00();
    /* 0052463e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524641: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00524644: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524647: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 0052464e: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524654: call 0x528880 */ r_esp -= 4; W32(r_esp, 0x524659u); f_00528880();
    /* 00524659: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052465c:; BB(0x0052465c);
    /* 0052465c: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524660: je 0x5246cb */ if (fZ) goto L_005246cb;
L_00524662:; BB(0x00524662);
    /* 00524662: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524666: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52466bu); f_005dcb00();
    /* 0052466b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052466e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00524671: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00524674: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x524679u); f_0063aac0();
    /* 00524679: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052467b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0052467e: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524682: je 0x5246a0 */ if (fZ) goto L_005246a0;
L_00524684:; BB(0x00524684);
    /* 00524684: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00524687: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52468cu); f_0063aac0();
    /* 0052468c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052468e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00524691: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524695: je 0x5246a0 */ if (fZ) goto L_005246a0;
L_00524697:; BB(0x00524697);
    /* 00524697: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0052469e: jmp 0x5246a7 */ goto L_005246a7;
L_005246a0:; BB(0x005246a0);
    /* 005246a0: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
L_005246a7:; BB(0x005246a7);
    /* 005246a7: mov cl, byte ptr [ebp - 0x50] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb0u))) & 0xffu);
    /* 005246aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005246ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005246ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005246af: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005246b5: call 0x528030 */ r_esp -= 4; W32(r_esp, 0x5246bau); f_00528030();
    /* 005246ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005246bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005246be: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005246c1: call 0x5249f0 */ r_esp -= 4; W32(r_esp, 0x5246c6u); f_005249f0();
    /* 005246c6: jmp 0x5249ec */ goto L_005249ec;
L_005246cb:; BB(0x005246cb);
    /* 005246cb: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005246d1: call 0x528a40 */ r_esp -= 4; W32(r_esp, 0x5246d6u); f_00528a40();
    /* 005246d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005246d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005246db: je 0x52478f */ if (fZ) goto L_0052478f;
L_005246e1:; BB(0x005246e1);
    /* 005246e1: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005246e7: mov byte ptr [edx + 0xdbc], 1 */ W8((u32)(r_edx+0xdbcu), 0x1u);
    /* 005246ee: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005246f4: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x5246f9u); f_005f2870();
    /* 005246f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005246fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005246fd: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524703: call 0x528030 */ r_esp -= 4; W32(r_esp, 0x524708u); f_00528030();
    /* 00524708: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052470b: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 0052470f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524711: jne 0x52475f */ if (!fZ) goto L_0052475f;
L_00524713:; BB(0x00524713);
    /* 00524713: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524716: mov byte ptr [edx + 6], 1 */ W8((u32)(r_edx+0x6u), 0x1u);
    /* 0052471a: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 0052471f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00524722: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00524725: mov dword ptr [ecx + 0xdb0], 4 */ W32((u32)(r_ecx+0xdb0u), 0x4u);
    /* 0052472f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00524732: mov dword ptr [edx + 0xdb4], 4 */ W32((u32)(r_edx+0xdb4u), 0x4u);
    /* 0052473c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052473e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524740: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00524745: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00524748: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 0052474e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524751: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00524753: mov ecx, eax */ r_ecx = r_eax;
    /* 00524755: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524758: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52475au); call_ind(t); }
    /* 0052475a: jmp 0x5249ec */ goto L_005249ec;
L_0052475f:; BB(0x0052475f);
    /* 0052475f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524762: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 00524766: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 0052476c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052476f: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524775: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00524778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052477a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052477d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52477fu); call_ind(t); }
    /* 0052477f: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524785: call 0x522910 */ r_esp -= 4; W32(r_esp, 0x52478au); f_00522910();
    /* 0052478a: jmp 0x5249ec */ goto L_005249ec;
L_0052478f:; BB(0x0052478f);
    /* 0052478f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524792: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 00524796: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524798: jne 0x5247e5 */ if (!fZ) goto L_005247e5;
L_0052479a:; BB(0x0052479a);
    /* 0052479a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052479d: mov byte ptr [eax + 7], 1 */ W8((u32)(r_eax+0x7u), 0x1u);
    /* 005247a1: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005247a7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005247aa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005247ad: mov dword ptr [edx + 0xdb0], 5 */ W32((u32)(r_edx+0xdb0u), 0x5u);
    /* 005247b7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005247ba: mov dword ptr [eax + 0xdb4], 4 */ W32((u32)(r_eax+0xdb4u), 0x4u);
    /* 005247c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005247c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005247c8: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005247ce: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005247d1: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005247d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005247d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005247db: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005247de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5247e0u); call_ind(t); }
    /* 005247e0: jmp 0x5249ec */ goto L_005249ec;
L_005247e5:; BB(0x005247e5);
    /* 005247e5: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005247eb: call 0x528a60 */ r_esp -= 4; W32(r_esp, 0x5247f0u); f_00528a60();
    /* 005247f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005247f3: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005247f7: je 0x52482a */ if (fZ) goto L_0052482a;
L_005247f9:; BB(0x005247f9);
    /* 005247f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005247fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005247fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005247ff: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524805: call 0x528030 */ r_esp -= 4; W32(r_esp, 0x52480au); f_00528030();
    /* 0052480a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052480d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052480e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524811: call 0x524c20 */ r_esp -= 4; W32(r_esp, 0x524816u); f_00524c20();
    /* 00524816: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052481a: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524820: call 0x5232a0 */ r_esp -= 4; W32(r_esp, 0x524825u); f_005232a0();
    /* 00524825: jmp 0x5249ec */ goto L_005249ec;
L_0052482a:; BB(0x0052482a);
    /* 0052482a: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524830: mov edx, dword ptr [ecx + 0xd38] */ r_edx = R32((u32)(r_ecx+0xd38u));
    /* 00524836: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00524839: cmp dword ptr [ebp - 0x38], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052483d: je 0x5248b8 */ if (fZ) goto L_005248b8;
L_0052483f:; BB(0x0052483f);
    /* 0052483f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524842: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 00524846: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524848: jne 0x524896 */ if (!fZ) goto L_00524896;
L_0052484a:; BB(0x0052484a);
    /* 0052484a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052484d: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 00524851: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00524856: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00524859: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052485c: mov dword ptr [ecx + 0xdb0], 1 */ W32((u32)(r_ecx+0xdb0u), 0x1u);
    /* 00524866: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00524869: mov dword ptr [edx + 0xdb4], 0xffffffff */ W32((u32)(r_edx+0xdb4u), 0xffffffffu);
    /* 00524873: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524875: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524877: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 0052487c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052487f: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00524885: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524888: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052488a: mov ecx, eax */ r_ecx = r_eax;
    /* 0052488c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052488f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524891u); call_ind(t); }
    /* 00524891: jmp 0x5249ec */ goto L_005249ec;
L_00524896:; BB(0x00524896);
    /* 00524896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524898: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052489a: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005248a0: call 0x528030 */ r_esp -= 4; W32(r_esp, 0x5248a5u); f_00528030();
    /* 005248a5: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005248ab: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005248ae: call 0x5236c0 */ r_esp -= 4; W32(r_esp, 0x5248b3u); f_005236c0();
    /* 005248b3: jmp 0x5249ec */ goto L_005249ec;
L_005248b8:; BB(0x005248b8);
    /* 005248b8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005248bb: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 005248bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005248c1: jne 0x52493b */ if (!fZ) goto L_0052493b;
L_005248c3:; BB(0x005248c3);
    /* 005248c3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005248c6: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 005248ca: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 005248d0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005248d3: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 005248d9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005248dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005248de: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005248e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5248e3u); call_ind(t); }
    /* 005248e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005248e9: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005248ec: mov byte ptr [ebp - 0x3d], dl */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_edx);
    /* 005248ef: movzx eax, byte ptr [ebp - 0x3d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 005248f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005248f5: jne 0x524920 */ if (!fZ) goto L_00524920;
L_005248f7:; BB(0x005248f7);
    /* 005248f7: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005248fd: call 0x527d20 */ r_esp -= 4; W32(r_esp, 0x524902u); f_00527d20();
    /* 00524902: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524905: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524907: je 0x524920 */ if (fZ) goto L_00524920;
L_00524909:; BB(0x00524909);
    /* 00524909: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0052490e: push 0xffffff4c */ { u32 v = 0xffffff4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00524913: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524919: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x52491eu); f_005db8c0();
    /* 0052491e: jmp 0x524936 */ goto L_00524936;
L_00524920:; BB(0x00524920);
    /* 00524920: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524926: call 0x5230a0 */ r_esp -= 4; W32(r_esp, 0x52492bu); f_005230a0();
    /* 0052492b: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 00524931: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x524936u); f_00524500();
L_00524936:; BB(0x00524936);
    /* 00524936: jmp 0x5249ec */ goto L_005249ec;
L_0052493b:; BB(0x0052493b);
    /* 0052493b: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524941: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x524946u); f_005da7b0();
    /* 00524946: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00524949: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052494b: je 0x5249a1 */ if (fZ) goto L_005249a1;
L_0052494d:; BB(0x0052494d);
    /* 0052494d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00524950: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 00524954: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524956: jne 0x5249a1 */ if (!fZ) goto L_005249a1;
L_00524958:; BB(0x00524958);
    /* 00524958: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052495b: mov byte ptr [edx + 0xa], 1 */ W8((u32)(r_edx+0xau), 0x1u);
    /* 0052495f: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00524964: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00524967: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052496a: mov dword ptr [ecx + 0xdb0], 2 */ W32((u32)(r_ecx+0xdb0u), 0x2u);
    /* 00524974: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00524977: mov dword ptr [edx + 0xdb4], 0xffffffff */ W32((u32)(r_edx+0xdb4u), 0xffffffffu);
    /* 00524981: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524983: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524985: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 0052498a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052498d: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00524993: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524996: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00524998: mov ecx, eax */ r_ecx = r_eax;
    /* 0052499a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052499d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52499fu); call_ind(t); }
    /* 0052499f: jmp 0x5249ec */ goto L_005249ec;
L_005249a1:; BB(0x005249a1);
    /* 005249a1: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005249a7: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5249acu); f_005da7b0();
    /* 005249ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005249af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005249b1: je 0x5249e4 */ if (fZ) goto L_005249e4;
L_005249b3:; BB(0x005249b3);
    /* 005249b3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005249b6: movzx eax, byte ptr [edx + 0xb] */ r_eax = (u32)R8((u32)(r_edx+0xbu));
    /* 005249ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005249bc: jne 0x5249e4 */ if (!fZ) goto L_005249e4;
L_005249be:; BB(0x005249be);
    /* 005249be: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005249c1: mov byte ptr [ecx + 0xb], 1 */ W8((u32)(r_ecx+0xbu), 0x1u);
    /* 005249c5: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 005249cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005249cd: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005249d3: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 005249d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5249dbu); call_ind(t); }
    /* 005249db: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005249de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005249e0: jne 0x5249e4 */ if (!fZ) goto L_005249e4;
L_005249e2:; BB(0x005249e2);
    /* 005249e2: jmp 0x5249ec */ goto L_005249ec;
L_005249e4:; BB(0x005249e4);
    /* 005249e4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005249e7: call 0x5243f0 */ r_esp -= 4; W32(r_esp, 0x5249ecu); f_005243f0();
L_005249ec:; BB(0x005249ec);
    /* 005249ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005249ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005249ef: ret  */ FN_RET(0x00524500); r_esp += 4; return;
}

void f_005249f0(void) /* sub_5249F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005249f0);
    /* 005249f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005249f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005249f3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005249f6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005249f9: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005249ff: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x524a04u); f_00528000();
    /* 00524a04: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00524a07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524a0a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x524a0fu); f_0063aac0();
    /* 00524a0f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00524a11: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00524a14: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a18: je 0x524a36 */ if (fZ) goto L_00524a36;
L_00524a1a:; BB(0x00524a1a);
    /* 00524a1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524a1d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x524a22u); f_0063aac0();
    /* 00524a22: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00524a24: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00524a27: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a2b: je 0x524a36 */ if (fZ) goto L_00524a36;
L_00524a2d:; BB(0x00524a2d);
    /* 00524a2d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00524a34: jmp 0x524a3d */ goto L_00524a3d;
L_00524a36:; BB(0x00524a36);
    /* 00524a36: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00524a3d:; BB(0x00524a3d);
    /* 00524a3d: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00524a41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a43: je 0x524b02 */ if (fZ) goto L_00524b02;
L_00524a49:; BB(0x00524a49);
    /* 00524a49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524a4d: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524a53: call 0x528090 */ r_esp -= 4; W32(r_esp, 0x524a58u); f_00528090();
    /* 00524a58: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524a5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a5d: jne 0x524ae8 */ if (!fZ) goto L_00524ae8;
L_00524a63:; BB(0x00524a63);
    /* 00524a63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524a67: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524a6cu); f_005dcb00();
    /* 00524a6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524a6f: mov ecx, eax */ r_ecx = r_eax;
    /* 00524a71: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x524a76u); f_005d5840();
    /* 00524a76: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00524a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a7b: jne 0x524ae8 */ if (!fZ) goto L_00524ae8;
L_00524a7d:; BB(0x00524a7d);
    /* 00524a7d: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524a83: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x524a88u); f_005da7b0();
    /* 00524a88: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524a8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524a8d: je 0x524acb */ if (fZ) goto L_00524acb;
L_00524a8f:; BB(0x00524a8f);
    /* 00524a8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524a92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524a93: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524a98u); f_005dcb00();
    /* 00524a98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524a9b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00524a9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00524aa1: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00524aa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524aaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524aac: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00524ab2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00524ab5: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00524aba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00524abd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00524abf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524ac2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524ac4u); call_ind(t); }
    /* 00524ac4: jmp 0x524c18 */ goto L_00524c18;
L_00524acb:; BB(0x00524acb);
    /* 00524acb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524ace: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524acf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524ad4u); f_005dcb00();
    /* 00524ad4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524ad8: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524ade: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x524ae3u); f_005dbb70();
    /* 00524ae3: jmp 0x524c18 */ goto L_00524c18;
L_00524ae8:; BB(0x00524ae8);
    /* 00524ae8: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00524aed: push 0xffffff4c */ { u32 v = 0xffffff4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00524af2: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524af8: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x524afdu); f_005db7d0();
    /* 00524afd: jmp 0x524c18 */ goto L_00524c18;
L_00524b02:; BB(0x00524b02);
    /* 00524b02: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524b05: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00524b09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524b0b: jne 0x524b32 */ if (!fZ) goto L_00524b32;
L_00524b0d:; BB(0x00524b0d);
    /* 00524b0d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524b10: mov byte ptr [ecx + 5], 1 */ W8((u32)(r_ecx+0x5u), 0x1u);
    /* 00524b14: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00524b16: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00524b1c: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x524b21u); f_00637810();
    /* 00524b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524b22: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524b28: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x524b2du); f_005da360();
    /* 00524b2d: jmp 0x524c18 */ goto L_00524c18;
L_00524b32:; BB(0x00524b32);
    /* 00524b32: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524b35: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 00524b39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524b3d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524b42u); f_005dcb00();
    /* 00524b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524b45: mov ecx, eax */ r_ecx = r_eax;
    /* 00524b47: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x524b4cu); f_005d5840();
    /* 00524b4c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524b4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524b51: je 0x524bbf */ if (fZ) goto L_00524bbf;
L_00524b53:; BB(0x00524b53);
    /* 00524b53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524b56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524b57: mov ecx, dword ptr [0x793380] */ r_ecx = R32((u32)(0x793380u));
    /* 00524b5d: call 0x520ef0 */ r_esp -= 4; W32(r_esp, 0x524b62u); f_00520ef0();
    /* 00524b62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524b65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524b66: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524b6bu); f_005dcb00();
    /* 00524b6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524b6e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00524b71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00524b74: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00524b7b: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00524b81: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00524b84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00524b87: mov dword ptr [eax + 0xdb0], 0 */ W32((u32)(r_eax+0xdb0u), 0x0u);
    /* 00524b91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00524b94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524b97: mov dword ptr [ecx + 0xdb4], edx */ W32((u32)(r_ecx+0xdb4u), r_edx);
    /* 00524b9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524b9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524ba1: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00524ba6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00524ba9: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00524baf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524bb2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00524bb4: mov ecx, eax */ r_ecx = r_eax;
    /* 00524bb6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524bb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524bbbu); call_ind(t); }
    /* 00524bbb: jmp 0x524c18 */ goto L_00524c18;
L_00524bbf:; BB(0x00524bbf);
    /* 00524bbf: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524bc5: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x524bcau); f_005da7b0();
    /* 00524bca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524bcd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524bcf: je 0x524bec */ if (fZ) goto L_00524bec;
L_00524bd1:; BB(0x00524bd1);
    /* 00524bd1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524bd5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524bdau); f_005dcb00();
    /* 00524bda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524bdd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00524be0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00524be3: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00524bea: jmp 0x524bfb */ goto L_00524bfb;
L_00524bec:; BB(0x00524bec);
    /* 00524bec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524bef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524bf0: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524bf6: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x524bfbu); f_005d9570();
L_00524bfb:; BB(0x00524bfb);
    /* 00524bfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524bfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524bff: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00524c05: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00524c08: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00524c0e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00524c11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524c13: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00524c16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524c18u); call_ind(t); }
L_00524c18:; BB(0x00524c18);
    /* 00524c18: mov esp, ebp */ r_esp = r_ebp;
    /* 00524c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524c1b: ret 4 */ FN_RET(0x005249f0); r_esp += 8; return;
}

void f_00524c20(void) /* sub_524C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00524c20);
    /* 00524c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00524c23: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524c26: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00524c29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524c2d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524c32u); f_005dcb00();
    /* 00524c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524c35: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00524c38: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524c3b: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x524c40u); f_005d52e0();
    /* 00524c40: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00524c43: mov byte ptr [ebp - 0x25], cl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_ecx);
    /* 00524c46: movsx edx, byte ptr [ebp - 0x25] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 00524c4a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00524c4d: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00524c54: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00524c58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524c5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524c5c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x524c61u); f_0064c8a0();
    /* 00524c61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524c64: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00524c67: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00524c6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00524c6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524c6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00524c71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524c72: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524c75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524c76: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524c7bu); f_005dcb00();
    /* 00524c7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524c7e: mov ecx, eax */ r_ecx = r_eax;
    /* 00524c80: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x524c85u); f_005d6050();
    /* 00524c85: mov dword ptr [ebp - 4], 0xa0 */ W32((u32)(r_ebp+0xfffffffcu), 0xa0u);
    /* 00524c8c: jmp 0x524c97 */ goto L_00524c97;
L_00524c8e:; BB(0x00524c8e);
    /* 00524c8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524c91: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00524c94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00524c97:; BB(0x00524c97);
    /* 00524c97: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524c9b: jle 0x524d82 */ if ((fZ||fS!=fO)) goto L_00524d82;
L_00524ca1:; BB(0x00524ca1);
    /* 00524ca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524ca3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524ca6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524ca7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524caa: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00524caf: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00524cb3: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x524cb8u); f_005cb7d0();
    /* 00524cb8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524cbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524cbd: je 0x524d7d */ if (fZ) goto L_00524d7d;
L_00524cc3:; BB(0x00524cc3);
    /* 00524cc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524cc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524cc7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524cccu); f_005dcb00();
    /* 00524ccc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524ccf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00524cd2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00524cd5: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x524cdau); f_005d52e0();
    /* 00524cda: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00524cdd: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 00524ce0: movsx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd3u));
    /* 00524ce4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00524ce7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00524cea: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524ced: je 0x524cfe */ if (fZ) goto L_00524cfe;
L_00524cef:; BB(0x00524cef);
    /* 00524cef: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524cf3: jne 0x524cfe */ if (!fZ) goto L_00524cfe;
L_00524cf5:; BB(0x00524cf5);
    /* 00524cf5: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00524cfc: jmp 0x524d05 */ goto L_00524d05;
L_00524cfe:; BB(0x00524cfe);
    /* 00524cfe: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00524d05:; BB(0x00524d05);
    /* 00524d05: mov al, byte ptr [ebp - 0x3c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc4u))) & 0xffu);
    /* 00524d08: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00524d0b: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00524d0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524d11: je 0x524d15 */ if (fZ) goto L_00524d15;
L_00524d13:; BB(0x00524d13);
    /* 00524d13: jmp 0x524d82 */ goto L_00524d82;
L_00524d15:; BB(0x00524d15);
    /* 00524d15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524d18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d19: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524d1f: call 0x528c20 */ r_esp -= 4; W32(r_esp, 0x524d24u); f_00528c20();
    /* 00524d24: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00524d27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524d29: je 0x524d55 */ if (fZ) goto L_00524d55;
L_00524d2b:; BB(0x00524d2b);
    /* 00524d2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524d2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524d34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d35: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524d3b: call 0x5291e0 */ r_esp -= 4; W32(r_esp, 0x524d40u); f_005291e0();
    /* 00524d40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524d44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524d47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d48: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524d4e: call 0x523070 */ r_esp -= 4; W32(r_esp, 0x524d53u); f_00523070();
    /* 00524d53: jmp 0x524d7d */ goto L_00524d7d;
L_00524d55:; BB(0x00524d55);
    /* 00524d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524d57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524d5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524d5f: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524d65: call 0x5291e0 */ r_esp -= 4; W32(r_esp, 0x524d6au); f_005291e0();
    /* 00524d6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524d6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d6e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524d71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d72: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00524d78: call 0x522f00 */ r_esp -= 4; W32(r_esp, 0x524d7du); f_00522f00();
L_00524d7d:; BB(0x00524d7d);
    /* 00524d7d: jmp 0x524c8e */ goto L_00524c8e;
L_00524d82:; BB(0x00524d82);
    /* 00524d82: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00524d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524d88: je 0x524dd5 */ if (fZ) goto L_00524dd5;
L_00524d8a:; BB(0x00524d8a);
    /* 00524d8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524d8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d8e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524d93u); f_005dcb00();
    /* 00524d93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524d96: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00524d99: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00524d9b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00524d9e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00524da0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00524da3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00524da6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x524da8u); call_ind(t); }
    /* 00524da8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524daa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524dac: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x524db1u); f_0064c8a0();
    /* 00524db1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524db4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00524db7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00524dba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00524dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524dbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524dc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524dc2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524dc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524dc6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524dcbu); f_005dcb00();
    /* 00524dcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524dce: mov ecx, eax */ r_ecx = r_eax;
    /* 00524dd0: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x524dd5u); f_005d6050();
L_00524dd5:; BB(0x00524dd5);
    /* 00524dd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524dd9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524ddeu); f_005dcb00();
    /* 00524dde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524de1: mov ecx, eax */ r_ecx = r_eax;
    /* 00524de3: call 0x5d5920 */ r_esp -= 4; W32(r_esp, 0x524de8u); f_005d5920();
    /* 00524de8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524deb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524ded: je 0x524e2d */ if (fZ) goto L_00524e2d;
L_00524def:; BB(0x00524def);
    /* 00524def: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524df2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524df3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524df8u); f_005dcb00();
    /* 00524df8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524dfb: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524e02: jge 0x524e1a */ if ((fS==fO)) goto L_00524e1a;
L_00524e04:; BB(0x00524e04);
    /* 00524e04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524e08: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e0du); f_005dcb00();
    /* 00524e0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e10: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00524e1a:; BB(0x00524e1a);
    /* 00524e1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524e1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524e1e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e23u); f_005dcb00();
    /* 00524e23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e26: mov ecx, eax */ r_ecx = r_eax;
    /* 00524e28: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x524e2du); f_005d7540();
L_00524e2d:; BB(0x00524e2d);
    /* 00524e2d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524e30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524e31: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e36u); f_005dcb00();
    /* 00524e36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e39: mov ecx, eax */ r_ecx = r_eax;
    /* 00524e3b: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x524e40u); f_005d58d0();
    /* 00524e40: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00524e43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524e45: je 0x524e93 */ if (fZ) goto L_00524e93;
L_00524e47:; BB(0x00524e47);
    /* 00524e47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524e4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524e4b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e50u); f_005dcb00();
    /* 00524e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e53: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524e5a: jle 0x524e72 */ if ((fZ||fS!=fO)) goto L_00524e72;
L_00524e5c:; BB(0x00524e5c);
    /* 00524e5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00524e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524e60: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e65u); f_005dcb00();
    /* 00524e65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e68: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00524e72:; BB(0x00524e72);
    /* 00524e72: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00524e75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524e76: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e7bu); f_005dcb00();
    /* 00524e7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e7e: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00524e83: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00524e86: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00524e89: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00524e8b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00524e8e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00524e91: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00524e93:; BB(0x00524e93);
    /* 00524e93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00524e96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524e97: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x524e9cu); f_005dcb00();
    /* 00524e9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524e9f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00524ea2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00524ea5: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 00524eac: mov esp, ebp */ r_esp = r_ebp;
    /* 00524eae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524eaf: ret 4 */ FN_RET(0x00524c20); r_esp += 8; return;
}

void f_00524ec0(void) /* sub_524EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00524ec0);
    /* 00524ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00524ec3: sub esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524ec9: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 00524ecf: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 00524ed6: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 00524edd: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 00524ee4: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 00524eeb: mov dword ptr [ebp - 0x5c], 0xffffffff */ W32((u32)(r_ebp+0xffffffa4u), 0xffffffffu);
    /* 00524ef2: fldz  */ FPUSH(0.0);
    /* 00524ef4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00524ef7: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00524efd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00524f00: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00524f05: mov ecx, dword ptr [eax + 0xd38] */ r_ecx = R32((u32)(r_eax+0xd38u));
    /* 00524f0b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00524f0e: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 00524f15: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00524f1c: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 00524f22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00524f24: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524f2a: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00524f30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x524f32u); call_ind(t); }
    /* 00524f32: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00524f35: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00524f38: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00524f3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00524f3f: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524f45: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00524f4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524f4du); call_ind(t); }
    /* 00524f4d: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00524f50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00524f53: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524f59: mov edx, dword ptr [ecx + 0xdb4] */ r_edx = R32((u32)(r_ecx+0xdb4u));
    /* 00524f5f: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00524f62: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00524f65: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00524f6b: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00524f71: mov edx, dword ptr [ecx + 0xdb0] */ r_edx = R32((u32)(r_ecx+0xdb0u));
    /* 00524f77: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 00524f7d: cmp dword ptr [ebp - 0x130], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00524f84: ja 0x525a03 */ if ((!fC&&!fZ)) goto L_00525a03;
L_00524f8a:; BB(0x00524f8a);
    /* 00524f8a: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00524f90: jmp dword ptr [eax*4 + 0x525bf8] */ { u32 t = R32((u32)(r_eax*4+0x525bf8u)); switch (t) { case 0x524f97u: goto L_00524f97; case 0x5251b5u: goto L_005251b5; case 0x5257e3u: goto L_005257e3; case 0x52592fu: goto L_0052592f; case 0x52593bu: goto L_0052593b; case 0x5259aeu: goto L_005259ae; default: UNSUP(0x00524f90, "jump table entry is not a known target"); } }
L_00524f97:; BB(0x00524f97);
    /* 00524f97: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00524f9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00524f9b: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00524fa1: call 0x525c10 */ r_esp -= 4; W32(r_esp, 0x524fa6u); f_00525c10();
    /* 00524fa6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00524fa9: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524faf: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x524fb4u); f_005da7b0();
    /* 00524fb4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00524fb7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524fb9: je 0x52512f */ if (fZ) goto L_0052512f;
L_00524fbf:; BB(0x00524fbf);
    /* 00524fbf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00524fc1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x524fc6u); f_0062fbf0();
    /* 00524fc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524fc9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524fcc: jle 0x52512f */ if ((fZ||fS!=fO)) goto L_0052512f;
L_00524fd2:; BB(0x00524fd2);
    /* 00524fd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524fd6: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524fdc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00524fde: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00524fe4: mov eax, dword ptr [edx + 0x2c8] */ r_eax = R32((u32)(r_edx+0x2c8u));
    /* 00524fea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x524fecu); call_ind(t); }
    /* 00524fec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00524fef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524ff1: je 0x525081 */ if (fZ) goto L_00525081;
L_00524ff7:; BB(0x00524ff7);
    /* 00524ff7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00524ffa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524ffb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525000u); f_005dcb00();
    /* 00525000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525003: mov ecx, eax */ r_ecx = r_eax;
    /* 00525005: call 0x5d5920 */ r_esp -= 4; W32(r_esp, 0x52500au); f_005d5920();
    /* 0052500a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052500d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052500f: je 0x525081 */ if (fZ) goto L_00525081;
L_00525011:; BB(0x00525011);
    /* 00525011: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00525017: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0052501a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052501d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052501e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525023u); f_005dcb00();
    /* 00525023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525026: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00525029: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052502c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525031u); f_0063aac0();
    /* 00525031: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525033: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00525036: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052503a: je 0x52505b */ if (fZ) goto L_0052505b;
L_0052503c:; BB(0x0052503c);
    /* 0052503c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052503f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525044u); f_0063aac0();
    /* 00525044: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00525046: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00525049: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052504d: je 0x52505b */ if (fZ) goto L_0052505b;
L_0052504f:; BB(0x0052504f);
    /* 0052504f: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 00525059: jmp 0x525065 */ goto L_00525065;
L_0052505b:; BB(0x0052505b);
    /* 0052505b: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_00525065:; BB(0x00525065);
    /* 00525065: movzx ecx, byte ptr [ebp - 0x134] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 0052506c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0052506e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00525070: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00525073: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00525079: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052507c: jmp 0x525a03 */ goto L_00525a03;
L_00525081:; BB(0x00525081);
    /* 00525081: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525085: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 0052508a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052508c: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00525092: mov eax, dword ptr [edx + 0x2cc] */ r_eax = R32((u32)(r_edx+0x2ccu));
    /* 00525098: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52509au); call_ind(t); }
    /* 0052509a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052509d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052509f: je 0x52512f */ if (fZ) goto L_0052512f;
L_005250a5:; BB(0x005250a5);
    /* 005250a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005250a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005250a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5250aeu); f_005dcb00();
    /* 005250ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005250b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005250b3: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x5250b8u); f_005d58d0();
    /* 005250b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005250bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005250bd: je 0x52512f */ if (fZ) goto L_0052512f;
L_005250bf:; BB(0x005250bf);
    /* 005250bf: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005250c5: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005250c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005250cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005250cc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5250d1u); f_005dcb00();
    /* 005250d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005250d4: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005250d7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005250da: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5250dfu); f_0063aac0();
    /* 005250df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005250e1: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005250e4: cmp dword ptr [ebp - 0x70], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005250e8: je 0x525109 */ if (fZ) goto L_00525109;
L_005250ea:; BB(0x005250ea);
    /* 005250ea: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005250ed: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5250f2u); f_0063aac0();
    /* 005250f2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005250f4: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005250f7: cmp dword ptr [ebp - 0x74], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005250fb: je 0x525109 */ if (fZ) goto L_00525109;
L_005250fd:; BB(0x005250fd);
    /* 005250fd: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 00525107: jmp 0x525113 */ goto L_00525113;
L_00525109:; BB(0x00525109);
    /* 00525109: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
L_00525113:; BB(0x00525113);
    /* 00525113: movzx ecx, byte ptr [ebp - 0x138] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec8u));
    /* 0052511a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0052511c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0052511e: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00525121: add ecx, 0x3f3 */ {  u32 a = r_ecx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00525127: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052512a: jmp 0x525a03 */ goto L_00525a03;
L_0052512f:; BB(0x0052512f);
    /* 0052512f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525133: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00525139: call 0x528240 */ r_esp -= 4; W32(r_esp, 0x52513eu); f_00528240();
    /* 0052513e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00525141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525143: je 0x5251b0 */ if (fZ) goto L_005251b0;
L_00525145:; BB(0x00525145);
    /* 00525145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525148: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525149: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52514eu); f_005dcb00();
    /* 0052514e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525151: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00525157: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0052515d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525162u); f_0063aac0();
    /* 00525162: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525164: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00525167: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052516b: je 0x52518f */ if (fZ) goto L_0052518f;
L_0052516d:; BB(0x0052516d);
    /* 0052516d: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00525173: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525178u); f_0063aac0();
    /* 00525178: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052517a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0052517d: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525181: je 0x52518f */ if (fZ) goto L_0052518f;
L_00525183:; BB(0x00525183);
    /* 00525183: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 0052518d: jmp 0x525199 */ goto L_00525199;
L_0052518f:; BB(0x0052518f);
    /* 0052518f: mov dword ptr [ebp - 0x13c], 1 */ W32((u32)(r_ebp+0xfffffec4u), 0x1u);
L_00525199:; BB(0x00525199);
    /* 00525199: movzx ecx, byte ptr [ebp - 0x13c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec4u));
    /* 005251a0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005251a2: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005251a4: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005251a7: add ecx, 0x3f7 */ {  u32 a = r_ecx; u32 b = 0x3f7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005251ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_005251b0:; BB(0x005251b0);
    /* 005251b0: jmp 0x525a03 */ goto L_00525a03;
L_005251b5:; BB(0x005251b5);
    /* 005251b5: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005251bb: call 0x528660 */ r_esp -= 4; W32(r_esp, 0x5251c0u); f_00528660();
    /* 005251c0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005251c3: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005251c9: call 0x528770 */ r_esp -= 4; W32(r_esp, 0x5251ceu); f_00528770();
    /* 005251ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005251d1: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005251d5: je 0x52542b */ if (fZ) goto L_0052542b;
L_005251db:; BB(0x005251db);
    /* 005251db: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005251de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005251df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5251e4u); f_005dcb00();
    /* 005251e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005251e7: mov eax, dword ptr [eax + 0x4cc] */ r_eax = R32((u32)(r_eax+0x4ccu));
    /* 005251ed: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005251f0: jle 0x52542b */ if ((fZ||fS!=fO)) goto L_0052542b;
L_005251f6:; BB(0x005251f6);
    /* 005251f6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005251f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005251fa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5251ffu); f_005dcb00();
    /* 005251ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525202: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 00525208: cmp edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052520b: jle 0x525212 */ if ((fZ||fS!=fO)) goto L_00525212;
L_0052520d:; BB(0x0052520d);
    /* 0052520d: fld1  */ FPUSH(1.0);
    /* 0052520f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00525212:; BB(0x00525212);
    /* 00525212: fld1  */ FPUSH(1.0);
    /* 00525214: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00525217: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00525219: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0052521c: jp 0x5253a6 */ if (fP) goto L_005253a6;
L_00525222:; BB(0x00525222);
    /* 00525222: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00525225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525226: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52522bu); f_005dcb00();
    /* 0052522b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052522e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00525234: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0052523a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52523fu); f_0063aac0();
    /* 0052523f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00525241: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00525247: cmp dword ptr [ebp - 0x88], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052524e: je 0x525278 */ if (fZ) goto L_00525278;
L_00525250:; BB(0x00525250);
    /* 00525250: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00525256: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52525bu); f_0063aac0();
    /* 0052525b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052525d: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00525263: cmp dword ptr [ebp - 0x8c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052526a: je 0x525278 */ if (fZ) goto L_00525278;
L_0052526c:; BB(0x0052526c);
    /* 0052526c: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 00525276: jmp 0x525282 */ goto L_00525282;
L_00525278:; BB(0x00525278);
    /* 00525278: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
L_00525282:; BB(0x00525282);
    /* 00525282: movzx eax, byte ptr [ebp - 0x140] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffec0u));
    /* 00525289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052528b: je 0x525299 */ if (fZ) goto L_00525299;
L_0052528d:; BB(0x0052528d);
    /* 0052528d: mov dword ptr [ebp - 0x144], 0xffffffff */ W32((u32)(r_ebp+0xfffffebcu), 0xffffffffu);
    /* 00525297: jmp 0x5252a2 */ goto L_005252a2;
L_00525299:; BB(0x00525299);
    /* 00525299: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052529c: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
L_005252a2:; BB(0x005252a2);
    /* 005252a2: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005252a8: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005252ab: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005252ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005252af: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5252b4u); f_005dcb00();
    /* 005252b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005252b7: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005252bd: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005252c3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5252c8u); f_0063aac0();
    /* 005252c8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005252ca: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005252d0: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005252d7: je 0x525301 */ if (fZ) goto L_00525301;
L_005252d9:; BB(0x005252d9);
    /* 005252d9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005252df: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5252e4u); f_0063aac0();
    /* 005252e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005252e6: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 005252ec: cmp dword ptr [ebp - 0x98], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005252f3: je 0x525301 */ if (fZ) goto L_00525301;
L_005252f5:; BB(0x005252f5);
    /* 005252f5: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 005252ff: jmp 0x52530b */ goto L_0052530b;
L_00525301:; BB(0x00525301);
    /* 00525301: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
L_0052530b:; BB(0x0052530b);
    /* 0052530b: movzx eax, byte ptr [ebp - 0x148] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeb8u));
    /* 00525312: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00525314: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00525316: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00525319: add eax, 0x403 */ {  u32 a = r_eax; u32 b = 0x403u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052531e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00525321: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00525324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525325: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52532au); f_005dcb00();
    /* 0052532a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052532d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00525333: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00525339: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52533eu); f_0063aac0();
    /* 0052533e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525340: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00525346: cmp dword ptr [ebp - 0xa0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052534d: je 0x525377 */ if (fZ) goto L_00525377;
L_0052534f:; BB(0x0052534f);
    /* 0052534f: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00525355: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52535au); f_0063aac0();
    /* 0052535a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052535c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00525362: cmp dword ptr [ebp - 0xa4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525369: je 0x525377 */ if (fZ) goto L_00525377;
L_0052536b:; BB(0x0052536b);
    /* 0052536b: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 00525375: jmp 0x525381 */ goto L_00525381;
L_00525377:; BB(0x00525377);
    /* 00525377: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
L_00525381:; BB(0x00525381);
    /* 00525381: movzx ecx, byte ptr [ebp - 0x14c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeb4u));
    /* 00525388: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0052538a: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0052538c: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0052538f: add ecx, 0x3f4 */ {  u32 a = r_ecx; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00525395: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00525398: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 0052539e: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005253a1: jmp 0x525426 */ goto L_00525426;
L_005253a6:; BB(0x005253a6);
    /* 005253a6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005253a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005253aa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5253afu); f_005dcb00();
    /* 005253af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005253b2: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005253b8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005253be: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5253c3u); f_0063aac0();
    /* 005253c3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005253c5: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005253cb: cmp dword ptr [ebp - 0xac], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005253d2: je 0x5253fc */ if (fZ) goto L_005253fc;
L_005253d4:; BB(0x005253d4);
    /* 005253d4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005253da: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5253dfu); f_0063aac0();
    /* 005253df: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005253e1: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005253e7: cmp dword ptr [ebp - 0xb0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005253ee: je 0x5253fc */ if (fZ) goto L_005253fc;
L_005253f0:; BB(0x005253f0);
    /* 005253f0: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 005253fa: jmp 0x525406 */ goto L_00525406;
L_005253fc:; BB(0x005253fc);
    /* 005253fc: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
L_00525406:; BB(0x00525406);
    /* 00525406: movzx edx, byte ptr [ebp - 0x150] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb0u));
    /* 0052540d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0052540f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00525411: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00525414: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052541a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0052541d: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00525423: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00525426:; BB(0x00525426);
    /* 00525426: jmp 0x525a03 */ goto L_00525a03;
L_0052542b:; BB(0x0052542b);
    /* 0052542b: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052542f: je 0x525689 */ if (fZ) goto L_00525689;
L_00525435:; BB(0x00525435);
    /* 00525435: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525439: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52543eu); f_005dcb00();
    /* 0052543e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525441: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00525444: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00525446: cmp dword ptr [eax + 0x4cc], ecx */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052544c: jge 0x525689 */ if ((fS==fO)) goto L_00525689;
L_00525452:; BB(0x00525452);
    /* 00525452: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525456: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52545bu); f_005dcb00();
    /* 0052545b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052545e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00525461: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00525463: cmp dword ptr [eax + 0x4cc], ecx */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525469: jge 0x525470 */ if ((fS==fO)) goto L_00525470;
L_0052546b:; BB(0x0052546b);
    /* 0052546b: fld1  */ FPUSH(1.0);
    /* 0052546d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00525470:; BB(0x00525470);
    /* 00525470: fld1  */ FPUSH(1.0);
    /* 00525472: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00525475: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00525477: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0052547a: jp 0x525604 */ if (fP) goto L_00525604;
L_00525480:; BB(0x00525480);
    /* 00525480: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525483: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525484: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525489u); f_005dcb00();
    /* 00525489: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052548c: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00525492: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00525498: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52549du); f_0063aac0();
    /* 0052549d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052549f: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005254a5: cmp dword ptr [ebp - 0xb8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005254ac: je 0x5254d6 */ if (fZ) goto L_005254d6;
L_005254ae:; BB(0x005254ae);
    /* 005254ae: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005254b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5254b9u); f_0063aac0();
    /* 005254b9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005254bb: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005254c1: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005254c8: je 0x5254d6 */ if (fZ) goto L_005254d6;
L_005254ca:; BB(0x005254ca);
    /* 005254ca: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 005254d4: jmp 0x5254e0 */ goto L_005254e0;
L_005254d6:; BB(0x005254d6);
    /* 005254d6: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
L_005254e0:; BB(0x005254e0);
    /* 005254e0: movzx edx, byte ptr [ebp - 0x154] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeacu));
    /* 005254e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005254e9: je 0x5254f7 */ if (fZ) goto L_005254f7;
L_005254eb:; BB(0x005254eb);
    /* 005254eb: mov dword ptr [ebp - 0x158], 0xffffffff */ W32((u32)(r_ebp+0xfffffea8u), 0xffffffffu);
    /* 005254f5: jmp 0x525500 */ goto L_00525500;
L_005254f7:; BB(0x005254f7);
    /* 005254f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005254fa: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
L_00525500:; BB(0x00525500);
    /* 00525500: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00525506: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00525509: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052550c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052550d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525512u); f_005dcb00();
    /* 00525512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525515: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0052551b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00525521: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525526u); f_0063aac0();
    /* 00525526: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00525528: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0052552e: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525535: je 0x52555f */ if (fZ) goto L_0052555f;
L_00525537:; BB(0x00525537);
    /* 00525537: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0052553d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525542u); f_0063aac0();
    /* 00525542: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00525544: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 0052554a: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525551: je 0x52555f */ if (fZ) goto L_0052555f;
L_00525553:; BB(0x00525553);
    /* 00525553: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 0052555d: jmp 0x525569 */ goto L_00525569;
L_0052555f:; BB(0x0052555f);
    /* 0052555f: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
L_00525569:; BB(0x00525569);
    /* 00525569: movzx edx, byte ptr [ebp - 0x15c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffea4u));
    /* 00525570: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00525572: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00525574: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00525577: add edx, 0x401 */ {  u32 a = r_edx; u32 b = 0x401u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052557d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00525580: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525584: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525589u); f_005dcb00();
    /* 00525589: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052558c: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00525592: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00525598: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52559du); f_0063aac0();
    /* 0052559d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0052559f: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 005255a5: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005255ac: je 0x5255d6 */ if (fZ) goto L_005255d6;
L_005255ae:; BB(0x005255ae);
    /* 005255ae: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005255b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5255b9u); f_0063aac0();
    /* 005255b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005255bb: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 005255c1: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005255c8: je 0x5255d6 */ if (fZ) goto L_005255d6;
L_005255ca:; BB(0x005255ca);
    /* 005255ca: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 005255d4: jmp 0x5255e0 */ goto L_005255e0;
L_005255d6:; BB(0x005255d6);
    /* 005255d6: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
L_005255e0:; BB(0x005255e0);
    /* 005255e0: movzx eax, byte ptr [ebp - 0x160] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffea0u));
    /* 005255e7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005255e9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005255eb: and eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005255ee: add eax, 0x3f6 */ {  u32 a = r_eax; u32 b = 0x3f6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005255f3: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005255f6: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005255fc: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005255ff: jmp 0x525684 */ goto L_00525684;
L_00525604:; BB(0x00525604);
    /* 00525604: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525607: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525608: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52560du); f_005dcb00();
    /* 0052560d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525610: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00525616: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0052561c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525621u); f_0063aac0();
    /* 00525621: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525623: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00525629: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525630: je 0x52565a */ if (fZ) goto L_0052565a;
L_00525632:; BB(0x00525632);
    /* 00525632: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00525638: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52563du); f_0063aac0();
    /* 0052563d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052563f: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00525645: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052564c: je 0x52565a */ if (fZ) goto L_0052565a;
L_0052564e:; BB(0x0052564e);
    /* 0052564e: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 00525658: jmp 0x525664 */ goto L_00525664;
L_0052565a:; BB(0x0052565a);
    /* 0052565a: mov dword ptr [ebp - 0x164], 1 */ W32((u32)(r_ebp+0xfffffe9cu), 0x1u);
L_00525664:; BB(0x00525664);
    /* 00525664: movzx ecx, byte ptr [ebp - 0x164] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe9cu));
    /* 0052566b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0052566d: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0052566f: and ecx, 0xffffffe6 */ {  u32 a = r_ecx; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00525672: add ecx, 0x402 */ {  u32 a = r_ecx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00525678: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052567b: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00525681: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00525684:; BB(0x00525684);
    /* 00525684: jmp 0x525a03 */ goto L_00525a03;
L_00525689:; BB(0x00525689);
    /* 00525689: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052568d: je 0x525730 */ if (fZ) goto L_00525730;
L_00525693:; BB(0x00525693);
    /* 00525693: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00525696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525697: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52569cu); f_005dcb00();
    /* 0052569c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052569f: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005256a6: jle 0x525730 */ if ((fZ||fS!=fO)) goto L_00525730;
L_005256ac:; BB(0x005256ac);
    /* 005256ac: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005256af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005256b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5256b5u); f_005dcb00();
    /* 005256b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005256b8: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005256be: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005256c4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5256c9u); f_0063aac0();
    /* 005256c9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005256cb: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005256d1: cmp dword ptr [ebp - 0xe8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005256d8: je 0x525702 */ if (fZ) goto L_00525702;
L_005256da:; BB(0x005256da);
    /* 005256da: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005256e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5256e5u); f_0063aac0();
    /* 005256e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005256e7: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005256ed: cmp dword ptr [ebp - 0xec], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005256f4: je 0x525702 */ if (fZ) goto L_00525702;
L_005256f6:; BB(0x005256f6);
    /* 005256f6: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 00525700: jmp 0x52570c */ goto L_0052570c;
L_00525702:; BB(0x00525702);
    /* 00525702: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
L_0052570c:; BB(0x0052570c);
    /* 0052570c: movzx eax, byte ptr [ebp - 0x168] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe98u));
    /* 00525713: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00525715: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00525717: and eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052571a: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052571f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00525722: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00525728: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0052572b: jmp 0x525a03 */ goto L_00525a03;
L_00525730:; BB(0x00525730);
    /* 00525730: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525734: je 0x5257de */ if (fZ) goto L_005257de;
L_0052573a:; BB(0x0052573a);
    /* 0052573a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052573d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052573e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525743u); f_005dcb00();
    /* 00525743: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525746: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052574d: jge 0x5257de */ if ((fS==fO)) goto L_005257de;
L_00525753:; BB(0x00525753);
    /* 00525753: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525757: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52575cu); f_005dcb00();
    /* 0052575c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052575f: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00525765: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052576b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525770u); f_0063aac0();
    /* 00525770: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00525772: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00525778: cmp dword ptr [ebp - 0xf4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052577f: je 0x5257a9 */ if (fZ) goto L_005257a9;
L_00525781:; BB(0x00525781);
    /* 00525781: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00525787: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52578cu); f_0063aac0();
    /* 0052578c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0052578e: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 00525794: cmp dword ptr [ebp - 0xf8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052579b: je 0x5257a9 */ if (fZ) goto L_005257a9;
L_0052579d:; BB(0x0052579d);
    /* 0052579d: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 005257a7: jmp 0x5257b3 */ goto L_005257b3;
L_005257a9:; BB(0x005257a9);
    /* 005257a9: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
L_005257b3:; BB(0x005257b3);
    /* 005257b3: movzx edx, byte ptr [ebp - 0x16c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe94u));
    /* 005257ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005257bc: jne 0x5257de */ if (!fZ) goto L_005257de;
L_005257be:; BB(0x005257be);
    /* 005257be: mov dword ptr [ebp - 0x24], 0x3ff */ W32((u32)(r_ebp+0xffffffdcu), 0x3ffu);
    /* 005257c5: mov dword ptr [ebp - 0x5c], 0x3f1 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f1u);
    /* 005257cc: fld qword ptr [0x6be6f8] */ FPUSH(R_F64((u32)(0x6be6f8u)));
    /* 005257d2: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005257d5: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005257db: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005257de:; BB(0x005257de);
    /* 005257de: jmp 0x525a03 */ goto L_00525a03;
L_005257e3:; BB(0x005257e3);
    /* 005257e3: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005257e9: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x5257eeu); f_005db190();
    /* 005257ee: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005257f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005257f3: je 0x52592a */ if (fZ) goto L_0052592a;
L_005257f9:; BB(0x005257f9);
    /* 005257f9: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005257ff: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x525804u); f_005dac90();
    /* 00525804: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525807: je 0x52592a */ if (fZ) goto L_0052592a;
L_0052580d:; BB(0x0052580d);
    /* 0052580d: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00525813: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x525818u); f_005dac90();
    /* 00525818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525819: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52581eu); f_005dcb00();
    /* 0052581e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525821: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00525827: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0052582d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525832u); f_0063aac0();
    /* 00525832: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00525834: mov dword ptr [ebp - 0x100], ecx */ W32((u32)(r_ebp+0xffffff00u), r_ecx);
    /* 0052583a: cmp dword ptr [ebp - 0x100], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525841: je 0x52586b */ if (fZ) goto L_0052586b;
L_00525843:; BB(0x00525843);
    /* 00525843: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00525849: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52584eu); f_0063aac0();
    /* 0052584e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525850: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 00525856: cmp dword ptr [ebp - 0x104], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052585d: je 0x52586b */ if (fZ) goto L_0052586b;
L_0052585f:; BB(0x0052585f);
    /* 0052585f: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 00525869: jmp 0x525875 */ goto L_00525875;
L_0052586b:; BB(0x0052586b);
    /* 0052586b: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
L_00525875:; BB(0x00525875);
    /* 00525875: movzx eax, byte ptr [ebp - 0x170] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe90u));
    /* 0052587c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052587e: je 0x52588c */ if (fZ) goto L_0052588c;
L_00525880:; BB(0x00525880);
    /* 00525880: mov dword ptr [ebp - 0x174], 0xffffffff */ W32((u32)(r_ebp+0xfffffe8cu), 0xffffffffu);
    /* 0052588a: jmp 0x52589d */ goto L_0052589d;
L_0052588c:; BB(0x0052588c);
    /* 0052588c: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00525892: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x525897u); f_005dac90();
    /* 00525897: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
L_0052589d:; BB(0x0052589d);
    /* 0052589d: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 005258a3: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005258a6: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005258ac: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5258b1u); f_005dac90();
    /* 005258b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005258b2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5258b7u); f_005dcb00();
    /* 005258b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005258ba: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005258c0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005258c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5258cbu); f_0063aac0();
    /* 005258cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005258cd: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 005258d3: cmp dword ptr [ebp - 0x10c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005258da: je 0x525904 */ if (fZ) goto L_00525904;
L_005258dc:; BB(0x005258dc);
    /* 005258dc: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005258e2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5258e7u); f_0063aac0();
    /* 005258e7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005258e9: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005258ef: cmp dword ptr [ebp - 0x110], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005258f6: je 0x525904 */ if (fZ) goto L_00525904;
L_005258f8:; BB(0x005258f8);
    /* 005258f8: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 00525902: jmp 0x52590e */ goto L_0052590e;
L_00525904:; BB(0x00525904);
    /* 00525904: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
L_0052590e:; BB(0x0052590e);
    /* 0052590e: movzx ecx, byte ptr [ebp - 0x178] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe88u));
    /* 00525915: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00525917: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00525919: and ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0052591c: add ecx, 0x3fd */ {  u32 a = r_ecx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00525922: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00525925: fld1  */ FPUSH(1.0);
    /* 00525927: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0052592a:; BB(0x0052592a);
    /* 0052592a: jmp 0x525a03 */ goto L_00525a03;
L_0052592f:; BB(0x0052592f);
    /* 0052592f: mov dword ptr [ebp - 0x28], 0xc3b4 */ W32((u32)(r_ebp+0xffffffd8u), 0xc3b4u);
    /* 00525936: jmp 0x525a03 */ goto L_00525a03;
L_0052593b:; BB(0x0052593b);
    /* 0052593b: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00525941: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 00525947: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052594d: mov dword ptr [eax + 0xdb0], 0xffffffff */ W32((u32)(r_eax+0xdb0u), 0xffffffffu);
    /* 00525957: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052595d: mov dword ptr [ecx + 0xdb4], 0xffffffff */ W32((u32)(r_ecx+0xdb4u), 0xffffffffu);
    /* 00525967: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052596d: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x525972u); f_00637630();
    /* 00525972: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00525975: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525977: je 0x52599b */ if (fZ) goto L_0052599b;
L_00525979:; BB(0x00525979);
    /* 00525979: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 00525980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525982: jne 0x52599b */ if (!fZ) goto L_0052599b;
L_00525984:; BB(0x00525984);
    /* 00525984: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525988: push 0xc3cd */ { u32 v = 0xc3cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0052598d: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00525993: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00525996: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x52599bu); f_005cd7c0();
L_0052599b:; BB(0x0052599b);
    /* 0052599b: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 005259a1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005259a4: call 0x523590 */ r_esp -= 4; W32(r_esp, 0x5259a9u); f_00523590();
    /* 005259a9: jmp 0x525bf2 */ goto L_00525bf2;
L_005259ae:; BB(0x005259ae);
    /* 005259ae: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 005259b3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005259b6: mov byte ptr [ecx + 0x190], 1 */ W8((u32)(r_ecx+0x190u), 0x1u);
    /* 005259bd: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005259c3: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x5259c8u); f_00528bd0();
    /* 005259c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005259ca: jne 0x5259d5 */ if (!fZ) goto L_005259d5;
L_005259cc:; BB(0x005259cc);
    /* 005259cc: mov dword ptr [ebp - 0x28], 0xc398 */ W32((u32)(r_ebp+0xffffffd8u), 0xc398u);
    /* 005259d3: jmp 0x525a03 */ goto L_00525a03;
L_005259d5:; BB(0x005259d5);
    /* 005259d5: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005259db: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x5259e0u); f_00528bd0();
    /* 005259e0: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005259e3: jne 0x5259ee */ if (!fZ) goto L_005259ee;
L_005259e5:; BB(0x005259e5);
    /* 005259e5: mov dword ptr [ebp - 0x28], 0xc399 */ W32((u32)(r_ebp+0xffffffd8u), 0xc399u);
    /* 005259ec: jmp 0x525a03 */ goto L_00525a03;
L_005259ee:; BB(0x005259ee);
    /* 005259ee: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005259f4: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x5259f9u); f_00528bd0();
    /* 005259f9: lea edx, [eax + eax + 0xc34e] */ r_edx = (u32)(r_eax+r_eax+0xc34eu);
    /* 00525a00: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00525a03:; BB(0x00525a03);
    /* 00525a03: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00525a08: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00525a0e: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00525a14: mov dword ptr [ecx + 0xdb0], 0xffffffff */ W32((u32)(r_ecx+0xdb0u), 0xffffffffu);
    /* 00525a1e: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00525a24: mov dword ptr [edx + 0xdb4], 0xffffffff */ W32((u32)(r_edx+0xdb4u), 0xffffffffu);
    /* 00525a2e: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a32: jne 0x525abb */ if (!fZ) goto L_00525abb;
L_00525a38:; BB(0x00525a38);
    /* 00525a38: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a3c: jne 0x525a6f */ if (!fZ) goto L_00525a6f;
L_00525a3e:; BB(0x00525a3e);
    /* 00525a3e: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00525a43: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00525a46: mov byte ptr [ecx + 0x190], 0 */ W8((u32)(r_ecx+0x190u), 0x0u);
    /* 00525a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525a4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525a51: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00525a57: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00525a5a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00525a60: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00525a63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525a65: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00525a68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525a6au); call_ind(t); }
    /* 00525a6a: jmp 0x525bf2 */ goto L_00525bf2;
L_00525a6f:; BB(0x00525a6f);
    /* 00525a6f: cmp dword ptr [ebp - 0x58], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525a73: jne 0x525a95 */ if (!fZ) goto L_00525a95;
L_00525a75:; BB(0x00525a75);
    /* 00525a75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525a77: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00525a7d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00525a80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525a81: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00525a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525a85: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 00525a8b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00525a8e: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x525a93u); f_005cd7c0();
    /* 00525a93: jmp 0x525ab6 */ goto L_00525ab6;
L_00525a95:; BB(0x00525a95);
    /* 00525a95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525a97: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00525a9d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00525aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525aa1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00525aa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525aa5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00525aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525aa9: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00525aae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00525ab1: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x525ab6u); f_005cd700();
L_00525ab6:; BB(0x00525ab6);
    /* 00525ab6: jmp 0x525bf2 */ goto L_00525bf2;
L_00525abb:; BB(0x00525abb);
    /* 00525abb: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525abf: je 0x525b49 */ if (fZ) goto L_00525b49;
L_00525ac5:; BB(0x00525ac5);
    /* 00525ac5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00525acb: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x525ad0u); f_00636730();
    /* 00525ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525ad2: je 0x525b49 */ if (fZ) goto L_00525b49;
L_00525ad4:; BB(0x00525ad4);
    /* 00525ad4: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525ad8: jle 0x525b6b */ if ((fZ||fS!=fO)) goto L_00525b6b;
L_00525ade:; BB(0x00525ade);
    /* 00525ade: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00525ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525ae2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525ae7u); f_005dcb00();
    /* 00525ae7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525aea: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00525af0: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00525af6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525afbu); f_0063aac0();
    /* 00525afb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525afd: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 00525b03: cmp dword ptr [ebp - 0x120], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525b0a: je 0x525b34 */ if (fZ) goto L_00525b34;
L_00525b0c:; BB(0x00525b0c);
    /* 00525b0c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00525b12: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525b17u); f_0063aac0();
    /* 00525b17: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00525b19: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00525b1f: cmp dword ptr [ebp - 0x124], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525b26: je 0x525b34 */ if (fZ) goto L_00525b34;
L_00525b28:; BB(0x00525b28);
    /* 00525b28: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 00525b32: jmp 0x525b3e */ goto L_00525b3e;
L_00525b34:; BB(0x00525b34);
    /* 00525b34: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
L_00525b3e:; BB(0x00525b3e);
    /* 00525b3e: movzx ecx, byte ptr [ebp - 0x17c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe84u));
    /* 00525b45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525b47: je 0x525b6b */ if (fZ) goto L_00525b6b;
L_00525b49:; BB(0x00525b49);
    /* 00525b49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525b4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525b4d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00525b53: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00525b56: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00525b5c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00525b5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525b61: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00525b64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525b66u); call_ind(t); }
    /* 00525b66: jmp 0x525bf2 */ goto L_00525bf2;
L_00525b6b:; BB(0x00525b6b);
    /* 00525b6b: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525b6f: je 0x525b7c */ if (fZ) goto L_00525b7c;
L_00525b71:; BB(0x00525b71);
    /* 00525b71: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00525b74: mov dword ptr [ebp - 0x180], ecx */ W32((u32)(r_ebp+0xfffffe80u), r_ecx);
    /* 00525b7a: jmp 0x525b8d */ goto L_00525b8d;
L_00525b7c:; BB(0x00525b7c);
    /* 00525b7c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00525b82: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x525b87u); f_00636c50();
    /* 00525b87: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
L_00525b8d:; BB(0x00525b8d);
    /* 00525b8d: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 00525b93: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00525b96: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00525b99: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00525b9c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00525b9f: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00525ba2: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00525ba5: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00525ba8: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00525bab: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00525bae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525bb0: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00525bb6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00525bb9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00525bbf: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00525bc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525bc4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00525bc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x525bc9u); call_ind(t); }
    /* 00525bc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00525bcb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00525bcd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00525bd3: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x525bd8u); f_00637810();
    /* 00525bd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525bd9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00525bdf: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00525be2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00525be3: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00525be6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00525be7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00525bed: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x525bf2u); f_00639390();
L_00525bf2:; BB(0x00525bf2);
    /* 00525bf2: mov esp, ebp */ r_esp = r_ebp;
    /* 00525bf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525bf5: ret  */ FN_RET(0x00524ec0); r_esp += 4; return;
}

