#include "protos.h"

void f_00530450(void) /* MoveReelUpScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00530450);
    /* 00530450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530451: mov ebp, esp */ r_ebp = r_esp;
    /* 00530453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00530454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00530457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053045c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x530461u); f_005fc0d0();
    /* 00530461: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00530464: mov dword ptr [eax], 0x6c3de8 */ W32((u32)(r_eax), 0x6c3de8u);
    /* 0053046a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053046d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00530470: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00530473: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00530476: mov esp, ebp */ r_esp = r_ebp;
    /* 00530478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530479: ret 4 */ FN_RET(0x00530450); r_esp += 8; return;
}

void f_00530480(void) /* MoveReelUpScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00530480);
    /* 00530480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530481: mov ebp, esp */ r_ebp = r_esp;
    /* 00530483: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00530486: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00530489: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00530490: mov dword ptr [ebp - 4], 0xffffffe7 */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffe7u);
    /* 00530497: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053049a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x53049fu); f_005fc360();
    /* 0053049f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005304a2: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005304a6: ja 0x530998 */ if ((!fC&&!fZ)) goto L_00530998;
L_005304ac:; BB(0x005304ac);
    /* 005304ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005304af: jmp dword ptr [eax*4 + 0x53099c] */ { u32 t = R32((u32)(r_eax*4+0x53099cu)); switch (t) { case 0x5304b6u: goto L_005304b6; case 0x530755u: goto L_00530755; case 0x530952u: goto L_00530952; case 0x530965u: goto L_00530965; case 0x530978u: goto L_00530978; case 0x53098bu: goto L_0053098b; default: UNSUP(0x005304af, "jump table entry is not a known target"); } }
L_005304b6:; BB(0x005304b6);
    /* 005304b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005304bc: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5304c1u); f_00637630();
    /* 005304c1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005304c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005304c6: je 0x5304dd */ if (fZ) goto L_005304dd;
L_005304c8:; BB(0x005304c8);
    /* 005304c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005304ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005304d0: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5304d5u); f_00637810();
    /* 005304d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005304d7: jne 0x53070f */ if (!fZ) goto L_0053070f;
L_005304dd:; BB(0x005304dd);
    /* 005304dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005304e0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005304e3: movzx ecx, byte ptr [eax + 0x19e] */ r_ecx = (u32)R8((u32)(r_eax+0x19eu));
    /* 005304ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005304ec: jne 0x53050f */ if (!fZ) goto L_0053050f;
L_005304ee:; BB(0x005304ee);
    /* 005304ee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005304f1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005304f4: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 005304fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005304fd: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00530500: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00530506: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00530508: mov ecx, edx */ r_ecx = r_edx;
    /* 0053050a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0053050d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53050fu); call_ind(t); }
L_0053050f:; BB(0x0053050f);
    /* 0053050f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530512: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530515: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0053051b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053051e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530521: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00530527: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530529: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0053052c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53052eu); call_ind(t); }
    /* 0053052e: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00530531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530532: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530535: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530538: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0053053e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530541: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530544: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0053054a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053054c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0053054f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530551u); call_ind(t); }
    /* 00530551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530552: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530555: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530558: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0053055e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530561: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530564: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0053056a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053056c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0053056f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530571u); call_ind(t); }
    /* 00530571: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530574: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530577: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0053057d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530580: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530583: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00530589: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053058b: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0053058e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530590u); call_ind(t); }
    /* 00530590: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00530593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530594: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530597: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053059a: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005305a0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305a3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005305a6: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005305ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005305ae: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005305b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5305b3u); call_ind(t); }
    /* 005305b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005305b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305b7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005305ba: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005305c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305c3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005305c6: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 005305cc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005305ce: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005305d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5305d3u); call_ind(t); }
    /* 005305d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305d6: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005305d9: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005305df: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305e2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005305e5: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 005305eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005305ed: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005305f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5305f2u); call_ind(t); }
    /* 005305f2: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005305f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005305f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005305f9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005305fc: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530602: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530605: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530608: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0053060e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530610: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530613: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530615u); call_ind(t); }
    /* 00530615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530616: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530619: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053061c: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00530622: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530625: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530628: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0053062e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530630: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530633: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530635u); call_ind(t); }
    /* 00530635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530638: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053063b: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00530641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530644: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530647: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0053064d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053064f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530652: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530654u); call_ind(t); }
    /* 00530654: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00530657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530658: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053065b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053065e: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00530664: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530667: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053066a: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00530670: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530672: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530675: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530677u); call_ind(t); }
    /* 00530677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530678: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053067b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053067e: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00530684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530687: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053068a: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00530690: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530692: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530695: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530697u); call_ind(t); }
    /* 00530697: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053069a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053069d: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 005306a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005306a6: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005306a9: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 005306af: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005306b1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005306b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5306b6u); call_ind(t); }
    /* 005306b6: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005306b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005306ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005306bd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005306c0: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005306c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005306c9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005306cc: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 005306d2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005306d4: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005306d7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5306d9u); call_ind(t); }
    /* 005306d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005306da: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005306dd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005306e0: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 005306e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005306e9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005306ec: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 005306f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005306f4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005306f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5306f9u); call_ind(t); }
    /* 005306f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005306fb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005306fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530700: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530702: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530705: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53070au); call_ind(t); }
    /* 0053070a: jmp 0x530998 */ goto L_00530998;
