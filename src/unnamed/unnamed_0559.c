#include "protos.h"

void f_00559130(void) /* sub_559130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559130);
    /* 00559130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559131: mov ebp, esp */ r_ebp = r_esp;
    /* 00559133: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559136: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00559137: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055913a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055913d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00559140: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559143: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559147: jne 0x559171 */ if (!fZ) goto L_00559171;
L_00559149:; BB(0x00559149);
    /* 00559149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055914b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x559150u); f_005dcb00();
    /* 00559150: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559153: mov ecx, eax */ r_ecx = r_eax;
    /* 00559155: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x55915au); f_005d5a50();
    /* 0055915a: mov esi, eax */ r_esi = r_eax;
    /* 0055915c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055915f: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x559164u); f_005d0aa0();
    /* 00559164: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559166: jge 0x559171 */ if ((fS==fO)) goto L_00559171;
L_00559168:; BB(0x00559168);
    /* 00559168: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055916f: jmp 0x559178 */ goto L_00559178;
L_00559171:; BB(0x00559171);
    /* 00559171: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_00559178:; BB(0x00559178);
    /* 00559178: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055917b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055917c: mov esp, ebp */ r_esp = r_ebp;
    /* 0055917e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055917f: ret  */ FN_RET(0x00559130); r_esp += 4; return;
}

void f_00559180(void) /* sub_559180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559180);
    /* 00559180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559181: mov ebp, esp */ r_ebp = r_esp;
    /* 00559183: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559186: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559189: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055918c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0055918f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559192: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559194: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559198: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0055919b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055919d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055919e: ret  */ FN_RET(0x00559180); r_esp += 4; return;
}

void f_005591a0(void) /* sub_5591A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005591a0);
    /* 005591a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005591a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005591a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005591a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005591a7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005591aa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005591ad: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005591b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005591b3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005591b7: jne 0x5591f0 */ if (!fZ) goto L_005591f0;
L_005591b9:; BB(0x005591b9);
    /* 005591b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005591bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005591bf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005591c2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005591c6: jne 0x5591f0 */ if (!fZ) goto L_005591f0;
L_005591c8:; BB(0x005591c8);
    /* 005591c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005591ca: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5591cfu); f_005dcb00();
    /* 005591cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005591d2: mov ecx, eax */ r_ecx = r_eax;
    /* 005591d4: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5591d9u); f_005d5a50();
    /* 005591d9: mov esi, eax */ r_esi = r_eax;
    /* 005591db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005591de: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x5591e3u); f_005d0aa0();
    /* 005591e3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005591e5: jge 0x5591f0 */ if ((fS==fO)) goto L_005591f0;
L_005591e7:; BB(0x005591e7);
    /* 005591e7: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005591ee: jmp 0x5591f7 */ goto L_005591f7;
L_005591f0:; BB(0x005591f0);
    /* 005591f0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005591f7:; BB(0x005591f7);
    /* 005591f7: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005591fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005591fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005591fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005591fe: ret  */ FN_RET(0x005591a0); r_esp += 4; return;
}

void f_005592a0(void) /* sub_5592A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005592a0);
    /* 005592a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005592a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005592a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005592a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005592a7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005592aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005592b1: jmp 0x5592bc */ goto L_005592bc;
L_005592b3:; BB(0x005592b3);
    /* 005592b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005592b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005592b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005592bc:; BB(0x005592bc);
    /* 005592bc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005592c0: jge 0x5592d9 */ if ((fS==fO)) goto L_005592d9;
L_005592c2:; BB(0x005592c2);
    /* 005592c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005592c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005592c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005592cb: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005592ce: mov ax, word ptr [esi + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2))) & 0xffffu);
    /* 005592d2: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 005592d7: jmp 0x5592b3 */ goto L_005592b3;
L_005592d9:; BB(0x005592d9);
    /* 005592d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005592dc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005592df: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005592e5: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 005592eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005592ee: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005592f2: ja 0x55933a */ if ((!fC&&!fZ)) goto L_0055933a;
L_005592f4:; BB(0x005592f4);
    /* 005592f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005592f7: jmp dword ptr [ecx*4 + 0x55934c] */ { u32 t = R32((u32)(r_ecx*4+0x55934cu)); switch (t) { case 0x5592feu: goto L_005592fe; case 0x559308u: goto L_00559308; case 0x559312u: goto L_00559312; case 0x55931cu: goto L_0055931c; case 0x559326u: goto L_00559326; case 0x559330u: goto L_00559330; default: UNSUP(0x005592f7, "jump table entry is not a known target"); } }
L_005592fe:; BB(0x005592fe);
    /* 005592fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559301: call 0x559e90 */ r_esp -= 4; W32(r_esp, 0x559306u); f_00559e90();
    /* 00559306: jmp 0x559342 */ goto L_00559342;
L_00559308:; BB(0x00559308);
    /* 00559308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055930b: call 0x559ed0 */ r_esp -= 4; W32(r_esp, 0x559310u); f_00559ed0();
    /* 00559310: jmp 0x559342 */ goto L_00559342;
L_00559312:; BB(0x00559312);
    /* 00559312: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559315: call 0x55a000 */ r_esp -= 4; W32(r_esp, 0x55931au); f_0055a000();
    /* 0055931a: jmp 0x559342 */ goto L_00559342;
L_0055931c:; BB(0x0055931c);
    /* 0055931c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055931f: call 0x55a040 */ r_esp -= 4; W32(r_esp, 0x559324u); f_0055a040();
    /* 00559324: jmp 0x559342 */ goto L_00559342;
L_00559326:; BB(0x00559326);
    /* 00559326: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559329: call 0x55a1a0 */ r_esp -= 4; W32(r_esp, 0x55932eu); f_0055a1a0();
    /* 0055932e: jmp 0x559342 */ goto L_00559342;
L_00559330:; BB(0x00559330);
    /* 00559330: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559333: call 0x55a360 */ r_esp -= 4; W32(r_esp, 0x559338u); f_0055a360();
    /* 00559338: jmp 0x559342 */ goto L_00559342;
L_0055933a:; BB(0x0055933a);
    /* 0055933a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055933d: jmp 0x559342 */ goto L_00559342;
L_00559342:; BB(0x00559342);
    /* 00559342: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00559343: mov esp, ebp */ r_esp = r_ebp;
    /* 00559345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559346: ret 8 */ FN_RET(0x005592a0); r_esp += 12; return;
}

void f_00559380(void) /* sub_559380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559380);
    /* 00559380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559381: mov ebp, esp */ r_ebp = r_esp;
    /* 00559383: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559386: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559389: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00559390: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559397: jmp 0x5593a2 */ goto L_005593a2;
