#include "protos.h"

void f_0045f830(void) /* sub_45F830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f830);
    /* 0045f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f837: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f83b: jne 0x45f853 */ if (!fZ) goto L_0045f853;
L_0045f83d:; BB(0x0045f83d);
    /* 0045f83d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f83f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045f845: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x45f84au); f_006375b0();
    /* 0045f84a: mov ecx, eax */ r_ecx = r_eax;
    /* 0045f84c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x45f851u); f_0063aae0();
    /* 0045f851: jmp 0x45f868 */ goto L_0045f868;
L_0045f853:; BB(0x0045f853);
    /* 0045f853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f855: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0045f85a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0045f85d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045f860: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0045f863: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x45f868u); f_0063aae0();
L_0045f868:; BB(0x0045f868);
    /* 0045f868: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f86a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f86b: ret 4 */ FN_RET(0x0045f830); r_esp += 8; return;
}

void f_0045f870(void) /* sub_45F870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f870);
    /* 0045f870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f871: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f879: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f87c: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f881u); f_0045f830();
    /* 0045f881: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0045f883: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f886: ret  */ FN_RET(0x0045f870); r_esp += 4; return;
}

void f_0045f890(void) /* sub_45F890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f890);
    /* 0045f890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f891: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f899: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f89c: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f8a1u); f_0045f830();
    /* 0045f8a1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045f8a4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0045f8a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f8a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f8a9: ret 4 */ FN_RET(0x0045f890); r_esp += 8; return;
}

void f_0045f8b0(void) /* sub_45F8B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f8b0);
    /* 0045f8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f8b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f8bc: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f8c1u); f_0045f830();
    /* 0045f8c1: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0045f8c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f8c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f8c7: ret  */ FN_RET(0x0045f8b0); r_esp += 4; return;
}

void f_0045f8d0(void) /* sub_45F8D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f8d0);
    /* 0045f8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f8d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f8d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f8dc: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f8e1u); f_0045f830();
    /* 0045f8e1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045f8e4: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 0045f8e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045f8ed: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x45f8f2u); f_006375b0();
    /* 0045f8f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0045f8f4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x45f8f9u); f_0063b0a0();
    /* 0045f8f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f8fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f8fc: ret 4 */ FN_RET(0x0045f8d0); r_esp += 8; return;
}

void f_0045f900(void) /* sub_45F900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f900);
    /* 0045f900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f901: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f907: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f90c: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f911u); f_0045f830();
    /* 0045f911: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0045f914: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f916: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f917: ret  */ FN_RET(0x0045f900); r_esp += 4; return;
}

void f_0045f920(void) /* sub_45F920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f920);
    /* 0045f920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f921: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f927: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f929: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f92c: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f931u); f_0045f830();
    /* 0045f931: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045f934: mov byte ptr [eax + 2], cl */ W8((u32)(r_eax+0x2u), (u8)r_ecx);
    /* 0045f937: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f93a: ret 4 */ FN_RET(0x0045f920); r_esp += 8; return;
}

void f_0045f940(void) /* sub_45F940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f940);
    /* 0045f940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f941: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f947: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045f94d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45f952u); f_005da830();
    /* 0045f952: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045f955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f957: je 0x45f95d */ if (fZ) goto L_0045f95d;
L_0045f959:; BB(0x0045f959);
    /* 0045f959: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f95b: jmp 0x45f96a */ goto L_0045f96a;
L_0045f95d:; BB(0x0045f95d);
    /* 0045f95d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f95f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f962: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f967u); f_0045f830();
    /* 0045f967: mov al, byte ptr [eax + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
L_0045f96a:; BB(0x0045f96a);
    /* 0045f96a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f96c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f96d: ret  */ FN_RET(0x0045f940); r_esp += 4; return;
}

void f_0045f970(void) /* sub_45F970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f970);
    /* 0045f970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f971: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f97c: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f981u); f_0045f830();
    /* 0045f981: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045f984: mov byte ptr [eax + 3], cl */ W8((u32)(r_eax+0x3u), (u8)r_ecx);
    /* 0045f987: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f98a: ret 4 */ FN_RET(0x0045f970); r_esp += 8; return;
}

void f_0045f990(void) /* sub_45F990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f990);
    /* 0045f990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f991: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f997: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045f99d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x45f9a2u); f_005da830();
    /* 0045f9a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045f9a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f9a7: jne 0x45f9c4 */ if (!fZ) goto L_0045f9c4;
