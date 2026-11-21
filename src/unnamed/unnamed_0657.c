#include "protos.h"

void f_006571b0(void) /* sub_6571B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006571b0);
    /* 006571b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006571b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006571b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006571b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006571b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006571ba: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x6571bfu); f_005f85d0();
    /* 006571bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006571c2: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 006571c8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006571cb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006571ce: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x6571d3u); f_00664630();
    /* 006571d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006571d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006571d6: ret  */ FN_RET(0x006571b0); r_esp += 4; return;
}

void f_00657430(void) /* sub_657430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657430);
    /* 00657430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657431: mov ebp, esp */ r_ebp = r_esp;
    /* 00657433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00657437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065743a: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657440: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657443: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00657449: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065744b: mov ecx, eax */ r_ecx = r_eax;
    /* 0065744d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00657450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657452u); call_ind(t); }
    /* 00657452: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657458: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065745b: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 00657461: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x657466u); f_00675b40();
    /* 00657466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657467: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657469: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065746c: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00657472: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x657477u); f_00664730();
    /* 00657477: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065747b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065747d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657480: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 00657486: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65748bu); f_00675b40();
    /* 0065748b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065748c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065748e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657493: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 00657499: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65749eu); f_00675b40();
    /* 0065749e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065749f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006574a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574a4: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 006574aa: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x6574afu); f_00664730();
    /* 006574af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006574b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006574b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006574b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574b8: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 006574be: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x6574c3u); f_00675b40();
    /* 006574c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006574c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006574c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574c9: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 006574cf: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x6574d4u); f_00664730();
    /* 006574d4: push 0x403 */ { u32 v = 0x403u; r_esp -= 4; W32(r_esp, v); }
    /* 006574d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574dc: mov ecx, dword ptr [edx + 0x424] */ r_ecx = R32((u32)(r_edx+0x424u));
    /* 006574e2: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x6574e7u); f_006065d0();
    /* 006574e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006574e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574ec: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x6574f1u); f_00657500();
    /* 006574f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006574f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006574f6: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x6574fbu); f_006595e0();
    /* 006574fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006574fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006574fe: ret  */ FN_RET(0x00657430); r_esp += 4; return;
}

void f_00657500(void) /* sub_657500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657500);
    /* 00657500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657501: mov ebp, esp */ r_ebp = r_esp;
    /* 00657503: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657506: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00657509: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065750c: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 00657512: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x657517u); f_006067e0();
    /* 00657517: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065751a: mov edx, dword ptr [ecx*4 + 0x77089c] */ r_edx = R32((u32)(r_ecx*4+0x77089cu));
    /* 00657521: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657522: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657525: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065752b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065752e: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 00657534: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065753a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65753cu); call_ind(t); }
    /* 0065753c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065753f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00657542: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00657546: ja 0x6575f8 */ if ((!fC&&!fZ)) goto L_006575f8;
L_0065754c:; BB(0x0065754c);
    /* 0065754c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065754f: movzx eax, byte ptr [edx + 0x65779c] */ r_eax = (u32)R8((u32)(r_edx+0x65779cu));
    /* 00657556: jmp dword ptr [eax*4 + 0x65778c] */ { u32 t = R32((u32)(r_eax*4+0x65778cu)); switch (t) { case 0x65755du: goto L_0065755d; case 0x65756eu: goto L_0065756e; case 0x6575b4u: goto L_006575b4; case 0x6575f8u: goto L_006575f8; default: UNSUP(0x00657556, "jump table entry is not a known target"); } }
L_0065755d:; BB(0x0065755d);
    /* 0065755d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657560: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00657563: mov dword ptr [ecx + 0x278], edx */ W32((u32)(r_ecx+0x278u), r_edx);
    /* 00657569: jmp 0x6575f8 */ goto L_006575f8;
L_0065756e:; BB(0x0065756e);
    /* 0065756e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657570: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657573: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657579: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65757eu); f_006651e0();
    /* 0065757e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657580: jne 0x6575a5 */ if (!fZ) goto L_006575a5;
L_00657582:; BB(0x00657582);
    /* 00657582: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657584: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657587: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0065758d: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657592u); f_006651e0();
    /* 00657592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657594: je 0x6575a5 */ if (fZ) goto L_006575a5;
L_00657596:; BB(0x00657596);
    /* 00657596: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657599: mov dword ptr [edx + 0x278], 4 */ W32((u32)(r_edx+0x278u), 0x4u);
    /* 006575a3: jmp 0x6575b2 */ goto L_006575b2;
L_006575a5:; BB(0x006575a5);
    /* 006575a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575a8: mov dword ptr [eax + 0x278], 3 */ W32((u32)(r_eax+0x278u), 0x3u);
L_006575b2:; BB(0x006575b2);
    /* 006575b2: jmp 0x6575f8 */ goto L_006575f8;
L_006575b4:; BB(0x006575b4);
    /* 006575b4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006575b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575b9: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 006575bf: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6575c4u); f_006651e0();
    /* 006575c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575c6: jne 0x6575eb */ if (!fZ) goto L_006575eb;
L_006575c8:; BB(0x006575c8);
    /* 006575c8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006575ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575cd: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 006575d3: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6575d8u); f_006651e0();
    /* 006575d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575da: je 0x6575eb */ if (fZ) goto L_006575eb;
L_006575dc:; BB(0x006575dc);
    /* 006575dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575df: mov dword ptr [eax + 0x278], 9 */ W32((u32)(r_eax+0x278u), 0x9u);
    /* 006575e9: jmp 0x6575f8 */ goto L_006575f8;
L_006575eb:; BB(0x006575eb);
    /* 006575eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575ee: mov dword ptr [ecx + 0x278], 8 */ W32((u32)(r_ecx+0x278u), 0x8u);
L_006575f8:; BB(0x006575f8);
    /* 006575f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006575fb: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x657600u); f_00657820();
    /* 00657600: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00657603: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657605: je 0x657649 */ if (fZ) goto L_00657649;
L_00657607:; BB(0x00657607);
    /* 00657607: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065760a: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 00657610: call 0x606660 */ r_esp -= 4; W32(r_esp, 0x657615u); f_00606660();
    /* 00657615: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657618: mov edx, dword ptr [ecx + 0x604] */ r_edx = R32((u32)(r_ecx+0x604u));
    /* 0065761e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657621: mov ecx, dword ptr [eax + 0x604] */ r_ecx = R32((u32)(r_eax+0x604u));
    /* 00657627: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657629: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065762c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65762eu); call_ind(t); }
    /* 0065762e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657631: mov edx, dword ptr [ecx + 0x600] */ r_edx = R32((u32)(r_ecx+0x600u));
    /* 00657637: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065763a: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 00657640: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657642: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00657645: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657647u); call_ind(t); }
    /* 00657647: jmp 0x657689 */ goto L_00657689;
