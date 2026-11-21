#include "protos.h"

void f_0068c340(void) /* sub_68C340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068c340);
    /* 0068c340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c341: mov ebp, esp */ r_ebp = r_esp;
    /* 0068c343: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c346: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0068c349: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c34c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068c34f: jmp 0x68c357 */ goto L_0068c357;
L_0068c351:; BB(0x0068c351);
    /* 0068c351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c354: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0068c357:; BB(0x0068c357);
    /* 0068c357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c35a: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068c35e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c360: jne 0x68c393 */ if (!fZ) goto L_0068c393;
L_0068c362:; BB(0x0068c362);
    /* 0068c362: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c365: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068c368: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c369: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068c36c: call 0x68c340 */ r_esp -= 4; W32(r_esp, 0x68c371u); f_0068c340();
    /* 0068c371: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c374: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068c376: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068c379: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c37c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c37d: call 0x68f950 */ r_esp -= 4; W32(r_esp, 0x68c382u); f_0068f950();
    /* 0068c382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c385: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c389: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68c38eu); f_00686cae();
    /* 0068c38e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c391: jmp 0x68c351 */ goto L_0068c351;
L_0068c393:; BB(0x0068c393);
    /* 0068c393: mov esp, ebp */ r_esp = r_ebp;
    /* 0068c395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c396: ret 4 */ FN_RET(0x0068c340); r_esp += 8; return;
}

void f_0068c3a0(void) /* sub_68C3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068c3a0);
    /* 0068c3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068c3a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c3a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068c3a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068c3ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c3af: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c3b2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068c3b5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068c3b8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c3bb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0068c3be:; BB(0x0068c3be);
    /* 0068c3be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c3c1: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068c3c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c3c7: jne 0x68c3ff */ if (!fZ) goto L_0068c3ff;
L_0068c3c9:; BB(0x0068c3c9);
    /* 0068c3c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068c3cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c3d0: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c3d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3d4: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c3dau); call_ind(t); }
    /* 0068c3da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c3dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c3e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c3e2: je 0x68c3ef */ if (fZ) goto L_0068c3ef;
L_0068c3e4:; BB(0x0068c3e4);
    /* 0068c3e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c3e7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068c3ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068c3ed: jmp 0x68c3fd */ goto L_0068c3fd;
L_0068c3ef:; BB(0x0068c3ef);
    /* 0068c3ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c3f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068c3f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c3f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068c3fa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0068c3fd:; BB(0x0068c3fd);
    /* 0068c3fd: jmp 0x68c3be */ goto L_0068c3be;
L_0068c3ff:; BB(0x0068c3ff);
    /* 0068c3ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c402: mov esp, ebp */ r_esp = r_ebp;
    /* 0068c404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c405: ret 4 */ FN_RET(0x0068c3a0); r_esp += 8; return;
}

void f_0068c410(void) /* sub_68C410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068c410);
    /* 0068c410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c411: mov ebp, esp */ r_ebp = r_esp;
    /* 0068c413: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c416: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0068c419: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c41c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c41f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0068c422: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068c429: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068c42c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068c42f: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c433: jne 0x68c43b */ if (!fZ) goto L_0068c43b;
L_0068c435:; BB(0x0068c435);
    /* 0068c435: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68c43bu); call_ind(t); }
L_0068c43b:; BB(0x0068c43b);
    /* 0068c43b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c43e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068c441: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c444: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c447: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0068c44a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068c44d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068c44f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068c452: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068c459: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068c45c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068c45f: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c463: jne 0x68c46b */ if (!fZ) goto L_0068c46b;
L_0068c465:; BB(0x0068c465);
    /* 0068c465: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68c46bu); call_ind(t); }
L_0068c46b:; BB(0x0068c46b);
    /* 0068c46b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c46e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068c471: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c475: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c479: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068c47c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c47d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068c480: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c481: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0068c484: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c485: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c488: call 0x68ce80 */ r_esp -= 4; W32(r_esp, 0x68c48du); f_0068ce80();
    /* 0068c48d: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c490: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c493: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0068c496: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c499: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c49c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0068c49f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068c4a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4a3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68c4a8u); f_00686cae();
    /* 0068c4a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c4ab: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c4ae: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0068c4b5: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068c4b8: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0068c4bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0068c4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c4c2: ret  */ FN_RET(0x0068c410); r_esp += 4; return;
}

