#include "protos.h"

void f_0059ffa0(void) /* BigRaiseRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ffa0);
    /* 0059ffa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ffa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffa5: push 0x6a7778 */ { u32 v = 0x6a7778u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059ffb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffb2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059ffb7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059ffb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059ffbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059ffc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059ffc6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ffc9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x59ffceu); f_005d7b60();
    /* 0059ffce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059ffd5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ffd8: mov dword ptr [eax], 0x6cf08c */ W32((u32)(r_eax), 0x6cf08cu);
    /* 0059ffde: push 0xfde8 */ { u32 v = 0xfde8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffe3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ffe6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x59ffebu); f_005f1ad0();
    /* 0059ffeb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ffee: mov dword ptr [0x7935cc], ecx */ W32((u32)(0x7935ccu), r_ecx);
    /* 0059fff4: mov dword ptr [0x7935c0], 0 */ W32((u32)(0x7935c0u), 0x0u);
    /* 0059fffe: mov dword ptr [0x7935c4], 0 */ W32((u32)(0x7935c4u), 0x0u);
    /* 005a0008: mov dword ptr [0x7935c8], 0 */ W32((u32)(0x7935c8u), 0x0u);
    /* 005a0012: mov dword ptr [0x7935d0], 0 */ W32((u32)(0x7935d0u), 0x0u);
    /* 005a001c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0023: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a0026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a0029: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a0030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0031: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0034: ret  */ FN_RET(0x0059ffa0); r_esp += 4; return;
}

void f_005a0040(void) /* BigRaiseRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0040);
    /* 005a0040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0041: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0045: push 0x6a779b */ { u32 v = 0x6a779bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a004a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a0050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0051: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0054: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a0059: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a005b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a005c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a005f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a0065: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005a0068: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a006b: mov dword ptr [eax], 0x6cf08c */ W32((u32)(r_eax), 0x6cf08cu);
    /* 005a0071: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a0078: mov dword ptr [0x7935cc], 0 */ W32((u32)(0x7935ccu), 0x0u);
    /* 005a0082: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 005a0088: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a008b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a008e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005a0091: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0095: je 0x5a00aa */ if (fZ) goto L_005a00aa;
L_005a0097:; BB(0x005a0097);
    /* 005a0097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0099: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a009c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a009e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a00a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a00a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a00a5u); call_ind(t); }
    /* 005a00a5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a00a8: jmp 0x5a00b1 */ goto L_005a00b1;
L_005a00aa:; BB(0x005a00aa);
    /* 005a00aa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005a00b1:; BB(0x005a00b1);
    /* 005a00b1: mov dword ptr [0x7935c0], 0 */ W32((u32)(0x7935c0u), 0x0u);
    /* 005a00bb: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a00c1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a00c4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a00c7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a00ca: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a00ce: je 0x5a00e3 */ if (fZ) goto L_005a00e3;
L_005a00d0:; BB(0x005a00d0);
    /* 005a00d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a00d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a00d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a00d7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a00da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a00dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a00deu); call_ind(t); }
    /* 005a00de: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005a00e1: jmp 0x5a00ea */ goto L_005a00ea;
L_005a00e3:; BB(0x005a00e3);
    /* 005a00e3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005a00ea:; BB(0x005a00ea);
    /* 005a00ea: mov dword ptr [0x7935c4], 0 */ W32((u32)(0x7935c4u), 0x0u);
    /* 005a00f4: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a00fa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a00fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a0100: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005a0103: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0107: je 0x5a011c */ if (fZ) goto L_005a011c;
L_005a0109:; BB(0x005a0109);
    /* 005a0109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a010b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a010e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a0110: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a0113: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a0115: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0117u); call_ind(t); }
    /* 005a0117: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a011a: jmp 0x5a0123 */ goto L_005a0123;
L_005a011c:; BB(0x005a011c);
    /* 005a011c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005a0123:; BB(0x005a0123);
    /* 005a0123: mov dword ptr [0x7935c8], 0 */ W32((u32)(0x7935c8u), 0x0u);
    /* 005a012d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0133: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005a0136: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a0139: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005a013c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0140: je 0x5a0155 */ if (fZ) goto L_005a0155;
L_005a0142:; BB(0x005a0142);
    /* 005a0142: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0144: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0147: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a0149: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a014c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a014e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0150u); call_ind(t); }
    /* 005a0150: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a0153: jmp 0x5a015c */ goto L_005a015c;
L_005a0155:; BB(0x005a0155);
    /* 005a0155: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005a015c:; BB(0x005a015c);
    /* 005a015c: mov dword ptr [0x7935d0], 0 */ W32((u32)(0x7935d0u), 0x0u);
    /* 005a0166: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a016d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a0170: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5a0175u); f_005d7bd0();
    /* 005a0175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a0178: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a017f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0180: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0183: ret  */ FN_RET(0x005a0040); r_esp += 4; return;
}

void f_005a0190(void) /* BigRaiseRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0190);
    /* 005a0190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0191: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0196: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a0199: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a019b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a01a1: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5a01a6u); f_005df700();
    /* 005a01a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a01a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a01ab: je 0x5a01bc */ if (fZ) goto L_005a01bc;
L_005a01ad:; BB(0x005a01ad);
    /* 005a01ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a01b0: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a01b5u); f_005da7b0();
    /* 005a01b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a01b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a01ba: je 0x5a01be */ if (fZ) goto L_005a01be;
L_005a01bc:; BB(0x005a01bc);
    /* 005a01bc: jmp 0x5a01ff */ goto L_005a01ff;
L_005a01be:; BB(0x005a01be);
    /* 005a01be: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 005a01c4: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a01c8: je 0x5a01ff */ if (fZ) goto L_005a01ff;
L_005a01ca:; BB(0x005a01ca);
    /* 005a01ca: lea eax, [ebp - 2] */ r_eax = (u32)(r_ebp+0xfffffffeu);
    /* 005a01cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a01ce: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 005a01d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a01d2: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a01d8: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a01ddu); f_005a2020();
    /* 005a01dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a01de: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 005a01e4: call 0x59b080 */ r_esp -= 4; W32(r_esp, 0x5a01e9u); f_0059b080();
    /* 005a01e9: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005a01ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a01ed: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005a01f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a01f1: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a01f7: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005a01fa: call 0x59cf00 */ r_esp -= 4; W32(r_esp, 0x5a01ffu); f_0059cf00();
