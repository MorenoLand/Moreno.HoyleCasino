#include "protos.h"

void f_00669310(void) /* sub_669310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669310);
    /* 00669310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669311: mov ebp, esp */ r_ebp = r_esp;
    /* 00669313: sub esp, 0x414 */ {  u32 a = r_esp; u32 b = 0x414u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669319: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066931e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669320: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00669323: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 00669329: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669330: jmp 0x66933b */ goto L_0066933b;
L_00669332:; BB(0x00669332);
    /* 00669332: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669335: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669338: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066933b:; BB(0x0066933b);
    /* 0066933b: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066933f: jge 0x6693b7 */ if ((fS==fO)) goto L_006693b7;
L_00669341:; BB(0x00669341);
    /* 00669341: mov byte ptr [ebp - 0x410], 0 */ W8((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 00669348: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066934d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066934f: lea ecx, [ebp - 0x40f] */ r_ecx = (u32)(r_ebp+0xfffffbf1u);
    /* 00669355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669356: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x66935bu); f_00686fa2();
    /* 0066935b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066935e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669362: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 00669368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669369: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0066936f: call 0x667be0 */ r_esp -= 4; W32(r_esp, 0x669374u); f_00667be0();
    /* 00669374: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 0066937a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066937b: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00669381: call 0x667c70 */ r_esp -= 4; W32(r_esp, 0x669386u); f_00667c70();
    /* 00669386: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066938b: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 00669391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669392: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x669397u); f_005ea9c0();
    /* 00669397: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066939a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066939d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006693a1: jne 0x6693a5 */ if (!fZ) goto L_006693a5;
L_006693a3:; BB(0x006693a3);
    /* 006693a3: jmp 0x6693b7 */ goto L_006693b7;
L_006693a5:; BB(0x006693a5);
    /* 006693a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006693a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006693a9: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6693afu); call_ind(t); }
    /* 006693af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006693b2: jmp 0x669332 */ goto L_00669332;
L_006693b7:; BB(0x006693b7);
    /* 006693b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006693ba: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006693bc: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6693c1u); f_00686d72();
    /* 006693c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006693c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006693c4: ret 4 */ FN_RET(0x00669310); r_esp += 8; return;
}

void f_006693f0(void) /* sub_6693F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006693f0);
    /* 006693f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006693f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006693f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006693f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006693f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669400: jmp 0x66940b */ goto L_0066940b;
L_00669402:; BB(0x00669402);
    /* 00669402: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669405: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669408: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066940b:; BB(0x0066940b);
    /* 0066940b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669411: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00669413: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669419: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0066941f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x669421u); call_ind(t); }
    /* 00669421: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669424: jge 0x669445 */ if ((fS==fO)) goto L_00669445;
L_00669426:; BB(0x00669426);
    /* 00669426: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669429: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066942c: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066942f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669430: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00669433: call 0x669450 */ r_esp -= 4; W32(r_esp, 0x669438u); f_00669450();
    /* 00669438: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0066943b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066943d: je 0x669443 */ if (fZ) goto L_00669443;
L_0066943f:; BB(0x0066943f);
    /* 0066943f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00669441: jmp 0x669447 */ goto L_00669447;
L_00669443:; BB(0x00669443);
    /* 00669443: jmp 0x669402 */ goto L_00669402;
L_00669445:; BB(0x00669445);
    /* 00669445: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00669447:; BB(0x00669447);
    /* 00669447: mov esp, ebp */ r_esp = r_ebp;
    /* 00669449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066944a: ret 4 */ FN_RET(0x006693f0); r_esp += 8; return;
}

void f_00669450(void) /* sub_669450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669450);
    /* 00669450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669451: mov ebp, esp */ r_ebp = r_esp;
    /* 00669453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669455: push 0x6acc2b */ { u32 v = 0x6acc2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066945a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00669460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669461: sub esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669467: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066946c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066946e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00669471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669472: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00669475: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066947b: mov dword ptr [ebp - 0x3d0], ecx */ W32((u32)(r_ebp+0xfffffc30u), r_ecx);
    /* 00669481: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00669487: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x66948cu); f_0063a0c0();
    /* 0066948c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669493: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00669496: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00669499: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066949b: je 0x66953b */ if (fZ) goto L_0066953b;
L_006694a1:; BB(0x006694a1);
    /* 006694a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006694a4: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006694a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006694aa: je 0x66953b */ if (fZ) goto L_0066953b;
L_006694b0:; BB(0x006694b0);
    /* 006694b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006694b3: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006694b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006694b7: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 006694bd: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x6694c2u); f_0063ab10();
    /* 006694c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006694c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006694c7: je 0x66951a */ if (fZ) goto L_0066951a;
L_006694c9:; BB(0x006694c9);
    /* 006694c9: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 006694cf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6694d4u); f_0063aac0();
    /* 006694d4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006694d7: mov dword ptr [ebp - 0x3cc], eax */ W32((u32)(r_ebp+0xfffffc34u), r_eax);
    /* 006694dd: mov eax, dword ptr [ebp - 0x3cc] */ r_eax = R32((u32)(r_ebp+0xfffffc34u));
    /* 006694e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006694e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006694e7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006694ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006694eb: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6694f0u); f_00686ec0();
    /* 006694f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006694f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006694f5: je 0x669518 */ if (fZ) goto L_00669518;
L_006694f7:; BB(0x006694f7);
    /* 006694f7: mov byte ptr [ebp - 0x3c5], 1 */ W8((u32)(r_ebp+0xfffffc3bu), 0x1u);
    /* 006694fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669505: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0066950b: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x669510u); f_0063a120();
    /* 00669510: mov al, byte ptr [ebp - 0x3c5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc3bu))) & 0xffu);
    /* 00669516: jmp 0x66955a */ goto L_0066955a;
L_00669518:; BB(0x00669518);
    /* 00669518: jmp 0x66953b */ goto L_0066953b;
L_0066951a:; BB(0x0066951a);
    /* 0066951a: mov byte ptr [ebp - 0x3c6], 1 */ W8((u32)(r_ebp+0xfffffc3au), 0x1u);
    /* 00669521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669528: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0066952e: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x669533u); f_0063a120();
    /* 00669533: mov al, byte ptr [ebp - 0x3c6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc3au))) & 0xffu);
    /* 00669539: jmp 0x66955a */ goto L_0066955a;
L_0066953b:; BB(0x0066953b);
    /* 0066953b: mov byte ptr [ebp - 0x3c7], 0 */ W8((u32)(r_ebp+0xfffffc39u), 0x0u);
    /* 00669542: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669549: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0066954f: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x669554u); f_0063a120();
    /* 00669554: mov al, byte ptr [ebp - 0x3c7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc39u))) & 0xffu);
L_0066955a:; BB(0x0066955a);
    /* 0066955a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066955d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00669564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669565: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00669568: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066956a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66956fu); f_00686d72();
    /* 0066956f: mov esp, ebp */ r_esp = r_ebp;
    /* 00669571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669572: ret 4 */ FN_RET(0x00669450); r_esp += 8; return;
}

void f_00669580(void) /* sub_669580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669580);
    /* 00669580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669581: mov ebp, esp */ r_ebp = r_esp;
    /* 00669583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00669587: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066958a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066958b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00669591: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00669593: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00669599: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0066959f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6695a1u); call_ind(t); }
    /* 006695a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006695a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006695a4: ret 4 */ FN_RET(0x00669580); r_esp += 8; return;
}