void f_0068c4d0(void) /* sub_68C4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068c4d0);
    /* 0068c4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068c4d3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c4d6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0068c4d9: lea eax, [ebp - 0x1f] */ r_eax = (u32)(r_ebp+0xffffffe1u);
    /* 0068c4dc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068c4df: lea ecx, [ebp - 0x1e] */ r_ecx = (u32)(r_ebp+0xffffffe2u);
    /* 0068c4e2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068c4e5: lea edx, [ebp - 0x1d] */ r_edx = (u32)(r_ebp+0xffffffe3u);
    /* 0068c4e8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0068c4eb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068c4ee: call 0x68eae0 */ r_esp -= 4; W32(r_esp, 0x68c4f3u); f_0068eae0();
    /* 0068c4f3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068c4f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0068c4f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c4f9: ret  */ FN_RET(0x0068c4d0); r_esp += 4; return;
}

void f_0068c500(void) /* sub_68C500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068c500);
    /* 0068c500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c501: mov ebp, esp */ r_ebp = r_esp;
    /* 0068c503: sub esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c509: mov dword ptr [ebp - 0x1c0], ecx */ W32((u32)(r_ebp+0xfffffe40u), r_ecx);
    /* 0068c50f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068c516: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068c51d: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c523: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068c526: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0068c529: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c52d: jne 0x68c55b */ if (!fZ) goto L_0068c55b;
L_0068c52f:; BB(0x0068c52f);
    /* 0068c52f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c533: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c539: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c53c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c53d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c53f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c543: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c549: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c54eu); f_0068d820();
    /* 0068c54e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c551: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c55b:; BB(0x0068c55b);
    /* 0068c55b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0068c55d: je 0x68c8da */ if (fZ) goto L_0068c8da;
L_0068c563:; BB(0x0068c563);
    /* 0068c563: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c569: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c56c: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0068c572: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0068c578: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068c57a: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0068c580: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c587: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0068c58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c58e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0068c591: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c596u); f_0068d4b0();
    /* 0068c596: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c59a: je 0x68c5a4 */ if (fZ) goto L_0068c5a4;
L_0068c59c:; BB(0x0068c59c);
    /* 0068c59c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068c59f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c5a2: je 0x68c5aa */ if (fZ) goto L_0068c5aa;
L_0068c5a4:; BB(0x0068c5a4);
    /* 0068c5a4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68c5aau); call_ind(t); }
L_0068c5aa:; BB(0x0068c5aa);
    /* 0068c5aa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c5ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068c5af: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c5b2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068c5b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068c5b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c5ba: je 0x68c615 */ if (fZ) goto L_0068c615;
L_0068c5bc:; BB(0x0068c5bc);
    /* 0068c5bc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c5bf: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0068c5c5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5c9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0068c5cf: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c5d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5d3: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c5d9u); call_ind(t); }
    /* 0068c5d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c5dc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c5df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c5e1: jne 0x68c610 */ if (!fZ) goto L_0068c610;
L_0068c5e3:; BB(0x0068c5e3);
    /* 0068c5e3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c5e6: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0068c5ec: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c5ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5f0: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0068c5f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c5fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5fd: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c603: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c608u); f_0068d820();
    /* 0068c608: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c60b: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c610:; BB(0x0068c610);
    /* 0068c610: jmp 0x68c8d5 */ goto L_0068c8d5;
L_0068c615:; BB(0x0068c615);
    /* 0068c615: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c61b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c61e: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 0068c624: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c62a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c62b: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0068c631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c632: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0068c635: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c63au); f_0068d4b0();
    /* 0068c63a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c63e: je 0x68c648 */ if (fZ) goto L_0068c648;
L_0068c640:; BB(0x0068c640);
    /* 0068c640: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068c643: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c646: je 0x68c64e */ if (fZ) goto L_0068c64e;
L_0068c648:; BB(0x0068c648);
    /* 0068c648: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68c64eu); call_ind(t); }
L_0068c64e:; BB(0x0068c64e);
    /* 0068c64e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c651: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c653: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c656: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068c659: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068c65c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c65e: je 0x68c6cd */ if (fZ) goto L_0068c6cd;