L_00559399:; BB(0x00559399);
    /* 00559399: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055939c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055939f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005593a2:; BB(0x005593a2);
    /* 005593a2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005593a6: jge 0x5593c2 */ if ((fS==fO)) goto L_005593c2;
L_005593a8:; BB(0x005593a8);
    /* 005593a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005593ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005593ae: movzx eax, word ptr [edx + ecx*2 + 4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x4u));
    /* 005593b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593b5: je 0x5593c0 */ if (fZ) goto L_005593c0;
L_005593b7:; BB(0x005593b7);
    /* 005593b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005593ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005593bd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005593c0:; BB(0x005593c0);
    /* 005593c0: jmp 0x559399 */ goto L_00559399;
L_005593c2:; BB(0x005593c2);
    /* 005593c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005593c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005593c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005593c8: ret  */ FN_RET(0x00559380); r_esp += 4; return;
}

void f_005593d0(void) /* sub_5593D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005593d0);
    /* 005593d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005593d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005593d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005593d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005593d9: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005593dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005593de: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5593e3u); f_00641280();
    /* 005593e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005593e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005593e9: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593ed: jne 0x5593f6 */ if (!fZ) goto L_005593f6;
L_005593ef:; BB(0x005593ef);
    /* 005593ef: mov eax, 0x14 */ r_eax = 0x14u;
    /* 005593f4: jmp 0x559459 */ goto L_00559459;
L_005593f6:; BB(0x005593f6);
    /* 005593f6: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593fa: jne 0x559456 */ if (!fZ) goto L_00559456;
L_005593fc:; BB(0x005593fc);
    /* 005593fc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00559402: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00559408: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0055940b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055940f: je 0x55944f */ if (fZ) goto L_0055944f;
L_00559411:; BB(0x00559411);
    /* 00559411: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00559416: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0055941c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055941f: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559423: je 0x55944f */ if (fZ) goto L_0055944f;
L_00559425:; BB(0x00559425);
    /* 00559425: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0055942b: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 00559431: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00559434: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559438: je 0x55944f */ if (fZ) goto L_0055944f;
L_0055943a:; BB(0x0055943a);
    /* 0055943a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00559440: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00559446: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00559449: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055944d: jne 0x559456 */ if (!fZ) goto L_00559456;
L_0055944f:; BB(0x0055944f);
    /* 0055944f: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
L_00559456:; BB(0x00559456);
    /* 00559456: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00559459:; BB(0x00559459);
    /* 00559459: mov esp, ebp */ r_esp = r_ebp;
    /* 0055945b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055945c: ret 4 */ FN_RET(0x005593d0); r_esp += 8; return;
}

void f_00559460(void) /* sub_559460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559460);
    /* 00559460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559461: mov ebp, esp */ r_ebp = r_esp;
    /* 00559463: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559466: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559469: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055946c: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x559471u); f_005594b0();
    /* 00559471: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559476: je 0x559496 */ if (fZ) goto L_00559496;
L_00559478:; BB(0x00559478);
    /* 00559478: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055947b: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 0055947f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559480: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559485u); f_00641280();
    /* 00559485: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559488: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055948b: jne 0x559496 */ if (!fZ) goto L_00559496;
L_0055948d:; BB(0x0055948d);
    /* 0055948d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00559494: jmp 0x55949d */ goto L_0055949d;
L_00559496:; BB(0x00559496);
    /* 00559496: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0055949d:; BB(0x0055949d);
    /* 0055949d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005594a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005594a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005594a3: ret  */ FN_RET(0x00559460); r_esp += 4; return;
}

void f_005594b0(void) /* sub_5594B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005594b0);
    /* 005594b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005594b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005594b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005594b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005594b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005594bc: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x5594c1u); f_005595c0();
    /* 005594c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005594c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005594c6: je 0x5594e0 */ if (fZ) goto L_005594e0;
L_005594c8:; BB(0x005594c8);
    /* 005594c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005594cb: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x5594d0u); f_00559550();
    /* 005594d0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005594d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005594d5: je 0x5594e0 */ if (fZ) goto L_005594e0;
L_005594d7:; BB(0x005594d7);
    /* 005594d7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005594de: jmp 0x5594e7 */ goto L_005594e7;
L_005594e0:; BB(0x005594e0);
    /* 005594e0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005594e7:; BB(0x005594e7);
    /* 005594e7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005594ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005594ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005594ed: ret  */ FN_RET(0x005594b0); r_esp += 4; return;
}

void f_005594f0(void) /* sub_5594F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005594f0);
    /* 005594f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005594f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005594f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005594f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005594f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005594fa: call 0x559c50 */ r_esp -= 4; W32(r_esp, 0x5594ffu); f_00559c50();
    /* 005594ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00559501: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559504: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00559507: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00559509: mov esp, ebp */ r_esp = r_ebp;
    /* 0055950b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055950c: ret  */ FN_RET(0x005594f0); r_esp += 4; return;
}

void f_00559510(void) /* sub_559510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559510);
    /* 00559510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559511: mov ebp, esp */ r_ebp = r_esp;
    /* 00559513: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559516: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559519: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055951c: call 0x559c50 */ r_esp -= 4; W32(r_esp, 0x559521u); f_00559c50();
    /* 00559521: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559524: jne 0x55953b */ if (!fZ) goto L_0055953b;
L_00559526:; BB(0x00559526);
    /* 00559526: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559529: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x55952eu); f_005596e0();
    /* 0055952e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559530: je 0x55953b */ if (fZ) goto L_0055953b;
L_00559532:; BB(0x00559532);
    /* 00559532: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00559539: jmp 0x559542 */ goto L_00559542;
L_0055953b:; BB(0x0055953b);
    /* 0055953b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00559542:; BB(0x00559542);
    /* 00559542: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00559545: mov esp, ebp */ r_esp = r_ebp;
    /* 00559547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559548: ret  */ FN_RET(0x00559510); r_esp += 4; return;
}

void f_00559550(void) /* sub_559550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559550);
    /* 00559550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559551: mov ebp, esp */ r_ebp = r_esp;
    /* 00559553: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559556: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559559: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055955c: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 00559560: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559561: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x559566u); f_00641290();
    /* 00559566: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559569: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055956c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00559573: jmp 0x55957e */ goto L_0055957e;
L_00559575:; BB(0x00559575);
    /* 00559575: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559578: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055957b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055957e:; BB(0x0055957e);
    /* 0055957e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559581: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559586u); f_00559380();
    /* 00559586: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559589: jge 0x5595ae */ if ((fS==fO)) goto L_005595ae;
L_0055958b:; BB(0x0055958b);
    /* 0055958b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055958e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559591: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00559596: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559597: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55959cu); f_00641290();
    /* 0055959c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055959f: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005595a2: jne 0x5595a8 */ if (!fZ) goto L_005595a8;
L_005595a4:; BB(0x005595a4);
    /* 005595a4: jmp 0x559575 */ goto L_00559575;