void f_00669d50(void) /* sub_669D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669d50);
    /* 00669d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00669d53: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669d59: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00669d5e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669d60: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00669d63: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 00669d69: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669d6f: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00669d72: call 0x628ba0 */ r_esp -= 4; W32(r_esp, 0x669d77u); f_00628ba0();
    /* 00669d77: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669d7d: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00669d83: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00669d86: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00669d8c: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669d92: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00669d95: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x669d9au); f_00606570();
    /* 00669d9a: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 00669da0: cmp dword ptr [ebp - 0x120], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669da7: je 0x669dc8 */ if (fZ) goto L_00669dc8;
L_00669da9:; BB(0x00669da9);
    /* 00669da9: cmp dword ptr [ebp - 0x120], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669db0: je 0x669e55 */ if (fZ) goto L_00669e55;
L_00669db6:; BB(0x00669db6);
    /* 00669db6: cmp dword ptr [ebp - 0x120], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669dbd: je 0x669ed5 */ if (fZ) goto L_00669ed5;
L_00669dc3:; BB(0x00669dc3);
    /* 00669dc3: jmp 0x669eee */ goto L_00669eee;
L_00669dc8:; BB(0x00669dc8);
    /* 00669dc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669dcf: jmp 0x669dda */ goto L_00669dda;
