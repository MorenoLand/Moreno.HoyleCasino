#include "protos.h"

void f_005345d0(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005345d0);
    /* 005345d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005345d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005345d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005345d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005345d7: mov eax, 0x15fcd */ r_eax = 0x15fcdu;
    /* 005345dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005345de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005345df: ret  */ FN_RET(0x005345d0); r_esp += 4; return;
}

void f_005345e0(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005345e0);
    /* 005345e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005345e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005345e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005345e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005345e7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005345eb: jne 0x5345f4 */ if (!fZ) goto L_005345f4;
L_005345ed:; BB(0x005345ed);
    /* 005345ed: mov eax, 9 */ r_eax = 0x9u;
    /* 005345f2: jmp 0x534606 */ goto L_00534606;
L_005345f4:; BB(0x005345f4);
    /* 005345f4: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005345f8: jne 0x534601 */ if (!fZ) goto L_00534601;
L_005345fa:; BB(0x005345fa);
    /* 005345fa: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005345ff: jmp 0x534606 */ goto L_00534606;
L_00534601:; BB(0x00534601);
    /* 00534601: mov eax, 0x17 */ r_eax = 0x17u;
L_00534606:; BB(0x00534606);
    /* 00534606: mov esp, ebp */ r_esp = r_ebp;
    /* 00534608: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534609: ret 4 */ FN_RET(0x005345e0); r_esp += 8; return;
}

void f_00534610(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534610);
    /* 00534610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534611: mov ebp, esp */ r_ebp = r_esp;
    /* 00534613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534617: mov eax, 0x15fb9 */ r_eax = 0x15fb9u;
    /* 0053461c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053461e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053461f: ret  */ FN_RET(0x00534610); r_esp += 4; return;
}

void f_00534620(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534620);
    /* 00534620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534621: mov ebp, esp */ r_ebp = r_esp;
    /* 00534623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534627: mov eax, 0x15faf */ r_eax = 0x15fafu;
    /* 0053462c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053462e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053462f: ret  */ FN_RET(0x00534620); r_esp += 4; return;
}

void f_00534630(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534630);
    /* 00534630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534631: mov ebp, esp */ r_ebp = r_esp;
    /* 00534633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534637: mov eax, 0x15ff1 */ r_eax = 0x15ff1u;
    /* 0053463c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053463e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053463f: ret  */ FN_RET(0x00534630); r_esp += 4; return;
}

void f_00534640(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534640);
    /* 00534640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534641: mov ebp, esp */ r_ebp = r_esp;
    /* 00534643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534647: mov eax, 0x15fce */ r_eax = 0x15fceu;
    /* 0053464c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053464e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053464f: ret  */ FN_RET(0x00534640); r_esp += 4; return;
}

void f_00534650(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534650);
    /* 00534650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534651: mov ebp, esp */ r_ebp = r_esp;
    /* 00534653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534657: mov eax, 0x1600e */ r_eax = 0x1600eu;
    /* 0053465c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053465e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053465f: ret  */ FN_RET(0x00534650); r_esp += 4; return;
}

void f_00534660(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534660);
    /* 00534660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534661: mov ebp, esp */ r_ebp = r_esp;
    /* 00534663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534667: mov eax, 0x15fc2 */ r_eax = 0x15fc2u;
    /* 0053466c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053466e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053466f: ret  */ FN_RET(0x00534660); r_esp += 4; return;
}

void f_00534670(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534670);
    /* 00534670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534671: mov ebp, esp */ r_ebp = r_esp;
    /* 00534673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534677: mov eax, 0x15fbf */ r_eax = 0x15fbfu;
    /* 0053467c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053467e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053467f: ret  */ FN_RET(0x00534670); r_esp += 4; return;
}

void f_00534680(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534680);
    /* 00534680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534681: mov ebp, esp */ r_ebp = r_esp;
    /* 00534683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534687: mov eax, 0x15fb0 */ r_eax = 0x15fb0u;
    /* 0053468c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053468e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053468f: ret  */ FN_RET(0x00534680); r_esp += 4; return;
}

void f_00534690(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534690);
    /* 00534690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534691: mov ebp, esp */ r_ebp = r_esp;
    /* 00534693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534697: mov eax, 0x1605a */ r_eax = 0x1605au;
    /* 0053469c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053469e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053469f: ret  */ FN_RET(0x00534690); r_esp += 4; return;
}

void f_005346a0(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005346a0);
    /* 005346a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005346a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005346a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005346a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005346a7: mov eax, 0x16004 */ r_eax = 0x16004u;
    /* 005346ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005346ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005346af: ret  */ FN_RET(0x005346a0); r_esp += 4; return;
}

void f_005346b0(void) /* sub_5346B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005346b0);
    /* 005346b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005346b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005346b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005346b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005346b7: mov eax, 0x15ff3 */ r_eax = 0x15ff3u;
    /* 005346bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005346be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005346bf: ret  */ FN_RET(0x005346b0); r_esp += 4; return;
}

void f_005346c0(void) /* sub_5346C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005346c0);
    /* 005346c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005346c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005346c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005346c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005346c7: mov eax, 0x15fd1 */ r_eax = 0x15fd1u;
    /* 005346cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005346ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005346cf: ret  */ FN_RET(0x005346c0); r_esp += 4; return;
}

void f_005346d0(void) /* sub_5346D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005346d0);
    /* 005346d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005346d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005346d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005346d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005346d7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005346db: jne 0x5346e4 */ if (!fZ) goto L_005346e4;
L_005346dd:; BB(0x005346dd);
    /* 005346dd: mov eax, 0xd */ r_eax = 0xdu;
    /* 005346e2: jmp 0x534710 */ goto L_00534710;
L_005346e4:; BB(0x005346e4);
    /* 005346e4: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005346e8: jne 0x5346f1 */ if (!fZ) goto L_005346f1;
L_005346ea:; BB(0x005346ea);
    /* 005346ea: mov eax, 0x16 */ r_eax = 0x16u;
    /* 005346ef: jmp 0x534710 */ goto L_00534710;
L_005346f1:; BB(0x005346f1);
    /* 005346f1: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005346f5: jne 0x5346fe */ if (!fZ) goto L_005346fe;
L_005346f7:; BB(0x005346f7);
    /* 005346f7: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 005346fc: jmp 0x534710 */ goto L_00534710;
L_005346fe:; BB(0x005346fe);
    /* 005346fe: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534702: jne 0x53470b */ if (!fZ) goto L_0053470b;
L_00534704:; BB(0x00534704);
    /* 00534704: mov eax, 0x28 */ r_eax = 0x28u;
    /* 00534709: jmp 0x534710 */ goto L_00534710;
