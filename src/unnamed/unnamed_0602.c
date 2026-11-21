#include "protos.h"

void f_006023d0(void) /* sub_6023D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006023d0);
    /* 006023d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006023d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006023d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006023d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006023d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006023dd: mov dword ptr [eax + 0x198], ecx */ W32((u32)(r_eax+0x198u), r_ecx);
    /* 006023e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006023e9: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006023ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023f2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006023f5: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 006023fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023fe: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00602401: mov dword ptr [eax + 0x1a4], ecx */ W32((u32)(r_eax+0x1a4u), r_ecx);
    /* 00602407: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060240a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060240c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060240f: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00602415: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602417u); call_ind(t); }
    /* 00602417: mov esp, ebp */ r_esp = r_ebp;
    /* 00602419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060241a: ret 0x10 */ FN_RET(0x006023d0); r_esp += 20; return;
}

void f_00602420(void) /* sub_602420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602420);
    /* 00602420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602421: mov ebp, esp */ r_ebp = r_esp;
    /* 00602423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060242a: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
    /* 00602434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602437: mov dword ptr [ecx + 0x19c], 1 */ W32((u32)(r_ecx+0x19cu), 0x1u);
    /* 00602441: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602444: mov dword ptr [edx + 0x1a0], 2 */ W32((u32)(r_edx+0x1a0u), 0x2u);
    /* 0060244e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602451: mov dword ptr [eax + 0x1a4], 3 */ W32((u32)(r_eax+0x1a4u), 0x3u);
    /* 0060245b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060245e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602460: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602463: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00602469: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60246bu); call_ind(t); }
    /* 0060246b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060246d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060246e: ret  */ FN_RET(0x00602420); r_esp += 4; return;
}

void f_006026d0(void) /* sub_6026D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006026d0);
    /* 006026d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006026d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006026d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006026d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006026d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006026da: mov al, byte ptr [eax + 0x1a8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1a8u))) & 0xffu);
    /* 006026e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006026e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006026e3: ret  */ FN_RET(0x006026d0); r_esp += 4; return;
}

void f_006026f0(void) /* sub_6026F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006026f0);
    /* 006026f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006026f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006026f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006026f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006026f7: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 006026fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006026fc: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x602702u); call_ind(t); }
    /* 00602702: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602705: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602708: mov byte ptr [ecx + 0x1a9], al */ W8((u32)(r_ecx+0x1a9u), (u8)r_eax);
    /* 0060270e: mov esp, ebp */ r_esp = r_ebp;
    /* 00602710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602711: ret 4 */ FN_RET(0x006026f0); r_esp += 8; return;
}

void f_00602740(void) /* sub_602740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602740);
    /* 00602740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602741: mov ebp, esp */ r_ebp = r_esp;
    /* 00602743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602747: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0060274b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060274c: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x602752u); call_ind(t); }
    /* 00602752: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602758: mov byte ptr [ecx + 0x1aa], al */ W8((u32)(r_ecx+0x1aau), (u8)r_eax);
    /* 0060275e: mov esp, ebp */ r_esp = r_ebp;
    /* 00602760: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602761: ret 4 */ FN_RET(0x00602740); r_esp += 8; return;
}

void f_00602790(void) /* sub_602790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602790);
    /* 00602790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602791: mov ebp, esp */ r_ebp = r_esp;
    /* 00602793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602797: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0060279a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060279b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060279e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6027a3u); f_005eb5d0();
    /* 006027a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027a6: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006027ad: je 0x6027c1 */ if (fZ) goto L_006027c1;
L_006027af:; BB(0x006027af);
    /* 006027af: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006027b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006027b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027b6: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 006027bc: call 0x5f0ae0 */ r_esp -= 4; W32(r_esp, 0x6027c1u); f_005f0ae0();
L_006027c1:; BB(0x006027c1);
    /* 006027c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006027c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006027c4: ret 4 */ FN_RET(0x00602790); r_esp += 8; return;
}