L_0045f9a9:; BB(0x0045f9a9);
    /* 0045f9a9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045f9af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f9b1: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045f9b7: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045f9bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f9bfu); call_ind(t); }
    /* 0045f9bf: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f9c2: jne 0x45f9c8 */ if (!fZ) goto L_0045f9c8;
L_0045f9c4:; BB(0x0045f9c4);
    /* 0045f9c4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045f9c6: jmp 0x45f9e9 */ goto L_0045f9e9;
L_0045f9c8:; BB(0x0045f9c8);
    /* 0045f9c8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045f9ce: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45f9d3u); f_0045e8e0();
    /* 0045f9d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f9d6: jne 0x45f9dc */ if (!fZ) goto L_0045f9dc;
L_0045f9d8:; BB(0x0045f9d8);
    /* 0045f9d8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045f9da: jmp 0x45f9e9 */ goto L_0045f9e9;
L_0045f9dc:; BB(0x0045f9dc);
    /* 0045f9dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f9de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f9e1: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45f9e6u); f_0045f830();
    /* 0045f9e6: mov al, byte ptr [eax + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
L_0045f9e9:; BB(0x0045f9e9);
    /* 0045f9e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f9eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f9ec: ret  */ FN_RET(0x0045f990); r_esp += 4; return;
}

void f_0045f9f0(void) /* sub_45F9F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f9f0);
    /* 0045f9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f9f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f9f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f9f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f9fc: call 0x45f830 */ r_esp -= 4; W32(r_esp, 0x45fa01u); f_0045f830();
    /* 0045fa01: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0045fa04: mov byte ptr [eax + 4], cl */ W8((u32)(r_eax+0x4u), (u8)r_ecx);
    /* 0045fa07: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fa09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fa0a: ret 4 */ FN_RET(0x0045f9f0); r_esp += 8; return;
}

void f_0045fa10(void) /* sub_45FA10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fa10);
    /* 0045fa10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa11: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fa13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045fa19: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0045fa1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa1e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x45fa23u); f_00641280();
    /* 0045fa23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa26: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045fa29: cmp dword ptr [ebp - 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045fa2d: ja 0x45fc1c */ if ((!fC&&!fZ)) goto L_0045fc1c;
L_0045fa33:; BB(0x0045fa33);
    /* 0045fa33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045fa36: jmp dword ptr [ecx*4 + 0x45fcd0] */ { u32 t = R32((u32)(r_ecx*4+0x45fcd0u)); switch (t) { case 0x45fa3du: goto L_0045fa3d; case 0x45fa5cu: goto L_0045fa5c; case 0x45fa7bu: goto L_0045fa7b; case 0x45fa9au: goto L_0045fa9a; case 0x45fab9u: goto L_0045fab9; case 0x45fad8u: goto L_0045fad8; case 0x45faf7u: goto L_0045faf7; case 0x45fb16u: goto L_0045fb16; case 0x45fb35u: goto L_0045fb35; case 0x45fb54u: goto L_0045fb54; case 0x45fb73u: goto L_0045fb73; case 0x45fb92u: goto L_0045fb92; case 0x45fbaeu: goto L_0045fbae; case 0x45fbcau: goto L_0045fbca; case 0x45fbe6u: goto L_0045fbe6; case 0x45fc02u: goto L_0045fc02; case 0x45fc40u: goto L_0045fc40; case 0x45fc5cu: goto L_0045fc5c; case 0x45fc78u: goto L_0045fc78; case 0x45fc94u: goto L_0045fc94; case 0x45fcb0u: goto L_0045fcb0; default: UNSUP(0x0045fa36, "jump table entry is not a known target"); } }
