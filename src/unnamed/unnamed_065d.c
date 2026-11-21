#include "protos.h"

void f_0065d080(void) /* sub_65D080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d080);
    /* 0065d080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d081: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d083: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d086: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065d089: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d090: jmp 0x65d09b */ goto L_0065d09b;
L_0065d092:; BB(0x0065d092);
    /* 0065d092: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d095: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065d098: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065d09b:; BB(0x0065d09b);
    /* 0065d09b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d09e: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d0a1: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65d0a6u); f_00663c50();
    /* 0065d0a6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065d0a9: jge 0x65d0f3 */ if ((fS==fO)) goto L_0065d0f3;
L_0065d0ab:; BB(0x0065d0ab);
    /* 0065d0ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d0ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d0af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d0b2: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d0b5: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65d0bau); f_006639a0();
    /* 0065d0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d0bb: call 0x663bb0 */ r_esp -= 4; W32(r_esp, 0x65d0c0u); f_00663bb0();
    /* 0065d0c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d0c3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065d0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d0c8: jne 0x65d0f1 */ if (!fZ) goto L_0065d0f1;
L_0065d0ca:; BB(0x0065d0ca);
    /* 0065d0ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d0cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d0ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d0d1: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d0d4: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65d0d9u); f_006639a0();
    /* 0065d0d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d0da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d0dd: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065d0e3: call 0x65c230 */ r_esp -= 4; W32(r_esp, 0x65d0e8u); f_0065c230();
    /* 0065d0e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d0eb: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065d0ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0065d0f1:; BB(0x0065d0f1);
    /* 0065d0f1: jmp 0x65d092 */ goto L_0065d092;
L_0065d0f3:; BB(0x0065d0f3);
    /* 0065d0f3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d0f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065d0f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d0fb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065d101: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65d103u); call_ind(t); }
    /* 0065d103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d105: jne 0x65d120 */ if (!fZ) goto L_0065d120;
L_0065d107:; BB(0x0065d107);
    /* 0065d107: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d109: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d10e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d110: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d112: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d115: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065d11b: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65d120u); f_0065c820();
L_0065d120:; BB(0x0065d120);
    /* 0065d120: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d123: ret  */ FN_RET(0x0065d080); r_esp += 4; return;
}

void f_0065d130(void) /* sub_65D130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d130);
    /* 0065d130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d131: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d13a: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65d13fu); f_00615260();
    /* 0065d13f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d140: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d143: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d146: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65d14bu); f_006639a0();
    /* 0065d14b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d14d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d14e: ret  */ FN_RET(0x0065d130); r_esp += 4; return;
}

void f_0065d150(void) /* sub_65D150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d150);
    /* 0065d150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d151: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d157: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d15a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065d160: movzx edx, byte ptr [ecx + 0x1c1] */ r_edx = (u32)R8((u32)(r_ecx+0x1c1u));
    /* 0065d167: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d169: je 0x65d172 */ if (fZ) goto L_0065d172;
L_0065d16b:; BB(0x0065d16b);
    /* 0065d16b: mov eax, 0x21 */ r_eax = 0x21u;
    /* 0065d170: jmp 0x65d183 */ goto L_0065d183;
L_0065d172:; BB(0x0065d172);
    /* 0065d172: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d175: call 0x65d130 */ r_esp -= 4; W32(r_esp, 0x65d17au); f_0065d130();
    /* 0065d17a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d17b: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x65d180u); f_00665800();
    /* 0065d180: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065d183:; BB(0x0065d183);
    /* 0065d183: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d186: ret  */ FN_RET(0x0065d150); r_esp += 4; return;
}

void f_0065d190(void) /* sub_65D190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d190);
    /* 0065d190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d191: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d19a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065d1a0: movzx edx, byte ptr [ecx + 0x1c1] */ r_edx = (u32)R8((u32)(r_ecx+0x1c1u));
    /* 0065d1a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d1a9: je 0x65d1ad */ if (fZ) goto L_0065d1ad;
L_0065d1ab:; BB(0x0065d1ab);
    /* 0065d1ab: jmp 0x65d1d1 */ goto L_0065d1d1;
L_0065d1ad:; BB(0x0065d1ad);
    /* 0065d1ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d1b4: call 0x65d130 */ r_esp -= 4; W32(r_esp, 0x65d1b9u); f_0065d130();
    /* 0065d1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1ba: call 0x6659e0 */ r_esp -= 4; W32(r_esp, 0x65d1bfu); f_006659e0();
    /* 0065d1bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d1c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065d1c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d1c9: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0065d1cc: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x65d1d1u); f_0063b490();
L_0065d1d1:; BB(0x0065d1d1);
    /* 0065d1d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d1d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d1d4: ret 4 */ FN_RET(0x0065d190); r_esp += 8; return;
}

