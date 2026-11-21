#include "protos.h"

void f_00411760(void) /* BlackjackActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411760);
    /* 00411760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411761: mov ebp, esp */ r_ebp = r_esp;
    /* 00411763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041176b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041176e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x411773u); f_005f71f0();
    /* 00411773: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411776: mov dword ptr [eax], 0x6b3bf4 */ W32((u32)(r_eax), 0x6b3bf4u);
    /* 0041177c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041177f: mov esp, ebp */ r_esp = r_ebp;
    /* 00411781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411782: ret  */ FN_RET(0x00411760); r_esp += 4; return;
}

void f_004117b0(void) /* BlackjackActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004117b0);
    /* 004117b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004117b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004117b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004117b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004117b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004117bc: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004117c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117c2: jne 0x4117d3 */ if (!fZ) goto L_004117d3;
L_004117c4:; BB(0x004117c4);
    /* 004117c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004117c7: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x4117ccu); f_005f88f0();
    /* 004117cc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004117cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117d1: je 0x4117d8 */ if (fZ) goto L_004117d8;
L_004117d3:; BB(0x004117d3);
    /* 004117d3: jmp 0x411998 */ goto L_00411998;
L_004117d8:; BB(0x004117d8);
    /* 004117d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004117db: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004117df: jne 0x41198c */ if (!fZ) goto L_0041198c;
L_004117e5:; BB(0x004117e5);
    /* 004117e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004117e8: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 004117ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004117ed: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x4117f3u); call_ind(t); }
    /* 004117f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004117f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004117f9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004117fc: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004117ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00411802: cmp dword ptr [ebp - 0xc], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00411806: ja 0x41198c */ if ((!fC&&!fZ)) goto L_0041198c;
L_0041180c:; BB(0x0041180c);
    /* 0041180c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041180f: movzx edx, byte ptr [ecx + 0x4119bc] */ r_edx = (u32)R8((u32)(r_ecx+0x4119bcu));
    /* 00411816: jmp dword ptr [edx*4 + 0x4119a0] */ { u32 t = R32((u32)(r_edx*4+0x4119a0u)); switch (t) { case 0x4118e6u: goto L_004118e6; case 0x4118abu: goto L_004118ab; case 0x41191eu: goto L_0041191e; case 0x411956u: goto L_00411956; case 0x411870u: goto L_00411870; case 0x41181du: goto L_0041181d; case 0x41198cu: goto L_0041198c; default: UNSUP(0x00411816, "jump table entry is not a known target"); } }
L_0041181d:; BB(0x0041181d);
    /* 0041181d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041181f: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00411824: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041182a: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x41182fu); f_005f2a60();
    /* 0041182f: mov ecx, eax */ r_ecx = r_eax;
    /* 00411831: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x411836u); f_006026d0();
    /* 00411836: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00411839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041183b: je 0x41186b */ if (fZ) goto L_0041186b;
L_0041183d:; BB(0x0041183d);
    /* 0041183d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411843: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 00411849: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041184c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041184f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411850: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00411856: call 0x40b260 */ r_esp -= 4; W32(r_esp, 0x41185bu); f_0040b260();
    /* 0041185b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041185c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041185f: call 0x411c20 */ r_esp -= 4; W32(r_esp, 0x411864u); f_00411c20();
    /* 00411864: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00411867: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0041186b:; BB(0x0041186b);
    /* 0041186b: jmp 0x41198c */ goto L_0041198c;
L_00411870:; BB(0x00411870);
    /* 00411870: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411872: push 0x30d7eb */ { u32 v = 0x30d7ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00411877: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041187d: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x411882u); f_005f2a60();
    /* 00411882: mov ecx, eax */ r_ecx = r_eax;
    /* 00411884: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x411889u); f_006026d0();
    /* 00411889: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041188c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041188e: je 0x4118a6 */ if (fZ) goto L_004118a6;
L_00411890:; BB(0x00411890);
    /* 00411890: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411892: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411895: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411897: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041189a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0041189d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41189fu); call_ind(t); }
    /* 0041189f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004118a2: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_004118a6:; BB(0x004118a6);
    /* 004118a6: jmp 0x41198c */ goto L_0041198c;