L_005595a8:; BB(0x005595a8);
    /* 005595a8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005595aa: jmp 0x5595b0 */ goto L_005595b0;
L_005595ae:; BB(0x005595ae);
    /* 005595ae: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005595b0:; BB(0x005595b0);
    /* 005595b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005595b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005595b3: ret  */ FN_RET(0x00559550); r_esp += 4; return;
}

void f_005595c0(void) /* sub_5595C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005595c0);
    /* 005595c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005595c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005595c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005595c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005595c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005595cc: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005595d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005595d1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5595d6u); f_00641280();
    /* 005595d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005595d9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005595dc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005595e3: jmp 0x5595ee */ goto L_005595ee;
L_005595e5:; BB(0x005595e5);
    /* 005595e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005595e8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005595eb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005595ee:; BB(0x005595ee);
    /* 005595ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005595f1: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x5595f6u); f_00559380();
    /* 005595f6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005595f9: jge 0x55964c */ if ((fS==fO)) goto L_0055964c;
L_005595fb:; BB(0x005595fb);
    /* 005595fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005595fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559601: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00559604: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559607: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055960a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055960f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559610: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559615u); f_00641280();
    /* 00559615: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559618: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055961b: je 0x559642 */ if (fZ) goto L_00559642;
L_0055961d:; BB(0x0055961d);
    /* 0055961d: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559621: jne 0x559646 */ if (!fZ) goto L_00559646;
L_00559623:; BB(0x00559623);
    /* 00559623: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559627: jne 0x559646 */ if (!fZ) goto L_00559646;
L_00559629:; BB(0x00559629);
    /* 00559629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055962c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055962f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559635: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55963au); f_00641280();
    /* 0055963a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055963d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559640: jne 0x559646 */ if (!fZ) goto L_00559646;
L_00559642:; BB(0x00559642);
    /* 00559642: jmp 0x5595e5 */ goto L_005595e5;
L_00559646:; BB(0x00559646);
    /* 00559646: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559648: jmp 0x55964e */ goto L_0055964e;
L_0055964c:; BB(0x0055964c);
    /* 0055964c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0055964e:; BB(0x0055964e);
    /* 0055964e: mov esp, ebp */ r_esp = r_ebp;
    /* 00559650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559651: ret  */ FN_RET(0x005595c0); r_esp += 4; return;
}

void f_00559660(void) /* sub_559660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559660);
    /* 00559660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559661: mov ebp, esp */ r_ebp = r_esp;
    /* 00559663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055966a: call 0x559c50 */ r_esp -= 4; W32(r_esp, 0x55966fu); f_00559c50();
    /* 0055966f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00559671: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559674: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00559677: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00559679: mov esp, ebp */ r_esp = r_ebp;
    /* 0055967b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055967c: ret  */ FN_RET(0x00559660); r_esp += 4; return;
}

void f_00559680(void) /* sub_559680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559680);
    /* 00559680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559681: mov ebp, esp */ r_ebp = r_esp;
    /* 00559683: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559686: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559689: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00559690: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00559697: jmp 0x5596a2 */ goto L_005596a2;
L_00559699:; BB(0x00559699);
    /* 00559699: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055969c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055969f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005596a2:; BB(0x005596a2);
    /* 005596a2: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005596a6: jge 0x5596c4 */ if ((fS==fO)) goto L_005596c4;
L_005596a8:; BB(0x005596a8);
    /* 005596a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005596ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005596ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005596af: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x5596b4u); f_00559d60();
    /* 005596b4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005596b7: jne 0x5596c2 */ if (!fZ) goto L_005596c2;
L_005596b9:; BB(0x005596b9);
    /* 005596b9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005596bc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005596bf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005596c2:; BB(0x005596c2);
    /* 005596c2: jmp 0x559699 */ goto L_00559699;
L_005596c4:; BB(0x005596c4);
    /* 005596c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005596c6: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005596ca: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005596cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005596cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005596d0: ret  */ FN_RET(0x00559680); r_esp += 4; return;
}

void f_005596e0(void) /* sub_5596E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005596e0);
    /* 005596e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005596e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005596e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005596e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005596e9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005596f0: jmp 0x5596fb */ goto L_005596fb;
L_005596f2:; BB(0x005596f2);
    /* 005596f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005596f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005596f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005596fb:; BB(0x005596fb);
    /* 005596fb: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005596ff: jge 0x559719 */ if ((fS==fO)) goto L_00559719;
L_00559701:; BB(0x00559701);
    /* 00559701: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559704: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559705: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559708: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55970du); f_00559d60();
    /* 0055970d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559710: jne 0x559717 */ if (!fZ) goto L_00559717;
L_00559712:; BB(0x00559712);
    /* 00559712: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559715: jmp 0x55971b */ goto L_0055971b;
L_00559717:; BB(0x00559717);
    /* 00559717: jmp 0x5596f2 */ goto L_005596f2;
L_00559719:; BB(0x00559719);
    /* 00559719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0055971b:; BB(0x0055971b);
    /* 0055971b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055971d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055971e: ret  */ FN_RET(0x005596e0); r_esp += 4; return;
}

void f_00559720(void) /* sub_559720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559720);
    /* 00559720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559721: mov ebp, esp */ r_ebp = r_esp;
    /* 00559723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559729: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559730: jmp 0x55973b */ goto L_0055973b;
L_00559732:; BB(0x00559732);
    /* 00559732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559735: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559738: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055973b:; BB(0x0055973b);
    /* 0055973b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055973e: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559743u); f_00559380();
    /* 00559743: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559746: jge 0x55979b */ if ((fS==fO)) goto L_0055979b;
L_00559748:; BB(0x00559748);
    /* 00559748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055974b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055974e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559754: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559757: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55975cu); f_005593d0();
    /* 0055975c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055975f: je 0x559799 */ if (fZ) goto L_00559799;
L_00559761:; BB(0x00559761);
    /* 00559761: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559764: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559767: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055976c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055976d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559772u); f_00641280();
    /* 00559772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559776: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559779: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55977eu); f_00559d60();
    /* 0055977e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559781: jne 0x559799 */ if (!fZ) goto L_00559799;
L_00559783:; BB(0x00559783);
    /* 00559783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559786: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559789: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055978e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055978f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559794u); f_00641280();
    /* 00559794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559797: jmp 0x55979d */ goto L_0055979d;
L_00559799:; BB(0x00559799);
    /* 00559799: jmp 0x559732 */ goto L_00559732;
L_0055979b:; BB(0x0055979b);
    /* 0055979b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0055979d:; BB(0x0055979d);
    /* 0055979d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055979f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005597a0: ret  */ FN_RET(0x00559720); r_esp += 4; return;
}

