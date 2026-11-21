#include "protos.h"

void f_005eb000(void) /* sub_5EB000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb000);
    /* 005eb000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb001: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb00a: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb010: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb013: je 0x5eb106 */ if (fZ) goto L_005eb106;
L_005eb019:; BB(0x005eb019);
    /* 005eb019: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb01c: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb020: je 0x5eb047 */ if (fZ) goto L_005eb047;
L_005eb022:; BB(0x005eb022);
    /* 005eb022: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb025: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x5eb02au); f_005eb130();
    /* 005eb02a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb02d: jle 0x5eb03a */ if ((fZ||fS!=fO)) goto L_005eb03a;
L_005eb02f:; BB(0x005eb02f);
    /* 005eb02f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb032: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x5eb037u); f_005eb130();
    /* 005eb037: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005eb03a:; BB(0x005eb03a);
    /* 005eb03a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb03e: jge 0x5eb047 */ if ((fS==fO)) goto L_005eb047;
L_005eb040:; BB(0x005eb040);
    /* 005eb040: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005eb047:; BB(0x005eb047);
    /* 005eb047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb04a: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb050: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb053: je 0x5eb0fa */ if (fZ) goto L_005eb0fa;
L_005eb059:; BB(0x005eb059);
    /* 005eb059: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb05c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb05e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb061: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb067: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb069u); call_ind(t); }
    /* 005eb069: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb06c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb06f: mov dword ptr [eax + 0x164], ecx */ W32((u32)(r_eax+0x164u), r_ecx);
    /* 005eb075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb078: cmp dword ptr [edx + 0x174], 0 */ {  u32 a = R32((u32)(r_edx+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb07f: je 0x5eb0a5 */ if (fZ) goto L_005eb0a5;
L_005eb081:; BB(0x005eb081);
    /* 005eb081: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb084: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb08a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb08b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb08e: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eb094: call 0x6163e0 */ r_esp -= 4; W32(r_esp, 0x5eb099u); f_006163e0();
    /* 005eb099: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb09c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb09f: mov dword ptr [ecx + 0x160], eax */ W32((u32)(r_ecx+0x160u), r_eax);
L_005eb0a5:; BB(0x005eb0a5);
    /* 005eb0a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0a8: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005eb0ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb0b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0b7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005eb0bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb0bfu); call_ind(t); }
    /* 005eb0bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb0c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0c7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005eb0ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb0ccu); call_ind(t); }
    /* 005eb0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb0d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0d5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005eb0d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb0dau); call_ind(t); }
    /* 005eb0da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb0db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb0e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0e3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005eb0e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb0e8u); call_ind(t); }
    /* 005eb0e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb0ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0f0: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005eb0f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb0f8u); call_ind(t); }
    /* 005eb0f8: jmp 0x5eb106 */ goto L_005eb106;
L_005eb0fa:; BB(0x005eb0fa);
    /* 005eb0fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb0fd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eb100: mov dword ptr [ecx + 0x164], edx */ W32((u32)(r_ecx+0x164u), r_edx);
L_005eb106:; BB(0x005eb106);
    /* 005eb106: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb109: ret 4 */ FN_RET(0x005eb000); r_esp += 8; return;
}

void f_005eb110(void) /* sub_5EB110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb110);
    /* 005eb110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb111: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb11a: mov eax, dword ptr [eax + 0x164] */ r_eax = R32((u32)(r_eax+0x164u));
    /* 005eb120: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb123: ret  */ FN_RET(0x005eb110); r_esp += 4; return;
}

void f_005eb240(void) /* sub_5EB240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb240);
    /* 005eb240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb241: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb24a: mov eax, dword ptr [eax + 0x160] */ r_eax = R32((u32)(r_eax+0x160u));
    /* 005eb250: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb253: ret  */ FN_RET(0x005eb240); r_esp += 4; return;
}

void f_005eb470(void) /* sub_5EB470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb470);
    /* 005eb470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb471: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb477: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb47a: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb481: je 0x5eb4a7 */ if (fZ) goto L_005eb4a7;
L_005eb483:; BB(0x005eb483);
    /* 005eb483: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb486: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005eb48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb48d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb490: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb497: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb49a: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eb4a0: call 0x616490 */ r_esp -= 4; W32(r_esp, 0x5eb4a5u); f_00616490();
    /* 005eb4a5: jmp 0x5eb4a9 */ goto L_005eb4a9;
