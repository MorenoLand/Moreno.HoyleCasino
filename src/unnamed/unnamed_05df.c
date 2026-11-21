#include "protos.h"

void f_005df250(void) /* sub_5DF250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df250);
    /* 005df250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df251: mov ebp, esp */ r_ebp = r_esp;
    /* 005df253: mov eax, 0x75e060 */ r_eax = 0x75e060u;
    /* 005df258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df259: ret  */ FN_RET(0x005df250); r_esp += 4; return;
}

void f_005df2e0(void) /* sub_5DF2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df2e0);
    /* 005df2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df2e7: mov eax, 0x38 */ r_eax = 0x38u;
    /* 005df2ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005df2ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df2ef: ret  */ FN_RET(0x005df2e0); r_esp += 4; return;
}

void f_005df650(void) /* sub_5DF650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df650);
    /* 005df650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df651: mov ebp, esp */ r_ebp = r_esp;
    /* 005df653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df657: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005df65c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df65e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df65f: ret  */ FN_RET(0x005df650); r_esp += 4; return;
}

void f_005df700(void) /* sub_5DF700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df700);
    /* 005df700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df701: mov ebp, esp */ r_ebp = r_esp;
    /* 005df703: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df706: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df709: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df70d: jne 0x5df71a */ if (!fZ) goto L_005df71a;
L_005df70f:; BB(0x005df70f);
    /* 005df70f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df712: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5df717u); f_005f3bf0();
    /* 005df717: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005df71a:; BB(0x005df71a);
    /* 005df71a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df71c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df71f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df721: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df724: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005df72a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df72cu); call_ind(t); }
    /* 005df72c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005df72f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df731: je 0x5df783 */ if (fZ) goto L_005df783;
L_005df733:; BB(0x005df733);
    /* 005df733: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005df739: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5df73eu); f_005da830();
    /* 005df73e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005df741: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df743: jne 0x5df783 */ if (!fZ) goto L_005df783;
L_005df745:; BB(0x005df745);
    /* 005df745: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df748: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df74a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df74d: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005df753: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df755u); call_ind(t); }
    /* 005df755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df757: je 0x5df787 */ if (fZ) goto L_005df787;
L_005df759:; BB(0x005df759);
    /* 005df759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df75c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df75e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df761: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005df767: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df769u); call_ind(t); }
    /* 005df769: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df76c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df76f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df774: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005df77a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df77cu); call_ind(t); }
    /* 005df77c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005df77f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df781: jne 0x5df787 */ if (!fZ) goto L_005df787;
L_005df783:; BB(0x005df783);
    /* 005df783: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005df785: jmp 0x5df79c */ goto L_005df79c;
L_005df787:; BB(0x005df787);
    /* 005df787: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005df78a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df78b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df78d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5df792u); f_005dcb00();
    /* 005df792: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df795: mov ecx, eax */ r_ecx = r_eax;
    /* 005df797: call 0x5d54a0 */ r_esp -= 4; W32(r_esp, 0x5df79cu); f_005d54a0();
L_005df79c:; BB(0x005df79c);
    /* 005df79c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df79e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df79f: ret 4 */ FN_RET(0x005df700); r_esp += 8; return;
}

void f_005df7b0(void) /* sub_5DF7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df7b0);
    /* 005df7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df7b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df7b7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df7bb: jne 0x5df7c8 */ if (!fZ) goto L_005df7c8;
L_005df7bd:; BB(0x005df7bd);
    /* 005df7bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df7c0: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5df7c5u); f_005f3bf0();
    /* 005df7c5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005df7c8:; BB(0x005df7c8);
    /* 005df7c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df7ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df7cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df7cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df7d2: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005df7d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df7dau); call_ind(t); }
    /* 005df7da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005df7dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df7df: je 0x5df806 */ if (fZ) goto L_005df806;
L_005df7e1:; BB(0x005df7e1);
    /* 005df7e1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005df7e7: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5df7ecu); f_005da830();
    /* 005df7ec: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005df7ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df7f1: jne 0x5df806 */ if (!fZ) goto L_005df806;
L_005df7f3:; BB(0x005df7f3);
    /* 005df7f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df7f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df7f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df7fa: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5df7ffu); f_005df700();
    /* 005df7ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005df802: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df804: jne 0x5df80a */ if (!fZ) goto L_005df80a;
L_005df806:; BB(0x005df806);
    /* 005df806: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005df808: jmp 0x5df81d */ goto L_005df81d;
L_005df80a:; BB(0x005df80a);
    /* 005df80a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005df80d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df80e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df811: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5df816u); f_005de600();
    /* 005df816: mov ecx, eax */ r_ecx = r_eax;
    /* 005df818: call 0x5d5550 */ r_esp -= 4; W32(r_esp, 0x5df81du); f_005d5550();
L_005df81d:; BB(0x005df81d);
    /* 005df81d: mov esp, ebp */ r_esp = r_ebp;
    /* 005df81f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df820: ret 4 */ FN_RET(0x005df7b0); r_esp += 8; return;
}