L_00657649:; BB(0x00657649);
    /* 00657649: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065764c: mov ecx, dword ptr [ecx + 0x5fc] */ r_ecx = R32((u32)(r_ecx+0x5fcu));
    /* 00657652: call 0x606720 */ r_esp -= 4; W32(r_esp, 0x657657u); f_00606720();
    /* 00657657: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065765a: mov eax, dword ptr [edx + 0x604] */ r_eax = R32((u32)(r_edx+0x604u));
    /* 00657660: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657663: mov ecx, dword ptr [ecx + 0x604] */ r_ecx = R32((u32)(r_ecx+0x604u));
    /* 00657669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065766b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065766e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657670u); call_ind(t); }
    /* 00657670: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657673: mov edx, dword ptr [ecx + 0x600] */ r_edx = R32((u32)(r_ecx+0x600u));
    /* 00657679: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065767c: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 00657682: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657684: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00657687: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657689u); call_ind(t); }
L_00657689:; BB(0x00657689);
    /* 00657689: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065768b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065768e: call 0x6577b0 */ r_esp -= 4; W32(r_esp, 0x657693u); f_006577b0();
    /* 00657693: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657696: mov dword ptr [ecx + 0x27c], eax */ W32((u32)(r_ecx+0x27cu), r_eax);
    /* 0065769c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065769f: call 0x657b10 */ r_esp -= 4; W32(r_esp, 0x6576a4u); f_00657b10();
    /* 006576a4: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 006576a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006576ac: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6576b1u); f_005fb300();
    /* 006576b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006576b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006576b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006576b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006576bc: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 006576c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6576c4u); call_ind(t); }
    /* 006576c4: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 006576c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006576cc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6576d1u); f_005fb300();
    /* 006576d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006576d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006576d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006576d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006576dc: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006576e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6576e4u); call_ind(t); }
    /* 006576e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006576e7: cmp dword ptr [ecx + 0x278], 0 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006576ee: je 0x6576fc */ if (fZ) goto L_006576fc;