L_0068c660:; BB(0x0068c660);
    /* 0068c660: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c666: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c669: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c66c: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 0068c672: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0068c678: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068c67a: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c67d: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0068c683: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0068c689: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c68a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c68d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c68e: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c694u); call_ind(t); }
    /* 0068c694: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c697: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c69a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c69c: jne 0x68c6c8 */ if (!fZ) goto L_0068c6c8;
L_0068c69e:; BB(0x0068c69e);
    /* 0068c69e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c6a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6a2: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c6a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c6ab: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068c6ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c6b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6b5: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c6bb: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c6c0u); f_0068d820();
    /* 0068c6c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c6c3: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c6c8:; BB(0x0068c6c8);
    /* 0068c6c8: jmp 0x68c8d5 */ goto L_0068c8d5;
L_0068c6cd:; BB(0x0068c6cd);
    /* 0068c6cd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c6d0: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0068c6d6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c6d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6da: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068c6e0: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c6e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c6e4: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c6eau); call_ind(t); }
    /* 0068c6ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c6ed: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c6f2: jne 0x68c7ae */ if (!fZ) goto L_0068c7ae;
L_0068c6f8:; BB(0x0068c6f8);
    /* 0068c6f8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068c6fb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068c6fe: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c701: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068c704: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068c707: call 0x68f800 */ r_esp -= 4; W32(r_esp, 0x68c70cu); f_0068f800();
    /* 0068c70c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c70f: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0068c715: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0068c71b: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c71e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c71f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c722: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c723: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c729u); call_ind(t); }
    /* 0068c729: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c72c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c72f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c731: jne 0x68c7ae */ if (!fZ) goto L_0068c7ae;
L_0068c733:; BB(0x0068c733);
    /* 0068c733: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c736: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0068c73c: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0068c742: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068c745: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068c749: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c74b: je 0x68c77c */ if (fZ) goto L_0068c77c;
L_0068c74d:; BB(0x0068c74d);
    /* 0068c74d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c750: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
    /* 0068c756: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c75a: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0068c760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c761: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c763: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c766: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c767: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c76d: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c772u); f_0068d820();
    /* 0068c772: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c775: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c77c:; BB(0x0068c77c);
    /* 0068c77c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c77f: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 0068c785: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c788: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c789: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0068c78f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c790: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c792: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c796: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c79c: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c7a1u); f_0068d820();
    /* 0068c7a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c7a4: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c7ae:; BB(0x0068c7ae);
    /* 0068c7ae: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c7b1: mov dword ptr [ebp - 0x160], ecx */ W32((u32)(r_ebp+0xfffffea0u), r_ecx);
    /* 0068c7b7: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0068c7bd: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c7c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c7c1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c7c5: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c7cbu); call_ind(t); }
    /* 0068c7cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c7ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068c7d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c7d3: jne 0x68c8d5 */ if (!fZ) goto L_0068c8d5;
L_0068c7d9:; BB(0x0068c7d9);
    /* 0068c7d9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068c7dc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068c7df: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c7e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068c7e5: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c7eb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c7ee: mov dword ptr [ebp - 0x164], edx */ W32((u32)(r_ebp+0xfffffe9cu), r_edx);
    /* 0068c7f4: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c7fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c7fb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 0068c801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c802: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0068c805: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c80au); f_0068d4b0();
    /* 0068c80a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068c80d: call 0x68edc0 */ r_esp -= 4; W32(r_esp, 0x68c812u); f_0068edc0();
    /* 0068c812: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c816: je 0x68c820 */ if (fZ) goto L_0068c820;
L_0068c818:; BB(0x0068c818);
    /* 0068c818: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068c81b: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c81e: je 0x68c826 */ if (fZ) goto L_0068c826;
L_0068c820:; BB(0x0068c820);
    /* 0068c820: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68c826u); call_ind(t); }
L_0068c826:; BB(0x0068c826);
    /* 0068c826: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c829: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c82b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c82e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068c831: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068c834: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c836: jne 0x68c85f */ if (!fZ) goto L_0068c85f;