L_0053470b:; BB(0x0053470b);
    /* 0053470b: mov eax, 0x31 */ r_eax = 0x31u;
L_00534710:; BB(0x00534710);
    /* 00534710: mov esp, ebp */ r_esp = r_ebp;
    /* 00534712: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534713: ret 4 */ FN_RET(0x005346d0); r_esp += 8; return;
}

void f_00534730(void) /* ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534730);
    /* 00534730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534731: mov ebp, esp */ r_ebp = r_esp;
    /* 00534733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534737: mov eax, 0x30f070 */ r_eax = 0x30f070u;
    /* 0053473c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053473e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053473f: ret  */ FN_RET(0x00534730); r_esp += 4; return;
}

void f_00534740(void) /* ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534740);
    /* 00534740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534741: mov ebp, esp */ r_ebp = r_esp;
    /* 00534743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534747: mov eax, 0x30f056 */ r_eax = 0x30f056u;
    /* 0053474c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053474e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053474f: ret  */ FN_RET(0x00534740); r_esp += 4; return;
}

void f_00534750(void) /* ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534750);
    /* 00534750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534751: mov ebp, esp */ r_ebp = r_esp;
    /* 00534753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534757: mov eax, 0x30f057 */ r_eax = 0x30f057u;
    /* 0053475c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053475e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053475f: ret  */ FN_RET(0x00534750); r_esp += 4; return;
}

void f_00534760(void) /* ?GetRuntimeClass@CComboBox@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534760);
    /* 00534760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534761: mov ebp, esp */ r_ebp = r_esp;
    /* 00534763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534767: mov eax, 0x30f0b6 */ r_eax = 0x30f0b6u;
    /* 0053476c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053476e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053476f: ret  */ FN_RET(0x00534760); r_esp += 4; return;
}

void f_00534770(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534770);
    /* 00534770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534771: mov ebp, esp */ r_ebp = r_esp;
    /* 00534773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534777: mov eax, 0x30f071 */ r_eax = 0x30f071u;
    /* 0053477c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053477e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053477f: ret  */ FN_RET(0x00534770); r_esp += 4; return;
}

void f_00534780(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534780);
    /* 00534780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534781: mov ebp, esp */ r_ebp = r_esp;
    /* 00534783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534787: mov eax, 0x30f072 */ r_eax = 0x30f072u;
    /* 0053478c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053478e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053478f: ret  */ FN_RET(0x00534780); r_esp += 4; return;
}

void f_00534860(void) /* ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534860);
    /* 00534860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534861: mov ebp, esp */ r_ebp = r_esp;
    /* 00534863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534867: mov eax, 0x30f06e */ r_eax = 0x30f06eu;
    /* 0053486c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053486e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053486f: ret  */ FN_RET(0x00534860); r_esp += 4; return;
}

void f_00534870(void) /* ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534870);
    /* 00534870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534871: mov ebp, esp */ r_ebp = r_esp;
    /* 00534873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534877: mov eax, 0x30f06f */ r_eax = 0x30f06fu;
    /* 0053487c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053487e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053487f: ret  */ FN_RET(0x00534870); r_esp += 4; return;
}

void f_00534880(void) /* ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534880);
    /* 00534880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534881: mov ebp, esp */ r_ebp = r_esp;
    /* 00534883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534887: mov eax, 0x30f077 */ r_eax = 0x30f077u;
    /* 0053488c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053488e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053488f: ret  */ FN_RET(0x00534880); r_esp += 4; return;
}

void f_00534890(void) /* ?GetRuntimeClass@CComboBox@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534890);
    /* 00534890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534891: mov ebp, esp */ r_ebp = r_esp;
    /* 00534893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534897: mov eax, 0x30f078 */ r_eax = 0x30f078u;
    /* 0053489c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053489e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053489f: ret  */ FN_RET(0x00534890); r_esp += 4; return;
}

void f_005348a0(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005348a0);
    /* 005348a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005348a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005348a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005348a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005348a7: mov eax, 0x30f0b4 */ r_eax = 0x30f0b4u;
    /* 005348ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005348ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348af: ret  */ FN_RET(0x005348a0); r_esp += 4; return;
}

void f_005348b0(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005348b0);
    /* 005348b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005348b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005348b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005348b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005348b7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005348bb: jne 0x5348c4 */ if (!fZ) goto L_005348c4;
L_005348bd:; BB(0x005348bd);
    /* 005348bd: mov eax, 0xb */ r_eax = 0xbu;
    /* 005348c2: jmp 0x5348d6 */ goto L_005348d6;
L_005348c4:; BB(0x005348c4);
    /* 005348c4: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005348c8: jne 0x5348d1 */ if (!fZ) goto L_005348d1;
L_005348ca:; BB(0x005348ca);
    /* 005348ca: mov eax, 0x14 */ r_eax = 0x14u;
    /* 005348cf: jmp 0x5348d6 */ goto L_005348d6;
L_005348d1:; BB(0x005348d1);
    /* 005348d1: mov eax, 0x1d */ r_eax = 0x1du;
L_005348d6:; BB(0x005348d6);
    /* 005348d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005348d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348d9: ret 4 */ FN_RET(0x005348b0); r_esp += 8; return;
}

void f_00534910(void) /* ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534910);
    /* 00534910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534911: mov ebp, esp */ r_ebp = r_esp;
    /* 00534913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534917: mov eax, 0x30f080 */ r_eax = 0x30f080u;
    /* 0053491c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053491e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053491f: ret  */ FN_RET(0x00534910); r_esp += 4; return;
}

void f_00534920(void) /* ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534920);
    /* 00534920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534921: mov ebp, esp */ r_ebp = r_esp;
    /* 00534923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534927: mov eax, 0x30f081 */ r_eax = 0x30f081u;
    /* 0053492c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053492e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053492f: ret  */ FN_RET(0x00534920); r_esp += 4; return;
}

void f_00534930(void) /* ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534930);
    /* 00534930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534931: mov ebp, esp */ r_ebp = r_esp;
    /* 00534933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534937: mov eax, 0x30f082 */ r_eax = 0x30f082u;
    /* 0053493c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053493e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053493f: ret  */ FN_RET(0x00534930); r_esp += 4; return;
}

void f_00534940(void) /* ?GetRuntimeClass@CComboBox@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534940);
    /* 00534940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534941: mov ebp, esp */ r_ebp = r_esp;
    /* 00534943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534947: mov eax, 0x30f0a1 */ r_eax = 0x30f0a1u;
    /* 0053494c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053494e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053494f: ret  */ FN_RET(0x00534940); r_esp += 4; return;
}