L_004118ab:; BB(0x004118ab);
    /* 004118ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004118ad: push 0x30d7ea */ { u32 v = 0x30d7eau; r_esp -= 4; W32(r_esp, v); }
    /* 004118b2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004118b8: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4118bdu); f_005f2a60();
    /* 004118bd: mov ecx, eax */ r_ecx = r_eax;
    /* 004118bf: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4118c4u); f_006026d0();
    /* 004118c4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004118c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004118c9: je 0x4118e1 */ if (fZ) goto L_004118e1;
L_004118cb:; BB(0x004118cb);
    /* 004118cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004118cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004118d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004118d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004118d5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004118d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4118dau); call_ind(t); }
    /* 004118da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004118dd: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_004118e1:; BB(0x004118e1);
    /* 004118e1: jmp 0x41198c */ goto L_0041198c;
L_004118e6:; BB(0x004118e6);
    /* 004118e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004118e8: push 0x30d7ec */ { u32 v = 0x30d7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004118ed: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004118f3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4118f8u); f_005f2a60();
    /* 004118f8: mov ecx, eax */ r_ecx = r_eax;
    /* 004118fa: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4118ffu); f_006026d0();
    /* 004118ff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00411902: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411904: je 0x41191c */ if (fZ) goto L_0041191c;
L_00411906:; BB(0x00411906);
    /* 00411906: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411908: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041190b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041190d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411910: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00411913: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411915u); call_ind(t); }
    /* 00411915: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00411918: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0041191c:; BB(0x0041191c);
    /* 0041191c: jmp 0x41198c */ goto L_0041198c;
L_0041191e:; BB(0x0041191e);
    /* 0041191e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411920: push 0x30d7ed */ { u32 v = 0x30d7edu; r_esp -= 4; W32(r_esp, v); }
    /* 00411925: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041192b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x411930u); f_005f2a60();
    /* 00411930: mov ecx, eax */ r_ecx = r_eax;
    /* 00411932: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x411937u); f_006026d0();
    /* 00411937: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041193a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041193c: je 0x411954 */ if (fZ) goto L_00411954;
L_0041193e:; BB(0x0041193e);
    /* 0041193e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411940: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411943: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411945: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411948: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0041194b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41194du); call_ind(t); }
    /* 0041194d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00411950: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00411954:; BB(0x00411954);
    /* 00411954: jmp 0x41198c */ goto L_0041198c;
L_00411956:; BB(0x00411956);
    /* 00411956: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411958: push 0x30d7ee */ { u32 v = 0x30d7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0041195d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00411963: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x411968u); f_005f2a60();
    /* 00411968: mov ecx, eax */ r_ecx = r_eax;
    /* 0041196a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x41196fu); f_006026d0();
    /* 0041196f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00411972: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411974: je 0x41198c */ if (fZ) goto L_0041198c;
L_00411976:; BB(0x00411976);
    /* 00411976: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00411978: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041197b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041197d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411980: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00411983: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411985u); call_ind(t); }
    /* 00411985: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00411988: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0041198c:; BB(0x0041198c);
    /* 0041198c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041198f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411990: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00411993: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x411998u); f_005f72f0();
L_00411998:; BB(0x00411998);
    /* 00411998: mov esp, ebp */ r_esp = r_ebp;
    /* 0041199a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041199b: ret 4 */ FN_RET(0x004117b0); r_esp += 8; return;
}