L_0068c838:; BB(0x0068c838);
    /* 0068c838: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c83b: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 0068c841: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c845: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0068c84b: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c84e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c84f: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c855u); call_ind(t); }
    /* 0068c855: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c858: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c85d: jne 0x68c8d5 */ if (!fZ) goto L_0068c8d5;
L_0068c85f:; BB(0x0068c85f);
    /* 0068c85f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c862: mov dword ptr [ebp - 0x16c], ecx */ W32((u32)(r_ebp+0xfffffe94u), r_ecx);
    /* 0068c868: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0068c86e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068c871: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068c875: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c877: je 0x68c8a8 */ if (fZ) goto L_0068c8a8;
L_0068c879:; BB(0x0068c879);
    /* 0068c879: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c87c: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 0068c882: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c885: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c886: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0068c88c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c88d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c88f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c893: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c899: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c89eu); f_0068d820();
    /* 0068c89e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c8a1: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c8a8:; BB(0x0068c8a8);
    /* 0068c8a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c8ab: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0068c8b1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c8b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8b5: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0068c8bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c8c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8c2: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c8c8: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c8cdu); f_0068d820();
    /* 0068c8cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c8d0: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c8d5:; BB(0x0068c8d5);
    /* 0068c8d5: jmp 0x68cc0d */ goto L_0068cc0d;
L_0068c8da:; BB(0x0068c8da);
    /* 0068c8da: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c8e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c8e3: mov dword ptr [ebp - 0x178], edx */ W32((u32)(r_ebp+0xfffffe88u), r_edx);
    /* 0068c8e9: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0068c8ef: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068c8f1: mov dword ptr [ebp - 0x17c], ecx */ W32((u32)(r_ebp+0xfffffe84u), r_ecx);
    /* 0068c8f7: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c8fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8fe: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 0068c904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c905: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068c908: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c90du); f_0068d4b0();
    /* 0068c90d: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068c910: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c911: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068c914: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68c919u); f_006118f0();
    /* 0068c919: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c91c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c91e: je 0x68c979 */ if (fZ) goto L_0068c979;
L_0068c920:; BB(0x0068c920);
    /* 0068c920: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c923: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 0068c929: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 0068c92f: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c933: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c937: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c93du); call_ind(t); }
    /* 0068c93d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c940: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c945: je 0x68c974 */ if (fZ) goto L_0068c974;
L_0068c947:; BB(0x0068c947);
    /* 0068c947: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c94a: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 0068c950: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c954: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0068c95a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c95b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c95d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068c960: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c961: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c967: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68c96cu); f_0068d820();
    /* 0068c96c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c96f: jmp 0x68cc30 */ goto L_0068cc30;
L_0068c974:; BB(0x0068c974);
    /* 0068c974: jmp 0x68cc0d */ goto L_0068cc0d;
L_0068c979:; BB(0x0068c979);
    /* 0068c979: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c97f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c982: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 0068c988: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c98e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c98f: mov edx, dword ptr [ebp - 0x188] */ r_edx = R32((u32)(r_ebp+0xfffffe78u));
    /* 0068c995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c996: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0068c999: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c99eu); f_0068d4b0();
    /* 0068c99e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0068c9a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9a2: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068c9a5: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68c9aau); f_006118f0();
    /* 0068c9aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068c9ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c9af: je 0x68ca1e */ if (fZ) goto L_0068ca1e;
L_0068c9b1:; BB(0x0068c9b1);
    /* 0068c9b1: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c9b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c9ba: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c9bd: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 0068c9c3: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 0068c9c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068c9cb: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c9ce: mov dword ptr [ebp - 0x190], edx */ W32((u32)(r_ebp+0xfffffe70u), r_edx);
    /* 0068c9d4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9d8: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 0068c9de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9df: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c9e5u); call_ind(t); }
    /* 0068c9e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c9e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c9eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c9ed: je 0x68ca19 */ if (fZ) goto L_0068ca19;
L_0068c9ef:; BB(0x0068c9ef);
    /* 0068c9ef: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c9f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9f3: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c9f9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c9fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068c9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca02: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ca05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca06: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068ca0c: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68ca11u); f_0068d820();
    /* 0068ca11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ca14: jmp 0x68cc30 */ goto L_0068cc30;
L_0068ca19:; BB(0x0068ca19);
    /* 0068ca19: jmp 0x68cc0d */ goto L_0068cc0d;