void f_005597b0(void) /* sub_5597B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005597b0);
    /* 005597b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005597b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005597b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005597b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005597b7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005597b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005597bc: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x5597c1u); f_00559d60();
    /* 005597c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005597c3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005597c6: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005597c9: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005597cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005597cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005597ce: ret  */ FN_RET(0x005597b0); r_esp += 4; return;
}

void f_005597d0(void) /* sub_5597D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005597d0);
    /* 005597d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005597d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005597d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005597d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005597d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005597dc: call 0x5598e0 */ r_esp -= 4; W32(r_esp, 0x5597e1u); f_005598e0();
    /* 005597e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005597e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005597e6: je 0x559845 */ if (fZ) goto L_00559845;
L_005597e8:; BB(0x005597e8);
    /* 005597e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005597ef: jmp 0x5597fa */ goto L_005597fa;
L_005597f1:; BB(0x005597f1);
    /* 005597f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005597f4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005597f7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005597fa:; BB(0x005597fa);
    /* 005597fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005597fd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559802u); f_00559380();
    /* 00559802: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559805: jge 0x559845 */ if ((fS==fO)) goto L_00559845;
L_00559807:; BB(0x00559807);
    /* 00559807: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055980a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055980d: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00559812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559813: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559816: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55981bu); f_005593d0();
    /* 0055981b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055981e: jne 0x559822 */ if (!fZ) goto L_00559822;
L_00559820:; BB(0x00559820);
    /* 00559820: jmp 0x5597f1 */ goto L_005597f1;
L_00559822:; BB(0x00559822);
    /* 00559822: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559825: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559828: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055982d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055982e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559833u); f_00641280();
    /* 00559833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559836: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559839: jl 0x55983f */ if ((fS!=fO)) goto L_0055983f;
L_0055983b:; BB(0x0055983b);
    /* 0055983b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055983d: jmp 0x559847 */ goto L_00559847;
L_0055983f:; BB(0x0055983f);
    /* 0055983f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559841: jmp 0x559847 */ goto L_00559847;
L_00559845:; BB(0x00559845);
    /* 00559845: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00559847:; BB(0x00559847);
    /* 00559847: mov esp, ebp */ r_esp = r_ebp;
    /* 00559849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055984a: ret  */ FN_RET(0x005597d0); r_esp += 4; return;
}

void f_00559850(void) /* sub_559850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559850);
    /* 00559850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559851: mov ebp, esp */ r_ebp = r_esp;
    /* 00559853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055985a: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55985fu); f_00559d00();
    /* 0055985f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559861: jne 0x559867 */ if (!fZ) goto L_00559867;
L_00559863:; BB(0x00559863);
    /* 00559863: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559865: jmp 0x5598d7 */ goto L_005598d7;
L_00559867:; BB(0x00559867);
    /* 00559867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055986a: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55986fu); f_00559d00();
    /* 0055986f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559872: jl 0x559878 */ if ((fS!=fO)) goto L_00559878;
L_00559874:; BB(0x00559874);
    /* 00559874: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559876: jmp 0x5598d7 */ goto L_005598d7;
L_00559878:; BB(0x00559878);
    /* 00559878: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055987b: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559880u); f_00559d00();
    /* 00559880: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559883: jne 0x559895 */ if (!fZ) goto L_00559895;
L_00559885:; BB(0x00559885);
    /* 00559885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559888: call 0x559720 */ r_esp -= 4; W32(r_esp, 0x55988du); f_00559720();
    /* 0055988d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055988f: je 0x559895 */ if (fZ) goto L_00559895;
L_00559891:; BB(0x00559891);
    /* 00559891: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559893: jmp 0x5598d7 */ goto L_005598d7;
L_00559895:; BB(0x00559895);
    /* 00559895: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559898: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55989du); f_00559d00();
    /* 0055989d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598a0: jne 0x5598b5 */ if (!fZ) goto L_005598b5;
L_005598a2:; BB(0x005598a2);
    /* 005598a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005598a5: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x5598aau); f_00559660();
    /* 005598aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005598ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598af: je 0x5598b5 */ if (fZ) goto L_005598b5;
L_005598b1:; BB(0x005598b1);
    /* 005598b1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005598b3: jmp 0x5598d7 */ goto L_005598d7;
L_005598b5:; BB(0x005598b5);
    /* 005598b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005598b8: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x5598bdu); f_00559d00();
    /* 005598bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598c0: jne 0x5598d5 */ if (!fZ) goto L_005598d5;
L_005598c2:; BB(0x005598c2);
    /* 005598c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005598c5: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x5598cau); f_005594f0();
    /* 005598ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005598cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598cf: je 0x5598d5 */ if (fZ) goto L_005598d5;
L_005598d1:; BB(0x005598d1);
    /* 005598d1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005598d3: jmp 0x5598d7 */ goto L_005598d7;
L_005598d5:; BB(0x005598d5);
    /* 005598d5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005598d7:; BB(0x005598d7);
    /* 005598d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005598d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005598da: ret  */ FN_RET(0x00559850); r_esp += 4; return;
}

void f_005598e0(void) /* sub_5598E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005598e0);
    /* 005598e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005598e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005598e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005598e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005598e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005598ec: call 0x559a30 */ r_esp -= 4; W32(r_esp, 0x5598f1u); f_00559a30();
    /* 005598f1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005598f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598f6: je 0x559910 */ if (fZ) goto L_00559910;
L_005598f8:; BB(0x005598f8);
    /* 005598f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005598fb: call 0x559af0 */ r_esp -= 4; W32(r_esp, 0x559900u); f_00559af0();
    /* 00559900: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559903: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559905: je 0x559910 */ if (fZ) goto L_00559910;
L_00559907:; BB(0x00559907);
    /* 00559907: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055990e: jmp 0x559917 */ goto L_00559917;
L_00559910:; BB(0x00559910);
    /* 00559910: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00559917:; BB(0x00559917);
    /* 00559917: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055991a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055991c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055991d: ret  */ FN_RET(0x005598e0); r_esp += 4; return;
}

void f_00559920(void) /* sub_559920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559920);
    /* 00559920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559921: mov ebp, esp */ r_ebp = r_esp;
    /* 00559923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559929: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055992c: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559931u); f_00559d00();
    /* 00559931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559933: jne 0x55993c */ if (!fZ) goto L_0055993c;
L_00559935:; BB(0x00559935);
    /* 00559935: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559937: jmp 0x5599e3 */ goto L_005599e3;
L_0055993c:; BB(0x0055993c);
    /* 0055993c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055993f: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559944u); f_00559d00();
    /* 00559944: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559947: jl 0x559950 */ if ((fS!=fO)) goto L_00559950;
L_00559949:; BB(0x00559949);
    /* 00559949: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055994b: jmp 0x5599e3 */ goto L_005599e3;