L_0045fa3d:; BB(0x0045fa3d);
    /* 0045fa3d: push 0x6ba4fc */ { u32 v = 0x6ba4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa42: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fa47u); f_00630f40();
    /* 0045fa47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa4b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fa4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa4f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fa54u); f_00686d8e();
    /* 0045fa54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa57: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fa5c:; BB(0x0045fa5c);
    /* 0045fa5c: push 0x6ba4e0 */ { u32 v = 0x6ba4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fa66u); f_00630f40();
    /* 0045fa66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa6a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fa6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa6e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fa73u); f_00686d8e();
    /* 0045fa73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa76: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fa7b:; BB(0x0045fa7b);
    /* 0045fa7b: push 0x6ba4c8 */ { u32 v = 0x6ba4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fa85u); f_00630f40();
    /* 0045fa85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa89: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fa8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa8d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fa92u); f_00686d8e();
    /* 0045fa92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fa95: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fa9a:; BB(0x0045fa9a);
    /* 0045fa9a: push 0x6ba4b0 */ { u32 v = 0x6ba4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45faa4u); f_00630f40();
    /* 0045faa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045faa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045faa8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045faab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045faac: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fab1u); f_00686d8e();
    /* 0045fab1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fab4: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fab9:; BB(0x0045fab9);
    /* 0045fab9: push 0x6ba498 */ { u32 v = 0x6ba498u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fabe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fac3u); f_00630f40();
    /* 0045fac3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fac7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045faca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045facb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fad0u); f_00686d8e();
    /* 0045fad0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fad3: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fad8:; BB(0x0045fad8);
    /* 0045fad8: push 0x6ba480 */ { u32 v = 0x6ba480u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fadd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fae2u); f_00630f40();
    /* 0045fae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fae6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fae9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045faea: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45faefu); f_00686d8e();
    /* 0045faef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045faf2: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045faf7:; BB(0x0045faf7);
    /* 0045faf7: push 0x6ba468 */ { u32 v = 0x6ba468u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fafc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb01u); f_00630f40();
    /* 0045fb01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb05: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fb08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb09: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fb0eu); f_00686d8e();
    /* 0045fb0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb11: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fb16:; BB(0x0045fb16);
    /* 0045fb16: push 0x6ba450 */ { u32 v = 0x6ba450u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb1b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb20u); f_00630f40();
    /* 0045fb20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb24: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb28: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fb2du); f_00686d8e();
    /* 0045fb2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb30: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fb35:; BB(0x0045fb35);
    /* 0045fb35: push 0x6ba438 */ { u32 v = 0x6ba438u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb3a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb3fu); f_00630f40();
    /* 0045fb3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb43: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fb46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb47: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fb4cu); f_00686d8e();
    /* 0045fb4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb4f: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fb54:; BB(0x0045fb54);
    /* 0045fb54: push 0x6ba420 */ { u32 v = 0x6ba420u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb5eu); f_00630f40();
    /* 0045fb5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb62: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fb65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb66: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fb6bu); f_00686d8e();
    /* 0045fb6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb6e: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fb73:; BB(0x0045fb73);
    /* 0045fb73: push 0x6ba408 */ { u32 v = 0x6ba408u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb78: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb7du); f_00630f40();
    /* 0045fb7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb85: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fb8au); f_00686d8e();
    /* 0045fb8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb8d: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fb92:; BB(0x0045fb92);
    /* 0045fb92: push 0x6ba3ec */ { u32 v = 0x6ba3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb97: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fb9cu); f_00630f40();
    /* 0045fb9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fba0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fba4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fba9u); f_00686d8e();
    /* 0045fba9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbac: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fbae:; BB(0x0045fbae);
    /* 0045fbae: push 0x6ba3d0 */ { u32 v = 0x6ba3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbb3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fbb8u); f_00630f40();
    /* 0045fbb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbbc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fbbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbc0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fbc5u); f_00686d8e();
    /* 0045fbc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbc8: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fbca:; BB(0x0045fbca);
    /* 0045fbca: push 0x6ba3b4 */ { u32 v = 0x6ba3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbcf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fbd4u); f_00630f40();
    /* 0045fbd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbd8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fbdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbdc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fbe1u); f_00686d8e();
    /* 0045fbe1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbe4: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fbe6:; BB(0x0045fbe6);
    /* 0045fbe6: push 0x6ba398 */ { u32 v = 0x6ba398u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbeb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fbf0u); f_00630f40();
    /* 0045fbf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbf4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fbf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbf8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fbfdu); f_00686d8e();
    /* 0045fbfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc00: jmp 0x45fc1c */ goto L_0045fc1c;
L_0045fc02:; BB(0x0045fc02);
    /* 0045fc02: push 0x6ba37c */ { u32 v = 0x6ba37cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc07: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fc0cu); f_00630f40();
    /* 0045fc0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc10: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fc13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc14: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45fc19u); f_00686d8e();
    /* 0045fc19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045fc1c:; BB(0x0045fc1c);
    /* 0045fc1c: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0045fc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc21: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x45fc26u); f_00641290();
    /* 0045fc26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc29: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045fc2c: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045fc30: ja 0x45fcca */ if ((!fC&&!fZ)) goto L_0045fcca;