void f_004119d0(void) /* BlackjackActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004119d0);
    /* 004119d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004119d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004119d3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004119d6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004119d9: mov dword ptr [ebp - 0x40], 0x6b3ca4 */ W32((u32)(r_ebp+0xffffffc0u), 0x6b3ca4u);
    /* 004119e0: mov dword ptr [ebp - 0x3c], 0x6b3c90 */ W32((u32)(r_ebp+0xffffffc4u), 0x6b3c90u);
    /* 004119e7: mov dword ptr [ebp - 0x38], 0x6b3c78 */ W32((u32)(r_ebp+0xffffffc8u), 0x6b3c78u);
    /* 004119ee: mov dword ptr [ebp - 0x34], 0x6b3c64 */ W32((u32)(r_ebp+0xffffffccu), 0x6b3c64u);
    /* 004119f5: mov dword ptr [ebp - 0x30], 0x6b3c4c */ W32((u32)(r_ebp+0xffffffd0u), 0x6b3c4cu);
    /* 004119fc: mov dword ptr [ebp - 0x28], 0x20 */ W32((u32)(r_ebp+0xffffffd8u), 0x20u);
    /* 00411a03: mov dword ptr [ebp - 0x24], 0x22 */ W32((u32)(r_ebp+0xffffffdcu), 0x22u);
    /* 00411a0a: mov dword ptr [ebp - 0x20], 0x20 */ W32((u32)(r_ebp+0xffffffe0u), 0x20u);
    /* 00411a11: mov dword ptr [ebp - 0x1c], 0x40 */ W32((u32)(r_ebp+0xffffffe4u), 0x40u);
    /* 00411a18: mov dword ptr [ebp - 0x18], 0x20 */ W32((u32)(r_ebp+0xffffffe8u), 0x20u);
    /* 00411a1f: mov dword ptr [ebp - 0x14], 0x5e */ W32((u32)(r_ebp+0xffffffecu), 0x5eu);
    /* 00411a26: mov dword ptr [ebp - 0x10], 0x20 */ W32((u32)(r_ebp+0xfffffff0u), 0x20u);
    /* 00411a2d: mov dword ptr [ebp - 0xc], 0x7c */ W32((u32)(r_ebp+0xfffffff4u), 0x7cu);
    /* 00411a34: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00411a3b: mov dword ptr [ebp - 4], 0x9a */ W32((u32)(r_ebp+0xfffffffcu), 0x9au);
    /* 00411a42: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00411a47: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00411a4d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00411a50: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411a54: jne 0x411a5f */ if (!fZ) goto L_00411a5f;
L_00411a56:; BB(0x00411a56);
    /* 00411a56: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 00411a5d: jmp 0x411a8d */ goto L_00411a8d;
L_00411a5f:; BB(0x00411a5f);
    /* 00411a5f: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411a63: jne 0x411a6e */ if (!fZ) goto L_00411a6e;
L_00411a65:; BB(0x00411a65);
    /* 00411a65: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00411a6c: jmp 0x411a87 */ goto L_00411a87;
L_00411a6e:; BB(0x00411a6e);
    /* 00411a6e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411a71: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411a77: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00411a7c: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 00411a84: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_00411a87:; BB(0x00411a87);
    /* 00411a87: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00411a8a: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_00411a8d:; BB(0x00411a8d);
    /* 00411a8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a8f: push 0x1396 */ { u32 v = 0x1396u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a94: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411a97: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x411a9cu); f_005f83d0();
    /* 00411a9c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00411a9e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411aa1: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x411aa6u); f_005f89d0();
    /* 00411aa6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411aa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411aaa: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00411aac: push 0x6b3c34 */ { u32 v = 0x6b3c34u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ab1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411ab6u); f_00630f40();
    /* 00411ab6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411aba: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411abd: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x411ac2u); f_005f73e0();
    /* 00411ac2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00411ac9: jmp 0x411ad4 */ goto L_00411ad4;
L_00411acb:; BB(0x00411acb);
    /* 00411acb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411ace: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00411ad1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_00411ad4:; BB(0x00411ad4);
    /* 00411ad4: cmp dword ptr [ebp - 0x44], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411ad8: jge 0x411b3c */ if ((fS==fO)) goto L_00411b3c;
L_00411ada:; BB(0x00411ada);
    /* 00411ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411adc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411ade: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00411ae0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00411ae2: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ae4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411ae7: mov edx, dword ptr [ebp + ecx*4 - 0x40] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc0u));
    /* 00411aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411aec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411af1u); f_00630f40();
    /* 00411af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411af5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411af7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411afa: mov ecx, dword ptr [ebp + eax*8 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00411afe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411aff: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411b02: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 00411b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411b07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00411b09: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b0d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00411b10: add ecx, 0x30d4de */ {  u32 a = r_ecx; u32 b = 0x30d4deu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411b16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411b17: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411b1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411b1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b1d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411b20: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x411b25u); f_005f9de0();
    /* 00411b25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b27: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00411b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411b2b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411b2e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x411b33u); f_005fb300();
    /* 00411b33: mov ecx, eax */ r_ecx = r_eax;
    /* 00411b35: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x411b3au); f_005eb700();
    /* 00411b3a: jmp 0x411acb */ goto L_00411acb;