L_005a01ff:; BB(0x005a01ff);
    /* 005a01ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0202: ret 4 */ FN_RET(0x005a0190); r_esp += 8; return;
}

void f_005a0210(void) /* BigRaiseRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0210);
    /* 005a0210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0211: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0213: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0216: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a0219: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a021f: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0224u); f_005a2020();
    /* 005a0224: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a0227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a022a: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a022d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a0230: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0236: call 0x5a2970 */ r_esp -= 4; W32(r_esp, 0x5a023bu); f_005a2970();
    /* 005a023b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a023e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0240: je 0x5a02a7 */ if (fZ) goto L_005a02a7;
L_005a0242:; BB(0x005a0242);
    /* 005a0242: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0245: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0246: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005a0249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a024a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a024d: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a0253: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005a0257: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5a025cu); f_005cb880();
    /* 005a025c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a025f: jne 0x5a02a7 */ if (!fZ) goto L_005a02a7;
L_005a0261:; BB(0x005a0261);
    /* 005a0261: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0265: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005a0268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0269: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a026c: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a0271: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a0275: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5a027au); f_005cb880();
    /* 005a027a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a027d: jle 0x5a02a7 */ if ((fZ||fS!=fO)) goto L_005a02a7;
L_005a027f:; BB(0x005a027f);
    /* 005a027f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0281: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0286: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a028bu); f_00630f40();
    /* 005a028b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a028e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a028f: push 0x6cf388 */ { u32 v = 0x6cf388u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0294: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a0299u); f_00630f40();
    /* 005a0299: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a029c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a029d: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5a02a2u); f_0062ff10();
    /* 005a02a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a02a5: jmp 0x5a0325 */ goto L_005a0325;
L_005a02a7:; BB(0x005a02a7);
    /* 005a02a7: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a02ad: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a02b2u); f_005a2020();
    /* 005a02b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a02b3: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a02b9: call 0x5a2740 */ r_esp -= 4; W32(r_esp, 0x5a02beu); f_005a2740();
    /* 005a02be: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a02c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a02c3: je 0x5a02df */ if (fZ) goto L_005a02df;
L_005a02c5:; BB(0x005a02c5);
    /* 005a02c5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a02cb: call 0x5a1ff0 */ r_esp -= 4; W32(r_esp, 0x5a02d0u); f_005a1ff0();
    /* 005a02d0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a02d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a02d6: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 005a02dd: jmp 0x5a02f7 */ goto L_005a02f7;
L_005a02df:; BB(0x005a02df);
    /* 005a02df: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a02e5: call 0x5a1ff0 */ r_esp -= 4; W32(r_esp, 0x5a02eau); f_005a1ff0();
    /* 005a02ea: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a02ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a02f0: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
L_005a02f7:; BB(0x005a02f7);
    /* 005a02f7: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a02fd: call 0x5a1ff0 */ r_esp -= 4; W32(r_esp, 0x5a0302u); f_005a1ff0();
    /* 005a0302: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a0305: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0308: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a030a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a030d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005a0310: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0312u); call_ind(t); }
    /* 005a0312: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a0315: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5a031au); f_005db890();
    /* 005a031a: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a0320: call 0x59fa00 */ r_esp -= 4; W32(r_esp, 0x5a0325u); f_0059fa00();
L_005a0325:; BB(0x005a0325);
    /* 005a0325: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0328: ret  */ FN_RET(0x005a0210); r_esp += 4; return;
}

void f_005a0330(void) /* BigRaiseRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0330);
    /* 005a0330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0331: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0337: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005a033b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a033d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a0340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0341: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0347: call 0x5a3bd0 */ r_esp -= 4; W32(r_esp, 0x5a034cu); f_005a3bd0();
    /* 005a034c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a0352: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5a0357u); f_00637610();
    /* 005a0357: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a035d: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x5a0362u); f_005db9b0();
    /* 005a0362: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0368: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x5a036du); f_005a3880();
    /* 005a036d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a036f: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a0375: call 0x59f960 */ r_esp -= 4; W32(r_esp, 0x5a037au); f_0059f960();
    /* 005a037a: mov esp, ebp */ r_esp = r_ebp;
    /* 005a037c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a037d: ret 4 */ FN_RET(0x005a0330); r_esp += 8; return;
}

void f_005a0390(void) /* BigRaiseRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0390);
    /* 005a0390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0391: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0393: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0396: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a0399: mov dword ptr [ebp - 0x10], 0x1b8 */ W32((u32)(r_ebp+0xfffffff0u), 0x1b8u);
    /* 005a03a0: mov dword ptr [ebp - 0xc], 0x62 */ W32((u32)(r_ebp+0xfffffff4u), 0x62u);
    /* 005a03a7: mov dword ptr [ebp - 8], 0x20f */ W32((u32)(r_ebp+0xfffffff8u), 0x20fu);
    /* 005a03ae: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 005a03b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a03b8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a03bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a03be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a03bf: ret 4 */ FN_RET(0x005a0390); r_esp += 8; return;
}

void f_005a03d0(void) /* BigRaiseRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a03d0);
    /* 005a03d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a03d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a03d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a03d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a03d9: mov dword ptr [ebp - 0x10], 0x10b */ W32((u32)(r_ebp+0xfffffff0u), 0x10bu);
    /* 005a03e0: mov dword ptr [ebp - 0xc], 0x10b */ W32((u32)(r_ebp+0xfffffff4u), 0x10bu);
    /* 005a03e7: mov dword ptr [ebp - 8], 0x51 */ W32((u32)(r_ebp+0xfffffff8u), 0x51u);
    /* 005a03ee: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 005a03f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a03f8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a03fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a03fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a03ff: ret 4 */ FN_RET(0x005a03d0); r_esp += 8; return;
}