void f_00534950(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534950);
    /* 00534950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534951: mov ebp, esp */ r_ebp = r_esp;
    /* 00534953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534957: mov eax, 0x30f0a0 */ r_eax = 0x30f0a0u;
    /* 0053495c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053495e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053495f: ret  */ FN_RET(0x00534950); r_esp += 4; return;
}

void f_00534960(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534960);
    /* 00534960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534961: mov ebp, esp */ r_ebp = r_esp;
    /* 00534963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534967: mov eax, 8 */ r_eax = 0x8u;
    /* 0053496c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053496e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053496f: ret 4 */ FN_RET(0x00534960); r_esp += 8; return;
}

void f_00534980(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534980);
    /* 00534980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534981: mov ebp, esp */ r_ebp = r_esp;
    /* 00534983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534987: mov eax, 0x30f083 */ r_eax = 0x30f083u;
    /* 0053498c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053498e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053498f: ret  */ FN_RET(0x00534980); r_esp += 4; return;
}

void f_00534990(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534990);
    /* 00534990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534991: mov ebp, esp */ r_ebp = r_esp;
    /* 00534993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534997: mov eax, 0x30f0a3 */ r_eax = 0x30f0a3u;
    /* 0053499c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053499e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053499f: ret  */ FN_RET(0x00534990); r_esp += 4; return;
}

void f_005349a0(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349a0);
    /* 005349a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349a7: mov eax, 0x30f0a2 */ r_eax = 0x30f0a2u;
    /* 005349ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005349ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349af: ret  */ FN_RET(0x005349a0); r_esp += 4; return;
}

void f_005349b0(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349b0);
    /* 005349b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349b7: mov eax, 0x30f084 */ r_eax = 0x30f084u;
    /* 005349bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005349be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349bf: ret  */ FN_RET(0x005349b0); r_esp += 4; return;
}

void f_005349c0(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349c0);
    /* 005349c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349c7: mov eax, 0x30f05b */ r_eax = 0x30f05bu;
    /* 005349cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005349ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349cf: ret  */ FN_RET(0x005349c0); r_esp += 4; return;
}

void f_005349d0(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349d0);
    /* 005349d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349d7: mov eax, 0x37 */ r_eax = 0x37u;
    /* 005349dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005349de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349df: ret  */ FN_RET(0x005349d0); r_esp += 4; return;
}

void f_005349e0(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349e0);
    /* 005349e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349e7: mov eax, 0x30f0a5 */ r_eax = 0x30f0a5u;
    /* 005349ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005349ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349ef: ret  */ FN_RET(0x005349e0); r_esp += 4; return;
}

void f_005349f0(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005349f0);
    /* 005349f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005349f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005349f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005349f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005349f7: mov eax, 0x30f0a4 */ r_eax = 0x30f0a4u;
    /* 005349fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005349fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005349ff: ret  */ FN_RET(0x005349f0); r_esp += 4; return;
}

void f_00534a00(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a00);
    /* 00534a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a07: mov eax, 0x30f0bc */ r_eax = 0x30f0bcu;
    /* 00534a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a0f: ret  */ FN_RET(0x00534a00); r_esp += 4; return;
}

void f_00534a10(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a10);
    /* 00534a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a17: mov eax, 0x30f095 */ r_eax = 0x30f095u;
    /* 00534a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a1f: ret  */ FN_RET(0x00534a10); r_esp += 4; return;
}

void f_00534a20(void) /* sub_534A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a20);
    /* 00534a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a27: mov eax, 0x30f05e */ r_eax = 0x30f05eu;
    /* 00534a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a2f: ret  */ FN_RET(0x00534a20); r_esp += 4; return;
}

void f_00534a30(void) /* sub_534A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a30);
    /* 00534a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a37: mov eax, 0x30f05f */ r_eax = 0x30f05fu;
    /* 00534a3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a3f: ret  */ FN_RET(0x00534a30); r_esp += 4; return;
}

void f_00534a40(void) /* sub_534A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a40);
    /* 00534a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a47: mov eax, 0x2d */ r_eax = 0x2du;
    /* 00534a4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a4f: ret  */ FN_RET(0x00534a40); r_esp += 4; return;
}

void f_00534a50(void) /* sub_534A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a50);
    /* 00534a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a57: mov eax, 0x30f09f */ r_eax = 0x30f09fu;
    /* 00534a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a5f: ret  */ FN_RET(0x00534a50); r_esp += 4; return;
}

void f_00534a60(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a60);
    /* 00534a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a67: mov eax, 0x30f09e */ r_eax = 0x30f09eu;
    /* 00534a6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a6f: ret  */ FN_RET(0x00534a60); r_esp += 4; return;
}

void f_00534a70(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a70);
    /* 00534a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a77: mov eax, 0x30f0b2 */ r_eax = 0x30f0b2u;
    /* 00534a7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a7f: ret  */ FN_RET(0x00534a70); r_esp += 4; return;
}

void f_00534a80(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a80);
    /* 00534a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a87: mov eax, 0x30f079 */ r_eax = 0x30f079u;
    /* 00534a8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a8f: ret  */ FN_RET(0x00534a80); r_esp += 4; return;
}

void f_00534a90(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534a90);
    /* 00534a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00534a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534a97: mov eax, 0x30f0ba */ r_eax = 0x30f0bau;
    /* 00534a9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534a9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534a9f: ret  */ FN_RET(0x00534a90); r_esp += 4; return;
}

void f_00534aa0(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534aa0);
    /* 00534aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534aa7: mov eax, 0x30f098 */ r_eax = 0x30f098u;
    /* 00534aac: mov esp, ebp */ r_esp = r_ebp;
    /* 00534aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534aaf: ret  */ FN_RET(0x00534aa0); r_esp += 4; return;
}

void f_00534ab0(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ab0);
    /* 00534ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ab7: mov eax, 0x30f099 */ r_eax = 0x30f099u;
    /* 00534abc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534abf: ret  */ FN_RET(0x00534ab0); r_esp += 4; return;
}

void f_00534ac0(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ac0);
    /* 00534ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ac7: mov eax, 7 */ r_eax = 0x7u;
    /* 00534acc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534ace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534acf: ret  */ FN_RET(0x00534ac0); r_esp += 4; return;
}

void f_00534ad0(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ad0);
    /* 00534ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ad7: mov eax, 0x30f07c */ r_eax = 0x30f07cu;
    /* 00534adc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534ade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534adf: ret  */ FN_RET(0x00534ad0); r_esp += 4; return;
}

void f_00534ae0(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ae0);
    /* 00534ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ae7: mov eax, 0x30f06c */ r_eax = 0x30f06cu;
    /* 00534aec: mov esp, ebp */ r_esp = r_ebp;
    /* 00534aee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534aef: ret  */ FN_RET(0x00534ae0); r_esp += 4; return;
}