L_006576f0:; BB(0x006576f0);
    /* 006576f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006576f3: cmp dword ptr [edx + 0x278], 2 */ {  u32 a = R32((u32)(r_edx+0x278u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006576fa: jne 0x65771c */ if (!fZ) goto L_0065771c;
L_006576fc:; BB(0x006576fc);
    /* 006576fc: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657701: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657704: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x657709u); f_005fb300();
    /* 00657709: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065770c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065770f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657711: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00657714: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065771a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65771cu); call_ind(t); }
L_0065771c:; BB(0x0065771c);
    /* 0065771c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065771f: cmp dword ptr [ecx + 0x278], 0 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657726: je 0x657734 */ if (fZ) goto L_00657734;
L_00657728:; BB(0x00657728);
    /* 00657728: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065772b: cmp dword ptr [edx + 0x278], 1 */ {  u32 a = R32((u32)(r_edx+0x278u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657732: jne 0x657754 */ if (!fZ) goto L_00657754;
L_00657734:; BB(0x00657734);
    /* 00657734: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 00657739: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065773c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x657741u); f_005fb300();
    /* 00657741: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00657744: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657747: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657749: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065774c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00657752: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657754u); call_ind(t); }
L_00657754:; BB(0x00657754);
    /* 00657754: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657757: mov eax, dword ptr [ecx + 0x27c] */ r_eax = R32((u32)(r_ecx+0x27cu));
    /* 0065775d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065775e: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657763: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657763, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657763, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00657765: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00657768: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065776b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065776f: jge 0x657778 */ if ((fS==fO)) goto L_00657778;
L_00657771:; BB(0x00657771);
    /* 00657771: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00657778:; BB(0x00657778);
    /* 00657778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065777a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065777d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065777e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657781: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x657786u); f_00657e60();
    /* 00657786: mov esp, ebp */ r_esp = r_ebp;
    /* 00657788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657789: ret 4 */ FN_RET(0x00657500); r_esp += 8; return;
}

void f_006577b0(void) /* sub_6577B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006577b0);
    /* 006577b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006577b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006577b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006577b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006577b7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006577bb: jne 0x6577c9 */ if (!fZ) goto L_006577c9;
L_006577bd:; BB(0x006577bd);
    /* 006577bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006577c0: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 006577c6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_006577c9:; BB(0x006577c9);
    /* 006577c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006577cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006577cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006577d0: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006577d6: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6577dbu); f_006651e0();
    /* 006577db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006577dd: jne 0x6577e4 */ if (!fZ) goto L_006577e4;
L_006577df:; BB(0x006577df);
    /* 006577df: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006577e2: jmp 0x65781a */ goto L_0065781a;
L_006577e4:; BB(0x006577e4);
    /* 006577e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006577e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006577e9: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 006577ef: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6577f4u); f_006651e0();
    /* 006577f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006577f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006577f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006577f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006577fc: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657802: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657807u); f_006651e0();
    /* 00657807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657808: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065780b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065780c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065780f: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 00657815: call 0x675f70 */ r_esp -= 4; W32(r_esp, 0x65781au); f_00675f70();
L_0065781a:; BB(0x0065781a);
    /* 0065781a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065781c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065781d: ret 4 */ FN_RET(0x006577b0); r_esp += 8; return;
}

void f_00657820(void) /* sub_657820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657820);
    /* 00657820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657821: mov ebp, esp */ r_ebp = r_esp;
    /* 00657823: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657826: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00657829: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065782b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065782e: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657833u); f_00657890();
    /* 00657833: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657838: jne 0x657876 */ if (!fZ) goto L_00657876;
L_0065783a:; BB(0x0065783a);
    /* 0065783a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065783c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065783f: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657844u); f_00657890();
    /* 00657844: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00657847: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657849: jne 0x657876 */ if (!fZ) goto L_00657876;
L_0065784b:; BB(0x0065784b);
    /* 0065784b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065784d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657850: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657855u); f_00657890();
    /* 00657855: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00657858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065785a: jne 0x657876 */ if (!fZ) goto L_00657876;
L_0065785c:; BB(0x0065785c);
    /* 0065785c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065785e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657861: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657866u); f_00657890();
    /* 00657866: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065786b: jne 0x657876 */ if (!fZ) goto L_00657876;
L_0065786d:; BB(0x0065786d);
    /* 0065786d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00657874: jmp 0x65787d */ goto L_0065787d;
L_00657876:; BB(0x00657876);
    /* 00657876: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0065787d:; BB(0x0065787d);
    /* 0065787d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00657880: mov esp, ebp */ r_esp = r_ebp;
    /* 00657882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657883: ret  */ FN_RET(0x00657820); r_esp += 4; return;
}

void f_00657890(void) /* sub_657890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657890);
    /* 00657890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657891: mov ebp, esp */ r_ebp = r_esp;
    /* 00657893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00657897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065789a: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 006578a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006578a2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006578a5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006578a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006578aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006578ab: ret 4 */ FN_RET(0x00657890); r_esp += 8; return;
}

void f_006578b0(void) /* sub_6578B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006578b0);
    /* 006578b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006578b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006578b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006578b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006578b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006578bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006578be: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6578c3u); f_00657890();
    /* 006578c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006578c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006578c8: jne 0x6578db */ if (!fZ) goto L_006578db;
L_006578ca:; BB(0x006578ca);
    /* 006578ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006578cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006578cf: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6578d4u); f_00657890();
    /* 006578d4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006578d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006578d9: je 0x6578e2 */ if (fZ) goto L_006578e2;
L_006578db:; BB(0x006578db);
    /* 006578db: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006578dd: jmp 0x657afe */ goto L_00657afe;
L_006578e2:; BB(0x006578e2);
    /* 006578e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006578e5: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x6578eau); f_00657820();
    /* 006578ea: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006578ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006578ef: je 0x657ae0 */ if (fZ) goto L_00657ae0;
L_006578f5:; BB(0x006578f5);
    /* 006578f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006578f8: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 006578fe: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x657903u); f_00606570();
    /* 00657903: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00657906: cmp dword ptr [ebp - 8], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065790d: je 0x65792e */ if (fZ) goto L_0065792e;
L_0065790f:; BB(0x0065790f);
    /* 0065790f: cmp dword ptr [ebp - 8], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657916: je 0x6579b3 */ if (fZ) goto L_006579b3;
L_0065791c:; BB(0x0065791c);
    /* 0065791c: cmp dword ptr [ebp - 8], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657923: je 0x657a38 */ if (fZ) goto L_00657a38;
L_00657929:; BB(0x00657929);
    /* 00657929: jmp 0x657adc */ goto L_00657adc;
L_0065792e:; BB(0x0065792e);
    /* 0065792e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657930: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657933: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657938u); f_00657890();
    /* 00657938: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065793b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065793d: jne 0x657950 */ if (!fZ) goto L_00657950;
L_0065793f:; BB(0x0065793f);
    /* 0065793f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657941: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657944: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657949u); f_00657890();
    /* 00657949: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065794c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065794e: je 0x65796d */ if (fZ) goto L_0065796d;
L_00657950:; BB(0x00657950);
    /* 00657950: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657952: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657955: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065795b: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657960u); f_006651e0();
    /* 00657960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657962: je 0x65796d */ if (fZ) goto L_0065796d;
L_00657964:; BB(0x00657964);
    /* 00657964: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00657966: jmp 0x657afe */ goto L_00657afe;
L_0065796d:; BB(0x0065796d);
    /* 0065796d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065796f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657972: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657977u); f_00657890();
    /* 00657977: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065797a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065797c: jne 0x65798f */ if (!fZ) goto L_0065798f;
L_0065797e:; BB(0x0065797e);
    /* 0065797e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657980: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657983: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657988u); f_00657890();
    /* 00657988: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065798b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065798d: je 0x6579ac */ if (fZ) goto L_006579ac;
L_0065798f:; BB(0x0065798f);
    /* 0065798f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657991: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657994: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065799a: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65799fu); f_006651e0();
    /* 0065799f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006579a1: je 0x6579ac */ if (fZ) goto L_006579ac;
L_006579a3:; BB(0x006579a3);
    /* 006579a3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006579a5: jmp 0x657afe */ goto L_00657afe;
L_006579ac:; BB(0x006579ac);
    /* 006579ac: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006579ae: jmp 0x657afe */ goto L_00657afe;
L_006579b3:; BB(0x006579b3);
    /* 006579b3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006579b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006579b8: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6579bdu); f_00657890();
    /* 006579bd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006579c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006579c2: jne 0x6579d5 */ if (!fZ) goto L_006579d5;
L_006579c4:; BB(0x006579c4);
    /* 006579c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006579c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006579c9: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6579ceu); f_00657890();
    /* 006579ce: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006579d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006579d3: je 0x6579f2 */ if (fZ) goto L_006579f2;
L_006579d5:; BB(0x006579d5);
    /* 006579d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006579d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006579da: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006579e0: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6579e5u); f_006651e0();
    /* 006579e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006579e7: je 0x6579f2 */ if (fZ) goto L_006579f2;
L_006579e9:; BB(0x006579e9);
    /* 006579e9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006579eb: jmp 0x657afe */ goto L_00657afe;
L_006579f2:; BB(0x006579f2);
    /* 006579f2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006579f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006579f7: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6579fcu); f_00657890();
    /* 006579fc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006579ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a01: jne 0x657a14 */ if (!fZ) goto L_00657a14;
L_00657a03:; BB(0x00657a03);
    /* 00657a03: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a08: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657a0du); f_00657890();
    /* 00657a0d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00657a10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a12: je 0x657a31 */ if (fZ) goto L_00657a31;
L_00657a14:; BB(0x00657a14);
    /* 00657a14: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a19: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657a1f: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657a24u); f_006651e0();
    /* 00657a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a26: je 0x657a31 */ if (fZ) goto L_00657a31;
L_00657a28:; BB(0x00657a28);
    /* 00657a28: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00657a2a: jmp 0x657afe */ goto L_00657afe;
L_00657a31:; BB(0x00657a31);
    /* 00657a31: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00657a33: jmp 0x657afe */ goto L_00657afe;
L_00657a38:; BB(0x00657a38);
    /* 00657a38: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a3d: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657a42u); f_00657890();
    /* 00657a42: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00657a45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a47: jne 0x657a5a */ if (!fZ) goto L_00657a5a;
L_00657a49:; BB(0x00657a49);
    /* 00657a49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a4e: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657a53u); f_00657890();
    /* 00657a53: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00657a56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a58: je 0x657a88 */ if (fZ) goto L_00657a88;
L_00657a5a:; BB(0x00657a5a);
    /* 00657a5a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a5f: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657a65: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657a6au); f_006651e0();
    /* 00657a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a6c: jne 0x657a82 */ if (!fZ) goto L_00657a82;
L_00657a6e:; BB(0x00657a6e);
    /* 00657a6e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a73: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00657a79: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657a7eu); f_006651e0();
    /* 00657a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a80: je 0x657a88 */ if (fZ) goto L_00657a88;
L_00657a82:; BB(0x00657a82);
    /* 00657a82: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00657a84: jmp 0x657afe */ goto L_00657afe;
L_00657a88:; BB(0x00657a88);
    /* 00657a88: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a8d: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657a92u); f_00657890();
    /* 00657a92: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00657a95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a97: jne 0x657aaa */ if (!fZ) goto L_00657aaa;
L_00657a99:; BB(0x00657a99);
    /* 00657a99: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657a9e: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x657aa3u); f_00657890();
    /* 00657aa3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657aa8: je 0x657ad8 */ if (fZ) goto L_00657ad8;
L_00657aaa:; BB(0x00657aaa);
    /* 00657aaa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657aac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657aaf: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00657ab5: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657abau); f_006651e0();
    /* 00657aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657abc: jne 0x657ad2 */ if (!fZ) goto L_00657ad2;
L_00657abe:; BB(0x00657abe);
    /* 00657abe: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657ac0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657ac3: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00657ac9: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657aceu); f_006651e0();
    /* 00657ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657ad0: je 0x657ad8 */ if (fZ) goto L_00657ad8;
L_00657ad2:; BB(0x00657ad2);
    /* 00657ad2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00657ad4: jmp 0x657afe */ goto L_00657afe;
L_00657ad8:; BB(0x00657ad8);
    /* 00657ad8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00657ada: jmp 0x657afe */ goto L_00657afe;
L_00657adc:; BB(0x00657adc);
    /* 00657adc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00657ade: jmp 0x657afe */ goto L_00657afe;
L_00657ae0:; BB(0x00657ae0);
    /* 00657ae0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657ae3: cmp dword ptr [eax + 0x278], 0 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657aea: je 0x657af8 */ if (fZ) goto L_00657af8;
L_00657aec:; BB(0x00657aec);
    /* 00657aec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657aef: cmp dword ptr [ecx + 0x278], 1 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657af6: jne 0x657afc */ if (!fZ) goto L_00657afc;
L_00657af8:; BB(0x00657af8);
    /* 00657af8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00657afa: jmp 0x657afe */ goto L_00657afe;
L_00657afc:; BB(0x00657afc);
    /* 00657afc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00657afe:; BB(0x00657afe);
    /* 00657afe: mov esp, ebp */ r_esp = r_ebp;
    /* 00657b00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657b01: ret  */ FN_RET(0x006578b0); r_esp += 4; return;
}

void f_00657b10(void) /* sub_657B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657b10);
    /* 00657b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00657b13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657b16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00657b19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657b1c: call 0x6578b0 */ r_esp -= 4; W32(r_esp, 0x657b21u); f_006578b0();
    /* 00657b21: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657b26: je 0x657b6a */ if (fZ) goto L_00657b6a;
L_00657b28:; BB(0x00657b28);
    /* 00657b28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657b2f: jmp 0x657b3a */ goto L_00657b3a;
L_00657b31:; BB(0x00657b31);
    /* 00657b31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b34: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00657b37: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00657b3a:; BB(0x00657b3a);
    /* 00657b3a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657b3e: jge 0x657b68 */ if ((fS==fO)) goto L_00657b68;
L_00657b40:; BB(0x00657b40);
    /* 00657b40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657b46: mov ecx, dword ptr [eax + edx*4 + 0x28c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x28cu));
    /* 00657b4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657b53: mov edx, dword ptr [eax + edx*4 + 0x28c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x28cu));
    /* 00657b5a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00657b5c: mov ecx, edx */ r_ecx = r_edx;
    /* 00657b5e: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00657b64: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x657b66u); call_ind(t); }
    /* 00657b66: jmp 0x657b31 */ goto L_00657b31;
L_00657b68:; BB(0x00657b68);
    /* 00657b68: jmp 0x657ba8 */ goto L_00657ba8;
L_00657b6a:; BB(0x00657b6a);
    /* 00657b6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657b71: jmp 0x657b7c */ goto L_00657b7c;
L_00657b73:; BB(0x00657b73);
    /* 00657b73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657b79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00657b7c:; BB(0x00657b7c);
    /* 00657b7c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657b80: jge 0x657ba8 */ if ((fS==fO)) goto L_00657ba8;
L_00657b82:; BB(0x00657b82);
    /* 00657b82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b85: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657b88: mov eax, dword ptr [edx + ecx*4 + 0x28c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x28cu));
    /* 00657b8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657b92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657b95: mov ecx, dword ptr [edx + ecx*4 + 0x28c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28cu));
    /* 00657b9c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00657b9e: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00657ba4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x657ba6u); call_ind(t); }
    /* 00657ba6: jmp 0x657b73 */ goto L_00657b73;
L_00657ba8:; BB(0x00657ba8);
    /* 00657ba8: mov esp, ebp */ r_esp = r_ebp;
    /* 00657baa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657bab: ret  */ FN_RET(0x00657b10); r_esp += 4; return;
}