L_0045fc36:; BB(0x0045fc36);
    /* 0045fc36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fc39: jmp dword ptr [ecx*4 + 0x45fd10] */ { u32 t = R32((u32)(r_ecx*4+0x45fd10u)); switch (t) { case 0x45fc02u: goto L_0045fc02; case 0x45fbe6u: goto L_0045fbe6; case 0x45fbcau: goto L_0045fbca; case 0x45fbaeu: goto L_0045fbae; case 0x45fb92u: goto L_0045fb92; case 0x45fb73u: goto L_0045fb73; case 0x45fb54u: goto L_0045fb54; case 0x45fb35u: goto L_0045fb35; case 0x45fb16u: goto L_0045fb16; case 0x45faf7u: goto L_0045faf7; case 0x45fad8u: goto L_0045fad8; case 0x45fab9u: goto L_0045fab9; case 0x45fa9au: goto L_0045fa9a; case 0x45fa7bu: goto L_0045fa7b; case 0x45fa5cu: goto L_0045fa5c; case 0x45fa3du: goto L_0045fa3d; case 0x45fc40u: goto L_0045fc40; case 0x45fc5cu: goto L_0045fc5c; case 0x45fc78u: goto L_0045fc78; case 0x45fc94u: goto L_0045fc94; case 0x45fcb0u: goto L_0045fcb0; default: UNSUP(0x0045fc39, "jump table entry is not a known target"); } }
L_0045fc40:; BB(0x0045fc40);
    /* 0045fc40: push 0x6ba364 */ { u32 v = 0x6ba364u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc45: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fc4au); f_00630f40();
    /* 0045fc4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc4e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fc51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc52: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x45fc57u); f_00686ec6();
    /* 0045fc57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc5a: jmp 0x45fcca */ goto L_0045fcca;
L_0045fc5c:; BB(0x0045fc5c);
    /* 0045fc5c: push 0x6ba34c */ { u32 v = 0x6ba34cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fc66u); f_00630f40();
    /* 0045fc66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc6a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fc6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc6e: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x45fc73u); f_00686ec6();
    /* 0045fc73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc76: jmp 0x45fcca */ goto L_0045fcca;
L_0045fc78:; BB(0x0045fc78);
    /* 0045fc78: push 0x6ba330 */ { u32 v = 0x6ba330u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc7d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fc82u); f_00630f40();
    /* 0045fc82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045fc89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc8a: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x45fc8fu); f_00686ec6();
    /* 0045fc8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fc92: jmp 0x45fcca */ goto L_0045fcca;
L_0045fc94:; BB(0x0045fc94);
    /* 0045fc94: push 0x6ba318 */ { u32 v = 0x6ba318u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc99: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fc9eu); f_00630f40();
    /* 0045fc9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fca2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045fca5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fca6: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x45fcabu); f_00686ec6();
    /* 0045fcab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fcae: jmp 0x45fcca */ goto L_0045fcca;
L_0045fcb0:; BB(0x0045fcb0);
    /* 0045fcb0: push 0x6ba300 */ { u32 v = 0x6ba300u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcb5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45fcbau); f_00630f40();
    /* 0045fcba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fcbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcbe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fcc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcc2: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x45fcc7u); f_00686ec6();
    /* 0045fcc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045fcca:; BB(0x0045fcca);
    /* 0045fcca: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fccd: ret 8 */ FN_RET(0x0045fa10); r_esp += 12; return;
}

void f_0045fd30(void) /* sub_45FD30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fd30);
    /* 0045fd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd31: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fd33: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd36: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045fd3b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045fd3d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045fd40: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0045fd43: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0045fd4a: jmp 0x45fd55 */ goto L_0045fd55;
L_0045fd4c:; BB(0x0045fd4c);
    /* 0045fd4c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fd52: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0045fd55:; BB(0x0045fd55);
    /* 0045fd55: cmp dword ptr [ebp - 0x3c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fd59: jge 0x45fdd2 */ if ((fS==fO)) goto L_0045fdd2;
L_0045fd5b:; BB(0x0045fd5b);
    /* 0045fd5b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd5f: push 0x6ba51c */ { u32 v = 0x6ba51cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd64: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fd67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd68: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45fd6eu); call_ind(t); }
    /* 0045fd6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd71: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0045fd74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd75: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fd7au); f_0062fde0();
    /* 0045fd7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd7d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045fd84: jmp 0x45fd8f */ goto L_0045fd8f;