void f_00534af0(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534af0);
    /* 00534af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534af7: mov eax, 0x30f0ad */ r_eax = 0x30f0adu;
    /* 00534afc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534aff: ret  */ FN_RET(0x00534af0); r_esp += 4; return;
}

void f_00534b00(void) /* sub_534B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b00);
    /* 00534b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b07: mov eax, 0x30f0ac */ r_eax = 0x30f0acu;
    /* 00534b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b0f: ret  */ FN_RET(0x00534b00); r_esp += 4; return;
}

void f_00534b10(void) /* sub_534B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b10);
    /* 00534b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b17: mov eax, 0x30f07d */ r_eax = 0x30f07du;
    /* 00534b1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b1f: ret  */ FN_RET(0x00534b10); r_esp += 4; return;
}

void f_00534b20(void) /* sub_534B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b20);
    /* 00534b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b27: mov eax, 0x30f0af */ r_eax = 0x30f0afu;
    /* 00534b2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b2f: ret  */ FN_RET(0x00534b20); r_esp += 4; return;
}

void f_00534b30(void) /* sub_534B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b30);
    /* 00534b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b37: mov eax, 0x30f0ae */ r_eax = 0x30f0aeu;
    /* 00534b3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b3f: ret  */ FN_RET(0x00534b30); r_esp += 4; return;
}

void f_00534b40(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b40);
    /* 00534b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b47: mov eax, 0x30f07e */ r_eax = 0x30f07eu;
    /* 00534b4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b4f: ret  */ FN_RET(0x00534b40); r_esp += 4; return;
}

void f_00534b50(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b50);
    /* 00534b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b57: mov eax, 0x30f06d */ r_eax = 0x30f06du;
    /* 00534b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b5f: ret  */ FN_RET(0x00534b50); r_esp += 4; return;
}

void f_00534b60(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b60);
    /* 00534b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b67: mov eax, 0x30f0bb */ r_eax = 0x30f0bbu;
    /* 00534b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b6f: ret  */ FN_RET(0x00534b60); r_esp += 4; return;
}

void f_00534b70(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b70);
    /* 00534b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b77: mov eax, 0x30f0b1 */ r_eax = 0x30f0b1u;
    /* 00534b7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b7f: ret  */ FN_RET(0x00534b70); r_esp += 4; return;
}

void f_00534b80(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b80);
    /* 00534b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b87: mov eax, 0x30f0b0 */ r_eax = 0x30f0b0u;
    /* 00534b8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b8f: ret  */ FN_RET(0x00534b80); r_esp += 4; return;
}

void f_00534b90(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534b90);
    /* 00534b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00534b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534b97: mov eax, 0x30f073 */ r_eax = 0x30f073u;
    /* 00534b9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534b9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b9f: ret  */ FN_RET(0x00534b90); r_esp += 4; return;
}

void f_00534ba0(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ba0);
    /* 00534ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ba7: mov eax, 0x30f062 */ r_eax = 0x30f062u;
    /* 00534bac: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534baf: ret  */ FN_RET(0x00534ba0); r_esp += 4; return;
}

void f_00534bb0(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534bb0);
    /* 00534bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534bb7: mov eax, 0x30f063 */ r_eax = 0x30f063u;
    /* 00534bbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534bbf: ret  */ FN_RET(0x00534bb0); r_esp += 4; return;
}

void f_00534bc0(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534bc0);
    /* 00534bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534bc7: mov eax, 0x30f0b5 */ r_eax = 0x30f0b5u;
    /* 00534bcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534bcf: ret  */ FN_RET(0x00534bc0); r_esp += 4; return;
}

void f_00534bd0(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534bd0);
    /* 00534bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534bd7: mov eax, 0x30f074 */ r_eax = 0x30f074u;
    /* 00534bdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534bdf: ret  */ FN_RET(0x00534bd0); r_esp += 4; return;
}

void f_00534be0(void) /* sub_534BE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534be0);
    /* 00534be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534be7: mov eax, 0x30f075 */ r_eax = 0x30f075u;
    /* 00534bec: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534bef: ret  */ FN_RET(0x00534be0); r_esp += 4; return;
}

void f_00534bf0(void) /* sub_534BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534bf0);
    /* 00534bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534bf7: mov eax, 0x30f08a */ r_eax = 0x30f08au;
    /* 00534bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534bff: ret  */ FN_RET(0x00534bf0); r_esp += 4; return;
}

void f_00534c00(void) /* sub_534C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c00);
    /* 00534c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c07: mov eax, 0x30f052 */ r_eax = 0x30f052u;
    /* 00534c0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c0f: ret  */ FN_RET(0x00534c00); r_esp += 4; return;
}

void f_00534c10(void) /* sub_534C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c10);
    /* 00534c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c17: mov eax, 0x30f053 */ r_eax = 0x30f053u;
    /* 00534c1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c1f: ret  */ FN_RET(0x00534c10); r_esp += 4; return;
}

void f_00534cd0(void) /* ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534cd0);
    /* 00534cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534cd7: mov eax, 0x30f064 */ r_eax = 0x30f064u;
    /* 00534cdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534cde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534cdf: ret  */ FN_RET(0x00534cd0); r_esp += 4; return;
}

void f_00534ce0(void) /* ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ce0);
    /* 00534ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ce7: mov eax, 0x30f065 */ r_eax = 0x30f065u;
    /* 00534cec: mov esp, ebp */ r_esp = r_ebp;
    /* 00534cee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534cef: ret  */ FN_RET(0x00534ce0); r_esp += 4; return;
}

void f_00534cf0(void) /* ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534cf0);
    /* 00534cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534cf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534cf7: mov eax, 0x30f0b7 */ r_eax = 0x30f0b7u;
    /* 00534cfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534cff: ret  */ FN_RET(0x00534cf0); r_esp += 4; return;
}

void f_00534d00(void) /* ?GetRuntimeClass@CComboBox@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d00);
    /* 00534d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d07: mov eax, 0x30f096 */ r_eax = 0x30f096u;
    /* 00534d0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d0f: ret  */ FN_RET(0x00534d00); r_esp += 4; return;
}

void f_00534d10(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d10);
    /* 00534d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d17: mov eax, 0x30f097 */ r_eax = 0x30f097u;
    /* 00534d1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d1f: ret  */ FN_RET(0x00534d10); r_esp += 4; return;
}

void f_00534d20(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d20);
    /* 00534d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d27: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534d2b: jne 0x534d34 */ if (!fZ) goto L_00534d34;
L_00534d2d:; BB(0x00534d2d);
    /* 00534d2d: mov eax, 0xe */ r_eax = 0xeu;
    /* 00534d32: jmp 0x534d46 */ goto L_00534d46;