L_0068ca1e:; BB(0x0068ca1e);
    /* 0068ca1e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068ca21: mov dword ptr [ebp - 0x194], edx */ W32((u32)(r_ebp+0xfffffe6cu), r_edx);
    /* 0068ca27: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0068ca2d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ca30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca31: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068ca34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca35: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68ca3bu); call_ind(t); }
    /* 0068ca3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ca3e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068ca41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca43: je 0x68caff */ if (fZ) goto L_0068caff;
L_0068ca49:; BB(0x0068ca49);
    /* 0068ca49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068ca4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068ca4f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068ca52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068ca55: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068ca58: call 0x68f800 */ r_esp -= 4; W32(r_esp, 0x68ca5du); f_0068f800();
    /* 0068ca5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ca60: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 0068ca66: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068ca69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca6a: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0068ca70: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ca73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca74: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68ca7au); call_ind(t); }
    /* 0068ca7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ca7d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068ca80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca82: je 0x68caff */ if (fZ) goto L_0068caff;
L_0068ca84:; BB(0x0068ca84);
    /* 0068ca84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ca87: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 0068ca8d: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 0068ca93: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068ca96: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068ca9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca9c: je 0x68cacd */ if (fZ) goto L_0068cacd;
L_0068ca9e:; BB(0x0068ca9e);
    /* 0068ca9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068caa1: mov dword ptr [ebp - 0x1a0], ecx */ W32((u32)(r_ebp+0xfffffe60u), r_ecx);
    /* 0068caa7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068caaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068caab: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 0068cab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cab4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068cab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cab8: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cabe: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68cac3u); f_0068d820();
    /* 0068cac3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cac6: jmp 0x68cc30 */ goto L_0068cc30;
L_0068cacd:; BB(0x0068cacd);
    /* 0068cacd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068cad0: mov dword ptr [ebp - 0x1a4], edx */ W32((u32)(r_ebp+0xfffffe5cu), r_edx);
    /* 0068cad6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068cad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cada: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0068cae0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cae1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cae3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068cae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cae7: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068caed: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68caf2u); f_0068d820();
    /* 0068caf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068caf5: jmp 0x68cc30 */ goto L_0068cc30;
L_0068caff:; BB(0x0068caff);
    /* 0068caff: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068cb02: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 0068cb08: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068cb0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb0c: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 0068cb12: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068cb15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb16: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68cb1cu); call_ind(t); }
    /* 0068cb1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068cb1f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068cb22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cb24: je 0x68cc0d */ if (fZ) goto L_0068cc0d;
L_0068cb2a:; BB(0x0068cb2a);
    /* 0068cb2a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068cb2d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068cb30: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068cb33: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068cb36: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cb3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068cb3f: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 0068cb45: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cb4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb4c: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0068cb52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb53: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068cb56: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68cb5bu); f_0068d4b0();
    /* 0068cb5b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068cb5e: call 0x68edc0 */ r_esp -= 4; W32(r_esp, 0x68cb63u); f_0068edc0();
    /* 0068cb63: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068cb66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb67: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068cb6a: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68cb6fu); f_006118f0();
    /* 0068cb6f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068cb72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cb74: jne 0x68cb9d */ if (!fZ) goto L_0068cb9d;
L_0068cb76:; BB(0x0068cb76);
    /* 0068cb76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068cb79: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 0068cb7f: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 0068cb85: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068cb88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb89: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068cb8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb8d: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68cb93u); call_ind(t); }
    /* 0068cb93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068cb96: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068cb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cb9b: je 0x68cc0d */ if (fZ) goto L_0068cc0d;
L_0068cb9d:; BB(0x0068cb9d);
    /* 0068cb9d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068cba0: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 0068cba6: mov edx, dword ptr [ebp - 0x1b4] */ r_edx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 0068cbac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068cbaf: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068cbb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cbb5: je 0x68cbe3 */ if (fZ) goto L_0068cbe3;
L_0068cbb7:; BB(0x0068cbb7);
    /* 0068cbb7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068cbba: mov dword ptr [ebp - 0x1b8], edx */ W32((u32)(r_ebp+0xfffffe48u), r_edx);
    /* 0068cbc0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068cbc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbc4: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 0068cbca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbcd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068cbd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbd1: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cbd7: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68cbdcu); f_0068d820();
    /* 0068cbdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cbdf: jmp 0x68cc30 */ goto L_0068cc30;