L_0045fd86:; BB(0x0045fd86);
    /* 0045fd86: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045fd89: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fd8c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_0045fd8f:; BB(0x0045fd8f);
    /* 0045fd8f: cmp dword ptr [ebp - 0x40], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045fd93: jge 0x45fdc0 */ if ((fS==fO)) goto L_0045fdc0;
L_0045fd95:; BB(0x0045fd95);
    /* 0045fd95: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fd98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd99: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045fd9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd9d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fda0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fda1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045fda4: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x45fda9u); f_004604d0();
    /* 0045fda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdaa: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045fdad: call 0x45fa10 */ r_esp -= 4; W32(r_esp, 0x45fdb2u); f_0045fa10();
    /* 0045fdb2: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fdb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdb6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fdbbu); f_0062fde0();
    /* 0045fdbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fdbe: jmp 0x45fd86 */ goto L_0045fd86;
L_0045fdc0:; BB(0x0045fdc0);
    /* 0045fdc0: push 0x6ba518 */ { u32 v = 0x6ba518u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdc5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fdcau); f_0062fde0();
    /* 0045fdca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fdcd: jmp 0x45fd4c */ goto L_0045fd4c;
L_0045fdd2:; BB(0x0045fdd2);
    /* 0045fdd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fdd5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fdd7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45fddcu); f_00686d72();
    /* 0045fddc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fdde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fddf: ret  */ FN_RET(0x0045fd30); r_esp += 4; return;
}

void f_0045fde0(void) /* sub_45FDE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fde0);
    /* 0045fde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fde3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fde6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045fdeb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045fded: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045fdf0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0045fdf3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fdf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdf7: push 0x6ba528 */ { u32 v = 0x6ba528u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fdfc: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fdff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe00: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45fe06u); call_ind(t); }
    /* 0045fe06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe09: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fe0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe0d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fe12u); f_0062fde0();
    /* 0045fe12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe15: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0045fe18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045fe1c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe1f: mov ax, word ptr [edx + ecx*2 + 0xa2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xa2u))) & 0xffffu);
    /* 0045fe27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe28: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe2b: call 0x45fa10 */ r_esp -= 4; W32(r_esp, 0x45fe30u); f_0045fa10();
    /* 0045fe30: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fe33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe34: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fe39u); f_0062fde0();
    /* 0045fe39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe3c: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045fe3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045fe43: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe46: mov dx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xacu))) & 0xffffu);
    /* 0045fe4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe4f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe52: call 0x45fa10 */ r_esp -= 4; W32(r_esp, 0x45fe57u); f_0045fa10();
    /* 0045fe57: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0045fe5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe5b: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fe60u); f_0062fde0();
    /* 0045fe60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe63: push 0x6ba518 */ { u32 v = 0x6ba518u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe68: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45fe6du); f_0062fde0();
    /* 0045fe6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045fe73: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045fe75: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45fe7au); f_00686d72();
    /* 0045fe7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fe7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fe7d: ret 4 */ FN_RET(0x0045fde0); r_esp += 8; return;
}