L_00534d34:; BB(0x00534d34);
    /* 00534d34: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534d38: jne 0x534d41 */ if (!fZ) goto L_00534d41;
L_00534d3a:; BB(0x00534d3a);
    /* 00534d3a: mov eax, 0x1a */ r_eax = 0x1au;
    /* 00534d3f: jmp 0x534d46 */ goto L_00534d46;
L_00534d41:; BB(0x00534d41);
    /* 00534d41: mov eax, 0x26 */ r_eax = 0x26u;
L_00534d46:; BB(0x00534d46);
    /* 00534d46: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d49: ret 4 */ FN_RET(0x00534d20); r_esp += 8; return;
}

void f_00534d70(void) /* ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d70);
    /* 00534d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d77: mov eax, 0x30f054 */ r_eax = 0x30f054u;
    /* 00534d7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d7f: ret  */ FN_RET(0x00534d70); r_esp += 4; return;
}

void f_00534d80(void) /* ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d80);
    /* 00534d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d87: mov eax, 0xf2 */ r_eax = 0xf2u;
    /* 00534d8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d8f: ret  */ FN_RET(0x00534d80); r_esp += 4; return;
}

void f_00534d90(void) /* ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d90);
    /* 00534d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d97: mov eax, 0x30f055 */ r_eax = 0x30f055u;
    /* 00534d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d9f: ret  */ FN_RET(0x00534d90); r_esp += 4; return;
}

void f_00534da0(void) /* ?GetRuntimeClass@CComboBox@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534da0);
    /* 00534da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534da7: mov eax, 0x30f0bd */ r_eax = 0x30f0bdu;
    /* 00534dac: mov esp, ebp */ r_esp = r_ebp;
    /* 00534dae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534daf: ret  */ FN_RET(0x00534da0); r_esp += 4; return;
}

void f_00534db0(void) /* ?GetRuntimeClass@CEdit@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534db0);
    /* 00534db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534db7: mov eax, 0x30f08c */ r_eax = 0x30f08cu;
    /* 00534dbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534dbf: ret  */ FN_RET(0x00534db0); r_esp += 4; return;
}

void f_00534dc0(void) /* ?GetRuntimeClass@CScrollBar@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534dc0);
    /* 00534dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534dc7: mov eax, 0x30f08d */ r_eax = 0x30f08du;
    /* 00534dcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534dcf: ret  */ FN_RET(0x00534dc0); r_esp += 4; return;
}

void f_00534ef0(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ef0);
    /* 00534ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ef7: mov eax, 3 */ r_eax = 0x3u;
    /* 00534efc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534efe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534eff: ret  */ FN_RET(0x00534ef0); r_esp += 4; return;
}

void f_00534f00(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f00);
    /* 00534f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f07: mov eax, 0x30f08f */ r_eax = 0x30f08fu;
    /* 00534f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f0f: ret  */ FN_RET(0x00534f00); r_esp += 4; return;
}

void f_00534f10(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f10);
    /* 00534f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f17: mov eax, 0x30f066 */ r_eax = 0x30f066u;
    /* 00534f1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f1f: ret  */ FN_RET(0x00534f10); r_esp += 4; return;
}

void f_00534f20(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f20);
    /* 00534f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f27: mov eax, 0x30f067 */ r_eax = 0x30f067u;
    /* 00534f2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f2f: ret  */ FN_RET(0x00534f20); r_esp += 4; return;
}

void f_00534f30(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f30);
    /* 00534f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f37: mov eax, 0xe9 */ r_eax = 0xe9u;
    /* 00534f3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f3f: ret  */ FN_RET(0x00534f30); r_esp += 4; return;
}

void f_00534f40(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f40);
    /* 00534f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f47: mov eax, 0x30f0a7 */ r_eax = 0x30f0a7u;
    /* 00534f4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f4f: ret  */ FN_RET(0x00534f40); r_esp += 4; return;
}

void f_00534f50(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f50);
    /* 00534f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f57: mov eax, 0x30f0a6 */ r_eax = 0x30f0a6u;
    /* 00534f5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f5f: ret  */ FN_RET(0x00534f50); r_esp += 4; return;
}

void f_00534f60(void) /* ?GetVertMargin@CMFCButton@@MBEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f60);
    /* 00534f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f67: mov eax, 5 */ r_eax = 0x5u;
    /* 00534f6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f6f: ret  */ FN_RET(0x00534f60); r_esp += 4; return;
}

void f_00534f70(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f70);
    /* 00534f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f77: mov eax, 0x30f090 */ r_eax = 0x30f090u;
    /* 00534f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f7f: ret  */ FN_RET(0x00534f70); r_esp += 4; return;
}

void f_00534f80(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f80);
    /* 00534f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f87: mov eax, 0x30f0a9 */ r_eax = 0x30f0a9u;
    /* 00534f8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f8f: ret  */ FN_RET(0x00534f80); r_esp += 4; return;
}

void f_00534f90(void) /* sub_534F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534f90);
    /* 00534f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00534f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534f97: mov eax, 0x30f0a8 */ r_eax = 0x30f0a8u;
    /* 00534f9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534f9f: ret  */ FN_RET(0x00534f90); r_esp += 4; return;
}

void f_00534fa0(void) /* sub_534FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534fa0);
    /* 00534fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534fa7: mov eax, 0x30f0b9 */ r_eax = 0x30f0b9u;
    /* 00534fac: mov esp, ebp */ r_esp = r_ebp;
    /* 00534fae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534faf: ret  */ FN_RET(0x00534fa0); r_esp += 4; return;
}

void f_00534fb0(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534fb0);
    /* 00534fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534fb7: mov eax, 0xd */ r_eax = 0xdu;
    /* 00534fbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534fbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534fbf: ret  */ FN_RET(0x00534fb0); r_esp += 4; return;
}

void f_00534fc0(void) /* sub_534FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534fc0);
    /* 00534fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534fc7: mov eax, 0x30f091 */ r_eax = 0x30f091u;
    /* 00534fcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534fce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534fcf: ret  */ FN_RET(0x00534fc0); r_esp += 4; return;
}

void f_00534fe0(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534fe0);
    /* 00534fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534fe7: mov eax, 0x30f0aa */ r_eax = 0x30f0aau;
    /* 00534fec: mov esp, ebp */ r_esp = r_ebp;
    /* 00534fee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534fef: ret  */ FN_RET(0x00534fe0); r_esp += 4; return;
}

void f_00534ff0(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ff0);
    /* 00534ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ff7: mov eax, 0x16012 */ r_eax = 0x16012u;
    /* 00534ffc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534ffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534fff: ret  */ FN_RET(0x00534ff0); r_esp += 4; return;
}

