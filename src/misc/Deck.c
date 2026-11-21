#include "protos.h"

void f_00465190(void) /* Deck::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465190);
    /* 00465190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465191: mov ebp, esp */ r_ebp = r_esp;
    /* 00465193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465195: push 0x69f43e */ { u32 v = 0x69f43eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046519a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004651a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004651a1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004651a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004651a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004651ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004651ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004651af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004651b5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004651b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004651bb: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4651c0u); f_0060c5f0();
    /* 004651c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004651c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004651ca: mov dword ptr [eax], 0x6bac94 */ W32((u32)(r_eax), 0x6bac94u);
    /* 004651d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004651d3: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004651d6: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x4651dbu); f_0060c5f0();
    /* 004651db: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004651df: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004651e6: jmp 0x4651f1 */ goto L_004651f1;
L_004651e8:; BB(0x004651e8);
    /* 004651e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004651eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004651ee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004651f1:; BB(0x004651f1);
    /* 004651f1: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004651f5: jge 0x465254 */ if ((fS==fO)) goto L_00465254;
L_004651f7:; BB(0x004651f7);
    /* 004651f7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004651fe: jmp 0x465209 */ goto L_00465209;
L_00465200:; BB(0x00465200);
    /* 00465200: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465203: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00465206: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00465209:; BB(0x00465209);
    /* 00465209: cmp dword ptr [ebp - 0x14], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046520d: jge 0x465252 */ if ((fS==fO)) goto L_00465252;
L_0046520f:; BB(0x0046520f);
    /* 0046520f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00465211: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x465216u); f_00686d82();
    /* 00465216: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465219: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046521c: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00465220: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465224: je 0x465233 */ if (fZ) goto L_00465233;
L_00465226:; BB(0x00465226);
    /* 00465226: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465229: call 0x463c70 */ r_esp -= 4; W32(r_esp, 0x46522eu); f_00463c70();
    /* 0046522e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00465231: jmp 0x46523a */ goto L_0046523a;
L_00465233:; BB(0x00465233);
    /* 00465233: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0046523a:; BB(0x0046523a);
    /* 0046523a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046523d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00465240: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00465244: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465247: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465248: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046524b: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x465250u); f_0060c7d0();
    /* 00465250: jmp 0x465200 */ goto L_00465200;
L_00465252:; BB(0x00465252);
    /* 00465252: jmp 0x4651e8 */ goto L_004651e8;
L_00465254:; BB(0x00465254);
    /* 00465254: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00465257: call 0x465650 */ r_esp -= 4; W32(r_esp, 0x46525cu); f_00465650();
    /* 0046525c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465263: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00465266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00465270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00465271: mov esp, ebp */ r_esp = r_ebp;
    /* 00465273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465274: ret  */ FN_RET(0x00465190); r_esp += 4; return;
}

void f_00465280(void) /* Deck::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465280);
    /* 00465280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465281: mov ebp, esp */ r_ebp = r_esp;
    /* 00465283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465285: push 0x69f46c */ { u32 v = 0x69f46cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046528a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00465290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465291: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465294: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00465299: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046529b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046529c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046529f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004652a5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004652a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004652ab: mov dword ptr [eax], 0x6bac94 */ W32((u32)(r_eax), 0x6bac94u);
    /* 004652b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004652b8:; BB(0x004652b8);
    /* 004652b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004652bb: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4652c0u); f_0060c9a0();
    /* 004652c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004652c2: je 0x46530b */ if (fZ) goto L_0046530b;
L_004652c4:; BB(0x004652c4);
    /* 004652c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004652c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004652c9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4652ceu); f_0060ca40();
    /* 004652ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004652d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004652d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004652d5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004652d8: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x4652ddu); f_0060c890();
    /* 004652dd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004652e0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004652e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004652e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004652e9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004652ed: je 0x465302 */ if (fZ) goto L_00465302;
L_004652ef:; BB(0x004652ef);
    /* 004652ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004652f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004652f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004652f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004652f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004652fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4652fdu); call_ind(t); }
    /* 004652fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00465300: jmp 0x465309 */ goto L_00465309;
L_00465302:; BB(0x00465302);
    /* 00465302: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00465309:; BB(0x00465309);
    /* 00465309: jmp 0x4652b8 */ goto L_004652b8;
L_0046530b:; BB(0x0046530b);
    /* 0046530b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046530f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465312: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00465315: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x46531au); f_0060c6a0();
    /* 0046531a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465321: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465324: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x465329u); f_0060c6a0();
    /* 00465329: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046532c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00465333: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00465334: mov esp, ebp */ r_esp = r_ebp;
    /* 00465336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465337: ret  */ FN_RET(0x00465280); r_esp += 4; return;
}