L_0068cbe3:; BB(0x0068cbe3);
    /* 0068cbe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068cbe6: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 0068cbec: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068cbef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbf0: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 0068cbf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbf9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cbfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbfd: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cc03: call 0x68d820 */ r_esp -= 4; W32(r_esp, 0x68cc08u); f_0068d820();
    /* 0068cc08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cc0b: jmp 0x68cc30 */ goto L_0068cc30;
L_0068cc0d:; BB(0x0068cc0d);
    /* 0068cc0d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068cc10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc11: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0068cc14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc15: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068cc1b: call 0x68d5e0 */ r_esp -= 4; W32(r_esp, 0x68cc20u); f_0068d5e0();
    /* 0068cc20: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068cc22: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068cc25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cc28: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068cc2a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068cc2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068cc30:; BB(0x0068cc30);
    /* 0068cc30: mov esp, ebp */ r_esp = r_ebp;
    /* 0068cc32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cc33: ret 0x10 */ FN_RET(0x0068c500); r_esp += 20; return;
}

void f_0068cc40(void) /* sub_68CC40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068cc40);
    /* 0068cc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc41: mov ebp, esp */ r_ebp = r_esp;
    /* 0068cc43: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068cc49: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0068cc4f: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cc55: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068cc58: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068cc5b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068cc5e: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cc64: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068cc67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068cc6a: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_0068cc6e:; BB(0x0068cc6e);
    /* 0068cc6e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068cc71: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068cc75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cc77: jne 0x68ccc2 */ if (!fZ) goto L_0068ccc2;
L_0068cc79:; BB(0x0068cc79);
    /* 0068cc79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068cc7c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068cc7f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068cc82: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068cc85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc86: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068cc89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc8a: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68cc90u); call_ind(t); }
    /* 0068cc90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068cc93: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0068cc96: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068cc9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cc9c: je 0x68ccab */ if (fZ) goto L_0068ccab;
L_0068cc9e:; BB(0x0068cc9e);
    /* 0068cc9e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068cca1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068cca3: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0068cca9: jmp 0x68ccb7 */ goto L_0068ccb7;
L_0068ccab:; BB(0x0068ccab);
    /* 0068ccab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ccae: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068ccb1: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
L_0068ccb7:; BB(0x0068ccb7);
    /* 0068ccb7: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0068ccbd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068ccc0: jmp 0x68cc6e */ goto L_0068cc6e;
L_0068ccc2:; BB(0x0068ccc2);
    /* 0068ccc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068ccc4: je 0x68cd14 */ if (fZ) goto L_0068cd14;
L_0068ccc6:; BB(0x0068ccc6);
    /* 0068ccc6: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 0068ccca: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068cccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ccce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ccd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ccd2: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0068ccd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ccd6: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0068ccd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ccda: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cce0: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68cce5u); f_0068d070();
    /* 0068cce5: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0068cceb: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0068ccf1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ccf3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068ccf6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ccf9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068ccfb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068ccfe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068cd01: mov dl, byte ptr [ebp - 0x15] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 0068cd04: mov byte ptr [ecx + 8], dl */ W8((u32)(r_ecx+0x8u), (u8)r_edx);
    /* 0068cd07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cd0a: jmp 0x68ce6b */ goto L_0068ce6b;
L_0068cd14:; BB(0x0068cd14);
    /* 0068cd14: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cd1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068cd1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd1f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0068cd22: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68cd27u); f_0068d4b0();
    /* 0068cd27: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068cd2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd2d: jne 0x68cd34 */ if (!fZ) goto L_0068cd34;
L_0068cd2f:; BB(0x0068cd2f);
    /* 0068cd2f: jmp 0x68cdde */ goto L_0068cdde;
L_0068cd34:; BB(0x0068cd34);
    /* 0068cd34: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cd3a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068cd3d: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0068cd43: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0068cd49: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068cd4b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0068cd51: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cd57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd58: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0068cd5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd5f: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068cd62: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68cd67u); f_0068d4b0();
    /* 0068cd67: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd6b: je 0x68cd75 */ if (fZ) goto L_0068cd75;