void f_00535000(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535000);
    /* 00535000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535001: mov ebp, esp */ r_ebp = r_esp;
    /* 00535003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535007: mov eax, 0x15ff5 */ r_eax = 0x15ff5u;
    /* 0053500c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053500e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053500f: ret  */ FN_RET(0x00535000); r_esp += 4; return;
}

void f_00535010(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535010);
    /* 00535010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535011: mov ebp, esp */ r_ebp = r_esp;
    /* 00535013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535017: mov eax, 0x15fa5 */ r_eax = 0x15fa5u;
    /* 0053501c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053501e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053501f: ret  */ FN_RET(0x00535010); r_esp += 4; return;
}

void f_00535020(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535020);
    /* 00535020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535021: mov ebp, esp */ r_ebp = r_esp;
    /* 00535023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535027: mov eax, 0x16052 */ r_eax = 0x16052u;
    /* 0053502c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053502e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053502f: ret  */ FN_RET(0x00535020); r_esp += 4; return;
}

void f_00535030(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535030);
    /* 00535030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535031: mov ebp, esp */ r_ebp = r_esp;
    /* 00535033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535037: mov eax, 0x16007 */ r_eax = 0x16007u;
    /* 0053503c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053503e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053503f: ret  */ FN_RET(0x00535030); r_esp += 4; return;
}

void f_00535040(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535040);
    /* 00535040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535041: mov ebp, esp */ r_ebp = r_esp;
    /* 00535043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535047: mov eax, 0xb1 */ r_eax = 0xb1u;
    /* 0053504c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053504e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053504f: ret  */ FN_RET(0x00535040); r_esp += 4; return;
}

void f_00535050(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535050);
    /* 00535050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535051: mov ebp, esp */ r_ebp = r_esp;
    /* 00535053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535057: mov eax, 0x35 */ r_eax = 0x35u;
    /* 0053505c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053505e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053505f: ret  */ FN_RET(0x00535050); r_esp += 4; return;
}

void f_00535060(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535060);
    /* 00535060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535061: mov ebp, esp */ r_ebp = r_esp;
    /* 00535063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535067: mov eax, 0x15ff6 */ r_eax = 0x15ff6u;
    /* 0053506c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053506e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053506f: ret  */ FN_RET(0x00535060); r_esp += 4; return;
}

void f_00535070(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535070);
    /* 00535070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535071: mov ebp, esp */ r_ebp = r_esp;
    /* 00535073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535077: mov eax, 0x15ff7 */ r_eax = 0x15ff7u;
    /* 0053507c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053507e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053507f: ret  */ FN_RET(0x00535070); r_esp += 4; return;
}

void f_00535080(void) /* sub_535080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535080);
    /* 00535080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535081: mov ebp, esp */ r_ebp = r_esp;
    /* 00535083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535087: mov eax, 7 */ r_eax = 0x7u;
    /* 0053508c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053508e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053508f: ret 4 */ FN_RET(0x00535080); r_esp += 8; return;
}

void f_005350a0(void) /* sub_5350A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005350a0);
    /* 005350a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005350a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005350a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005350a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005350a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005350aa: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5350afu); f_005e9e20();
    /* 005350af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005350b2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005350b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005350bb: mov dword ptr [ecx], 0x6c562c */ W32((u32)(r_ecx), 0x6c562cu);
    /* 005350c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005350c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005350c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005350c7: ret  */ FN_RET(0x005350a0); r_esp += 4; return;
}

void f_00535190(void) /* ??1_Mtx_guard@@QAE@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535190);
    /* 00535190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535191: mov ebp, esp */ r_ebp = r_esp;
    /* 00535193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535197: push 0x6c5784 */ { u32 v = 0x6c5784u; r_esp -= 4; W32(r_esp, v); }
    /* 0053519c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5351a1u); f_00630f40();
    /* 005351a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005351a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005351a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005351a7: ret  */ FN_RET(0x00535190); r_esp += 4; return;
}

void f_005351d0(void) /* unknown_libname_769 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005351d0);
    /* 005351d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005351d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005351d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005351d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005351d7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005351d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005351db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005351dc: ret  */ FN_RET(0x005351d0); r_esp += 4; return;
}

void f_00535200(void) /* unknown_libname_770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535200);
    /* 00535200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535201: mov ebp, esp */ r_ebp = r_esp;
    /* 00535203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535207: mov eax, 1 */ r_eax = 0x1u;
    /* 0053520c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053520e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053520f: ret  */ FN_RET(0x00535200); r_esp += 4; return;
}

void f_00535210(void) /* unknown_libname_771 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535210);
    /* 00535210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535211: mov ebp, esp */ r_ebp = r_esp;
    /* 00535213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535217: mov eax, 1 */ r_eax = 0x1u;
    /* 0053521c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053521e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053521f: ret  */ FN_RET(0x00535210); r_esp += 4; return;
}

void f_005352f0(void) /* unknown_libname_772 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005352f0);
    /* 005352f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005352f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005352f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005352f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005352f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005352f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005352fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005352fc: ret  */ FN_RET(0x005352f0); r_esp += 4; return;
}

void f_00535300(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535300);
    /* 00535300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535301: mov ebp, esp */ r_ebp = r_esp;
    /* 00535303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535307: mov eax, 0xd */ r_eax = 0xdu;
    /* 0053530c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053530e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053530f: ret  */ FN_RET(0x00535300); r_esp += 4; return;
}

void f_005358f0(void) /* unknown_libname_773 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005358f0);
    /* 005358f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005358f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005358f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005358f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005358f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005358f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005358fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005358fc: ret  */ FN_RET(0x005358f0); r_esp += 4; return;
}

void f_00535900(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535900);
    /* 00535900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535901: mov ebp, esp */ r_ebp = r_esp;
    /* 00535903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053590a: call 0x5d0980 */ r_esp -= 4; W32(r_esp, 0x53590fu); f_005d0980();
    /* 0053590f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535912: mov dword ptr [eax], 0x6c5904 */ W32((u32)(r_eax), 0x6c5904u);
    /* 00535918: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053591b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053591d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053591e: ret  */ FN_RET(0x00535900); r_esp += 4; return;
}

void f_00535920(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535920);
    /* 00535920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535921: mov ebp, esp */ r_ebp = r_esp;
    /* 00535923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535927: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053592a: mov dword ptr [eax], 0x6c5904 */ W32((u32)(r_eax), 0x6c5904u);
    /* 00535930: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535933: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x535938u); f_005d0a00();
    /* 00535938: mov esp, ebp */ r_esp = r_ebp;
    /* 0053593a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053593b: ret  */ FN_RET(0x00535920); r_esp += 4; return;
}