void f_00657bb0(void) /* sub_657BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657bb0);
    /* 00657bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00657bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00657bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657bba: movsx eax, byte ptr [eax + 0x280] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x280u));
    /* 00657bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00657bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657bc4: ret  */ FN_RET(0x00657bb0); r_esp += 4; return;
}

void f_00657bd0(void) /* sub_657BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657bd0);
    /* 00657bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00657bd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657bd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00657bd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657bdb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657bde: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657be4: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657be9u); f_006651e0();
    /* 00657be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657bea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657bed: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 00657bf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657bf4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657bf7: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 00657bfd: call 0x675e40 */ r_esp -= 4; W32(r_esp, 0x657c02u); f_00675e40();
    /* 00657c02: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00657c05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c08: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00657c09: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657c0e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657c0e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657c0e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00657c10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657c12: je 0x657c24 */ if (fZ) goto L_00657c24;
L_00657c14:; BB(0x00657c14);
    /* 00657c14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c17: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00657c18: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657c1d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657c1d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657c1d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00657c1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657c22: jmp 0x657c2f */ goto L_00657c2f;
L_00657c24:; BB(0x00657c24);
    /* 00657c24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c27: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00657c28: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657c2d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657c2d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657c2d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_00657c2f:; BB(0x00657c2f);
    /* 00657c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00657c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657c32: ret  */ FN_RET(0x00657bd0); r_esp += 4; return;
}

void f_00657c40(void) /* sub_657C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657c40);
    /* 00657c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00657c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657c44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657c45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00657c48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c4b: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x657c50u); f_00657bb0();
    /* 00657c50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657c52: jne 0x657c74 */ if (!fZ) goto L_00657c74;
L_00657c54:; BB(0x00657c54);
    /* 00657c54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c57: mov ecx, dword ptr [eax + 0x284] */ r_ecx = R32((u32)(r_eax+0x284u));
    /* 00657c5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c60: mov eax, dword ptr [edx + 0x284] */ r_eax = R32((u32)(r_edx+0x284u));
    /* 00657c66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00657c68: mov ecx, eax */ r_ecx = r_eax;
    /* 00657c6a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00657c70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657c72u); call_ind(t); }
    /* 00657c72: jmp 0x657c90 */ goto L_00657c90;
L_00657c74:; BB(0x00657c74);
    /* 00657c74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c77: mov edx, dword ptr [ecx + 0x284] */ r_edx = R32((u32)(r_ecx+0x284u));
    /* 00657c7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c80: mov ecx, dword ptr [eax + 0x284] */ r_ecx = R32((u32)(r_eax+0x284u));
    /* 00657c86: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657c88: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00657c8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657c90u); call_ind(t); }
L_00657c90:; BB(0x00657c90);
    /* 00657c90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c93: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x657c98u); f_00657bb0();
    /* 00657c98: mov esi, eax */ r_esi = r_eax;
    /* 00657c9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657c9d: call 0x657bd0 */ r_esp -= 4; W32(r_esp, 0x657ca2u); f_00657bd0();
    /* 00657ca2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657ca5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657ca7: jne 0x657cc7 */ if (!fZ) goto L_00657cc7;
L_00657ca9:; BB(0x00657ca9);
    /* 00657ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657cac: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 00657cb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657cb5: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 00657cbb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657cbd: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00657cc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657cc5u); call_ind(t); }
    /* 00657cc5: jmp 0x657ce3 */ goto L_00657ce3;