L_0068cd6d:; BB(0x0068cd6d);
    /* 0068cd6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068cd70: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd73: je 0x68cd7b */ if (fZ) goto L_0068cd7b;
L_0068cd75:; BB(0x0068cd75);
    /* 0068cd75: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cd7bu); call_ind(t); }
L_0068cd7b:; BB(0x0068cd7b);
    /* 0068cd7b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068cd7e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068cd80: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd83: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068cd86: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068cd89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd8b: je 0x68cdd6 */ if (fZ) goto L_0068cdd6;
L_0068cd8d:; BB(0x0068cd8d);
    /* 0068cd8d: mov byte ptr [ebp - 0x29], 1 */ W8((u32)(r_ebp+0xffffffd7u), 0x1u);
    /* 0068cd91: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068cd94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd95: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068cd98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd9b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0068cd9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd9f: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068cda5: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68cdaau); f_0068d070();
    /* 0068cdaa: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0068cdb0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0068cdb6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068cdb8: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0068cdbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068cdbe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068cdc0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068cdc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068cdc6: mov al, byte ptr [ebp - 0x29] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd7u))) & 0xffu);
    /* 0068cdc9: mov byte ptr [edx + 8], al */ W8((u32)(r_edx+0x8u), (u8)r_eax);
    /* 0068cdcc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cdcf: jmp 0x68ce6b */ goto L_0068ce6b;
L_0068cdd6:; BB(0x0068cdd6);
    /* 0068cdd6: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0068cdd9: call 0x68eea0 */ r_esp -= 4; W32(r_esp, 0x68cddeu); f_0068eea0();
L_0068cdde:; BB(0x0068cdde);
    /* 0068cdde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068cde1: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0068cde7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068cdea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cdeb: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0068cdf1: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068cdf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cdf5: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68cdfbu); call_ind(t); }
    /* 0068cdfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068cdfe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068ce01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ce03: je 0x68ce4d */ if (fZ) goto L_0068ce4d;
L_0068ce05:; BB(0x0068ce05);
    /* 0068ce05: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
    /* 0068ce09: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068ce0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ce10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce11: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0068ce14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce15: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0068ce18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce19: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0068ce1f: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68ce24u); f_0068d070();
    /* 0068ce24: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0068ce2a: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0068ce30: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ce32: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068ce35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ce38: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068ce3a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068ce3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ce40: mov dl, byte ptr [ebp - 0x35] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcbu))) & 0xffu);
    /* 0068ce43: mov byte ptr [ecx + 8], dl */ W8((u32)(r_ecx+0x8u), (u8)r_edx);
    /* 0068ce46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ce49: jmp 0x68ce6b */ goto L_0068ce6b;
L_0068ce4d:; BB(0x0068ce4d);
    /* 0068ce4d: mov byte ptr [ebp - 0x41], 0 */ W8((u32)(r_ebp+0xffffffbfu), 0x0u);
    /* 0068ce51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ce54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ce57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ce5a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068ce5c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068ce5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ce62: mov cl, byte ptr [ebp - 0x41] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbfu))) & 0xffu);
    /* 0068ce65: mov byte ptr [eax + 8], cl */ W8((u32)(r_eax+0x8u), (u8)r_ecx);
    /* 0068ce68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068ce6b:; BB(0x0068ce6b);
    /* 0068ce6b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ce6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ce6e: ret 8 */ FN_RET(0x0068cc40); r_esp += 12; return;
}

void f_0068ce80(void) /* sub_68CE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ce80);
    /* 0068ce80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce81: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ce83: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ce86: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0068ce89: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068ce8c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ce8f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068ce92: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068ce95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068ce97: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068ce9a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068cea1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068cea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068cea7: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ceab: jne 0x68ceb3 */ if (!fZ) goto L_0068ceb3;
L_0068cead:; BB(0x0068cead);
    /* 0068cead: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68ceb3u); call_ind(t); }
L_0068ceb3:; BB(0x0068ceb3);
    /* 0068ceb3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068ceb6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068ceb9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cebd: je 0x68cec7 */ if (fZ) goto L_0068cec7;