L_00559950:; BB(0x00559950);
    /* 00559950: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559953: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559958u); f_00559d00();
    /* 00559958: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055995b: jne 0x5599c1 */ if (!fZ) goto L_005599c1;
L_0055995d:; BB(0x0055995d);
    /* 0055995d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559964: jmp 0x55996f */ goto L_0055996f;
L_00559966:; BB(0x00559966);
    /* 00559966: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559969: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055996c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055996f:; BB(0x0055996f);
    /* 0055996f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559972: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559977u); f_00559380();
    /* 00559977: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055997a: jge 0x5599bd */ if ((fS==fO)) goto L_005599bd;
L_0055997c:; BB(0x0055997c);
    /* 0055997c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055997f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559982: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559987: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559988: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055998b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559990u); f_005593d0();
    /* 00559990: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559993: je 0x5599bb */ if (fZ) goto L_005599bb;
L_00559995:; BB(0x00559995);
    /* 00559995: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559998: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055999b: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005599a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005599a1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5599a6u); f_00641280();
    /* 005599a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005599a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005599aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005599ad: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x5599b2u); f_00559d60();
    /* 005599b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599b5: jne 0x5599bb */ if (!fZ) goto L_005599bb;
L_005599b7:; BB(0x005599b7);
    /* 005599b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005599b9: jmp 0x5599e3 */ goto L_005599e3;
L_005599bb:; BB(0x005599bb);
    /* 005599bb: jmp 0x559966 */ goto L_00559966;
L_005599bd:; BB(0x005599bd);
    /* 005599bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005599bf: jmp 0x5599e3 */ goto L_005599e3;
L_005599c1:; BB(0x005599c1);
    /* 005599c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005599c4: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x5599c9u); f_00559d00();
    /* 005599c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599cc: jne 0x5599e1 */ if (!fZ) goto L_005599e1;
L_005599ce:; BB(0x005599ce);
    /* 005599ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005599d1: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x5599d6u); f_00559660();
    /* 005599d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005599d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599db: je 0x5599e1 */ if (fZ) goto L_005599e1;
L_005599dd:; BB(0x005599dd);
    /* 005599dd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005599df: jmp 0x5599e3 */ goto L_005599e3;
L_005599e1:; BB(0x005599e1);
    /* 005599e1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005599e3:; BB(0x005599e3);
    /* 005599e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005599e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005599e6: ret  */ FN_RET(0x00559920); r_esp += 4; return;
}

void f_005599f0(void) /* sub_5599F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005599f0);
    /* 005599f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005599f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005599f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005599f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005599f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005599fa: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x5599ffu); f_00559d00();
    /* 005599ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a01: jne 0x559a07 */ if (!fZ) goto L_00559a07;
L_00559a03:; BB(0x00559a03);
    /* 00559a03: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559a05: jmp 0x559a29 */ goto L_00559a29;
L_00559a07:; BB(0x00559a07);
    /* 00559a07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559a0a: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559a0fu); f_00559d00();
    /* 00559a0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a12: jne 0x559a27 */ if (!fZ) goto L_00559a27;
L_00559a14:; BB(0x00559a14);
    /* 00559a14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559a17: call 0x559680 */ r_esp -= 4; W32(r_esp, 0x559a1cu); f_00559680();
    /* 00559a1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a21: je 0x559a27 */ if (fZ) goto L_00559a27;
L_00559a23:; BB(0x00559a23);
    /* 00559a23: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559a25: jmp 0x559a29 */ goto L_00559a29;
L_00559a27:; BB(0x00559a27);
    /* 00559a27: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00559a29:; BB(0x00559a29);
    /* 00559a29: mov esp, ebp */ r_esp = r_ebp;
    /* 00559a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559a2c: ret  */ FN_RET(0x005599f0); r_esp += 4; return;
}

void f_00559a30(void) /* sub_559A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559a30);
    /* 00559a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00559a33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559a36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559a39: mov dword ptr [ebp - 8], 0xfffffffe */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffffeu);
    /* 00559a40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559a43: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559a48u); f_00559d00();
    /* 00559a48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a4a: jne 0x559a53 */ if (!fZ) goto L_00559a53;
L_00559a4c:; BB(0x00559a4c);
    /* 00559a4c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559a4e: jmp 0x559ae7 */ goto L_00559ae7;
L_00559a53:; BB(0x00559a53);
    /* 00559a53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559a5a: jmp 0x559a65 */ goto L_00559a65;
L_00559a5c:; BB(0x00559a5c);
    /* 00559a5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559a5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559a62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00559a65:; BB(0x00559a65);
    /* 00559a65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559a68: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559a6du); f_00559380();
    /* 00559a6d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559a70: jge 0x559ae5 */ if ((fS==fO)) goto L_00559ae5;
L_00559a72:; BB(0x00559a72);
    /* 00559a72: cmp dword ptr [ebp - 8], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a76: jne 0x559aaa */ if (!fZ) goto L_00559aaa;
L_00559a78:; BB(0x00559a78);
    /* 00559a78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559a7b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559a7e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559a83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559a84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559a87: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559a8cu); f_005593d0();
    /* 00559a8c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a8f: je 0x559aa8 */ if (fZ) goto L_00559aa8;
L_00559a91:; BB(0x00559a91);
    /* 00559a91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559a94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559a97: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559a9d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x559aa2u); f_00641290();
    /* 00559aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559aa5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00559aa8:; BB(0x00559aa8);
    /* 00559aa8: jmp 0x559ae0 */ goto L_00559ae0;
L_00559aaa:; BB(0x00559aaa);
    /* 00559aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559aad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559ab0: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559ab6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559ab9: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559abeu); f_005593d0();
    /* 00559abe: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559ac1: je 0x559ae0 */ if (fZ) goto L_00559ae0;
L_00559ac3:; BB(0x00559ac3);
    /* 00559ac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559ac6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559ac9: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559acf: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x559ad4u); f_00641290();
    /* 00559ad4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559ad7: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559ada: je 0x559ae0 */ if (fZ) goto L_00559ae0;
L_00559adc:; BB(0x00559adc);
    /* 00559adc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559ade: jmp 0x559ae7 */ goto L_00559ae7;
L_00559ae0:; BB(0x00559ae0);
    /* 00559ae0: jmp 0x559a5c */ goto L_00559a5c;
L_00559ae5:; BB(0x00559ae5);
    /* 00559ae5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00559ae7:; BB(0x00559ae7);
    /* 00559ae7: mov esp, ebp */ r_esp = r_ebp;
    /* 00559ae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559aea: ret  */ FN_RET(0x00559a30); r_esp += 4; return;
}

void f_00559af0(void) /* sub_559AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559af0);
    /* 00559af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00559af3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559af6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00559af9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00559b00: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00559b07: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00559b0e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00559b15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b18: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559b1du); f_00559d00();
    /* 00559b1d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00559b20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559b27: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559b2b: jne 0x559b34 */ if (!fZ) goto L_00559b34;