void f_00538520(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538520);
    /* 00538520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538521: mov ebp, esp */ r_ebp = r_esp;
    /* 00538523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538527: mov esp, ebp */ r_esp = r_ebp;
    /* 00538529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053852a: ret  */ FN_RET(0x00538520); r_esp += 4; return;
}

void f_00538530(void) /* ??_G_com_error@@UAEPAXI@Z_109 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538530);
    /* 00538530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538531: mov ebp, esp */ r_ebp = r_esp;
    /* 00538533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053853a: call 0x535920 */ r_esp -= 4; W32(r_esp, 0x53853fu); f_00535920();
    /* 0053853f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538542: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00538545: je 0x538553 */ if (fZ) goto L_00538553;
L_00538547:; BB(0x00538547);
    /* 00538547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053854a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053854b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x538550u); f_00686cae();
    /* 00538550: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00538553:; BB(0x00538553);
    /* 00538553: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00538556: mov esp, ebp */ r_esp = r_ebp;
    /* 00538558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538559: ret 4 */ FN_RET(0x00538530); r_esp += 8; return;
}

void f_00538560(void) /* ??0CCRTHeap@ATL@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538560);
    /* 00538560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538561: mov ebp, esp */ r_ebp = r_esp;
    /* 00538563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053856a: mov dword ptr [eax], 0x6c593c */ W32((u32)(r_eax), 0x6c593cu);
    /* 00538570: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00538573: mov esp, ebp */ r_esp = r_ebp;
    /* 00538575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538576: ret  */ FN_RET(0x00538560); r_esp += 4; return;
}

void f_00538580(void) /* ??1CNoTrackObject@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538580);
    /* 00538580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538581: mov ebp, esp */ r_ebp = r_esp;
    /* 00538583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053858a: mov dword ptr [eax], 0x6c593c */ W32((u32)(r_eax), 0x6c593cu);
    /* 00538590: mov esp, ebp */ r_esp = r_ebp;
    /* 00538592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538593: ret  */ FN_RET(0x00538580); r_esp += 4; return;
}

void f_005385a0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005385a0);
    /* 005385a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005385a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005385a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005385a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005385a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005385a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005385aa: ret  */ FN_RET(0x005385a0); r_esp += 4; return;
}

void f_00538cd0(void) /* ??B?$CTraceCategoryEx@$0CA@$0A@@ATL@@QAEIXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538cd0);
    /* 00538cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538cd7: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00538cdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00538cde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538cdf: ret  */ FN_RET(0x00538cd0); r_esp += 4; return;
}

void f_00539a10(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539a10);
    /* 00539a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00539a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539a17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a1a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x539a1fu); f_005e9e20();
    /* 00539a1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a22: mov dword ptr [eax], 0x6c59b0 */ W32((u32)(r_eax), 0x6c59b0u);
    /* 00539a28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00539a2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539a2e: ret  */ FN_RET(0x00539a10); r_esp += 4; return;
}

void f_00539a30(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539a30);
    /* 00539a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00539a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539a37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a3a: mov dword ptr [eax], 0x6c59b0 */ W32((u32)(r_eax), 0x6c59b0u);
    /* 00539a40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539a43: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x539a48u); f_005e9e40();
    /* 00539a48: mov esp, ebp */ r_esp = r_ebp;
    /* 00539a4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539a4b: ret  */ FN_RET(0x00539a30); r_esp += 4; return;
}

void f_0053a740(void) /* ??_G_com_error@@UAEPAXI@Z_110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a740);
    /* 0053a740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a741: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053a747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a74a: call 0x539a30 */ r_esp -= 4; W32(r_esp, 0x53a74fu); f_00539a30();
    /* 0053a74f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053a752: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053a755: je 0x53a763 */ if (fZ) goto L_0053a763;
L_0053a757:; BB(0x0053a757);
    /* 0053a757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a75b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53a760u); f_00686cae();
    /* 0053a760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053a763:; BB(0x0053a763);
    /* 0053a763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a766: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a768: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a769: ret 4 */ FN_RET(0x0053a740); r_esp += 8; return;
}

void f_0053c1b0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c1b0);
    /* 0053c1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053c1b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c1ba: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x53c1bfu); f_005cc1d0();
    /* 0053c1bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c1c2: mov dword ptr [eax], 0x6c5be4 */ W32((u32)(r_eax), 0x6c5be4u);
    /* 0053c1c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c1cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c1cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c1ce: ret  */ FN_RET(0x0053c1b0); r_esp += 4; return;
}

void f_0053c1d0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c1d0);
    /* 0053c1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053c1d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c1da: mov dword ptr [eax], 0x6c5be4 */ W32((u32)(r_eax), 0x6c5be4u);
    /* 0053c1e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c1e3: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x53c1e8u); f_005cc230();
    /* 0053c1e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c1ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c1eb: ret  */ FN_RET(0x0053c1d0); r_esp += 4; return;
}

void f_0053c3a0(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c3a0);
    /* 0053c3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053c3a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053c3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053c3ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c3b2: call 0x53c200 */ r_esp -= 4; W32(r_esp, 0x53c3b7u); f_0053c200();
    /* 0053c3b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c3b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c3ba: ret 8 */ FN_RET(0x0053c3a0); r_esp += 12; return;
}

void f_0053c460(void) /* ??1CExpandoObject@@UAE@XZ_29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c460);
    /* 0053c460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c461: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053c467: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c46a: mov dword ptr [eax], 0x6c5cdc */ W32((u32)(r_eax), 0x6c5cdcu);
    /* 0053c470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c473: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x53c478u); f_005fc150();
    /* 0053c478: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c47a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c47b: ret  */ FN_RET(0x0053c460); r_esp += 4; return;
}

void f_0053cce0(void) /* ??1CExpandoObject@@UAE@XZ_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053cce0);
    /* 0053cce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053cce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053cce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053cce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ccea: mov dword ptr [eax], 0x6c5d24 */ W32((u32)(r_eax), 0x6c5d24u);
    /* 0053ccf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ccf3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x53ccf8u); f_005f7260();
    /* 0053ccf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ccfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ccfb: ret  */ FN_RET(0x0053cce0); r_esp += 4; return;
}

void f_0053d1f0(void) /* ??_G_com_error@@UAEPAXI@Z_111 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d1f0);
    /* 0053d1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d1f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d1fa: call 0x53a840 */ r_esp -= 4; W32(r_esp, 0x53d1ffu); f_0053a840();
    /* 0053d1ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d202: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053d205: je 0x53d213 */ if (fZ) goto L_0053d213;
L_0053d207:; BB(0x0053d207);
    /* 0053d207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d20a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d20b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53d210u); f_00686cae();
    /* 0053d210: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053d213:; BB(0x0053d213);
    /* 0053d213: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d216: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d218: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d219: ret 4 */ FN_RET(0x0053d1f0); r_esp += 8; return;
}