L_00669dd1:; BB(0x00669dd1);
    /* 00669dd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669dd4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00669dd7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00669dda:; BB(0x00669dda);
    /* 00669dda: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669de0: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669de3: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x669de8u); f_00666c60();
    /* 00669de8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669deb: jge 0x669e42 */ if ((fS==fO)) goto L_00669e42;
L_00669ded:; BB(0x00669ded);
    /* 00669ded: mov byte ptr [ebp - 0x110], 0 */ W8((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 00669df4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669df8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669dfe: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669e01: call 0x666eb0 */ r_esp -= 4; W32(r_esp, 0x669e06u); f_00666eb0();
    /* 00669e06: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00669e09: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669e0d: je 0x669e25 */ if (fZ) goto L_00669e25;
L_00669e0f:; BB(0x00669e0f);
    /* 00669e0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00669e12: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669e15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669e16: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00669e1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669e1d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x669e22u); f_00686d8e();
    /* 00669e22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00669e25:; BB(0x00669e25);
    /* 00669e25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669e27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669e29: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00669e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669e30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669e32: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669e38: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00669e3b: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x669e40u); f_00628980();
    /* 00669e40: jmp 0x669dd1 */ goto L_00669dd1;
L_00669e42:; BB(0x00669e42);
    /* 00669e42: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669e48: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00669e4b: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x669e50u); f_00628d80();
    /* 00669e50: jmp 0x669eee */ goto L_00669eee;
L_00669e55:; BB(0x00669e55);
    /* 00669e55: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00669e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669e5c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669e62: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x669e67u); f_00639520();
    /* 00669e67: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00669e6d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669e74: jmp 0x669e7f */ goto L_00669e7f;
L_00669e76:; BB(0x00669e76);
    /* 00669e76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669e79: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669e7c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00669e7f:; BB(0x00669e7f);
    /* 00669e7f: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669e83: jge 0x669ed3 */ if ((fS==fO)) goto L_00669ed3;
L_00669e85:; BB(0x00669e85);
    /* 00669e85: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00669e8b: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00669e91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669e94: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00669e97: cmp dword ptr [edx + eax + 0x763580], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x763580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669e9f: jne 0x669ea3 */ if (!fZ) goto L_00669ea3;
L_00669ea1:; BB(0x00669ea1);
    /* 00669ea1: jmp 0x669ed3 */ goto L_00669ed3;
L_00669ea3:; BB(0x00669ea3);
    /* 00669ea3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ea5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669ea7: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00669ead: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00669eb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669eb6: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00669eb9: lea eax, [ecx + edx + 0x763588] */ r_eax = (u32)(r_ecx+r_edx+0x763588u);
    /* 00669ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669ec1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ec3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669ec9: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00669ecc: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x669ed1u); f_00628980();
    /* 00669ed1: jmp 0x669e76 */ goto L_00669e76;
L_00669ed3:; BB(0x00669ed3);
    /* 00669ed3: jmp 0x669eee */ goto L_00669eee;
L_00669ed5:; BB(0x00669ed5);
    /* 00669ed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ed7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669ed9: push 0x6e0244 */ { u32 v = 0x6e0244u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ede: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ee0: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669ee6: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00669ee9: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x669eeeu); f_00628980();
L_00669eee:; BB(0x00669eee);
    /* 00669eee: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669ef4: call 0x669f10 */ r_esp -= 4; W32(r_esp, 0x669ef9u); f_00669f10();
    /* 00669ef9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00669efc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669efe: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x669f03u); f_00686d72();
    /* 00669f03: mov esp, ebp */ r_esp = r_ebp;
    /* 00669f05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669f06: ret  */ FN_RET(0x00669d50); r_esp += 4; return;
}

void f_00669f10(void) /* sub_669F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669f10);
    /* 00669f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00669f13: sub esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669f19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00669f1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669f20: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00669f23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669f24: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 00669f2a: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00669f30: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00669f33: call 0x628ba0 */ r_esp -= 4; W32(r_esp, 0x669f38u); f_00628ba0();
    /* 00669f38: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00669f3e: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00669f41: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x669f46u); f_00615260();
    /* 00669f46: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f49: jne 0x669f50 */ if (!fZ) goto L_00669f50;
L_00669f4b:; BB(0x00669f4b);
    /* 00669f4b: jmp 0x66a1fb */ goto L_0066a1fb;
L_00669f50:; BB(0x00669f50);
    /* 00669f50: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00669f56: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 00669f59: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x669f5eu); f_00606570();
    /* 00669f5e: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00669f64: cmp dword ptr [ebp - 0x134], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f6b: je 0x669f8c */ if (fZ) goto L_00669f8c;
L_00669f6d:; BB(0x00669f6d);
    /* 00669f6d: cmp dword ptr [ebp - 0x134], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f74: je 0x66a0d8 */ if (fZ) goto L_0066a0d8;
L_00669f7a:; BB(0x00669f7a);
    /* 00669f7a: cmp dword ptr [ebp - 0x134], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f81: je 0x66a175 */ if (fZ) goto L_0066a175;
L_00669f87:; BB(0x00669f87);
    /* 00669f87: jmp 0x66a1fb */ goto L_0066a1fb;
L_00669f8c:; BB(0x00669f8c);
    /* 00669f8c: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00669f92: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00669f95: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 00669f9b: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669fa1: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x669fa6u); f_005e4390();
    /* 00669fa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669fa8: je 0x669fc4 */ if (fZ) goto L_00669fc4;
L_00669faa:; BB(0x00669faa);
    /* 00669faa: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00669fb0: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x669fb5u); f_005e4390();
    /* 00669fb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00669fb7: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x669fbcu); f_00629c70();
    /* 00669fbc: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 00669fc2: jmp 0x669fce */ goto L_00669fce;
L_00669fc4:; BB(0x00669fc4);
    /* 00669fc4: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_00669fce:; BB(0x00669fce);
    /* 00669fce: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00669fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669fd5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669fdb: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669fde: call 0x666e40 */ r_esp -= 4; W32(r_esp, 0x669fe3u); f_00666e40();
    /* 00669fe3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00669fe6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669fea: jne 0x669ff1 */ if (!fZ) goto L_00669ff1;
L_00669fec:; BB(0x00669fec);
    /* 00669fec: jmp 0x66a1fb */ goto L_0066a1fb;
L_00669ff1:; BB(0x00669ff1);
    /* 00669ff1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669ff8: jmp 0x66a003 */ goto L_0066a003;
L_00669ffa:; BB(0x00669ffa);
    /* 00669ffa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669ffd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a000: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066a003:; BB(0x0066a003);
    /* 0066a003: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a009: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0066a00f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066a012: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0066a018: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a01b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a01e: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0066a024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a025: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a02b: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a02e: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x66a033u); f_00666c70();
    /* 0066a033: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a036: jge 0x66a0d3 */ if ((fS==fO)) goto L_0066a0d3;
L_0066a03c:; BB(0x0066a03c);
    /* 0066a03c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a03f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a040: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a045: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a04b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a04c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a052u); call_ind(t); }
    /* 0066a052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a055: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a05b: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a061: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0066a064: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 0066a06a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a06e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a071: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a073: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a074: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0066a07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a07b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a081: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a084: call 0x666740 */ r_esp -= 4; W32(r_esp, 0x66a089u); f_00666740();
    /* 0066a089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a08a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a090: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a093: call 0x666840 */ r_esp -= 4; W32(r_esp, 0x66a098u); f_00666840();
    /* 0066a098: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066a09b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a09d: jne 0x66a0b3 */ if (!fZ) goto L_0066a0b3;
L_0066a09f:; BB(0x0066a09f);
    /* 0066a09f: push 0x6e0250 */ { u32 v = 0x6e0250u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0a4: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a0aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0ab: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x66a0b0u); f_00686ec6();
    /* 0066a0b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066a0b3:; BB(0x0066a0b3);
    /* 0066a0b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0b7: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0066a0bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0c0: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a0c6: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066a0c9: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a0ceu); f_00628980();
    /* 0066a0ce: jmp 0x669ffa */ goto L_00669ffa;
L_0066a0d3:; BB(0x0066a0d3);
    /* 0066a0d3: jmp 0x66a1fb */ goto L_0066a1fb;
L_0066a0d8:; BB(0x0066a0d8);
    /* 0066a0d8: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a0de: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0066a0e4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0066a0e7: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 0066a0ed: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0066a0f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a0fa: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x66a0ffu); f_00639520();
    /* 0066a0ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066a102: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a109: jmp 0x66a114 */ goto L_0066a114;
L_0066a10b:; BB(0x0066a10b);
    /* 0066a10b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a10e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a111: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066a114:; BB(0x0066a114);
    /* 0066a114: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a117: imul esi, esi, 0x380 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x380u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066a11d: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a123: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066a126: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66a12bu); f_00615260();
    /* 0066a12b: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066a12e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a131: cmp edx, dword ptr [esi + eax + 0x763584] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_eax+0x763584u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a138: jge 0x66a170 */ if ((fS==fO)) goto L_0066a170;
L_0066a13a:; BB(0x0066a13a);
    /* 0066a13a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a13d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a13e: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a143: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a149: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a14a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a150u); call_ind(t); }
    /* 0066a150: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a153: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a155: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a157: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a15d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a15e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a160: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a166: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066a169: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a16eu); f_00628980();
    /* 0066a16e: jmp 0x66a10b */ goto L_0066a10b;
L_0066a170:; BB(0x0066a170);
    /* 0066a170: jmp 0x66a1fb */ goto L_0066a1fb;
L_0066a175:; BB(0x0066a175);
    /* 0066a175: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a17b: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0066a181: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066a184: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0066a18a: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0066a190: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a191: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a197: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x66a19cu); f_00639520();
    /* 0066a19c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066a19f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a1a6: jmp 0x66a1b1 */ goto L_0066a1b1;
L_0066a1a8:; BB(0x0066a1a8);
    /* 0066a1a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a1ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066a1ae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0066a1b1:; BB(0x0066a1b1);
    /* 0066a1b1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a1b4: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066a1ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a1bd: cmp ecx, dword ptr [eax + 0x76357c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x76357cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a1c3: jge 0x66a1fb */ if ((fS==fO)) goto L_0066a1fb;
L_0066a1c5:; BB(0x0066a1c5);
    /* 0066a1c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a1c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1c9: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1ce: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0066a1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1d5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a1dbu); call_ind(t); }
    /* 0066a1db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a1de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1e0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1e2: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a1e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a1eb: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0066a1f1: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066a1f4: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a1f9u); f_00628980();
    /* 0066a1f9: jmp 0x66a1a8 */ goto L_0066a1a8;
L_0066a1fb:; BB(0x0066a1fb);
    /* 0066a1fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a1fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066a1ff: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a201: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66a206u); f_00686d72();
    /* 0066a206: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a208: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a209: ret  */ FN_RET(0x00669f10); r_esp += 4; return;
}

