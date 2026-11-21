#include "protos.h"

void f_00594090(void) /* FourCardPokerPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594090);
    /* 00594090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594091: mov ebp, esp */ r_ebp = r_esp;
    /* 00594093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00594099: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059409c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5940a1u); f_005e9e20();
    /* 005940a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005940a4: mov dword ptr [eax], 0x6ce440 */ W32((u32)(r_eax), 0x6ce440u);
    /* 005940aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005940b1: jmp 0x5940bc */ goto L_005940bc;
L_005940b3:; BB(0x005940b3);
    /* 005940b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005940b6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005940b9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005940bc:; BB(0x005940bc);
    /* 005940bc: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005940c0: jge 0x5940d2 */ if ((fS==fO)) goto L_005940d2;
L_005940c2:; BB(0x005940c2);
    /* 005940c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005940c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005940c8: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 005940d0: jmp 0x5940b3 */ goto L_005940b3;
L_005940d2:; BB(0x005940d2);
    /* 005940d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005940d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005940d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005940d8: ret  */ FN_RET(0x00594090); r_esp += 4; return;
}

void f_005940e0(void) /* FourCardPokerPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005940e0);
    /* 005940e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005940e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005940e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005940e5: push 0x6a726d */ { u32 v = 0x6a726du; r_esp -= 4; W32(r_esp, v); }
    /* 005940ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005940f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005940f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005940f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005940f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005940fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005940fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005940ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00594105: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00594108: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059410b: mov dword ptr [eax], 0x6ce440 */ W32((u32)(r_eax), 0x6ce440u);
    /* 00594111: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00594118: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0059411f: jmp 0x59412a */ goto L_0059412a;
L_00594121:; BB(0x00594121);
    /* 00594121: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594124: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594127: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0059412a:; BB(0x0059412a);
    /* 0059412a: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059412e: jge 0x594165 */ if ((fS==fO)) goto L_00594165;
L_00594130:; BB(0x00594130);
    /* 00594130: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594133: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594136: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0059413a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059413d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594140: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00594143: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594147: je 0x59415c */ if (fZ) goto L_0059415c;
L_00594149:; BB(0x00594149);
    /* 00594149: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059414b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059414e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594150: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00594153: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00594155: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x594157u); call_ind(t); }
    /* 00594157: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059415a: jmp 0x594163 */ goto L_00594163;
L_0059415c:; BB(0x0059415c);
    /* 0059415c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00594163:; BB(0x00594163);
    /* 00594163: jmp 0x594121 */ goto L_00594121;
L_00594165:; BB(0x00594165);
    /* 00594165: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059416c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059416f: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x594174u); f_005e9e40();
    /* 00594174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00594177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059417e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059417f: mov esp, ebp */ r_esp = r_ebp;
    /* 00594181: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594182: ret  */ FN_RET(0x005940e0); r_esp += 4; return;
}