L_00559b2d:; BB(0x00559b2d);
    /* 00559b2d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559b2f: jmp 0x559bf2 */ goto L_00559bf2;
L_00559b34:; BB(0x00559b34);
    /* 00559b34: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559b38: jl 0x559b41 */ if ((fS!=fO)) goto L_00559b41;
L_00559b3a:; BB(0x00559b3a);
    /* 00559b3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559b3c: jmp 0x559bf2 */ goto L_00559bf2;
L_00559b41:; BB(0x00559b41);
    /* 00559b41: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00559b48: jmp 0x559b53 */ goto L_00559b53;
L_00559b4a:; BB(0x00559b4a);
    /* 00559b4a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559b4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559b50: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00559b53:; BB(0x00559b53);
    /* 00559b53: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b56: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559b5bu); f_00559380();
    /* 00559b5b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559b5e: jge 0x559bc5 */ if ((fS==fO)) goto L_00559bc5;
L_00559b60:; BB(0x00559b60);
    /* 00559b60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559b63: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b66: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559b6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b6f: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559b74u); f_005593d0();
    /* 00559b74: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559b77: je 0x559bc3 */ if (fZ) goto L_00559bc3;
L_00559b79:; BB(0x00559b79);
    /* 00559b79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559b7c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b7f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559b85: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559b8au); f_00641280();
    /* 00559b8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559b8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559b91: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x559b96u); f_00559d60();
    /* 00559b96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559b99: jle 0x559b9f */ if ((fZ||fS!=fO)) goto L_00559b9f;
L_00559b9b:; BB(0x00559b9b);
    /* 00559b9b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559b9d: jmp 0x559bf2 */ goto L_00559bf2;
L_00559b9f:; BB(0x00559b9f);
    /* 00559b9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559ba2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559ba5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559bab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00559bae: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559bb3u); f_005593d0();
    /* 00559bb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559bb6: mov dword ptr [ebp + ecx*4 - 0x1c], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), r_eax);
    /* 00559bba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559bbd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559bc0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00559bc3:; BB(0x00559bc3);
    /* 00559bc3: jmp 0x559b4a */ goto L_00559b4a;
L_00559bc5:; BB(0x00559bc5);
    /* 00559bc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559bc8: cmp dword ptr [ebp + eax*4 - 0x20], 0xe */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559bcd: jne 0x559bdd */ if (!fZ) goto L_00559bdd;
L_00559bcf:; BB(0x00559bcf);
    /* 00559bcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559bd2: cmp dword ptr [ebp + ecx*4 - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559bd7: jg 0x559bdd */ if ((!fZ&&fS==fO)) goto L_00559bdd;
L_00559bd9:; BB(0x00559bd9);
    /* 00559bd9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559bdb: jmp 0x559bf2 */ goto L_00559bf2;
L_00559bdd:; BB(0x00559bdd);
    /* 00559bdd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559be0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559be3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559be6: cmp edx, dword ptr [ebp + eax*4 - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559bea: jl 0x559bf0 */ if ((fS!=fO)) goto L_00559bf0;
L_00559bec:; BB(0x00559bec);
    /* 00559bec: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559bee: jmp 0x559bf2 */ goto L_00559bf2;
L_00559bf0:; BB(0x00559bf0);
    /* 00559bf0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00559bf2:; BB(0x00559bf2);
    /* 00559bf2: mov esp, ebp */ r_esp = r_ebp;
    /* 00559bf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559bf5: ret  */ FN_RET(0x00559af0); r_esp += 4; return;
}

void f_00559c00(void) /* sub_559C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559c00);
    /* 00559c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00559c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559c06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559c09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559c0c: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x559c11u); f_00559d00();
    /* 00559c11: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00559c14: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559c18: jne 0x559c1e */ if (!fZ) goto L_00559c1e;
L_00559c1a:; BB(0x00559c1a);
    /* 00559c1a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00559c1c: jmp 0x559c40 */ goto L_00559c40;
L_00559c1e:; BB(0x00559c1e);
    /* 00559c1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559c21: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x559c26u); f_005596e0();
    /* 00559c26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559c28: je 0x559c34 */ if (fZ) goto L_00559c34;
L_00559c2a:; BB(0x00559c2a);
    /* 00559c2a: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559c2e: jne 0x559c34 */ if (!fZ) goto L_00559c34;
L_00559c30:; BB(0x00559c30);
    /* 00559c30: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559c32: jmp 0x559c40 */ goto L_00559c40;
L_00559c34:; BB(0x00559c34);
    /* 00559c34: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559c38: jne 0x559c3e */ if (!fZ) goto L_00559c3e;
L_00559c3a:; BB(0x00559c3a);
    /* 00559c3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00559c3c: jmp 0x559c40 */ goto L_00559c40;
L_00559c3e:; BB(0x00559c3e);
    /* 00559c3e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00559c40:; BB(0x00559c40);
    /* 00559c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00559c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559c43: ret  */ FN_RET(0x00559c00); r_esp += 4; return;
}

void f_00559c50(void) /* sub_559C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559c50);
    /* 00559c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00559c53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559c56: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00559c59: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00559c60: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00559c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c6a: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 00559c6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559c6f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559c74u); f_00641280();
    /* 00559c74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559c77: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00559c7a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00559c81: jmp 0x559c8c */ goto L_00559c8c;
L_00559c83:; BB(0x00559c83);
    /* 00559c83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559c86: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559c89: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00559c8c:; BB(0x00559c8c);
    /* 00559c8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c8f: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559c94u); f_00559380();
    /* 00559c94: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559c97: jge 0x559ceb */ if ((fS==fO)) goto L_00559ceb;
L_00559c99:; BB(0x00559c99);
    /* 00559c99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559c9c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c9f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00559ca4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559ca5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559caau); f_00641280();
    /* 00559caa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559cad: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559cb0: jne 0x559cbd */ if (!fZ) goto L_00559cbd;
L_00559cb2:; BB(0x00559cb2);
    /* 00559cb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559cb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559cb8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00559cbb: jmp 0x559ce9 */ goto L_00559ce9;
L_00559cbd:; BB(0x00559cbd);
    /* 00559cbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559cc0: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559cc3: jle 0x559ccb */ if ((fZ||fS!=fO)) goto L_00559ccb;
L_00559cc5:; BB(0x00559cc5);
    /* 00559cc5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559cc8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00559ccb:; BB(0x00559ccb);
    /* 00559ccb: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00559cd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559cd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559cd8: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00559cdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559cde: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559ce3u); f_00641280();
    /* 00559ce3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559ce6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00559ce9:; BB(0x00559ce9);
    /* 00559ce9: jmp 0x559c83 */ goto L_00559c83;