L_00657cc7:; BB(0x00657cc7);
    /* 00657cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657cca: mov edx, dword ptr [ecx + 0x288] */ r_edx = R32((u32)(r_ecx+0x288u));
    /* 00657cd0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657cd3: mov ecx, dword ptr [eax + 0x288] */ r_ecx = R32((u32)(r_eax+0x288u));
    /* 00657cd9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00657cdb: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00657ce1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657ce3u); call_ind(t); }
L_00657ce3:; BB(0x00657ce3);
    /* 00657ce3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00657ce4: mov esp, ebp */ r_esp = r_ebp;
    /* 00657ce6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657ce7: ret  */ FN_RET(0x00657c40); r_esp += 4; return;
}

void f_00657cf0(void) /* sub_657CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657cf0);
    /* 00657cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00657cf3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657cf6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00657cf9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657cfc: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x657d01u); f_00657bb0();
    /* 00657d01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657d04: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00657d07: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657d0a: call 0x657bd0 */ r_esp -= 4; W32(r_esp, 0x657d0fu); f_00657bd0();
    /* 00657d0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00657d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657d14: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657d17: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 00657d1d: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657d22u); f_00606350();
    /* 00657d22: mov ecx, eax */ r_ecx = r_eax;
    /* 00657d24: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x657d29u); f_005f5400();
    /* 00657d29: sub eax, 0x472 */ {  u32 a = r_eax; u32 b = 0x472u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657d2e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00657d31: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657d33: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657d36: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 00657d3c: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657d41u); f_00606350();
    /* 00657d41: mov ecx, eax */ r_ecx = r_eax;
    /* 00657d43: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x657d48u); f_005f5400();
    /* 00657d48: sub eax, 0x472 */ {  u32 a = r_eax; u32 b = 0x472u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657d4d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00657d50: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657d54: jg 0x657d66 */ if ((!fZ&&fS==fO)) goto L_00657d66;
L_00657d56:; BB(0x00657d56);
    /* 00657d56: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00657d5d: mov dword ptr [ebp - 0xc], 0x15 */ W32((u32)(r_ebp+0xfffffff4u), 0x15u);
    /* 00657d64: jmp 0x657dd6 */ goto L_00657dd6;
L_00657d66:; BB(0x00657d66);
    /* 00657d66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657d69: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657d6c: jge 0x657d9c */ if ((fS==fO)) goto L_00657d9c;
L_00657d6e:; BB(0x00657d6e);
    /* 00657d6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657d71: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657d74: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657d77: jge 0x657d82 */ if ((fS==fO)) goto L_00657d82;
L_00657d79:; BB(0x00657d79);
    /* 00657d79: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00657d80: jmp 0x657d8b */ goto L_00657d8b;
L_00657d82:; BB(0x00657d82);
    /* 00657d82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657d85: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00657d88: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00657d8b:; BB(0x00657d8b);
    /* 00657d8b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657d8e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00657d91: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00657d94: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657d97: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00657d9a: jmp 0x657dd6 */ goto L_00657dd6;
L_00657d9c:; BB(0x00657d9c);
    /* 00657d9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657d9f: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657da2: jle 0x657dd1 */ if ((fZ||fS!=fO)) goto L_00657dd1;
L_00657da4:; BB(0x00657da4);
    /* 00657da4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657da7: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657daa: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657dad: jge 0x657db7 */ if ((fS==fO)) goto L_00657db7;
L_00657daf:; BB(0x00657daf);
    /* 00657daf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657db2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00657db5: jmp 0x657dc0 */ goto L_00657dc0;
L_00657db7:; BB(0x00657db7);
    /* 00657db7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657dba: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00657dbd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00657dc0:; BB(0x00657dc0);
    /* 00657dc0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657dc3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00657dc6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657dc9: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657dcc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00657dcf: jmp 0x657dd6 */ goto L_00657dd6;
L_00657dd1:; BB(0x00657dd1);
    /* 00657dd1: jmp 0x657e59 */ goto L_00657e59;
L_00657dd6:; BB(0x00657dd6);
    /* 00657dd6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00657ddd: jmp 0x657de8 */ goto L_00657de8;
L_00657ddf:; BB(0x00657ddf);
    /* 00657ddf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657de2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00657de5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00657de8:; BB(0x00657de8);
    /* 00657de8: cmp dword ptr [ebp - 0x14], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657dec: jge 0x657e59 */ if ((fS==fO)) goto L_00657e59;
L_00657dee:; BB(0x00657dee);
    /* 00657dee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00657df1: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657df4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657df5: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00657dfa: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00657dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657dfe: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x657e04u); call_ind(t); }
    /* 00657e04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657e07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657e0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657e0b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657e0e: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 00657e14: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657e19u); f_00606350();
    /* 00657e19: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00657e1c: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00657e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657e20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00657e23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00657e25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00657e28: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00657e2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657e30u); call_ind(t); }
    /* 00657e30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657e33: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00657e36: lea eax, [edx + ecx + 0x472] */ r_eax = (u32)(r_edx+r_ecx+0x472u);
    /* 00657e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657e3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657e41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657e42: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657e45: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 00657e4b: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657e50u); f_00606350();
    /* 00657e50: mov ecx, eax */ r_ecx = r_eax;
    /* 00657e52: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x657e57u); f_005f53e0();
    /* 00657e57: jmp 0x657ddf */ goto L_00657ddf;
L_00657e59:; BB(0x00657e59);
    /* 00657e59: mov esp, ebp */ r_esp = r_ebp;
    /* 00657e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657e5c: ret  */ FN_RET(0x00657cf0); r_esp += 4; return;
}

void f_00657e60(void) /* sub_657E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00657e60);
    /* 00657e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00657e63: sub esp, 0x150 */ {  u32 a = r_esp; u32 b = 0x150u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657e69: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00657e6e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657e70: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00657e73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657e74: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 00657e7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00657e7d: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00657e83: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657e89: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x657e8eu); f_00657820();
    /* 00657e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657e8f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657e95: call 0x658f80 */ r_esp -= 4; W32(r_esp, 0x657e9au); f_00658f80();
    /* 00657e9a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657ea0: mov ecx, dword ptr [ecx + 0x5fc] */ r_ecx = R32((u32)(r_ecx+0x5fcu));
    /* 00657ea6: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x657eabu); f_006067e0();
    /* 00657eab: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 00657eb5: jmp 0x657ec6 */ goto L_00657ec6;
L_00657eb7:; BB(0x00657eb7);
    /* 00657eb7: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00657ebd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657ec0: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
L_00657ec6:; BB(0x00657ec6);
    /* 00657ec6: cmp dword ptr [ebp - 0x114], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657ecd: jge 0x657f4b */ if ((fS==fO)) goto L_00657f4b;
L_00657ecf:; BB(0x00657ecf);
    /* 00657ecf: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657ed5: cmp dword ptr [eax + 0x278], 5 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657edc: jne 0x657f13 */ if (!fZ) goto L_00657f13;
L_00657ede:; BB(0x00657ede);
    /* 00657ede: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00657ee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657ee5: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657eeb: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00657ef1: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657ef6u); f_00606350();
    /* 00657ef6: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00657efc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00657efe: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 00657f04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657f06: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00657f0c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00657f0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657f11u); call_ind(t); }
    /* 00657f11: jmp 0x657f46 */ goto L_00657f46;