void f_0053d220(void) /* ??_G_com_error@@UAEPAXI@Z_112 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d220);
    /* 0053d220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d221: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d22a: call 0x53bb80 */ r_esp -= 4; W32(r_esp, 0x53d22fu); f_0053bb80();
    /* 0053d22f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d232: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053d235: je 0x53d243 */ if (fZ) goto L_0053d243;
L_0053d237:; BB(0x0053d237);
    /* 0053d237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d23a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d23b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53d240u); f_00686cae();
    /* 0053d240: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053d243:; BB(0x0053d243);
    /* 0053d243: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d246: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d248: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d249: ret 4 */ FN_RET(0x0053d220); r_esp += 8; return;
}

void f_0053d250(void) /* ??_G_com_error@@UAEPAXI@Z_113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d250);
    /* 0053d250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d251: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d25a: call 0x53c1d0 */ r_esp -= 4; W32(r_esp, 0x53d25fu); f_0053c1d0();
    /* 0053d25f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d262: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053d265: je 0x53d273 */ if (fZ) goto L_0053d273;
L_0053d267:; BB(0x0053d267);
    /* 0053d267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d26a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d26b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53d270u); f_00686cae();
    /* 0053d270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053d273:; BB(0x0053d273);
    /* 0053d273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d276: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d279: ret 4 */ FN_RET(0x0053d250); r_esp += 8; return;
}

void f_0053d280(void) /* ??_G_com_error@@UAEPAXI@Z_114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d280);
    /* 0053d280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d281: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d28a: call 0x53c460 */ r_esp -= 4; W32(r_esp, 0x53d28fu); f_0053c460();
    /* 0053d28f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d292: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053d295: je 0x53d2a3 */ if (fZ) goto L_0053d2a3;
L_0053d297:; BB(0x0053d297);
    /* 0053d297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d29a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d29b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53d2a0u); f_00686cae();
    /* 0053d2a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053d2a3:; BB(0x0053d2a3);
    /* 0053d2a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d2a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d2a9: ret 4 */ FN_RET(0x0053d280); r_esp += 8; return;
}

void f_0053d2b0(void) /* ??_G_com_error@@UAEPAXI@Z_115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d2b0);
    /* 0053d2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d2b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2ba: call 0x53cce0 */ r_esp -= 4; W32(r_esp, 0x53d2bfu); f_0053cce0();
    /* 0053d2bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053d2c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053d2c5: je 0x53d2d3 */ if (fZ) goto L_0053d2d3;
L_0053d2c7:; BB(0x0053d2c7);
    /* 0053d2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d2cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53d2d0u); f_00686cae();
    /* 0053d2d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053d2d3:; BB(0x0053d2d3);
    /* 0053d2d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d2d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d2d9: ret 4 */ FN_RET(0x0053d2b0); r_esp += 8; return;
}

void f_0053d2e0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d2e0);
    /* 0053d2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d2e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2ea: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x53d2efu); f_005e9e20();
    /* 0053d2ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2f2: mov dword ptr [eax], 0x6c5da4 */ W32((u32)(r_eax), 0x6c5da4u);
    /* 0053d2f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d2fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d2fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d2fe: ret  */ FN_RET(0x0053d2e0); r_esp += 4; return;
}

void f_0053d300(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d300);
    /* 0053d300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d301: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d30a: mov dword ptr [eax], 0x6c5da4 */ W32((u32)(r_eax), 0x6c5da4u);
    /* 0053d310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d313: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x53d318u); f_005e9e40();
    /* 0053d318: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d31a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d31b: ret  */ FN_RET(0x0053d300); r_esp += 4; return;
}

void f_0053e980(void) /* ??_G_com_error@@UAEPAXI@Z_116 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053e980);
    /* 0053e980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e981: mov ebp, esp */ r_ebp = r_esp;
    /* 0053e983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053e987: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e98a: call 0x53d300 */ r_esp -= 4; W32(r_esp, 0x53e98fu); f_0053d300();
    /* 0053e98f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053e992: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053e995: je 0x53e9a3 */ if (fZ) goto L_0053e9a3;
L_0053e997:; BB(0x0053e997);
    /* 0053e997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e99a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e99b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53e9a0u); f_00686cae();
    /* 0053e9a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053e9a3:; BB(0x0053e9a3);
    /* 0053e9a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053e9a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0053e9a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e9a9: ret 4 */ FN_RET(0x0053e980); r_esp += 8; return;
}

void f_0053fc20(void) /* ??_G_com_error@@UAEPAXI@Z_117 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fc20);
    /* 0053fc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fc23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fc27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc2a: call 0x53ea50 */ r_esp -= 4; W32(r_esp, 0x53fc2fu); f_0053ea50();
    /* 0053fc2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fc32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0053fc35: je 0x53fc43 */ if (fZ) goto L_0053fc43;
L_0053fc37:; BB(0x0053fc37);
    /* 0053fc37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x53fc40u); f_00686cae();
    /* 0053fc40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053fc43:; BB(0x0053fc43);
    /* 0053fc43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fc46: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fc48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fc49: ret 4 */ FN_RET(0x0053fc20); r_esp += 8; return;
}

void f_0053fd40(void) /* ??1_Mtx_guard@@QAE@XZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd40);
    /* 0053fd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd47: push 0x6c5b68 */ { u32 v = 0x6c5b68u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd4c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53fd51u); f_00630f40();
    /* 0053fd51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fd54: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd57: ret  */ FN_RET(0x0053fd40); r_esp += 4; return;
}

void f_0053fd80(void) /* unknown_libname_774 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fd80);
    /* 0053fd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fd83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fd87: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fd89: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fd8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fd8c: ret  */ FN_RET(0x0053fd80); r_esp += 4; return;
}

void f_0053fdb0(void) /* unknown_libname_534 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fdb0);
    /* 0053fdb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fdb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fdb7: mov eax, 4 */ r_eax = 0x4u;
    /* 0053fdbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fdbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fdbf: ret  */ FN_RET(0x0053fdb0); r_esp += 4; return;
}

void f_0053fdc0(void) /* unknown_libname_535 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fdc0);
    /* 0053fdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fdc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fdc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fdc7: mov eax, 4 */ r_eax = 0x4u;
    /* 0053fdcc: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fdce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fdcf: ret  */ FN_RET(0x0053fdc0); r_esp += 4; return;
}

void f_0053ff20(void) /* unknown_libname_775 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ff20);
    /* 0053ff20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff21: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ff23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ff27: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053ff29: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ff2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ff2c: ret  */ FN_RET(0x0053ff20); r_esp += 4; return;
}