L_0068cebf:; BB(0x0068cebf);
    /* 0068cebf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068cec2: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cec5: je 0x68cecd */ if (fZ) goto L_0068cecd;
L_0068cec7:; BB(0x0068cec7);
    /* 0068cec7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cecdu); call_ind(t); }
L_0068cecd:; BB(0x0068cecd);
    /* 0068cecd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068ced0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068ced2: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ced5: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068ced8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068cedb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cedd: je 0x68cf77 */ if (fZ) goto L_0068cf77;
L_0068cee3:; BB(0x0068cee3);
    /* 0068cee3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cee6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068cee9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0068ceec: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068cef3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068cef6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068cef9: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cefd: jne 0x68cf05 */ if (!fZ) goto L_0068cf05;
L_0068ceff:; BB(0x0068ceff);
    /* 0068ceff: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cf05u); call_ind(t); }
L_0068cf05:; BB(0x0068cf05);
    /* 0068cf05: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cf08: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068cf0b: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf0f: je 0x68cf19 */ if (fZ) goto L_0068cf19;
L_0068cf11:; BB(0x0068cf11);
    /* 0068cf11: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068cf14: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf17: je 0x68cf1f */ if (fZ) goto L_0068cf1f;
L_0068cf19:; BB(0x0068cf19);
    /* 0068cf19: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cf1fu); call_ind(t); }
L_0068cf1f:; BB(0x0068cf1f);
    /* 0068cf1f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0068cf22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068cf24: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf27: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068cf2a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068cf2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf2f: je 0x68cf77 */ if (fZ) goto L_0068cf77;
L_0068cf31:; BB(0x0068cf31);
    /* 0068cf31: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cf34: call 0x68b8f0 */ r_esp -= 4; W32(r_esp, 0x68cf39u); f_0068b8f0();
    /* 0068cf39: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cf3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068cf3f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0068cf42: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0068cf45: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068cf47: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068cf4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068cf4d: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0068cf53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068cf56: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068cf59: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068cf5c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf60: jne 0x68cf68 */ if (!fZ) goto L_0068cf68;
L_0068cf62:; BB(0x0068cf62);
    /* 0068cf62: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cf68u); call_ind(t); }
L_0068cf68:; BB(0x0068cf68);
    /* 0068cf68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068cf6b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cf6e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068cf70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cf73: jmp 0x68cfee */ goto L_0068cfee;
L_0068cf77:; BB(0x0068cf77);
    /* 0068cf77: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf7b: je 0x68cf85 */ if (fZ) goto L_0068cf85;
L_0068cf7d:; BB(0x0068cf7d);
    /* 0068cf7d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068cf80: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf83: je 0x68cf8b */ if (fZ) goto L_0068cf8b;
L_0068cf85:; BB(0x0068cf85);
    /* 0068cf85: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68cf8bu); call_ind(t); }
L_0068cf8b:; BB(0x0068cf8b);
    /* 0068cf8b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068cf8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068cf90: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cf93: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068cf96: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068cf99: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0068cf9b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068cf9d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068cfa0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068cfa3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cfa5: je 0x68cfdd */ if (fZ) goto L_0068cfdd;
L_0068cfa7:; BB(0x0068cfa7);
    /* 0068cfa7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068cfaa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068cfad: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0068cfb0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068cfb3: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068cfb6: call 0x68e790 */ r_esp -= 4; W32(r_esp, 0x68cfbbu); f_0068e790();
    /* 0068cfbb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068cfbe: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0068cfc1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068cfc4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068cfc7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068cfca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cfcb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068cfce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cfcf: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0068cfd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cfd3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068cfd6: call 0x68dd20 */ r_esp -= 4; W32(r_esp, 0x68cfdbu); f_0068dd20();
    /* 0068cfdb: jmp 0x68cf77 */ goto L_0068cf77;
L_0068cfdd:; BB(0x0068cfdd);
    /* 0068cfdd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068cfe0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068cfe3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068cfe5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068cfe8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068cfeb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068cfee:; BB(0x0068cfee);
    /* 0068cfee: mov esp, ebp */ r_esp = r_ebp;
    /* 0068cff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cff1: ret 0x14 */ FN_RET(0x0068ce80); r_esp += 24; return;
}