void f_005a0410(void) /* BigRaiseRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0410);
    /* 005a0410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0411: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0417: cmp dword ptr [0x7935d0], 0 */ {  u32 a = R32((u32)(0x7935d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a041e: je 0x5a042d */ if (fZ) goto L_005a042d;
L_005a0420:; BB(0x005a0420);
    /* 005a0420: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0426: call 0x5a1ff0 */ r_esp -= 4; W32(r_esp, 0x5a042bu); f_005a1ff0();
    /* 005a042b: jmp 0x5a042f */ goto L_005a042f;
L_005a042d:; BB(0x005a042d);
    /* 005a042d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a042f:; BB(0x005a042f);
    /* 005a042f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0432: ret  */ FN_RET(0x005a0410); r_esp += 4; return;
}

void f_005a0440(void) /* BigRaiseRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0440);
    /* 005a0440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0441: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0443: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0446: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005a0449: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 005a0450: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 005a0457: mov dword ptr [ebp - 0x20], 0x96 */ W32((u32)(r_ebp+0xffffffe0u), 0x96u);
    /* 005a045e: mov dword ptr [ebp - 0x1c], 0xf6 */ W32((u32)(r_ebp+0xffffffe4u), 0xf6u);
    /* 005a0465: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 005a046c: mov dword ptr [ebp - 0x14], 0x4c */ W32((u32)(r_ebp+0xffffffecu), 0x4cu);
    /* 005a0473: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 005a047a: mov dword ptr [ebp - 0xc], 0x4a */ W32((u32)(r_ebp+0xfffffff4u), 0x4au);
    /* 005a0481: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a0485: jge 0x5a049f */ if ((fS==fO)) goto L_005a049f;
L_005a0487:; BB(0x005a0487);
    /* 005a0487: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a048a: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 005a048e: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 005a0492: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a0495: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005a0497: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005a049a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a049d: jmp 0x5a04d9 */ goto L_005a04d9;
L_005a049f:; BB(0x005a049f);
    /* 005a049f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a04a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a04ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005a04af: jne 0x5a04c8 */ if (!fZ) goto L_005a04c8;
L_005a04b1:; BB(0x005a04b1);
    /* 005a04b1: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005a04b6: push 0x6cf3a8 */ { u32 v = 0x6cf3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a04bb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a04c0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a04c5u); f_005e9f20();
    /* 005a04c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a04c8:; BB(0x005a04c8);
    /* 005a04c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a04cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a04ce: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005a04d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a04d3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005a04d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005a04d9:; BB(0x005a04d9);
    /* 005a04d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005a04db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a04dc: ret 8 */ FN_RET(0x005a0440); r_esp += 12; return;
}

void f_005a04e0(void) /* BigRaiseRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a04e0);
    /* 005a04e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a04e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a04e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a04e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a04e7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 005a04ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005a04ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a04ef: ret 4 */ FN_RET(0x005a04e0); r_esp += 8; return;
}

void f_005a0500(void) /* BigRaiseRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0500);
    /* 005a0500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0501: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0503: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0506: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005a0509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a050c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a050d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a0512u); f_005dcb00();
    /* 005a0512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0515: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a0518: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a051b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 005a0521: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 005a0524: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005a0528: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a052a: je 0x5a0531 */ if (fZ) goto L_005a0531;
L_005a052c:; BB(0x005a052c);
    /* 005a052c: jmp 0x5a05c0 */ goto L_005a05c0;
L_005a0531:; BB(0x005a0531);
    /* 005a0531: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0533: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0535: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a053au); f_0064c8a0();
    /* 005a053a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a053d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a0540: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a0543: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a0546: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a0549: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005a054b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a054e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005a0551: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a0558: jmp 0x5a0563 */ goto L_005a0563;
L_005a055a:; BB(0x005a055a);
    /* 005a055a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a055d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0560: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a0563:; BB(0x005a0563);
    /* 005a0563: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a0567: jge 0x5a05c0 */ if ((fS==fO)) goto L_005a05c0;
L_005a0569:; BB(0x005a0569);
    /* 005a0569: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a056c: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a056f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a0572: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a0577: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a057b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a057e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a0581: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a0584: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0587: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005a058b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a058d: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a0590: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005a0593: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005a0597: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a059a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a059d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a05a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a05a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a05a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a05a5: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a05a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a05a9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a05ac: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a05b1u); f_0064c5c0();
    /* 005a05b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a05b3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a05b6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a05b9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005a05bb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005a05be: jmp 0x5a055a */ goto L_005a055a;
L_005a05c0:; BB(0x005a05c0);
    /* 005a05c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005a05c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a05c3: ret 8 */ FN_RET(0x005a0500); r_esp += 12; return;
}

void f_005a05d0(void) /* BigRaiseRoom::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a05d0);
    /* 005a05d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a05d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a05d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a05d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a05d7: mov eax, 9 */ r_eax = 0x9u;
    /* 005a05dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a05de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a05df: ret  */ FN_RET(0x005a05d0); r_esp += 4; return;
}