L_005eb4a7:; BB(0x005eb4a7);
    /* 005eb4a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005eb4a9:; BB(0x005eb4a9);
    /* 005eb4a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb4ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb4ac: ret  */ FN_RET(0x005eb470); r_esp += 4; return;
}

void f_005eb4b0(void) /* sub_5EB4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb4b0);
    /* 005eb4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb4b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb4b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4ba: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb4c1: je 0x5eb4e7 */ if (fZ) goto L_005eb4e7;
L_005eb4c3:; BB(0x005eb4c3);
    /* 005eb4c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4c6: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005eb4cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4d0: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb4d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb4da: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eb4e0: call 0x6164d0 */ r_esp -= 4; W32(r_esp, 0x5eb4e5u); f_006164d0();
    /* 005eb4e5: jmp 0x5eb4e9 */ goto L_005eb4e9;
L_005eb4e7:; BB(0x005eb4e7);
    /* 005eb4e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005eb4e9:; BB(0x005eb4e9);
    /* 005eb4e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb4eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb4ec: ret  */ FN_RET(0x005eb4b0); r_esp += 4; return;
}

void f_005eb5d0(void) /* sub_5EB5D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb5d0);
    /* 005eb5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb5d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5da: movzx ecx, byte ptr [eax + 0x16c] */ r_ecx = (u32)R8((u32)(r_eax+0x16cu));
    /* 005eb5e1: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005eb5e5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb5e7: jne 0x5eb5eb */ if (!fZ) goto L_005eb5eb;
L_005eb5e9:; BB(0x005eb5e9);
    /* 005eb5e9: jmp 0x5eb607 */ goto L_005eb607;
L_005eb5eb:; BB(0x005eb5eb);
    /* 005eb5eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5ee: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005eb5f1: mov byte ptr [eax + 0x16c], cl */ W8((u32)(r_eax+0x16cu), (u8)r_ecx);
    /* 005eb5f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb5fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5ff: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb605: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb607u); call_ind(t); }
L_005eb607:; BB(0x005eb607);
    /* 005eb607: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb609: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb60a: ret 4 */ FN_RET(0x005eb5d0); r_esp += 8; return;
}

void f_005eb610(void) /* sub_5EB610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb610);
    /* 005eb610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb611: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb617: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb61a: mov al, byte ptr [eax + 0x16c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x16cu))) & 0xffu);
    /* 005eb620: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb623: ret  */ FN_RET(0x005eb610); r_esp += 4; return;
}

void f_005eb700(void) /* sub_5EB700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb700);
    /* 005eb700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb701: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb707: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb70a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005eb70d: mov byte ptr [eax + 0x16d], cl */ W8((u32)(r_eax+0x16du), (u8)r_ecx);
    /* 005eb713: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb716: ret 4 */ FN_RET(0x005eb700); r_esp += 8; return;
}

void f_005eb720(void) /* sub_5EB720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb720);
    /* 005eb720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb721: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb72a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005eb72d: mov byte ptr [eax + 0x16e], cl */ W8((u32)(r_eax+0x16eu), (u8)r_ecx);
    /* 005eb733: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb736: ret 4 */ FN_RET(0x005eb720); r_esp += 8; return;
}

void f_005ebf80(void) /* sub_5EBF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebf80);
    /* 005ebf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf81: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebf83: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebf86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ebf89: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005ebf8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf8d: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005ebf90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf91: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005ebf94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf95: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005ebf98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ebf9c: call 0x5ec060 */ r_esp -= 4; W32(r_esp, 0x5ebfa1u); f_005ec060();
    /* 005ebfa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebfa4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ebfa7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebfaa: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ebfad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ebfb0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ebfb3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005ebfb6: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebfb9: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebfbc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005ebfbf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ebfc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ebfc5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005ebfc8: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebfcb: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebfce: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ebfd1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebfd4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ebfd7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005ebfd9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebfdc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005ebfdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebfe2: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ebfe5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebfe8: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ebfeb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebfee: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebff1: ret 4 */ FN_RET(0x005ebf80); r_esp += 8; return;
}