void f_0045fe80(void) /* sub_45FE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045fe80);
    /* 0045fe80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fe83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe85: push 0x69f3ac */ { u32 v = 0x69f3acu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045fe90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe91: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fe94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045fe99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045fe9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045fe9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045fea5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0045fea8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0045feab: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045feaf: jne 0x45fef8 */ if (!fZ) goto L_0045fef8;
L_0045feb1:; BB(0x0045feb1);
    /* 0045feb1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 0045feb6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45febbu); f_00686d82();
    /* 0045febb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045febe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045fec1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045fec8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fecc: je 0x45fedb */ if (fZ) goto L_0045fedb;
L_0045fece:; BB(0x0045fece);
    /* 0045fece: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fed1: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x45fed6u); f_00642e10();
    /* 0045fed6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045fed9: jmp 0x45fee2 */ goto L_0045fee2;
L_0045fedb:; BB(0x0045fedb);
    /* 0045fedb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0045fee2:; BB(0x0045fee2);
    /* 0045fee2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045fee5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045fee8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045feef: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045fef2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fef5: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
L_0045fef8:; BB(0x0045fef8);
    /* 0045fef8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fefa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045fefd: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 0045ff00: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x45ff05u); f_00642e70();
    /* 0045ff05: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045ff0c: jmp 0x45ff17 */ goto L_0045ff17;
L_0045ff0e:; BB(0x0045ff0e);
    /* 0045ff0e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ff11: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ff14: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0045ff17:; BB(0x0045ff17);
    /* 0045ff17: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ff1b: jge 0x45ff71 */ if ((fS==fO)) goto L_0045ff71;
L_0045ff1d:; BB(0x0045ff1d);
    /* 0045ff1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff21: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45ff26u); f_0064c8a0();
    /* 0045ff26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ff29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045ff2c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045ff2f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ff32: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045ff35: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045ff38: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ff3b: mov dword ptr [ecx + eax + 8], edx */ W32((u32)(r_ecx+r_eax+0x8u), r_edx);
    /* 0045ff3f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ff42: mov dword ptr [ecx + eax + 0xc], edx */ W32((u32)(r_ecx+r_eax+0xcu), r_edx);
    /* 0045ff46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff4a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45ff4fu); f_0064c8a0();
    /* 0045ff4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ff52: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045ff55: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045ff58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ff5b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045ff5e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045ff61: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045ff64: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 0045ff68: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045ff6b: mov dword ptr [ecx + eax + 0x14], edx */ W32((u32)(r_ecx+r_eax+0x14u), r_edx);
    /* 0045ff6f: jmp 0x45ff0e */ goto L_0045ff0e;
L_0045ff71:; BB(0x0045ff71);
    /* 0045ff71: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff76: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45ff7bu); f_00686d82();
    /* 0045ff7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ff7e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045ff81: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045ff88: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ff8c: je 0x45ff9b */ if (fZ) goto L_0045ff9b;
L_0045ff8e:; BB(0x0045ff8e);
    /* 0045ff8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045ff91: call 0x4621e0 */ r_esp -= 4; W32(r_esp, 0x45ff96u); f_004621e0();
    /* 0045ff96: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045ff99: jmp 0x45ffa2 */ goto L_0045ffa2;
L_0045ff9b:; BB(0x0045ff9b);
    /* 0045ff9b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0045ffa2:; BB(0x0045ffa2);
    /* 0045ffa2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045ffa5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045ffa8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045ffaf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045ffb2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045ffb5: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0045ffb8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045ffbb: call 0x45ffe0 */ r_esp -= 4; W32(r_esp, 0x45ffc0u); f_0045ffe0();
    /* 0045ffc0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0045ffc3: mov byte ptr [eax + 0x116], 0 */ W8((u32)(r_eax+0x116u), 0x0u);
    /* 0045ffca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ffcd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ffd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ffd5: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ffd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ffd8: ret  */ FN_RET(0x0045fe80); r_esp += 4; return;
}

void f_0045ffe0(void) /* sub_45FFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ffe0);
    /* 0045ffe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ffe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ffe3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ffe6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045ffe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ffeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ffed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fff0: call 0x460420 */ r_esp -= 4; W32(r_esp, 0x45fff5u); f_00460420();
    /* 0045fff5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045fff8: mov dword ptr [eax + 0x124], 0xffffffff */ W32((u32)(r_eax+0x124u), 0xffffffffu);
    /* 00460002: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460005: mov dword ptr [ecx + 0x128], 0xffffffff */ W32((u32)(r_ecx+0x128u), 0xffffffffu);
    /* 0046000f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460012: call 0x460470 */ r_esp -= 4; W32(r_esp, 0x460017u); f_00460470();
    /* 00460017: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046001a: mov byte ptr [edx + 0x115], 0 */ W8((u32)(r_edx+0x115u), 0x0u);
    /* 00460021: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460024: mov byte ptr [eax + 0x114], 0 */ W8((u32)(r_eax+0x114u), 0x0u);
    /* 0046002b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460032: jmp 0x46003d */ goto L_0046003d;
L_00460034:; BB(0x00460034);
    /* 00460034: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460037: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046003a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0046003d:; BB(0x0046003d);
    /* 0046003d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460041: jge 0x460096 */ if ((fS==fO)) goto L_00460096;
L_00460043:; BB(0x00460043);
    /* 00460043: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460047: jge 0x460094 */ if ((fS==fO)) goto L_00460094;
