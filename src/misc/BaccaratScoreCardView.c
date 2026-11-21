#include "protos.h"

void f_00402510(void) /* BaccaratScoreCardView::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402510);
    /* 00402510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402511: mov ebp, esp */ r_ebp = r_esp;
    /* 00402513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040251a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x40251fu); f_005eaaf0();
    /* 0040251f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402522: mov dword ptr [eax], 0x6b2834 */ W32((u32)(r_eax), 0x6b2834u);
    /* 00402528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040252b: mov dword ptr [ecx + 0x178], 0xffffffff */ W32((u32)(r_ecx+0x178u), 0xffffffffu);
    /* 00402535: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402538: mov esp, ebp */ r_esp = r_ebp;
    /* 0040253a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040253b: ret  */ FN_RET(0x00402510); r_esp += 4; return;
}

void f_00402560(void) /* BaccaratScoreCardView::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402560);
    /* 00402560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402561: mov ebp, esp */ r_ebp = r_esp;
    /* 00402563: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402566: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00402569: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040256c: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x402571u); f_005f54c0();
    /* 00402571: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00402574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402576: jne 0x402583 */ if (!fZ) goto L_00402583;
L_00402578:; BB(0x00402578);
    /* 00402578: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040257b: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0040257f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402581: je 0x402588 */ if (fZ) goto L_00402588;
L_00402583:; BB(0x00402583);
    /* 00402583: jmp 0x402656 */ goto L_00402656;
L_00402588:; BB(0x00402588);
    /* 00402588: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040258b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040258c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040258f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00402591: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402594: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0040259a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40259cu); call_ind(t); }
    /* 0040259c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040259f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004025a1: jne 0x4025a8 */ if (!fZ) goto L_004025a8;
L_004025a3:; BB(0x004025a3);
    /* 004025a3: jmp 0x402656 */ goto L_00402656;
L_004025a8:; BB(0x004025a8);
    /* 004025a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004025ab: cmp dword ptr [edx + 0x178], -1 */ {  u32 a = R32((u32)(r_edx+0x178u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004025b2: jne 0x4025b9 */ if (!fZ) goto L_004025b9;
L_004025b4:; BB(0x004025b4);
    /* 004025b4: jmp 0x402656 */ goto L_00402656;
L_004025b9:; BB(0x004025b9);
    /* 004025b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004025bc: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 004025c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004025c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4025c8u); f_005dcb00();
    /* 004025c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004025cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004025ce: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004025d2: je 0x402612 */ if (fZ) goto L_00402612;
L_004025d4:; BB(0x004025d4);
    /* 004025d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004025d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4025dcu); f_0063aac0();
    /* 004025dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004025de: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004025e1: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004025e5: je 0x402603 */ if (fZ) goto L_00402603;
L_004025e7:; BB(0x004025e7);
    /* 004025e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004025ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4025efu); f_0063aac0();
    /* 004025ef: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004025f1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004025f4: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004025f8: je 0x402603 */ if (fZ) goto L_00402603;
L_004025fa:; BB(0x004025fa);
    /* 004025fa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00402601: jmp 0x40260a */ goto L_0040260a;
L_00402603:; BB(0x00402603);
    /* 00402603: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0040260a:; BB(0x0040260a);
    /* 0040260a: movzx ecx, byte ptr [ebp - 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 0040260e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402610: jne 0x402614 */ if (!fZ) goto L_00402614;
L_00402612:; BB(0x00402612);
    /* 00402612: jmp 0x402656 */ goto L_00402656;
L_00402614:; BB(0x00402614);
    /* 00402614: cmp dword ptr [0x7947b4], 0 */ {  u32 a = R32((u32)(0x7947b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040261b: je 0x40261f */ if (fZ) goto L_0040261f;
L_0040261d:; BB(0x0040261d);
    /* 0040261d: jmp 0x402656 */ goto L_00402656;
L_0040261f:; BB(0x0040261f);
    /* 0040261f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402622: cmp dword ptr [edx + 0x18], 2 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402626: jne 0x402646 */ if (!fZ) goto L_00402646;
L_00402628:; BB(0x00402628);
    /* 00402628: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040262b: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0040262f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402632: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00402638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00402639: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040263f: call 0x4055f0 */ r_esp -= 4; W32(r_esp, 0x402644u); f_004055f0();
    /* 00402644: jmp 0x402656 */ goto L_00402656;
L_00402646:; BB(0x00402646);
    /* 00402646: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00402649: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040264d: jne 0x402656 */ if (!fZ) goto L_00402656;
L_0040264f:; BB(0x0040264f);
    /* 0040264f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402652: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00402656:; BB(0x00402656);
    /* 00402656: mov esp, ebp */ r_esp = r_ebp;
    /* 00402658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402659: ret 4 */ FN_RET(0x00402560); r_esp += 8; return;
}