void f_005a05e0(void) /* BigRaiseRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a05e0);
    /* 005a05e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a05e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a05e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a05e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a05e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a05ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a05ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a05f0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5a05f5u); f_005d7f40();
    /* 005a05f5: cmp dword ptr [0x7935d0], 0 */ {  u32 a = R32((u32)(0x7935d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05fc: je 0x5a060e */ if (fZ) goto L_005a060e;
L_005a05fe:; BB(0x005a05fe);
    /* 005a05fe: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0604: call 0x5a2460 */ r_esp -= 4; W32(r_esp, 0x5a0609u); f_005a2460();
    /* 005a0609: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a060c: jmp 0x5a0615 */ goto L_005a0615;
L_005a060e:; BB(0x005a060e);
    /* 005a060e: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_005a0615:; BB(0x005a0615);
    /* 005a0615: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a0618: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a061b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a061e: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0622: jne 0x5a06c9 */ if (!fZ) goto L_005a06c9;
L_005a0628:; BB(0x005a0628);
    /* 005a0628: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a062b: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005a062f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0631: jne 0x5a06c9 */ if (!fZ) goto L_005a06c9;
L_005a0637:; BB(0x005a0637);
    /* 005a0637: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a063b: je 0x5a06c9 */ if (fZ) goto L_005a06c9;
L_005a0641:; BB(0x005a0641);
    /* 005a0641: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a0644: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005a0648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0649: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5a064fu); call_ind(t); }
    /* 005a064f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0652: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a0655: cmp dword ptr [ebp - 0x1c], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0659: je 0x5a065d */ if (fZ) goto L_005a065d;
L_005a065b:; BB(0x005a065b);
    /* 005a065b: jmp 0x5a06c9 */ goto L_005a06c9;
L_005a065d:; BB(0x005a065d);
    /* 005a065d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0660: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0661: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a0666u); f_005dcb00();
    /* 005a0666: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a066b: je 0x5a06c9 */ if (fZ) goto L_005a06c9;
L_005a066d:; BB(0x005a066d);
    /* 005a066d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0671: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a0676u); f_005dcb00();
    /* 005a0676: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0679: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a067c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a067f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a0684u); f_0063aac0();
    /* 005a0684: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a0686: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a0689: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a068d: je 0x5a06ab */ if (fZ) goto L_005a06ab;
L_005a068f:; BB(0x005a068f);
    /* 005a068f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a0692: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a0697u); f_0063aac0();
    /* 005a0697: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a0699: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a069c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06a0: je 0x5a06ab */ if (fZ) goto L_005a06ab;
L_005a06a2:; BB(0x005a06a2);
    /* 005a06a2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005a06a9: jmp 0x5a06b2 */ goto L_005a06b2;
L_005a06ab:; BB(0x005a06ab);
    /* 005a06ab: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_005a06b2:; BB(0x005a06b2);
    /* 005a06b2: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 005a06b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06b8: je 0x5a06c9 */ if (fZ) goto L_005a06c9;
L_005a06ba:; BB(0x005a06ba);
    /* 005a06ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a06bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a06be: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a06c4: call 0x5a36c0 */ r_esp -= 4; W32(r_esp, 0x5a06c9u); f_005a36c0();
L_005a06c9:; BB(0x005a06c9);
    /* 005a06c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a06cc: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005a06d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06d2: jne 0x5a0749 */ if (!fZ) goto L_005a0749;
L_005a06d4:; BB(0x005a06d4);
    /* 005a06d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a06d7: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06db: jne 0x5a0749 */ if (!fZ) goto L_005a0749;
L_005a06dd:; BB(0x005a06dd);
    /* 005a06dd: cmp dword ptr [0x7935c4], 0 */ {  u32 a = R32((u32)(0x7935c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06e4: je 0x5a0749 */ if (fZ) goto L_005a0749;
L_005a06e6:; BB(0x005a06e6);
    /* 005a06e6: cmp dword ptr [0x7935d0], 0 */ {  u32 a = R32((u32)(0x7935d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06ed: je 0x5a0749 */ if (fZ) goto L_005a0749;
L_005a06ef:; BB(0x005a06ef);
    /* 005a06ef: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a06f5: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a06fc: je 0x5a0749 */ if (fZ) goto L_005a0749;
L_005a06fe:; BB(0x005a06fe);
    /* 005a06fe: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 005a0704: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a070b: je 0x5a0749 */ if (fZ) goto L_005a0749;
L_005a070d:; BB(0x005a070d);
    /* 005a070d: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 005a0712: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 005a0718: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5a071du); f_005f54a0();
    /* 005a071d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a0720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0722: jne 0x5a073c */ if (!fZ) goto L_005a073c;
L_005a0724:; BB(0x005a0724);
    /* 005a0724: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 005a072a: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 005a0730: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5a0735u); f_005f54a0();
    /* 005a0735: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a0738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a073a: je 0x5a0749 */ if (fZ) goto L_005a0749;
L_005a073c:; BB(0x005a073c);
    /* 005a073c: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0742: mov byte ptr [ecx + 0x103], 1 */ W8((u32)(r_ecx+0x103u), 0x1u);
L_005a0749:; BB(0x005a0749);
    /* 005a0749: mov esp, ebp */ r_esp = r_ebp;
    /* 005a074b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a074c: ret 4 */ FN_RET(0x005a05e0); r_esp += 8; return;
}

void f_005a0750(void) /* BigRaiseRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0750);
    /* 005a0750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0751: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0753: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0756: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a0759: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a075f: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0764u); f_005a2020();
    /* 005a0764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0765: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a076au); f_005dcb00();
    /* 005a076a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a076d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a076f: je 0x5a0860 */ if (fZ) goto L_005a0860;
L_005a0775:; BB(0x005a0775);
    /* 005a0775: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a077b: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0780u); f_005a2020();
    /* 005a0780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0781: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a0786u); f_005dcb00();
    /* 005a0786: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0789: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a078c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a078f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a0794u); f_0063aac0();
    /* 005a0794: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a0796: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a0799: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a079d: je 0x5a07bb */ if (fZ) goto L_005a07bb;
L_005a079f:; BB(0x005a079f);
    /* 005a079f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a07a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a07a7u); f_0063aac0();
    /* 005a07a7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a07a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a07ac: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a07b0: je 0x5a07bb */ if (fZ) goto L_005a07bb;
L_005a07b2:; BB(0x005a07b2);
    /* 005a07b2: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a07b9: jmp 0x5a07c2 */ goto L_005a07c2;
L_005a07bb:; BB(0x005a07bb);
    /* 005a07bb: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005a07c2:; BB(0x005a07c2);
    /* 005a07c2: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005a07c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a07c8: je 0x5a0860 */ if (fZ) goto L_005a0860;
L_005a07ce:; BB(0x005a07ce);
    /* 005a07ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a07d1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a07d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a07d7: sub ecx, 0x315102 */ {  u32 a = r_ecx; u32 b = 0x315102u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a07dd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a07e0: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a07e4: ja 0x5a0860 */ if ((!fC&&!fZ)) goto L_005a0860;
L_005a07e6:; BB(0x005a07e6);
    /* 005a07e6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a07e9: jmp dword ptr [edx*4 + 0x5a0878] */ { u32 t = R32((u32)(r_edx*4+0x5a0878u)); switch (t) { case 0x5a07f0u: goto L_005a07f0; case 0x5a0809u: goto L_005a0809; case 0x5a0826u: goto L_005a0826; case 0x5a0843u: goto L_005a0843; default: UNSUP(0x005a07e9, "jump table entry is not a known target"); } }
L_005a07f0:; BB(0x005a07f0);
    /* 005a07f0: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a07f6: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a07fbu); f_005a2020();
    /* 005a07fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a07fc: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0802: call 0x5a36c0 */ r_esp -= 4; W32(r_esp, 0x5a0807u); f_005a36c0();
    /* 005a0807: jmp 0x5a0860 */ goto L_005a0860;
L_005a0809:; BB(0x005a0809);
    /* 005a0809: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a080b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a080d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0813: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0818u); f_005a2020();
    /* 005a0818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0819: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a081f: call 0x5a1ea0 */ r_esp -= 4; W32(r_esp, 0x5a0824u); f_005a1ea0();
    /* 005a0824: jmp 0x5a0870 */ goto L_005a0870;
L_005a0826:; BB(0x005a0826);
    /* 005a0826: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a082a: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0830: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0835u); f_005a2020();
    /* 005a0835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0836: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a083c: call 0x5a1ea0 */ r_esp -= 4; W32(r_esp, 0x5a0841u); f_005a1ea0();
    /* 005a0841: jmp 0x5a0870 */ goto L_005a0870;
L_005a0843:; BB(0x005a0843);
    /* 005a0843: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0845: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0847: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a084d: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x5a0852u); f_005a2020();
    /* 005a0852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0853: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0859: call 0x5a1ea0 */ r_esp -= 4; W32(r_esp, 0x5a085eu); f_005a1ea0();
    /* 005a085e: jmp 0x5a0870 */ goto L_005a0870;
L_005a0860:; BB(0x005a0860);
    /* 005a0860: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a0863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0864: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0867: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0868: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a086b: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x5a0870u); f_005dc7d0();
L_005a0870:; BB(0x005a0870);
    /* 005a0870: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0872: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0873: ret 8 */ FN_RET(0x005a0750); r_esp += 12; return;
}

void f_005a0890(void) /* BigRaiseRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0890);
    /* 005a0890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0891: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0897: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a089d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x5a08a2u); f_00636e70();
    /* 005a08a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a08a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a08a7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a08aa: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5a08afu); f_005fc420();
    /* 005a08af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a08b2: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5a08b7u); f_005db890();
    /* 005a08b7: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a08bd: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x5a08c2u); f_0059c2d0();
    /* 005a08c2: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a08c8: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x5a08cdu); f_005a3880();
    /* 005a08cd: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a08d3: call 0x59fa00 */ r_esp -= 4; W32(r_esp, 0x5a08d8u); f_0059fa00();
    /* 005a08d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005a08da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a08db: ret 8 */ FN_RET(0x005a0890); r_esp += 12; return;
}

void f_005a08e0(void) /* BigRaiseRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a08e0);
    /* 005a08e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a08e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a08e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a08e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a08e7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a08e9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a08ef: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a08f4u); f_005fb350();
    /* 005a08f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005a08f6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5a08fbu); f_00600230();
    /* 005a08fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a08fc: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0902: call 0x5a3c00 */ r_esp -= 4; W32(r_esp, 0x5a0907u); f_005a3c00();
    /* 005a0907: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0909: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a090f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a0914u); f_005fb350();
    /* 005a0914: mov ecx, eax */ r_ecx = r_eax;
    /* 005a0916: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5a091bu); f_00600230();
    /* 005a091b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a091c: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0922: call 0x5a3bd0 */ r_esp -= 4; W32(r_esp, 0x5a0927u); f_005a3bd0();
    /* 005a0927: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0929: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a092f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a0934u); f_005fb350();
    /* 005a0934: mov ecx, eax */ r_ecx = r_eax;
    /* 005a0936: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5a093bu); f_00600230();
    /* 005a093b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a093c: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0942: call 0x5a3ba0 */ r_esp -= 4; W32(r_esp, 0x5a0947u); f_005a3ba0();
    /* 005a0947: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a094d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5a0952u); f_005da830();
    /* 005a0952: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a0955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0957: je 0x5a0966 */ if (fZ) goto L_005a0966;
L_005a0959:; BB(0x005a0959);
    /* 005a0959: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a095f: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x5a0964u); f_0059c2d0();
    /* 005a0964: jmp 0x5a09a4 */ goto L_005a09a4;
L_005a0966:; BB(0x005a0966);
    /* 005a0966: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a096c: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5a0971u); f_00637610();
    /* 005a0971: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a0977: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x5a097cu); f_0059c2d0();
    /* 005a097c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a097f: movzx edx, byte ptr [ecx + 0x7c] */ r_edx = (u32)R8((u32)(r_ecx+0x7cu));
    /* 005a0983: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0985: je 0x5a09a4 */ if (fZ) goto L_005a09a4;
L_005a0987:; BB(0x005a0987);
    /* 005a0987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a098a: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 005a098e: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0994: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x5a0999u); f_005a3880();
    /* 005a0999: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a099f: call 0x59fa00 */ r_esp -= 4; W32(r_esp, 0x5a09a4u); f_0059fa00();
L_005a09a4:; BB(0x005a09a4);
    /* 005a09a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005a09a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a09a7: ret 8 */ FN_RET(0x005a08e0); r_esp += 12; return;
}

void f_005a09b0(void) /* BigRaiseRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a09b0);
    /* 005a09b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a09b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a09b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a09b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a09b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a09c0: jmp 0x5a09cb */ goto L_005a09cb;
L_005a09c2:; BB(0x005a09c2);
    /* 005a09c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a09c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a09c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a09cb:; BB(0x005a09cb);
    /* 005a09cb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a09cf: jge 0x5a09f7 */ if ((fS==fO)) goto L_005a09f7;
L_005a09d1:; BB(0x005a09d1);
    /* 005a09d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a09d4: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 005a09da: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005a09de: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a09e1: je 0x5a09f5 */ if (fZ) goto L_005a09f5;
L_005a09e3:; BB(0x005a09e3);
    /* 005a09e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a09e6: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 005a09ec: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005a09f0: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x5a09f5u); f_005cd330();
L_005a09f5:; BB(0x005a09f5);
    /* 005a09f5: jmp 0x5a09c2 */ goto L_005a09c2;
L_005a09f7:; BB(0x005a09f7);
    /* 005a09f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005a09f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a09fa: ret 4 */ FN_RET(0x005a09b0); r_esp += 8; return;
}

void f_005a0a00(void) /* BigRaiseRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0a00);
    /* 005a0a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0a07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0a0e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a0a11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0a14: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005a0a17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a0a19: mov ecx, eax */ r_ecx = r_eax;
    /* 005a0a1b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005a0a1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0a20u); call_ind(t); }
    /* 005a0a20: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0a23: ret  */ FN_RET(0x005a0a00); r_esp += 4; return;
}

void f_005a0a30(void) /* BigRaiseRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0a30);
    /* 005a0a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a31: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0a33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a35: push 0x6a77ed */ { u32 v = 0x6a77edu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a0a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a41: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0a44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a0a49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a0a4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a0a55: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005a0a58: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0a5b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5a0a60u); f_005d8230();
    /* 005a0a60: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a65: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0a6au); f_00686d82();
    /* 005a0a6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0a6d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a0a70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a0a77: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0a7b: je 0x5a0a8a */ if (fZ) goto L_005a0a8a;
L_005a0a7d:; BB(0x005a0a7d);
    /* 005a0a7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a0a80: call 0x5a1cc0 */ r_esp -= 4; W32(r_esp, 0x5a0a85u); f_005a1cc0();
    /* 005a0a85: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a0a88: jmp 0x5a0a91 */ goto L_005a0a91;
L_005a0a8a:; BB(0x005a0a8a);
    /* 005a0a8a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005a0a91:; BB(0x005a0a91);
    /* 005a0a91: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a0a94: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a0a97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0a9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a0aa1: mov dword ptr [0x7935d0], ecx */ W32((u32)(0x7935d0u), r_ecx);
    /* 005a0aa7: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0aad: call 0x5a27c0 */ r_esp -= 4; W32(r_esp, 0x5a0ab2u); f_005a27c0();
    /* 005a0ab2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ab4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0ab9u); f_00686d82();
    /* 005a0ab9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0abc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a0abf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a0ac6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0aca: je 0x5a0ad9 */ if (fZ) goto L_005a0ad9;
L_005a0acc:; BB(0x005a0acc);
    /* 005a0acc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a0acf: call 0x59a680 */ r_esp -= 4; W32(r_esp, 0x5a0ad4u); f_0059a680();
    /* 005a0ad4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a0ad7: jmp 0x5a0ae0 */ goto L_005a0ae0;
L_005a0ad9:; BB(0x005a0ad9);
    /* 005a0ad9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005a0ae0:; BB(0x005a0ae0);
    /* 005a0ae0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a0ae3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a0ae6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0aed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a0af0: mov dword ptr [0x7935c0], eax */ W32((u32)(0x7935c0u), r_eax);
    /* 005a0af5: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0afa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0affu); f_00686d82();
    /* 005a0aff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0b02: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a0b05: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a0b0c: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0b10: je 0x5a0b1f */ if (fZ) goto L_005a0b1f;
L_005a0b12:; BB(0x005a0b12);
    /* 005a0b12: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a0b15: call 0x59b4d0 */ r_esp -= 4; W32(r_esp, 0x5a0b1au); f_0059b4d0();
    /* 005a0b1a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a0b1d: jmp 0x5a0b26 */ goto L_005a0b26;
L_005a0b1f:; BB(0x005a0b1f);
    /* 005a0b1f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005a0b26:; BB(0x005a0b26);
    /* 005a0b26: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a0b29: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a0b2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0b33: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a0b36: mov dword ptr [0x7935c4], edx */ W32((u32)(0x7935c4u), r_edx);
    /* 005a0b3c: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a0b42: call 0x59ba30 */ r_esp -= 4; W32(r_esp, 0x5a0b47u); f_0059ba30();
    /* 005a0b47: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b49: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0b4eu); f_00686d82();
    /* 005a0b4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0b51: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a0b54: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a0b5b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0b5f: je 0x5a0b6e */ if (fZ) goto L_005a0b6e;
L_005a0b61:; BB(0x005a0b61);
    /* 005a0b61: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a0b64: call 0x59e8e0 */ r_esp -= 4; W32(r_esp, 0x5a0b69u); f_0059e8e0();
    /* 005a0b69: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a0b6c: jmp 0x5a0b75 */ goto L_005a0b75;
L_005a0b6e:; BB(0x005a0b6e);
    /* 005a0b6e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005a0b75:; BB(0x005a0b75);
    /* 005a0b75: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a0b78: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a0b7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0b82: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0b85: mov dword ptr [0x7935c8], ecx */ W32((u32)(0x7935c8u), r_ecx);
    /* 005a0b8b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b8d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0b92u); f_00686d82();
    /* 005a0b92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0b95: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a0b98: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005a0b9f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0ba3: je 0x5a0bc0 */ if (fZ) goto L_005a0bc0;
L_005a0ba5:; BB(0x005a0ba5);
    /* 005a0ba5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ba7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005a0baa: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5a0bafu); f_005fc0d0();
    /* 005a0baf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005a0bb2: mov dword ptr [edx], 0x6cf3c8 */ W32((u32)(r_edx), 0x6cf3c8u);
    /* 005a0bb8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a0bbb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a0bbe: jmp 0x5a0bc7 */ goto L_005a0bc7;
L_005a0bc0:; BB(0x005a0bc0);
    /* 005a0bc0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005a0bc7:; BB(0x005a0bc7);
    /* 005a0bc7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a0bca: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005a0bcd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0bd4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a0bd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0bd8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0bdb: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5a0be0u); f_005f1b70();
    /* 005a0be0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0be3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a0be6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0be9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005a0bec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a0bee: mov ecx, eax */ r_ecx = r_eax;
    /* 005a0bf0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005a0bf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0bf5u); call_ind(t); }
    /* 005a0bf5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0bf8: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x5a0bfdu); f_005d85e0();
    /* 005a0bfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0bff: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a0c05: call 0x59f960 */ r_esp -= 4; W32(r_esp, 0x5a0c0au); f_0059f960();
    /* 005a0c0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a0c0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a0c14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0c15: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0c17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0c18: ret  */ FN_RET(0x005a0a30); r_esp += 4; return;
}

void f_005a0c20(void) /* BigRaiseRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0c20);
    /* 005a0c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c21: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0c23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c25: push 0x6a7813 */ { u32 v = 0x6a7813u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a0c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c31: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0c34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a0c39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a0c3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a0c45: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005a0c48: mov dword ptr [ebp - 0x24], 0x6b30d8 */ W32((u32)(r_ebp+0xffffffdcu), 0x6b30d8u);
    /* 005a0c4f: mov dword ptr [ebp - 0x20], 0x6b30bc */ W32((u32)(r_ebp+0xffffffe0u), 0x6b30bcu);
    /* 005a0c56: mov dword ptr [ebp - 0x1c], 0x6cf4b0 */ W32((u32)(r_ebp+0xffffffe4u), 0x6cf4b0u);
    /* 005a0c5d: mov dword ptr [ebp - 0x18], 0x32 */ W32((u32)(r_ebp+0xffffffe8u), 0x32u);
    /* 005a0c64: mov dword ptr [ebp - 0x14], 0x33 */ W32((u32)(r_ebp+0xffffffecu), 0x33u);
    /* 005a0c6b: mov dword ptr [ebp - 0x10], 0x34 */ W32((u32)(r_ebp+0xfffffff0u), 0x34u);
    /* 005a0c72: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005a0c79: jmp 0x5a0c84 */ goto L_005a0c84;
L_005a0c7b:; BB(0x005a0c7b);
    /* 005a0c7b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0c7e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a0c81: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_005a0c84:; BB(0x005a0c84);
    /* 005a0c84: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a0c88: jge 0x5a0cd7 */ if ((fS==fO)) goto L_005a0cd7;
L_005a0c8a:; BB(0x005a0c8a);
    /* 005a0c8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c8c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c90: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c92: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c94: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c96: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0c99: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 005a0c9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c9e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a0ca3u); f_00630f40();
    /* 005a0ca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ca7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ca9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0cac: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a0caf: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a0cb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cb3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cb5: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cba: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a0cbd: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 005a0cc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cc4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a0cc7: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5a0cccu); f_005f9ef0();
    /* 005a0ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ccd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0cd0: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5a0cd5u); f_005ff5a0();
    /* 005a0cd5: jmp 0x5a0c7b */ goto L_005a0c7b;
L_005a0cd7:; BB(0x005a0cd7);
    /* 005a0cd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cd9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cde: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ce3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ce8: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ced: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cef: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cf1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cf3: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cf8: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cfd: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0cff: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d04: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d06: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d0b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a0d10u); f_00630f40();
    /* 005a0d10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0d13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d14: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d18: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a0d1b: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x5a0d20u); f_005fa790();
    /* 005a0d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0d24: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5a0d29u); f_005ff5a0();
    /* 005a0d29: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d2e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a0d33u); f_00686d82();
    /* 005a0d33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0d36: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005a0d39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a0d40: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0d44: je 0x5a0d5f */ if (fZ) goto L_005a0d5f;
L_005a0d46:; BB(0x005a0d46);
    /* 005a0d46: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a0d49: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5a0d4eu); f_005ec5a0();
    /* 005a0d4e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a0d51: mov dword ptr [eax], 0x6cf3ec */ W32((u32)(r_eax), 0x6cf3ecu);
    /* 005a0d57: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a0d5a: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005a0d5d: jmp 0x5a0d66 */ goto L_005a0d66;
L_005a0d5f:; BB(0x005a0d5f);
    /* 005a0d5f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005a0d66:; BB(0x005a0d66);
    /* 005a0d66: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a0d69: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005a0d6c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a0d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d75: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d77: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d79: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d7e: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d83: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d85: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d8a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d8c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d91: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d93: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a0d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0d97: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a0d9a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5a0d9fu); f_005fa5b0();
    /* 005a0d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0da0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0da3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5a0da8u); f_005ff5a0();
    /* 005a0da8: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0dae: call 0x5a2990 */ r_esp -= 4; W32(r_esp, 0x5a0db3u); f_005a2990();
    /* 005a0db3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a0db6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0db8: je 0x5a0dda */ if (fZ) goto L_005a0dda;
L_005a0dba:; BB(0x005a0dba);
    /* 005a0dba: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0dbc: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a0dc2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a0dc7u); f_005fb350();
    /* 005a0dc7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a0dca: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a0dcd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a0dcf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a0dd2: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005a0dd8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a0ddau); call_ind(t); }
L_005a0dda:; BB(0x005a0dda);
    /* 005a0dda: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0de0: call 0x5a3e10 */ r_esp -= 4; W32(r_esp, 0x5a0de5u); f_005a3e10();
    /* 005a0de5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a0de8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0dea: je 0x5a0e0c */ if (fZ) goto L_005a0e0c;
L_005a0dec:; BB(0x005a0dec);
    /* 005a0dec: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0dee: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a0df4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a0df9u); f_005fb350();
    /* 005a0df9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a0dfc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a0dff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a0e01: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a0e04: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005a0e0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a0e0cu); call_ind(t); }
L_005a0e0c:; BB(0x005a0e0c);
    /* 005a0e0c: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0e12: call 0x5a2970 */ r_esp -= 4; W32(r_esp, 0x5a0e17u); f_005a2970();
    /* 005a0e17: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a0e1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0e1c: je 0x5a0e3e */ if (fZ) goto L_005a0e3e;
L_005a0e1e:; BB(0x005a0e1e);
    /* 005a0e1e: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e20: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a0e26: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a0e2bu); f_005fb350();
    /* 005a0e2b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a0e2e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a0e31: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a0e33: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a0e36: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005a0e3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a0e3eu); call_ind(t); }
L_005a0e3e:; BB(0x005a0e3e);
    /* 005a0e3e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a0e41: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 005a0e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a0e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a0e4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0e50: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0e53: ret 0x10 */ FN_RET(0x005a0c20); r_esp += 20; return;
}

void f_005a0e60(void) /* BigRaiseRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0e60);
    /* 005a0e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0e67: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0e6d: call 0x5a2990 */ r_esp -= 4; W32(r_esp, 0x5a0e72u); f_005a2990();
    /* 005a0e72: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0e75: ret  */ FN_RET(0x005a0e60); r_esp += 4; return;
}

void f_005a0e80(void) /* BigRaiseRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0e80);
    /* 005a0e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0e87: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e8c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a0e92: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x5a0e97u); f_005df2e0();
    /* 005a0e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e98: push 0x315101 */ { u32 v = 0x315101u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0ea0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x5a0ea5u); f_005f1e60();
    /* 005a0ea5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0ea8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x5a0eadu); f_0064e430();
    /* 005a0ead: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0eaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0eb0: ret  */ FN_RET(0x005a0e80); r_esp += 4; return;
}

void f_005a0ec0(void) /* BigRaiseRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0ec0);
    /* 005a0ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0ec6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0ec9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a0ecc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a0ecf: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0ed6: je 0x5a0ee6 */ if (fZ) goto L_005a0ee6;
L_005a0ed8:; BB(0x005a0ed8);
    /* 005a0ed8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0edf: je 0x5a0f37 */ if (fZ) goto L_005a0f37;
L_005a0ee1:; BB(0x005a0ee1);
    /* 005a0ee1: jmp 0x5a0f6c */ goto L_005a0f6c;
L_005a0ee6:; BB(0x005a0ee6);
    /* 005a0ee6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ee8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0eed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0ef0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5a0ef5u); f_005fe640();
    /* 005a0ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ef7: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0efc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0eff: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5a0f04u); f_005fe640();
    /* 005a0f04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f06: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f0e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5a0f13u); f_005fe640();
    /* 005a0f13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f15: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f1d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5a0f22u); f_005fe640();
    /* 005a0f22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f24: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f28: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f30: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5a0f35u); f_005fe240();
    /* 005a0f35: jmp 0x5a0f6c */ goto L_005a0f6c;
L_005a0f37:; BB(0x005a0f37);
    /* 005a0f37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f39: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f41: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5a0f46u); f_005fe640();
    /* 005a0f46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f48: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f4a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f4c: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f54: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5a0f59u); f_005fe240();
    /* 005a0f59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f5d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f5f: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f64: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0f67: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5a0f6cu); f_005fe240();
L_005a0f6c:; BB(0x005a0f6c);
    /* 005a0f6c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a0f6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a0f73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0f77: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5a0f7cu); f_005d8670();
    /* 005a0f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0f7f: ret 8 */ FN_RET(0x005a0ec0); r_esp += 12; return;
}