L_0053070f:; BB(0x0053070f);
    /* 0053070f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530712: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530715: movzx eax, byte ptr [edx + 0x19e] */ r_eax = (u32)R8((u32)(r_edx+0x19eu));
    /* 0053071c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053071e: jne 0x53073f */ if (!fZ) goto L_0053073f;
L_00530720:; BB(0x00530720);
    /* 00530720: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530723: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530726: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0053072c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053072f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530732: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00530738: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053073a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0053073d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53073fu); call_ind(t); }
L_0053073f:; BB(0x0053073f);
    /* 0053073f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530741: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530743: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530746: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053074b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053074e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530750u); call_ind(t); }
    /* 00530750: jmp 0x530998 */ goto L_00530998;
L_00530755:; BB(0x00530755);
    /* 00530755: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530758: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053075b: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00530761: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530764: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530767: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0053076d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053076f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530772: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530774u); call_ind(t); }
    /* 00530774: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00530777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530778: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053077b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053077e: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00530784: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530787: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053078a: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00530790: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530792: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530795: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530797u); call_ind(t); }
    /* 00530797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530798: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053079b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053079e: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005307a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307a7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005307aa: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 005307b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005307b2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005307b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5307b7u); call_ind(t); }
    /* 005307b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307ba: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005307bd: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005307c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307c6: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005307c9: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005307cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005307d1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005307d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5307d6u); call_ind(t); }
    /* 005307d6: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005307d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005307da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307dd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005307e0: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005307e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307e9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005307ec: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 005307f2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005307f4: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005307f7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5307f9u); call_ind(t); }
    /* 005307f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005307fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005307fd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530800: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00530806: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530809: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053080c: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00530812: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530814: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530817: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530819u); call_ind(t); }
    /* 00530819: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053081c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053081f: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530825: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530828: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053082b: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00530831: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530833: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530836: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530838u); call_ind(t); }
    /* 00530838: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053083b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053083c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053083f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530842: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00530848: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053084b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053084e: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00530854: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530856: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530859: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53085bu); call_ind(t); }
    /* 0053085b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053085c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053085f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530862: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530868: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053086b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053086e: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00530874: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530876: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530879: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53087bu); call_ind(t); }
    /* 0053087b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053087e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530881: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00530887: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053088a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053088d: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00530893: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530895: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53089au); call_ind(t); }
    /* 0053089a: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053089d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053089e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308a1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005308a4: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005308aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308ad: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005308b0: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005308b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005308b8: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005308bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5308bdu); call_ind(t); }
    /* 005308bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005308be: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308c1: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005308c4: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 005308ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308cd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005308d0: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005308d6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005308d8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005308db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5308ddu); call_ind(t); }
    /* 005308dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308e0: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005308e3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005308e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005308ec: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005308ef: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 005308f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005308f7: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005308fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5308fcu); call_ind(t); }
    /* 005308fc: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005308ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530900: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530903: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530906: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0053090c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053090f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530912: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00530918: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053091a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0053091d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53091fu); call_ind(t); }
    /* 0053091f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530920: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530923: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530926: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0053092c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053092f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530932: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00530938: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053093a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0053093d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53093fu); call_ind(t); }
    /* 0053093f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530941: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00530943: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530946: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530948: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053094b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053094e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530950u); call_ind(t); }
    /* 00530950: jmp 0x530998 */ goto L_00530998;
L_00530952:; BB(0x00530952);
    /* 00530952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530954: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00530956: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530959: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053095b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053095e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530963u); call_ind(t); }
    /* 00530963: jmp 0x530998 */ goto L_00530998;
L_00530965:; BB(0x00530965);
    /* 00530965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530967: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00530969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053096c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053096e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530971: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530974: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530976u); call_ind(t); }
    /* 00530976: jmp 0x530998 */ goto L_00530998;
L_00530978:; BB(0x00530978);
    /* 00530978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053097a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053097c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053097f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530984: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530987: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530989u); call_ind(t); }
    /* 00530989: jmp 0x530998 */ goto L_00530998;
L_0053098b:; BB(0x0053098b);
    /* 0053098b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053098d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530990: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00530993: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x530998u); f_005f5df0();
L_00530998:; BB(0x00530998);
    /* 00530998: mov esp, ebp */ r_esp = r_ebp;
    /* 0053099a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053099b: ret  */ FN_RET(0x00530480); r_esp += 4; return;
}