L_00460049:; BB(0x00460049);
    /* 00460049: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046004c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046004d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460052u); f_005dcb00();
    /* 00460052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460055: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00460058: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046005b: mov byte ptr [eax + 0x4a0], 0 */ W8((u32)(r_eax+0x4a0u), 0x0u);
    /* 00460062: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460066: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46006bu); f_005dcb00();
    /* 0046006b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046006e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00460071: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00460074: mov byte ptr [edx + 0x4a1], 0 */ W8((u32)(r_edx+0x4a1u), 0x0u);
    /* 0046007b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046007e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046007f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460084u); f_005dcb00();
    /* 00460084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460087: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046008a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046008d: mov byte ptr [ecx + 0x4a2], 0 */ W8((u32)(r_ecx+0x4a2u), 0x0u);
L_00460094:; BB(0x00460094);
    /* 00460094: jmp 0x460034 */ goto L_00460034;
L_00460096:; BB(0x00460096);
    /* 00460096: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460099: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0046009c: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x4600a1u); f_005cb9b0();
    /* 004600a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004600a8: jmp 0x4600b3 */ goto L_004600b3;
L_004600aa:; BB(0x004600aa);
    /* 004600aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004600ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004600b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004600b3:; BB(0x004600b3);
    /* 004600b3: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004600b7: jge 0x460164 */ if ((fS==fO)) goto L_00460164;
L_004600bd:; BB(0x004600bd);
    /* 004600bd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004600c4: jmp 0x4600cf */ goto L_004600cf;
L_004600c6:; BB(0x004600c6);
    /* 004600c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004600c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004600cc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004600cf:; BB(0x004600cf);
    /* 004600cf: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004600d3: jge 0x4600e9 */ if ((fS==fO)) goto L_004600e9;
L_004600d5:; BB(0x004600d5);
    /* 004600d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004600da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004600de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004600e2: call 0x4604a0 */ r_esp -= 4; W32(r_esp, 0x4600e7u); f_004604a0();
    /* 004600e7: jmp 0x4600c6 */ goto L_004600c6;
L_004600e9:; BB(0x004600e9);
    /* 004600e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004600ec: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004600ef: mov word ptr [edx + ecx*2 + 0xa2], 0 */ W16((u32)(r_edx+r_ecx*2+0xa2u), 0x0u);
    /* 004600f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004600fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004600ff: mov word ptr [ecx + eax*2 + 0xac], 0 */ W16((u32)(r_ecx+r_eax*2+0xacu), 0x0u);
    /* 00460109: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046010c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046010f: mov dword ptr [eax + edx*4 + 0xb8], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0xb8u), 0xffffffffu);
    /* 0046011a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046011d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460120: mov dword ptr [edx + ecx*4 + 0xcc], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0xccu), 0xffffffffu);
    /* 0046012b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046012e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460131: mov byte ptr [eax + 0xe0], 0 */ W8((u32)(r_eax+0xe0u), 0x0u);
    /* 00460138: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046013b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046013e: mov byte ptr [ecx + 0xe5], 0 */ W8((u32)(r_ecx+0xe5u), 0x0u);
    /* 00460145: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460148: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046014b: mov byte ptr [edx + 0xea], 0 */ W8((u32)(r_edx+0xeau), 0x0u);
    /* 00460152: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460155: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460158: mov byte ptr [eax + 0xef], 0 */ W8((u32)(r_eax+0xefu), 0x0u);
    /* 0046015f: jmp 0x4600aa */ goto L_004600aa;
L_00460164:; BB(0x00460164);
    /* 00460164: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046016b: jmp 0x460176 */ goto L_00460176;
L_0046016d:; BB(0x0046016d);
    /* 0046016d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460170: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460173: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00460176:; BB(0x00460176);
    /* 00460176: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046017a: jge 0x4601a5 */ if ((fS==fO)) goto L_004601a5;
L_0046017c:; BB(0x0046017c);
    /* 0046017c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046017f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460182: mov byte ptr [edx + 0xf4], 0 */ W8((u32)(r_edx+0xf4u), 0x0u);
    /* 00460189: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046018c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046018f: mov byte ptr [eax + 0xfe], 0 */ W8((u32)(r_eax+0xfeu), 0x0u);
    /* 00460196: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460199: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046019c: mov byte ptr [ecx + 0xf9], 0 */ W8((u32)(r_ecx+0xf9u), 0x0u);
    /* 004601a3: jmp 0x46016d */ goto L_0046016d;
L_004601a5:; BB(0x004601a5);
    /* 004601a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004601a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004601a8: ret  */ FN_RET(0x0045ffe0); r_esp += 4; return;
}