void f_005a0f90(void) /* BigRaiseRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0f90);
    /* 005a0f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a0f97: cmp dword ptr [0x7935d0], 0 */ {  u32 a = R32((u32)(0x7935d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f9e: jne 0x5a0fa4 */ if (!fZ) goto L_005a0fa4;
L_005a0fa0:; BB(0x005a0fa0);
    /* 005a0fa0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a0fa2: jmp 0x5a0faf */ goto L_005a0faf;
L_005a0fa4:; BB(0x005a0fa4);
    /* 005a0fa4: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a0faa: call 0x5a37d0 */ r_esp -= 4; W32(r_esp, 0x5a0fafu); f_005a37d0();
L_005a0faf:; BB(0x005a0faf);
    /* 005a0faf: mov esp, ebp */ r_esp = r_ebp;
    /* 005a0fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a0fb2: ret  */ FN_RET(0x005a0f90); r_esp += 4; return;
}

void f_005a0fc0(void) /* BigRaiseRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a0fc0);
    /* 005a0fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a0fc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0fc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a0fc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a0fd0: jmp 0x5a0fdb */ goto L_005a0fdb;
L_005a0fd2:; BB(0x005a0fd2);
    /* 005a0fd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a0fd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a0fd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a0fdb:; BB(0x005a0fdb);
    /* 005a0fdb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a0fdf: jge 0x5a1089 */ if ((fS==fO)) goto L_005a1089;
L_005a0fe5:; BB(0x005a0fe5);
    /* 005a0fe5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0fe8: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a0feb: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0fee: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a0ff4: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a0ff8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a0ffb: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a0ffe: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1001: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a1007: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a100b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a100d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005a1013: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a1015u); call_ind(t); }
    /* 005a1015: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a1018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a101a: je 0x5a106c */ if (fZ) goto L_005a106c;
L_005a101c:; BB(0x005a101c);
    /* 005a101c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a101f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a1022: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1025: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a102b: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a102f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a1032: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1035: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a1038: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a103b: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005a103f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1041: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a1044: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005a1047: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005a104b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005a104e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a1051: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1054: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1055: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a105c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a105d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a1062u); f_005dcb00();
    /* 005a1062: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1065: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1067: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5a106cu); f_005d5cf0();
L_005a106c:; BB(0x005a106c);
    /* 005a106c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a106f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a1072: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1075: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a107b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a107f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5a1084u); f_005cb9b0();
    /* 005a1084: jmp 0x5a0fd2 */ goto L_005a0fd2;
L_005a1089:; BB(0x005a1089);
    /* 005a1089: mov esp, ebp */ r_esp = r_ebp;
    /* 005a108b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a108c: ret 4 */ FN_RET(0x005a0fc0); r_esp += 8; return;
}

void f_005a1090(void) /* BigRaiseRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1090);
    /* 005a1090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1091: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1093: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1096: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1097: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1098: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a109b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a109e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a109f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a10a4u); f_005dcb00();
    /* 005a10a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a10a7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 005a10ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a10ae: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 005a10b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a10b5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005a10b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a10b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a10bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a10bd: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a10c3: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a10c8u); f_005a2040();
    /* 005a10c8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a10cb: mov ecx, eax */ r_ecx = r_eax;
    /* 005a10cd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a10d2u); f_0064c5c0();
    /* 005a10d2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005a10d4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005a10d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a10da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a10db: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a10e1: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a10e6u); f_005a2040();
    /* 005a10e6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 005a10e9: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 005a10ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a10ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a10f0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a10f5u); f_005dcb00();
    /* 005a10f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a10f8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a10fa: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5a10ffu); f_0063b0a0();
    /* 005a10ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a1100: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1101: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1104: ret 4 */ FN_RET(0x005a1090); r_esp += 8; return;
}

void f_005a1110(void) /* BigRaiseRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1110);
    /* 005a1110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1111: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1113: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1116: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1117: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1118: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a111b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a111e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a111f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a1124u); f_005dcb00();
    /* 005a1124: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1127: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 005a112d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a112e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 005a1134: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1135: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005a1138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1139: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a113b: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a1141: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a1146u); f_005a2040();
    /* 005a1146: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1149: mov ecx, eax */ r_ecx = r_eax;
    /* 005a114b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a1150u); f_0064c5c0();
    /* 005a1150: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005a1152: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005a1155: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1157: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a115d: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a1162u); f_005a2040();
    /* 005a1162: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 005a1165: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 005a1168: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a116b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a116c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a1171u); f_005dcb00();
    /* 005a1171: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1174: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1176: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5a117bu); f_0063b0a0();
    /* 005a117b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a117c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a117d: mov esp, ebp */ r_esp = r_ebp;
    /* 005a117f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1180: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
}