L_00559ceb:; BB(0x00559ceb);
    /* 00559ceb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559cee: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559cf1: jle 0x559cf9 */ if ((fZ||fS!=fO)) goto L_00559cf9;
L_00559cf3:; BB(0x00559cf3);
    /* 00559cf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559cf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00559cf9:; BB(0x00559cf9);
    /* 00559cf9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559cfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00559cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559cff: ret  */ FN_RET(0x00559c50); r_esp += 4; return;
}

void f_00559d00(void) /* sub_559D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559d00);
    /* 00559d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00559d03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559d06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559d09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00559d10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559d17: jmp 0x559d22 */ goto L_00559d22;
L_00559d19:; BB(0x00559d19);
    /* 00559d19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559d1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559d1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00559d22:; BB(0x00559d22);
    /* 00559d22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559d25: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559d2au); f_00559380();
    /* 00559d2a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559d2d: jge 0x559d53 */ if ((fS==fO)) goto L_00559d53;
L_00559d2f:; BB(0x00559d2f);
    /* 00559d2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559d32: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559d35: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559d3e: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x559d43u); f_005593d0();
    /* 00559d43: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559d46: jne 0x559d51 */ if (!fZ) goto L_00559d51;
L_00559d48:; BB(0x00559d48);
    /* 00559d48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559d4b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00559d4e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00559d51:; BB(0x00559d51);
    /* 00559d51: jmp 0x559d19 */ goto L_00559d19;
L_00559d53:; BB(0x00559d53);
    /* 00559d53: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559d56: mov esp, ebp */ r_esp = r_ebp;
    /* 00559d58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559d59: ret  */ FN_RET(0x00559d00); r_esp += 4; return;
}

void f_00559d60(void) /* sub_559D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559d60);
    /* 00559d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00559d63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559d66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00559d69: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00559d70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559d77: jmp 0x559d82 */ goto L_00559d82;
L_00559d79:; BB(0x00559d79);
    /* 00559d79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559d7c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559d7f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00559d82:; BB(0x00559d82);
    /* 00559d82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559d85: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x559d8au); f_00559380();
    /* 00559d8a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559d8d: jge 0x559db3 */ if ((fS==fO)) goto L_00559db3;
L_00559d8f:; BB(0x00559d8f);
    /* 00559d8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559d92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559d95: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00559d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d9b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x559da0u); f_00641280();
    /* 00559da0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559da3: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559da6: jne 0x559db1 */ if (!fZ) goto L_00559db1;
L_00559da8:; BB(0x00559da8);
    /* 00559da8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559dab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00559dae: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00559db1:; BB(0x00559db1);
    /* 00559db1: jmp 0x559d79 */ goto L_00559d79;
L_00559db3:; BB(0x00559db3);
    /* 00559db3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559db6: mov esp, ebp */ r_esp = r_ebp;
    /* 00559db8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559db9: ret 4 */ FN_RET(0x00559d60); r_esp += 8; return;
}

void f_00559dc0(void) /* sub_559DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559dc0);
    /* 00559dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00559dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559dc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559dca: call 0x559460 */ r_esp -= 4; W32(r_esp, 0x559dcfu); f_00559460();
    /* 00559dcf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559dd4: je 0x559ddd */ if (fZ) goto L_00559ddd;
L_00559dd6:; BB(0x00559dd6);
    /* 00559dd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559dd8: jmp 0x559e7d */ goto L_00559e7d;
L_00559ddd:; BB(0x00559ddd);
    /* 00559ddd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559de0: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x559de5u); f_005594b0();
    /* 00559de5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559de8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559dea: je 0x559df6 */ if (fZ) goto L_00559df6;
L_00559dec:; BB(0x00559dec);
    /* 00559dec: mov eax, 1 */ r_eax = 0x1u;
    /* 00559df1: jmp 0x559e7d */ goto L_00559e7d;
L_00559df6:; BB(0x00559df6);
    /* 00559df6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559df9: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x559dfeu); f_005594f0();
    /* 00559dfe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00559e01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e03: je 0x559e0c */ if (fZ) goto L_00559e0c;
L_00559e05:; BB(0x00559e05);
    /* 00559e05: mov eax, 2 */ r_eax = 0x2u;
    /* 00559e0a: jmp 0x559e7d */ goto L_00559e7d;
L_00559e0c:; BB(0x00559e0c);
    /* 00559e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559e0f: call 0x559510 */ r_esp -= 4; W32(r_esp, 0x559e14u); f_00559510();
    /* 00559e14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e19: je 0x559e22 */ if (fZ) goto L_00559e22;
L_00559e1b:; BB(0x00559e1b);
    /* 00559e1b: mov eax, 3 */ r_eax = 0x3u;
    /* 00559e20: jmp 0x559e7d */ goto L_00559e7d;
L_00559e22:; BB(0x00559e22);
    /* 00559e22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559e25: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x559e2au); f_00559550();
    /* 00559e2a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559e2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e2f: je 0x559e38 */ if (fZ) goto L_00559e38;
L_00559e31:; BB(0x00559e31);
    /* 00559e31: mov eax, 4 */ r_eax = 0x4u;
    /* 00559e36: jmp 0x559e7d */ goto L_00559e7d;
L_00559e38:; BB(0x00559e38);
    /* 00559e38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559e3b: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x559e40u); f_005595c0();
    /* 00559e40: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00559e43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e45: je 0x559e4e */ if (fZ) goto L_00559e4e;
L_00559e47:; BB(0x00559e47);
    /* 00559e47: mov eax, 5 */ r_eax = 0x5u;
    /* 00559e4c: jmp 0x559e7d */ goto L_00559e7d;
L_00559e4e:; BB(0x00559e4e);
    /* 00559e4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559e51: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x559e56u); f_00559660();
    /* 00559e56: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e5b: je 0x559e64 */ if (fZ) goto L_00559e64;
L_00559e5d:; BB(0x00559e5d);
    /* 00559e5d: mov eax, 6 */ r_eax = 0x6u;
    /* 00559e62: jmp 0x559e7d */ goto L_00559e7d;
L_00559e64:; BB(0x00559e64);
    /* 00559e64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559e67: call 0x559680 */ r_esp -= 4; W32(r_esp, 0x559e6cu); f_00559680();
    /* 00559e6c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559e6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e71: je 0x559e7a */ if (fZ) goto L_00559e7a;
L_00559e73:; BB(0x00559e73);
    /* 00559e73: mov eax, 7 */ r_eax = 0x7u;
    /* 00559e78: jmp 0x559e7d */ goto L_00559e7d;
L_00559e7a:; BB(0x00559e7a);
    /* 00559e7a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00559e7d:; BB(0x00559e7d);
    /* 00559e7d: mov esp, ebp */ r_esp = r_ebp;
    /* 00559e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559e80: ret  */ FN_RET(0x00559dc0); r_esp += 4; return;
}