L_00411b3c:; BB(0x00411b3c);
    /* 00411b3c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411b3f: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411b45: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00411b4b: cmp byte ptr [edx + ecx + 0x118], 0 */ {  u32 a = R8((u32)(r_edx+r_ecx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00411b53: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00411b56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00411b59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b5b: je 0x411b7a */ if (fZ) goto L_00411b7a;
L_00411b5d:; BB(0x00411b5d);
    /* 00411b5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b5f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411b62: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x411b67u); f_005fb300();
    /* 00411b67: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00411b6a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00411b6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411b6f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00411b72: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00411b78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x411b7au); call_ind(t); }
L_00411b7a:; BB(0x00411b7a);
    /* 00411b7a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411b7e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411b84: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x411b89u); f_0041a960();
    /* 00411b89: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00411b8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411b8e: jne 0x411bad */ if (!fZ) goto L_00411bad;
L_00411b90:; BB(0x00411b90);
    /* 00411b90: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411b92: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411b95: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x411b9au); f_005fb300();
    /* 00411b9a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00411b9d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00411ba0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411ba2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00411ba5: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00411bab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x411badu); call_ind(t); }
L_00411bad:; BB(0x00411bad);
    /* 00411bad: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00411bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411bb1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411bb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411bb5: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411bbb: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x411bc0u); f_0041ade0();
    /* 00411bc0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00411bc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411bc5: jne 0x411be4 */ if (!fZ) goto L_00411be4;
L_00411bc7:; BB(0x00411bc7);
    /* 00411bc7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411bc9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411bcc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x411bd1u); f_005fb300();
    /* 00411bd1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00411bd4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00411bd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411bd9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00411bdc: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00411be2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411be4u); call_ind(t); }
L_00411be4:; BB(0x00411be4);
    /* 00411be4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411be7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411be8: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411bee: call 0x41aec0 */ r_esp -= 4; W32(r_esp, 0x411bf3u); f_0041aec0();
    /* 00411bf3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00411bf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411bf8: jne 0x411c17 */ if (!fZ) goto L_00411c17;
L_00411bfa:; BB(0x00411bfa);
    /* 00411bfa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00411bfc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00411bff: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x411c04u); f_005fb300();
    /* 00411c04: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00411c07: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00411c0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411c0c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00411c0f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00411c15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411c17u); call_ind(t); }
L_00411c17:; BB(0x00411c17);
    /* 00411c17: mov esp, ebp */ r_esp = r_ebp;
    /* 00411c19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411c1a: ret  */ FN_RET(0x004119d0); r_esp += 4; return;
}

void f_00411cd0(void) /* BlackjackActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411cd0);
    /* 00411cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00411cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411cd5: push 0x69dcd5 */ { u32 v = 0x69dcd5u; r_esp -= 4; W32(r_esp, v); }
    /* 00411cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00411ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411ce1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411ce4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00411ce9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00411ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411cec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00411cef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00411cf5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00411cf8: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00411cfe: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x411d03u); f_0040da70();
    /* 00411d03: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00411d05: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x411d0au); f_00686d82();
    /* 00411d0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411d0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00411d10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00411d17: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411d1b: je 0x411d2e */ if (fZ) goto L_00411d2e;
L_00411d1d:; BB(0x00411d1d);
    /* 00411d1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00411d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411d21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00411d24: call 0x411310 */ r_esp -= 4; W32(r_esp, 0x411d29u); f_00411310();
    /* 00411d29: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00411d2c: jmp 0x411d35 */ goto L_00411d35;
L_00411d2e:; BB(0x00411d2e);
    /* 00411d2e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00411d35:; BB(0x00411d35);
    /* 00411d35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411d38: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00411d3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00411d42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00411d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411d46: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00411d4b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00411d4e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x411d53u); f_005fc420();
    /* 00411d53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00411d56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00411d5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00411d5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00411d60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411d61: ret 4 */ FN_RET(0x00411cd0); r_esp += 8; return;
}