L_00657f13:; BB(0x00657f13);
    /* 00657f13: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00657f19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657f1a: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657f20: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00657f26: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657f2bu); f_00606350();
    /* 00657f2b: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00657f31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657f33: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00657f39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657f3b: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00657f41: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00657f44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657f46u); call_ind(t); }
L_00657f46:; BB(0x00657f46);
    /* 00657f46: jmp 0x657eb7 */ goto L_00657eb7;
L_00657f4b:; BB(0x00657f4b);
    /* 00657f4b: cmp dword ptr [ebp - 0x118], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657f52: jne 0x657fa0 */ if (!fZ) goto L_00657fa0;
L_00657f54:; BB(0x00657f54);
    /* 00657f54: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657f5a: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 00657f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657f61: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657f67: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00657f6d: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x657f72u); f_006651e0();
    /* 00657f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657f74: je 0x657f96 */ if (fZ) goto L_00657f96;
L_00657f76:; BB(0x00657f76);
    /* 00657f76: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657f78: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657f7e: call 0x6577b0 */ r_esp -= 4; W32(r_esp, 0x657f83u); f_006577b0();
    /* 00657f83: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00657f84: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657f89: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657f89, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657f89, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00657f8b: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00657f8e: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00657f94: jmp 0x657fa0 */ goto L_00657fa0;
L_00657f96:; BB(0x00657f96);
    /* 00657f96: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_00657fa0:; BB(0x00657fa0);
    /* 00657fa0: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00657fa4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657fa6: jne 0x658074 */ if (!fZ) goto L_00658074;
L_00657fac:; BB(0x00657fac);
    /* 00657fac: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657fb2: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 00657fb8: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x657fbdu); f_006067e0();
    /* 00657fbd: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00657fc3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00657fc4: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00657fc9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00657fc9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00657fc9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00657fcb: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657fd1: mov byte ptr [edx + 0x280], al */ W8((u32)(r_edx+0x280u), (u8)r_eax);
    /* 00657fd7: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00657fdd: call 0x657cf0 */ r_esp -= 4; W32(r_esp, 0x657fe2u); f_00657cf0();
    /* 00657fe2: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 00657fec: jmp 0x657ffd */ goto L_00657ffd;
L_00657fee:; BB(0x00657fee);
    /* 00657fee: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00657ff4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657ff7: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
L_00657ffd:; BB(0x00657ffd);
    /* 00657ffd: cmp dword ptr [ebp - 0x114], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658004: jge 0x658074 */ if ((fS==fO)) goto L_00658074;
L_00658006:; BB(0x00658006);
    /* 00658006: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065800c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065800d: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658013: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 00658019: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65801eu); f_00606350();
    /* 0065801e: mov ecx, eax */ r_ecx = r_eax;
    /* 00658020: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x658025u); f_005f5400();
    /* 00658025: mov esi, eax */ r_esi = r_eax;
    /* 00658027: sub esi, 0x473 */ {  u32 a = r_esi; u32 b = 0x473u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0065802d: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658033: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x658038u); f_00657bb0();
    /* 00658038: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065803a: jne 0x65806f */ if (!fZ) goto L_0065806f;
L_0065803c:; BB(0x0065803c);
    /* 0065803c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658043: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658049: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 0065804f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x658054u); f_00606350();
    /* 00658054: mov ecx, eax */ r_ecx = r_eax;
    /* 00658056: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x65805bu); f_005f5400();
    /* 0065805b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065805c: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658062: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 00658068: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x65806du); f_006065d0();
    /* 0065806d: jmp 0x658074 */ goto L_00658074;
L_0065806f:; BB(0x0065806f);
    /* 0065806f: jmp 0x657fee */ goto L_00657fee;
L_00658074:; BB(0x00658074);
    /* 00658074: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065807a: call 0x657bd0 */ r_esp -= 4; W32(r_esp, 0x65807fu); f_00657bd0();
    /* 0065807f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00658082: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0065808c: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 00658096: jmp 0x6580a7 */ goto L_006580a7;
L_00658098:; BB(0x00658098);
    /* 00658098: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065809e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006580a1: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
L_006580a7:; BB(0x006580a7);
    /* 006580a7: cmp dword ptr [ebp - 0x114], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006580ae: jge 0x658152 */ if ((fS==fO)) goto L_00658152;
