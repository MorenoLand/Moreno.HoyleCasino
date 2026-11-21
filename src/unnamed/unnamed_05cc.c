#include "protos.h"

void f_005cc3e0(void) /* sub_5CC3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc3e0);
    /* 005cc3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc3e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc3e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cc3e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc3f0: jmp 0x5cc3fb */ goto L_005cc3fb;
L_005cc3f2:; BB(0x005cc3f2);
    /* 005cc3f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc3f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cc3fb:; BB(0x005cc3fb);
    /* 005cc3fb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc3ff: jge 0x5cc42d */ if ((fS==fO)) goto L_005cc42d;
L_005cc401:; BB(0x005cc401);
    /* 005cc401: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cc408: jmp 0x5cc413 */ goto L_005cc413;
L_005cc40a:; BB(0x005cc40a);
    /* 005cc40a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc40d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc410: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005cc413:; BB(0x005cc413);
    /* 005cc413: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc417: jge 0x5cc42b */ if ((fS==fO)) goto L_005cc42b;
L_005cc419:; BB(0x005cc419);
    /* 005cc419: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc41c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc41d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc421: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc424: call 0x5cc440 */ r_esp -= 4; W32(r_esp, 0x5cc429u); f_005cc440();
    /* 005cc429: jmp 0x5cc40a */ goto L_005cc40a;
L_005cc42b:; BB(0x005cc42b);
    /* 005cc42b: jmp 0x5cc3f2 */ goto L_005cc3f2;
L_005cc42d:; BB(0x005cc42d);
    /* 005cc42d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc42f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc430: ret  */ FN_RET(0x005cc3e0); r_esp += 4; return;
}

void f_005cc440(void) /* sub_5CC440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc440);
    /* 005cc440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc441: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc446: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc447: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cc44a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc451: jmp 0x5cc45c */ goto L_005cc45c;
L_005cc453:; BB(0x005cc453);
    /* 005cc453: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc456: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc459: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cc45c:; BB(0x005cc45c);
    /* 005cc45c: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc460: jge 0x5cc4d1 */ if ((fS==fO)) goto L_005cc4d1;
L_005cc462:; BB(0x005cc462);
    /* 005cc462: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc465: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc46b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc46e: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005cc475: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc478: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc47b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc47d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc480: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc484: je 0x5cc4cf */ if (fZ) goto L_005cc4cf;
L_005cc486:; BB(0x005cc486);
    /* 005cc486: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc489: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc48f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc492: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cc499: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc49c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc49f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cc4a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc4a4: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005cc4a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc4aa: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc4ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc4b0: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc4b6: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc4b9: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005cc4c0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc4c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc4c5: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005cc4c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cc4ca: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cc4cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc4cfu); call_ind(t); }
L_005cc4cf:; BB(0x005cc4cf);
    /* 005cc4cf: jmp 0x5cc453 */ goto L_005cc453;
L_005cc4d1:; BB(0x005cc4d1);
    /* 005cc4d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cc4d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc4d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc4d5: ret 8 */ FN_RET(0x005cc440); r_esp += 12; return;
}

void f_005cc4e0(void) /* sub_5CC4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc4e0);
    /* 005cc4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc4e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc4e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cc4e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc4f0: jmp 0x5cc4fb */ goto L_005cc4fb;
L_005cc4f2:; BB(0x005cc4f2);
    /* 005cc4f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc4f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc4f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cc4fb:; BB(0x005cc4fb);
    /* 005cc4fb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc4ff: jge 0x5cc535 */ if ((fS==fO)) goto L_005cc535;
L_005cc501:; BB(0x005cc501);
    /* 005cc501: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cc508: jmp 0x5cc513 */ goto L_005cc513;
L_005cc50a:; BB(0x005cc50a);
    /* 005cc50a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc50d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc510: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005cc513:; BB(0x005cc513);
    /* 005cc513: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc517: jge 0x5cc533 */ if ((fS==fO)) goto L_005cc533;
L_005cc519:; BB(0x005cc519);
    /* 005cc519: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc51c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc51d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc521: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc524: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc526: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc529: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005cc52f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc531u); call_ind(t); }
    /* 005cc531: jmp 0x5cc50a */ goto L_005cc50a;
L_005cc533:; BB(0x005cc533);
    /* 005cc533: jmp 0x5cc4f2 */ goto L_005cc4f2;
L_005cc535:; BB(0x005cc535);
    /* 005cc535: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc537: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc538: ret  */ FN_RET(0x005cc4e0); r_esp += 4; return;
}

void f_005ccdf0(void) /* sub_5CCDF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccdf0);
    /* 005ccdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccdf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccdf6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ccdf9: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005cce00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cce07: jmp 0x5cce12 */ goto L_005cce12;
L_005cce09:; BB(0x005cce09);
    /* 005cce09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cce0c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cce0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cce12:; BB(0x005cce12);
    /* 005cce12: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cce16: jge 0x5cce46 */ if ((fS==fO)) goto L_005cce46;
L_005cce18:; BB(0x005cce18);
    /* 005cce18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cce1b: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cce21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce24: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005cce2b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cce2e: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cce31: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cce33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cce36: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cce3a: jne 0x5cce3e */ if (!fZ) goto L_005cce3e;
L_005cce3c:; BB(0x005cce3c);
    /* 005cce3c: jmp 0x5cce46 */ goto L_005cce46;
L_005cce3e:; BB(0x005cce3e);
    /* 005cce3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cce41: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cce44: jmp 0x5cce09 */ goto L_005cce09;
L_005cce46:; BB(0x005cce46);
    /* 005cce46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cce49: mov esp, ebp */ r_esp = r_ebp;
    /* 005cce4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cce4c: ret 8 */ FN_RET(0x005ccdf0); r_esp += 12; return;
}