void f_00559e90(void) /* sub_559E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559e90);
    /* 00559e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00559e93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559e96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559e99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559e9c: call 0x559dc0 */ r_esp -= 4; W32(r_esp, 0x559ea1u); f_00559dc0();
    /* 00559ea1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00559ea4: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559ea8: jne 0x559ebe */ if (!fZ) goto L_00559ebe;
L_00559eaa:; BB(0x00559eaa);
    /* 00559eaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559ead: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x559eb2u); f_005596e0();
    /* 00559eb2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559eb5: jl 0x559ebe */ if ((fS!=fO)) goto L_00559ebe;
L_00559eb7:; BB(0x00559eb7);
    /* 00559eb7: mov eax, 8 */ r_eax = 0x8u;
    /* 00559ebc: jmp 0x559ec1 */ goto L_00559ec1;
L_00559ebe:; BB(0x00559ebe);
    /* 00559ebe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00559ec1:; BB(0x00559ec1);
    /* 00559ec1: mov esp, ebp */ r_esp = r_ebp;
    /* 00559ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559ec4: ret  */ FN_RET(0x00559e90); r_esp += 4; return;
}

void f_00559ed0(void) /* sub_559ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559ed0);
    /* 00559ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00559ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559eda: call 0x559460 */ r_esp -= 4; W32(r_esp, 0x559edfu); f_00559460();
    /* 00559edf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559ee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559ee4: je 0x559eed */ if (fZ) goto L_00559eed;
L_00559ee6:; BB(0x00559ee6);
    /* 00559ee6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559ee8: jmp 0x559ff4 */ goto L_00559ff4;
L_00559eed:; BB(0x00559eed);
    /* 00559eed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559ef0: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x559ef5u); f_005594b0();
    /* 00559ef5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559ef8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559efa: je 0x559f06 */ if (fZ) goto L_00559f06;
L_00559efc:; BB(0x00559efc);
    /* 00559efc: mov eax, 1 */ r_eax = 0x1u;
    /* 00559f01: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f06:; BB(0x00559f06);
    /* 00559f06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f09: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x559f0eu); f_005594f0();
    /* 00559f0e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00559f11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f13: je 0x559f6f */ if (fZ) goto L_00559f6f;
L_00559f15:; BB(0x00559f15);
    /* 00559f15: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00559f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f1a: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x559f1fu); f_00559d60();
    /* 00559f1f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f22: jne 0x559f2e */ if (!fZ) goto L_00559f2e;
L_00559f24:; BB(0x00559f24);
    /* 00559f24: mov eax, 2 */ r_eax = 0x2u;
    /* 00559f29: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f2e:; BB(0x00559f2e);
    /* 00559f2e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00559f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f33: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x559f38u); f_00559d60();
    /* 00559f38: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f3b: je 0x559f5b */ if (fZ) goto L_00559f5b;
L_00559f3d:; BB(0x00559f3d);
    /* 00559f3d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00559f3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f42: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x559f47u); f_00559d60();
    /* 00559f47: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f4a: je 0x559f5b */ if (fZ) goto L_00559f5b;
L_00559f4c:; BB(0x00559f4c);
    /* 00559f4c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00559f4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f51: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x559f56u); f_00559d60();
    /* 00559f56: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f59: jne 0x559f65 */ if (!fZ) goto L_00559f65;
L_00559f5b:; BB(0x00559f5b);
    /* 00559f5b: mov eax, 3 */ r_eax = 0x3u;
    /* 00559f60: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f65:; BB(0x00559f65);
    /* 00559f65: mov eax, 4 */ r_eax = 0x4u;
    /* 00559f6a: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f6f:; BB(0x00559f6f);
    /* 00559f6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f72: call 0x559510 */ r_esp -= 4; W32(r_esp, 0x559f77u); f_00559510();
    /* 00559f77: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f7c: je 0x559f85 */ if (fZ) goto L_00559f85;
L_00559f7e:; BB(0x00559f7e);
    /* 00559f7e: mov eax, 5 */ r_eax = 0x5u;
    /* 00559f83: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f85:; BB(0x00559f85);
    /* 00559f85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f88: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x559f8du); f_00559550();
    /* 00559f8d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559f90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559f92: je 0x559f9b */ if (fZ) goto L_00559f9b;
L_00559f94:; BB(0x00559f94);
    /* 00559f94: mov eax, 6 */ r_eax = 0x6u;
    /* 00559f99: jmp 0x559ff4 */ goto L_00559ff4;
L_00559f9b:; BB(0x00559f9b);
    /* 00559f9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559f9e: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x559fa3u); f_005595c0();
    /* 00559fa3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00559fa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559fa8: je 0x559fb1 */ if (fZ) goto L_00559fb1;
L_00559faa:; BB(0x00559faa);
    /* 00559faa: mov eax, 7 */ r_eax = 0x7u;
    /* 00559faf: jmp 0x559ff4 */ goto L_00559ff4;
L_00559fb1:; BB(0x00559fb1);
    /* 00559fb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559fb4: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x559fb9u); f_00559660();
    /* 00559fb9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00559fbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559fbe: je 0x559fc7 */ if (fZ) goto L_00559fc7;
L_00559fc0:; BB(0x00559fc0);
    /* 00559fc0: mov eax, 8 */ r_eax = 0x8u;
    /* 00559fc5: jmp 0x559ff4 */ goto L_00559ff4;
L_00559fc7:; BB(0x00559fc7);
    /* 00559fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559fca: call 0x559680 */ r_esp -= 4; W32(r_esp, 0x559fcfu); f_00559680();
    /* 00559fcf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00559fd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559fd4: je 0x559fdd */ if (fZ) goto L_00559fdd;
L_00559fd6:; BB(0x00559fd6);
    /* 00559fd6: mov eax, 9 */ r_eax = 0x9u;
    /* 00559fdb: jmp 0x559ff4 */ goto L_00559ff4;
L_00559fdd:; BB(0x00559fdd);
    /* 00559fdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559fe0: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x559fe5u); f_005596e0();
    /* 00559fe5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559fe8: jl 0x559ff1 */ if ((fS!=fO)) goto L_00559ff1;
L_00559fea:; BB(0x00559fea);
    /* 00559fea: mov eax, 0xa */ r_eax = 0xau;
    /* 00559fef: jmp 0x559ff4 */ goto L_00559ff4;
L_00559ff1:; BB(0x00559ff1);
    /* 00559ff1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00559ff4:; BB(0x00559ff4);
    /* 00559ff4: mov esp, ebp */ r_esp = r_ebp;
    /* 00559ff6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559ff7: ret  */ FN_RET(0x00559ed0); r_esp += 4; return;
}