void f_00602810(void) /* sub_602810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602810);
    /* 00602810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602811: mov ebp, esp */ r_ebp = r_esp;
    /* 00602813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602817: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060281a: mov eax, dword ptr [eax + 0x194] */ r_eax = R32((u32)(r_eax+0x194u));
    /* 00602820: mov esp, ebp */ r_esp = r_ebp;
    /* 00602822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602823: ret  */ FN_RET(0x00602810); r_esp += 4; return;
}

void f_00602b70(void) /* sub_602B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602b70);
    /* 00602b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00602b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602b77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b7a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602b81: je 0x602ba1 */ if (fZ) goto L_00602ba1;
L_00602b83:; BB(0x00602b83);
    /* 00602b83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b86: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00602b8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b8f: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00602b95: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00602b97: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00602b9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602b9fu); call_ind(t); }
    /* 00602b9f: jmp 0x602ba6 */ goto L_00602ba6;
L_00602ba1:; BB(0x00602ba1);
    /* 00602ba1: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
L_00602ba6:; BB(0x00602ba6);
    /* 00602ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ba9: ret  */ FN_RET(0x00602b70); r_esp += 4; return;
}

void f_00602e00(void) /* sub_602E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602e00);
    /* 00602e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00602e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602e0a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602e11: je 0x602e25 */ if (fZ) goto L_00602e25;
L_00602e13:; BB(0x00602e13);
    /* 00602e13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00602e16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602e17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602e1a: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00602e20: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x602e25u); f_005ef310();
L_00602e25:; BB(0x00602e25);
    /* 00602e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00602e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602e28: ret 4 */ FN_RET(0x00602e00); r_esp += 8; return;
}

void f_00602e30(void) /* sub_602E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602e30);
    /* 00602e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00602e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602e3a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602e41: je 0x602e59 */ if (fZ) goto L_00602e59;
L_00602e43:; BB(0x00602e43);
    /* 00602e43: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00602e46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602e47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00602e4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602e4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602e4e: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00602e54: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x602e59u); f_005ef340();
L_00602e59:; BB(0x00602e59);
    /* 00602e59: mov esp, ebp */ r_esp = r_ebp;
    /* 00602e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602e5c: ret 8 */ FN_RET(0x00602e30); r_esp += 12; return;
}

void f_00602eb0(void) /* sub_602EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602eb0);
    /* 00602eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00602eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602eb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602eba: mov byte ptr [eax + 0x1b4], 1 */ W8((u32)(r_eax+0x1b4u), 0x1u);
    /* 00602ec1: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ec4: ret  */ FN_RET(0x00602eb0); r_esp += 4; return;
}

void f_00602ed0(void) /* sub_602ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602ed0);
    /* 00602ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00602ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602eda: mov al, byte ptr [eax + 0x1b4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1b4u))) & 0xffu);
    /* 00602ee0: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ee2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ee3: ret  */ FN_RET(0x00602ed0); r_esp += 4; return;
}

void f_00602ef0(void) /* sub_602EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602ef0);
    /* 00602ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00602ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602efa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00602efd: mov dword ptr [eax + 0x1ac], ecx */ W32((u32)(r_eax+0x1acu), r_ecx);
    /* 00602f03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f06: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00602f09: mov dword ptr [edx + 0x1b0], eax */ W32((u32)(r_edx+0x1b0u), r_eax);
    /* 00602f0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00602f11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602f12: ret 8 */ FN_RET(0x00602ef0); r_esp += 12; return;
}

void f_00602f20(void) /* sub_602F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602f20);
    /* 00602f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00602f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602f27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f2a: mov al, byte ptr [eax + 0x1b6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1b6u))) & 0xffu);
    /* 00602f30: mov esp, ebp */ r_esp = r_ebp;
    /* 00602f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602f33: ret  */ FN_RET(0x00602f20); r_esp += 4; return;
}

void f_00602f40(void) /* sub_602F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602f40);
    /* 00602f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00602f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602f47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f4a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00602f4d: mov byte ptr [eax + 0x1b6], cl */ W8((u32)(r_eax+0x1b6u), (u8)r_ecx);
    /* 00602f53: mov esp, ebp */ r_esp = r_ebp;
    /* 00602f55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602f56: ret 4 */ FN_RET(0x00602f40); r_esp += 8; return;
}