L_006580b4:; BB(0x006580b4);
    /* 006580b4: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006580ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006580bb: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006580c1: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 006580c7: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6580ccu); f_00606350();
    /* 006580cc: mov ecx, eax */ r_ecx = r_eax;
    /* 006580ce: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6580d3u); f_005f5400();
    /* 006580d3: sub eax, 0x473 */ {  u32 a = r_eax; u32 b = 0x473u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006580d8: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 006580de: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 006580e4: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006580e7: jge 0x65811c */ if ((fS==fO)) goto L_0065811c;
L_006580e9:; BB(0x006580e9);
    /* 006580e9: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006580ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006580f0: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006580f6: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 006580fc: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x658101u); f_00606350();
    /* 00658101: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00658107: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 0065810d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065810f: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00658115: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00658118: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65811au); call_ind(t); }
    /* 0065811a: jmp 0x65814d */ goto L_0065814d;
L_0065811c:; BB(0x0065811c);
    /* 0065811c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658122: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658123: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658129: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 0065812f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x658134u); f_00606350();
    /* 00658134: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0065813a: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00658140: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00658142: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00658148: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065814b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65814du); call_ind(t); }
L_0065814d:; BB(0x0065814d);
    /* 0065814d: jmp 0x658098 */ goto L_00658098;
L_00658152:; BB(0x00658152);
    /* 00658152: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658158: call 0x657c40 */ r_esp -= 4; W32(r_esp, 0x65815du); f_00657c40();
    /* 0065815d: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658163: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x658168u); f_00657820();
    /* 00658168: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065816b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065816d: je 0x658420 */ if (fZ) goto L_00658420;
L_00658173:; BB(0x00658173);
    /* 00658173: mov byte ptr [ebp - 0x121], 0 */ W8((u32)(r_ebp+0xfffffedfu), 0x0u);
    /* 0065817a: mov byte ptr [ebp - 0x122], 0 */ W8((u32)(r_ebp+0xfffffedeu), 0x0u);
    /* 00658181: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658187: mov ecx, dword ptr [edx + 0x600] */ r_ecx = R32((u32)(r_edx+0x600u));
    /* 0065818d: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x658192u); f_00606570();
    /* 00658192: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00658198: cmp dword ptr [ebp - 0x13c], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581a2: je 0x6581be */ if (fZ) goto L_006581be;
L_006581a4:; BB(0x006581a4);
    /* 006581a4: cmp dword ptr [ebp - 0x13c], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581ae: je 0x6581ce */ if (fZ) goto L_006581ce;
L_006581b0:; BB(0x006581b0);
    /* 006581b0: cmp dword ptr [ebp - 0x13c], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581ba: je 0x6581de */ if (fZ) goto L_006581de;
L_006581bc:; BB(0x006581bc);
    /* 006581bc: jmp 0x6581ec */ goto L_006581ec;
L_006581be:; BB(0x006581be);
    /* 006581be: mov byte ptr [ebp - 0x121], 1 */ W8((u32)(r_ebp+0xfffffedfu), 0x1u);
    /* 006581c5: mov byte ptr [ebp - 0x122], 0 */ W8((u32)(r_ebp+0xfffffedeu), 0x0u);
    /* 006581cc: jmp 0x6581ec */ goto L_006581ec;
L_006581ce:; BB(0x006581ce);
    /* 006581ce: mov byte ptr [ebp - 0x121], 0 */ W8((u32)(r_ebp+0xfffffedfu), 0x0u);
    /* 006581d5: mov byte ptr [ebp - 0x122], 1 */ W8((u32)(r_ebp+0xfffffedeu), 0x1u);
    /* 006581dc: jmp 0x6581ec */ goto L_006581ec;
L_006581de:; BB(0x006581de);
    /* 006581de: mov byte ptr [ebp - 0x121], 1 */ W8((u32)(r_ebp+0xfffffedfu), 0x1u);
    /* 006581e5: mov byte ptr [ebp - 0x122], 1 */ W8((u32)(r_ebp+0xfffffedeu), 0x1u);
L_006581ec:; BB(0x006581ec);
    /* 006581ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006581ee: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006581f4: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6581f9u); f_00657890();
    /* 006581f9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006581fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581fe: jne 0x658214 */ if (!fZ) goto L_00658214;
L_00658200:; BB(0x00658200);
    /* 00658200: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658202: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658208: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x65820du); f_00657890();
    /* 0065820d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00658210: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658212: je 0x658227 */ if (fZ) goto L_00658227;
L_00658214:; BB(0x00658214);
    /* 00658214: mov dword ptr [ebp - 0x120], 3 */ W32((u32)(r_ebp+0xfffffee0u), 0x3u);
    /* 0065821e: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 00658225: jmp 0x658238 */ goto L_00658238;
L_00658227:; BB(0x00658227);
    /* 00658227: mov dword ptr [ebp - 0x120], 8 */ W32((u32)(r_ebp+0xfffffee0u), 0x8u);
    /* 00658231: mov dword ptr [ebp - 8], 9 */ W32((u32)(r_ebp+0xfffffff8u), 0x9u);
L_00658238:; BB(0x00658238);
    /* 00658238: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 00658242: jmp 0x658253 */ goto L_00658253;
L_00658244:; BB(0x00658244);
    /* 00658244: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065824a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065824d: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
L_00658253:; BB(0x00658253);
    /* 00658253: cmp dword ptr [ebp - 0x114], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065825a: jge 0x65841b */ if ((fS==fO)) goto L_0065841b;
L_00658260:; BB(0x00658260);
    /* 00658260: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658262: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658268: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065826e: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x658273u); f_006651e0();
    /* 00658273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658274: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0065827a: add ecx, dword ptr [ebp - 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658280: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658281: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00658287: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658288: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065828e: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 00658294: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x658299u); f_00675b40();
    /* 00658299: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065829c: je 0x6583b8 */ if (fZ) goto L_006583b8;
L_006582a2:; BB(0x006582a2);
    /* 006582a2: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 006582a8: add ecx, dword ptr [ebp - 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006582ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006582af: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 006582b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006582b6: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006582bc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006582c2: mov ecx, dword ptr [ecx + eax*4 + 0x60c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 006582c9: call 0x65b1b0 */ r_esp -= 4; W32(r_esp, 0x6582ceu); f_0065b1b0();
    /* 006582ce: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 006582d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006582d5: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006582db: call 0x6577b0 */ r_esp -= 4; W32(r_esp, 0x6582e0u); f_006577b0();
    /* 006582e0: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 006582e6: add ecx, dword ptr [ebp - 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006582ec: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006582ee: jne 0x65832b */ if (!fZ) goto L_0065832b;
L_006582f0:; BB(0x006582f0);
    /* 006582f0: movzx edx, byte ptr [ebp - 0x121] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffedfu));
    /* 006582f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006582f9: je 0x65832b */ if (fZ) goto L_0065832b;
L_006582fb:; BB(0x006582fb);
    /* 006582fb: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658301: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658307: mov edx, dword ptr [ecx + eax*4 + 0x60c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 0065830e: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658314: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065831a: mov ecx, dword ptr [ecx + eax*4 + 0x60c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 00658321: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00658323: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00658329: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65832bu); call_ind(t); }
L_0065832b:; BB(0x0065832b);
    /* 0065832b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065832e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065832f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658335: call 0x6577b0 */ r_esp -= 4; W32(r_esp, 0x65833au); f_006577b0();
    /* 0065833a: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00658340: add edx, dword ptr [ebp - 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00658346: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658348: jne 0x658385 */ if (!fZ) goto L_00658385;
L_0065834a:; BB(0x0065834a);
    /* 0065834a: movzx eax, byte ptr [ebp - 0x122] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffedeu));
    /* 00658351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658353: je 0x658385 */ if (fZ) goto L_00658385;
L_00658355:; BB(0x00658355);
    /* 00658355: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065835b: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658361: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 00658368: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065836e: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658374: mov ecx, dword ptr [edx + ecx*4 + 0x60c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 0065837b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065837d: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00658383: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x658385u); call_ind(t); }
L_00658385:; BB(0x00658385);
    /* 00658385: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065838b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065838c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658392: mov ecx, dword ptr [ecx + 0x5fc] */ r_ecx = R32((u32)(r_ecx+0x5fcu));
    /* 00658398: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65839du); f_00606350();
    /* 0065839d: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 006583a3: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006583a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006583ab: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006583b1: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 006583b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6583b6u); call_ind(t); }
    /* 006583b6: jmp 0x658416 */ goto L_00658416;
L_006583b8:; BB(0x006583b8);
    /* 006583b8: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006583be: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006583c4: mov edx, dword ptr [ecx + eax*4 + 0x60c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 006583cb: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006583d1: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006583d7: mov ecx, dword ptr [ecx + eax*4 + 0x60c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 006583de: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006583e0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006583e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6583e5u); call_ind(t); }
    /* 006583e5: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006583eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006583ec: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006583f2: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 006583f8: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6583fdu); f_00606350();
    /* 006583fd: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 00658403: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00658409: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065840b: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 00658411: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00658414: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x658416u); call_ind(t); }
L_00658416:; BB(0x00658416);
    /* 00658416: jmp 0x658244 */ goto L_00658244;
L_0065841b:; BB(0x0065841b);
    /* 0065841b: jmp 0x6585f8 */ goto L_006585f8;
L_00658420:; BB(0x00658420);
    /* 00658420: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0065842a: jmp 0x65843b */ goto L_0065843b;
L_0065842c:; BB(0x0065842c);
    /* 0065842c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658432: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658435: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_0065843b:; BB(0x0065843b);
    /* 0065843b: cmp dword ptr [ebp - 0x114], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658442: jge 0x6585f8 */ if ((fS==fO)) goto L_006585f8;
L_00658448:; BB(0x00658448);
    /* 00658448: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065844a: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658450: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658456: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65845bu); f_006651e0();
    /* 0065845b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065845c: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00658462: add eax, dword ptr [ebp - 0x114] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00658468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658469: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065846f: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 00658475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658476: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065847c: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 00658482: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x658487u); f_00675b40();
    /* 00658487: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065848a: je 0x658595 */ if (fZ) goto L_00658595;
L_00658490:; BB(0x00658490);
    /* 00658490: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00658496: add ecx, dword ptr [ebp - 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065849c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065849d: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006584a3: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 006584a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006584aa: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006584b0: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006584b6: mov ecx, dword ptr [edx + ecx*4 + 0x60c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006584bd: call 0x65b1b0 */ r_esp -= 4; W32(r_esp, 0x6584c2u); f_0065b1b0();
    /* 006584c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006584c4: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006584ca: call 0x6577b0 */ r_esp -= 4; W32(r_esp, 0x6584cfu); f_006577b0();
    /* 006584cf: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 006584d5: add ecx, dword ptr [ebp - 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006584db: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006584dd: jne 0x658511 */ if (!fZ) goto L_00658511;
L_006584df:; BB(0x006584df);
    /* 006584df: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006584e5: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 006584eb: mov ecx, dword ptr [eax + edx*4 + 0x60c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 006584f2: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006584f8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 006584fe: mov edx, dword ptr [eax + edx*4 + 0x60c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 00658505: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00658507: mov ecx, edx */ r_ecx = r_edx;
    /* 00658509: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0065850f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x658511u); call_ind(t); }
L_00658511:; BB(0x00658511);
    /* 00658511: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658517: cmp dword ptr [eax + 0x278], 0 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065851e: je 0x658562 */ if (fZ) goto L_00658562;
L_00658520:; BB(0x00658520);
    /* 00658520: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658526: cmp dword ptr [ecx + 0x278], 2 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065852d: je 0x658562 */ if (fZ) goto L_00658562;
L_0065852f:; BB(0x0065852f);
    /* 0065852f: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658536: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065853c: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 00658542: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x658547u); f_00606350();
    /* 00658547: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0065854d: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00658553: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00658555: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0065855b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065855e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x658560u); call_ind(t); }
    /* 00658560: jmp 0x658593 */ goto L_00658593;
L_00658562:; BB(0x00658562);
    /* 00658562: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658568: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658569: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065856f: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 00658575: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x65857au); f_00606350();
    /* 0065857a: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 00658580: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00658586: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00658588: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0065858e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00658591: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x658593u); call_ind(t); }
L_00658593:; BB(0x00658593);
    /* 00658593: jmp 0x6585f3 */ goto L_006585f3;
L_00658595:; BB(0x00658595);
    /* 00658595: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065859b: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006585a1: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006585a8: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006585ae: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006585b4: mov ecx, dword ptr [edx + ecx*4 + 0x60c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006585bb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006585bd: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006585c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6585c2u); call_ind(t); }
    /* 006585c2: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006585c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006585c9: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006585cf: mov ecx, dword ptr [ecx + 0x5fc] */ r_ecx = R32((u32)(r_ecx+0x5fcu));
    /* 006585d5: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6585dau); f_00606350();
    /* 006585da: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 006585e0: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 006585e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006585e8: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 006585ee: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006585f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6585f3u); call_ind(t); }
L_006585f3:; BB(0x006585f3);
    /* 006585f3: jmp 0x65842c */ goto L_0065842c;
L_006585f8:; BB(0x006585f8);
    /* 006585f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006585fa: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658600: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x658605u); f_00657890();
    /* 00658605: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065860a: jne 0x658740 */ if (!fZ) goto L_00658740;
L_00658610:; BB(0x00658610);
    /* 00658610: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0065861a: jmp 0x65862b */ goto L_0065862b;
L_0065861c:; BB(0x0065861c);
    /* 0065861c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658622: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658625: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_0065862b:; BB(0x0065862b);
    /* 0065862b: cmp dword ptr [ebp - 0x114], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658632: jge 0x658740 */ if ((fS==fO)) goto L_00658740;
L_00658638:; BB(0x00658638);
    /* 00658638: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065863e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658644: cmp dword ptr [eax + edx*4 + 0x60c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x60cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065864c: je 0x65873b */ if (fZ) goto L_0065873b;
L_00658652:; BB(0x00658652);
    /* 00658652: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658658: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065865e: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 00658665: cmp dword ptr [eax + 0x230], 0 */ {  u32 a = R32((u32)(r_eax+0x230u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065866c: je 0x6586e4 */ if (fZ) goto L_006586e4;
L_0065866e:; BB(0x0065866e);
    /* 0065866e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658674: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065867a: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 00658681: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 00658687: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065868d: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658693: mov edx, dword ptr [eax + edx*4 + 0x60c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 0065869a: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 006586a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006586a2: mov ecx, eax */ r_ecx = r_eax;
    /* 006586a4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006586a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6586a9u); call_ind(t); }
    /* 006586a9: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006586af: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006586b5: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006586bc: mov ecx, dword ptr [eax + 0x234] */ r_ecx = R32((u32)(r_eax+0x234u));
    /* 006586c2: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006586c8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 006586ce: mov edx, dword ptr [eax + edx*4 + 0x60c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 006586d5: mov eax, dword ptr [edx + 0x234] */ r_eax = R32((u32)(r_edx+0x234u));
    /* 006586db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006586dd: mov ecx, eax */ r_ecx = r_eax;
    /* 006586df: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006586e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6586e4u); call_ind(t); }
L_006586e4:; BB(0x006586e4);
    /* 006586e4: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006586ea: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006586f0: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006586f7: cmp dword ptr [eax + 0x238], 0 */ {  u32 a = R32((u32)(r_eax+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006586fe: je 0x65873b */ if (fZ) goto L_0065873b;
L_00658700:; BB(0x00658700);
    /* 00658700: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00658706: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065870c: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 00658713: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 00658719: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0065871f: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658725: mov edx, dword ptr [eax + edx*4 + 0x60c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 0065872c: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 00658732: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00658734: mov ecx, eax */ r_ecx = r_eax;
    /* 00658736: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00658739: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65873bu); call_ind(t); }
L_0065873b:; BB(0x0065873b);
    /* 0065873b: jmp 0x65861c */ goto L_0065861c;
L_00658740:; BB(0x00658740);
    /* 00658740: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658746: call 0x657bd0 */ r_esp -= 4; W32(r_esp, 0x65874bu); f_00657bd0();
    /* 0065874b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065874c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658752: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x658757u); f_00657bb0();
    /* 00658757: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065875a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065875b: push 0x6de4ac */ { u32 v = 0x6de4acu; r_esp -= 4; W32(r_esp, v); }
    /* 00658760: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00658766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658767: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65876du); call_ind(t); }
    /* 0065876d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00658770: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00658776: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658777: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0065877d: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658783: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00658789: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0065878f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00658795: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x658797u); call_ind(t); }
    /* 00658797: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00658798: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065879b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065879d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6587a2u); f_00686d72();
    /* 006587a2: mov esp, ebp */ r_esp = r_ebp;
    /* 006587a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006587a5: ret 8 */ FN_RET(0x00657e60); r_esp += 12; return;
}

