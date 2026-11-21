#include "protos.h"

void f_005a3630(void) /* sub_5A3630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3630);
    /* 005a3630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3631: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3633: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3636: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a3639: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a363c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a363f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a3642: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3644: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3647: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3648: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a364b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a364e: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005a3652: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5a3657u); f_005cb7d0();
    /* 005a3657: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a365a: ret 4 */ FN_RET(0x005a3630); r_esp += 8; return;
}

void f_005a3660(void) /* sub_5A3660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3660);
    /* 005a3660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3661: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3666: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a3669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a366c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a366f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a3672: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3674: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3678: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a367b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a367e: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a3682: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5a3687u); f_005cb7d0();
    /* 005a3687: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a368a: ret 4 */ FN_RET(0x005a3660); r_esp += 8; return;
}

void f_005a3690(void) /* sub_5A3690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3690);
    /* 005a3690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3691: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3693: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3696: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a3699: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a369c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a369f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a36a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a36a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a36a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a36a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a36ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a36ae: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005a36b2: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5a36b7u); f_005cb7d0();
    /* 005a36b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005a36b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a36ba: ret 4 */ FN_RET(0x005a3690); r_esp += 8; return;
}

void f_005a36c0(void) /* sub_5A36C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a36c0);
    /* 005a36c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a36c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a36c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a36c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a36c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a36cc: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a36cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a36d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a36d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a36d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a36d9: call 0x5a29f0 */ r_esp -= 4; W32(r_esp, 0x5a36deu); f_005a29f0();
    /* 005a36de: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a36e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a36e3: jne 0x5a36ea */ if (!fZ) goto L_005a36ea;
L_005a36e5:; BB(0x005a36e5);
    /* 005a36e5: jmp 0x5a37c6 */ goto L_005a37c6;
L_005a36ea:; BB(0x005a36ea);
    /* 005a36ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a36ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a36ee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a36f3u); f_005dcb00();
    /* 005a36f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a36f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a36f8: jne 0x5a36ff */ if (!fZ) goto L_005a36ff;
L_005a36fa:; BB(0x005a36fa);
    /* 005a36fa: jmp 0x5a37c6 */ goto L_005a37c6;
L_005a36ff:; BB(0x005a36ff);
    /* 005a36ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3702: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3703: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 005a3709: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a370b: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a3711: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 005a3717: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a3719u); call_ind(t); }
    /* 005a3719: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a3720: jmp 0x5a372b */ goto L_005a372b;
L_005a3722:; BB(0x005a3722);
    /* 005a3722: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3725: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3728: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a372b:; BB(0x005a372b);
    /* 005a372b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a372f: jge 0x5a3779 */ if ((fS==fO)) goto L_005a3779;
L_005a3731:; BB(0x005a3731);
    /* 005a3731: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3734: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3737: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a373a: cmp dword ptr [edx + ecx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a373f: jle 0x5a3777 */ if ((fZ||fS!=fO)) goto L_005a3777;
L_005a3741:; BB(0x005a3741);
    /* 005a3741: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3745: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3748: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a374b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a374e: lea edx, [ecx + eax*8 + 0x38] */ r_edx = (u32)(r_ecx+r_eax*8+0x38u);
    /* 005a3752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3753: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3756: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3759: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a375c: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a3760: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3763: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3766: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3769: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a376d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a376f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005a3775: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a3777u); call_ind(t); }
L_005a3777:; BB(0x005a3777);
    /* 005a3777: jmp 0x5a3722 */ goto L_005a3722;
L_005a3779:; BB(0x005a3779);
    /* 005a3779: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a377c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a377d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3782u); f_005dcb00();
    /* 005a3782: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3785: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a3788: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a378b: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 005a3792: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a3798: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x5a379du); f_0059c2d0();
    /* 005a379d: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a37a3: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5a37a8u); f_005db890();
    /* 005a37a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a37aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a37ac: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 005a37b1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a37b4: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 005a37ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005a37bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a37bf: mov ecx, eax */ r_ecx = r_eax;
    /* 005a37c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005a37c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a37c6u); call_ind(t); }
L_005a37c6:; BB(0x005a37c6);
    /* 005a37c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005a37c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a37c9: ret 4 */ FN_RET(0x005a36c0); r_esp += 8; return;
}

void f_005a37d0(void) /* sub_5A37D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a37d0);
    /* 005a37d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a37d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a37d3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a37d6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a37d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a37e0: jmp 0x5a37eb */ goto L_005a37eb;
L_005a37e2:; BB(0x005a37e2);
    /* 005a37e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a37e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a37e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a37eb:; BB(0x005a37eb);
    /* 005a37eb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a37ef: jge 0x5a386c */ if ((fS==fO)) goto L_005a386c;
L_005a37f1:; BB(0x005a37f1);
    /* 005a37f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a37f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a37f5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a37fau); f_005dcb00();
    /* 005a37fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a37fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a3800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3803: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a3808u); f_0063aac0();
    /* 005a3808: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a380a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a380d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a380f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3813: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a3816: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a3819: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a381b: jne 0x5a3867 */ if (!fZ) goto L_005a3867;
L_005a381d:; BB(0x005a381d);
    /* 005a381d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3820: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3821: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3826u); f_005dcb00();
    /* 005a3826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3829: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a382c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a382f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 005a3835: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 005a3838: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005a383c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a383e: jne 0x5a3867 */ if (!fZ) goto L_005a3867;
L_005a3840:; BB(0x005a3840);
    /* 005a3840: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3844: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3849u); f_005dcb00();
    /* 005a3849: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a384c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a384f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a3852: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005a3858: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005a385b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a385f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3861: jne 0x5a3867 */ if (!fZ) goto L_005a3867;
L_005a3863:; BB(0x005a3863);
    /* 005a3863: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a3865: jmp 0x5a386e */ goto L_005a386e;
L_005a3867:; BB(0x005a3867);
    /* 005a3867: jmp 0x5a37e2 */ goto L_005a37e2;
L_005a386c:; BB(0x005a386c);
    /* 005a386c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a386e:; BB(0x005a386e);
    /* 005a386e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3871: ret  */ FN_RET(0x005a37d0); r_esp += 4; return;
}

void f_005a3880(void) /* sub_5A3880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3880);
    /* 005a3880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3881: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3883: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3886: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a3889: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a388c: call 0x5a3e50 */ r_esp -= 4; W32(r_esp, 0x5a3891u); f_005a3e50();
    /* 005a3891: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3895: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a3898: call 0x5a3ad0 */ r_esp -= 4; W32(r_esp, 0x5a389du); f_005a3ad0();
    /* 005a389d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a389f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a38a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a38a4: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x5a38a9u); f_005a3b40();
    /* 005a38a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a38ac: mov byte ptr [eax + 0xf0], 0 */ W8((u32)(r_eax+0xf0u), 0x0u);
    /* 005a38b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a38ba: jmp 0x5a38c5 */ goto L_005a38c5;
L_005a38bc:; BB(0x005a38bc);
    /* 005a38bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a38bf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a38c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a38c5:; BB(0x005a38c5);
    /* 005a38c5: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a38c9: jge 0x5a38ed */ if ((fS==fO)) goto L_005a38ed;
L_005a38cb:; BB(0x005a38cb);
    /* 005a38cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a38ce: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a38d1: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a38d5: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5a38dau); f_005cb9b0();
    /* 005a38da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a38dd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a38e0: mov dword ptr [edx + ecx*4 + 0x98], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x98u), 0xffffffffu);
    /* 005a38eb: jmp 0x5a38bc */ goto L_005a38bc;
L_005a38ed:; BB(0x005a38ed);
    /* 005a38ed: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a38f4: jmp 0x5a38ff */ goto L_005a38ff;
L_005a38f6:; BB(0x005a38f6);
    /* 005a38f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a38f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a38fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a38ff:; BB(0x005a38ff);
    /* 005a38ff: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3903: jge 0x5a3941 */ if ((fS==fO)) goto L_005a3941;
L_005a3905:; BB(0x005a3905);
    /* 005a3905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3907: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a390a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a390b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a390e: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x5a3913u); f_005a3c20();
    /* 005a3913: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a391a: jmp 0x5a3925 */ goto L_005a3925;
L_005a391c:; BB(0x005a391c);
    /* 005a391c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a391f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a3922: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005a3925:; BB(0x005a3925);
    /* 005a3925: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3929: jge 0x5a393f */ if ((fS==fO)) goto L_005a393f;
L_005a392b:; BB(0x005a392b);
    /* 005a392b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a392d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3931: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3934: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a3938: call 0x5a3b70 */ r_esp -= 4; W32(r_esp, 0x5a393du); f_005a3b70();
    /* 005a393d: jmp 0x5a391c */ goto L_005a391c;
L_005a393f:; BB(0x005a393f);
    /* 005a393f: jmp 0x5a38f6 */ goto L_005a38f6;
L_005a3941:; BB(0x005a3941);
    /* 005a3941: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005a3948: jmp 0x5a3953 */ goto L_005a3953;
L_005a394a:; BB(0x005a394a);
    /* 005a394a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a394d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a3950: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005a3953:; BB(0x005a3953);
    /* 005a3953: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3957: jge 0x5a39d0 */ if ((fS==fO)) goto L_005a39d0;
L_005a3959:; BB(0x005a3959);
    /* 005a3959: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a395c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a395d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3962u); f_005dcb00();
    /* 005a3962: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3965: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a3968: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a396b: mov byte ptr [ecx + 0x4a0], 0 */ W8((u32)(r_ecx+0x4a0u), 0x0u);
    /* 005a3972: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3975: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3976: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a397bu); f_005dcb00();
    /* 005a397b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a397e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a3981: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a3984: mov byte ptr [eax + 0x4a1], 0 */ W8((u32)(r_eax+0x4a1u), 0x0u);
    /* 005a398b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a398e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a398f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3994u); f_005dcb00();
    /* 005a3994: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3997: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a399a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a399d: mov byte ptr [edx + 0x4a2], 0 */ W8((u32)(r_edx+0x4a2u), 0x0u);
    /* 005a39a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a39a7: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a39aa: mov byte ptr [eax + 0x104], 0 */ W8((u32)(r_eax+0x104u), 0x0u);
    /* 005a39b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a39b4: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a39b7: mov byte ptr [ecx + 0xfb], 0 */ W8((u32)(r_ecx+0xfbu), 0x0u);
    /* 005a39be: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a39c1: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a39c4: mov byte ptr [edx + 0xff], 0 */ W8((u32)(r_edx+0xffu), 0x0u);
    /* 005a39cb: jmp 0x5a394a */ goto L_005a394a;
L_005a39d0:; BB(0x005a39d0);
    /* 005a39d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a39d3: call 0x5a1e60 */ r_esp -= 4; W32(r_esp, 0x5a39d8u); f_005a1e60();
    /* 005a39d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005a39da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a39db: ret  */ FN_RET(0x005a3880); r_esp += 4; return;
}

void f_005a39e0(void) /* sub_5A39E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a39e0);
    /* 005a39e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a39e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a39e3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a39e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a39e7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a39ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a39f1: jmp 0x5a39fc */ goto L_005a39fc;
L_005a39f3:; BB(0x005a39f3);
    /* 005a39f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a39f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a39f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a39fc:; BB(0x005a39fc);
    /* 005a39fc: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3a00: jge 0x5a3ac2 */ if ((fS==fO)) goto L_005a3ac2;
L_005a3a06:; BB(0x005a3a06);
    /* 005a3a06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3a09: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a3a0c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a3a0f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a3a16: jmp 0x5a3a21 */ goto L_005a3a21;
L_005a3a18:; BB(0x005a3a18);
    /* 005a3a18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3a1b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a3a1e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005a3a21:; BB(0x005a3a21);
    /* 005a3a21: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3a25: jge 0x5a3abd */ if ((fS==fO)) goto L_005a3abd;
L_005a3a2b:; BB(0x005a3a2b);
    /* 005a3a2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3a2e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3a31: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a3a34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3a36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3a3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3a3d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a3a40: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a3a44: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5a3a49u); f_005cb7d0();
    /* 005a3a49: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a3a4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3a4e: je 0x5a3a92 */ if (fZ) goto L_005a3a92;
L_005a3a50:; BB(0x005a3a50);
    /* 005a3a50: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3a53: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a3a56: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a3a5a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a3a5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3a60: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a3a63: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3a66: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005a3a6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a3a6c: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a3a6f: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005a3a72: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005a3a76: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a3a79: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a3a7c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a3a7f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a3a82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3a85: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a3a88: mov dword ptr [esi + ecx*8 + 0x38], edx */ W32((u32)(r_esi+r_ecx*8+0x38u), r_edx);
    /* 005a3a8c: mov dword ptr [esi + ecx*8 + 0x3c], eax */ W32((u32)(r_esi+r_ecx*8+0x3cu), r_eax);
    /* 005a3a90: jmp 0x5a3ab8 */ goto L_005a3ab8;
L_005a3a92:; BB(0x005a3a92);
    /* 005a3a92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3a94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3a96: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a3a9bu); f_0064c8a0();
    /* 005a3a9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3a9e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a3aa1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a3aa4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a3aa7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a3aaa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a3aad: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 005a3ab1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a3ab4: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
L_005a3ab8:; BB(0x005a3ab8);
    /* 005a3ab8: jmp 0x5a3a18 */ goto L_005a3a18;
L_005a3abd:; BB(0x005a3abd);
    /* 005a3abd: jmp 0x5a39f3 */ goto L_005a39f3;
L_005a3ac2:; BB(0x005a3ac2);
    /* 005a3ac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a3ac3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3ac6: ret  */ FN_RET(0x005a39e0); r_esp += 4; return;
}

void f_005a3ad0(void) /* sub_5A3AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3ad0);
    /* 005a3ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3ada: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3add: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 005a3ae3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3ae6: cmp dword ptr [edx + 0xec], -1 */ {  u32 a = R32((u32)(r_edx+0xecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3aed: je 0x5a3b06 */ if (fZ) goto L_005a3b06;
L_005a3aef:; BB(0x005a3aef);
    /* 005a3aef: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005a3af2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3af3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3af6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3af7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3af9: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a3aff: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x5a3b04u); f_005d8a20();
    /* 005a3b04: jmp 0x5a3b17 */ goto L_005a3b17;
L_005a3b06:; BB(0x005a3b06);
    /* 005a3b06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b0c: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 005a3b12: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x5a3b17u); f_005d8a20();
L_005a3b17:; BB(0x005a3b17);
    /* 005a3b17: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3b19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3b1a: ret 8 */ FN_RET(0x005a3ad0); r_esp += 12; return;
}

void f_005a3b20(void) /* sub_5A3B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3b20);
    /* 005a3b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b21: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3b27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3b2a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3b2d: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005a3b30: mov byte ptr [eax + 0xf7], cl */ W8((u32)(r_eax+0xf7u), (u8)r_ecx);
    /* 005a3b36: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3b38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3b39: ret 8 */ FN_RET(0x005a3b20); r_esp += 12; return;
}

void f_005a3b40(void) /* sub_5A3B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3b40);
    /* 005a3b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3b47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3b4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3b4d: mov dword ptr [eax + 0x108], ecx */ W32((u32)(r_eax+0x108u), r_ecx);
    /* 005a3b53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3b56: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a3b59: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 005a3b5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3b61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3b62: ret 8 */ FN_RET(0x005a3b40); r_esp += 12; return;
}

void f_005a3b70(void) /* sub_5A3B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3b70);
    /* 005a3b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b71: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3b77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3b7a: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a3b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3b80: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005a3b87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a3b8a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 005a3b8e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 005a3b92: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3b94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3b95: ret 0xc */ FN_RET(0x005a3b70); r_esp += 16; return;
}

void f_005a3ba0(void) /* sub_5A3BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3ba0);
    /* 005a3ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ba9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3bac: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a3bb1u); f_005a2040();
    /* 005a3bb1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005a3bb4: mov byte ptr [eax + 2], cl */ W8((u32)(r_eax+0x2u), (u8)r_ecx);
    /* 005a3bb7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a3bbd: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5a3bc2u); f_006375b0();
    /* 005a3bc2: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3bc4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5a3bc9u); f_0063b0a0();
    /* 005a3bc9: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3bcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3bcc: ret 4 */ FN_RET(0x005a3ba0); r_esp += 8; return;
}

void f_005a3bd0(void) /* sub_5A3BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3bd0);
    /* 005a3bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3bd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3bd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3bdc: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a3be1u); f_005a2040();
    /* 005a3be1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005a3be4: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 005a3be7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a3bed: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5a3bf2u); f_006375b0();
    /* 005a3bf2: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3bf4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5a3bf9u); f_0063b0a0();
    /* 005a3bf9: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3bfc: ret 4 */ FN_RET(0x005a3bd0); r_esp += 8; return;
}

void f_005a3c00(void) /* sub_5A3C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3c00);
    /* 005a3c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c01: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3c07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3c0c: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a3c11u); f_005a2040();
    /* 005a3c11: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005a3c14: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 005a3c16: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3c18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3c19: ret 4 */ FN_RET(0x005a3c00); r_esp += 8; return;
}

void f_005a3c20(void) /* sub_5A3C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3c20);
    /* 005a3c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c21: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3c2a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3c2d: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005a3c30: mov byte ptr [eax + 0xf1], cl */ W8((u32)(r_eax+0xf1u), (u8)r_ecx);
    /* 005a3c36: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3c38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3c39: ret 8 */ FN_RET(0x005a3c20); r_esp += 12; return;
}

void f_005a3c40(void) /* sub_5A3C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3c40);
    /* 005a3c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3c43: sub esp, 0x4a8 */ {  u32 a = r_esp; u32 b = 0x4a8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3c49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a3c4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3c50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a3c53: mov dword ptr [ebp - 0x4a8], ecx */ W32((u32)(r_ebp+0xfffffb58u), r_ecx);
    /* 005a3c59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c5b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3c60: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a3c63: mov ecx, dword ptr [ebp - 0x4a8] */ r_ecx = R32((u32)(r_ebp+0xfffffb58u));
    /* 005a3c69: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005a3c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c71: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5a3c76u); f_00462ba0();
    /* 005a3c76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3c79: mov dword ptr [ebp - 0x494], eax */ W32((u32)(r_ebp+0xfffffb6cu), r_eax);
    /* 005a3c7f: lea eax, [ebp - 0x490] */ r_eax = (u32)(r_ebp+0xfffffb70u);
    /* 005a3c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c86: mov ecx, dword ptr [ebp - 0x494] */ r_ecx = R32((u32)(r_ebp+0xfffffb6cu));
    /* 005a3c8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c8d: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x5a3c92u); f_00462f40();
    /* 005a3c92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3c95: mov byte ptr [ebp - 0x4a0], 0 */ W8((u32)(r_ebp+0xfffffb60u), 0x0u);
    /* 005a3c9c: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a3ca2: movzx eax, word ptr [edx + 0x120] */ r_eax = (u32)R16((u32)(r_edx+0x120u));
    /* 005a3ca9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3cac: jl 0x5a3ce7 */ if ((fS!=fO)) goto L_005a3ce7;
L_005a3cae:; BB(0x005a3cae);
    /* 005a3cae: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a3cb4: movzx edx, word ptr [ecx + 0x120] */ r_edx = (u32)R16((u32)(r_ecx+0x120u));
    /* 005a3cbb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3cbe: jg 0x5a3ce7 */ if ((!fZ&&fS==fO)) goto L_005a3ce7;
L_005a3cc0:; BB(0x005a3cc0);
    /* 005a3cc0: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3cc5: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 005a3ccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ccd: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cd2: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3cd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cd9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3cdfu); call_ind(t); }
    /* 005a3cdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3ce2: jmp 0x5a3d85 */ goto L_005a3d85;
L_005a3ce7:; BB(0x005a3ce7);
    /* 005a3ce7: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3cec: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 005a3cf3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3cf6: jne 0x5a3d0f */ if (!fZ) goto L_005a3d0f;
L_005a3cf8:; BB(0x005a3cf8);
    /* 005a3cf8: push 0x6cf6d4 */ { u32 v = 0x6cf6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cfd: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3d03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d04: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3d0au); call_ind(t); }
    /* 005a3d0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3d0d: jmp 0x5a3d85 */ goto L_005a3d85;
L_005a3d0f:; BB(0x005a3d0f);
    /* 005a3d0f: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3d14: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 005a3d1b: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d1e: jne 0x5a3d37 */ if (!fZ) goto L_005a3d37;
L_005a3d20:; BB(0x005a3d20);
    /* 005a3d20: push 0x6cf6cc */ { u32 v = 0x6cf6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d25: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3d2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d2c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3d32u); call_ind(t); }
    /* 005a3d32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3d35: jmp 0x5a3d85 */ goto L_005a3d85;
L_005a3d37:; BB(0x005a3d37);
    /* 005a3d37: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3d3c: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 005a3d43: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d46: jne 0x5a3d5f */ if (!fZ) goto L_005a3d5f;
L_005a3d48:; BB(0x005a3d48);
    /* 005a3d48: push 0x6cf6c4 */ { u32 v = 0x6cf6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d4d: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3d53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d54: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3d5au); call_ind(t); }
    /* 005a3d5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3d5d: jmp 0x5a3d85 */ goto L_005a3d85;
L_005a3d5f:; BB(0x005a3d5f);
    /* 005a3d5f: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3d64: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 005a3d6b: cmp ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d6e: jne 0x5a3d85 */ if (!fZ) goto L_005a3d85;
L_005a3d70:; BB(0x005a3d70);
    /* 005a3d70: push 0x6cf6c0 */ { u32 v = 0x6cf6c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d75: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3d7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d7c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3d82u); call_ind(t); }
    /* 005a3d82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a3d85:; BB(0x005a3d85);
    /* 005a3d85: lea eax, [ebp - 0x495] */ r_eax = (u32)(r_ebp+0xfffffb6bu);
    /* 005a3d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d8c: lea ecx, [ebp - 0x409] */ r_ecx = (u32)(r_ebp+0xfffffbf7u);
    /* 005a3d92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d93: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a3d96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d97: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 005a3d9d: call 0x59b080 */ r_esp -= 4; W32(r_esp, 0x5a3da2u); f_0059b080();
    /* 005a3da2: mov dword ptr [ebp - 0x4a4], eax */ W32((u32)(r_ebp+0xfffffb5cu), r_eax);
    /* 005a3da8: mov eax, dword ptr [ebp - 0x4a4] */ r_eax = R32((u32)(r_ebp+0xfffffb5cu));
    /* 005a3dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3daf: lea ecx, [ebp - 0x4a0] */ r_ecx = (u32)(r_ebp+0xfffffb60u);
    /* 005a3db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3db6: lea edx, [ebp - 0x490] */ r_edx = (u32)(r_ebp+0xfffffb70u);
    /* 005a3dbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3dbd: push 0x6cf6a0 */ { u32 v = 0x6cf6a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3dc2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a3dc7u); f_00630f40();
    /* 005a3dc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3dcb: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005a3dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3dd2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5a3dd8u); call_ind(t); }
    /* 005a3dd8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3ddb: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005a3de1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3de2: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3de7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a3decu); f_00630f40();
    /* 005a3dec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3df2: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005a3df8: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x5a3dfdu); f_0057be80();
    /* 005a3dfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3e00: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3e02: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5a3e07u); f_00686d72();
    /* 005a3e07: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3e0a: ret 4 */ FN_RET(0x005a3c40); r_esp += 8; return;
}

void f_005a3e10(void) /* sub_5A3E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3e10);
    /* 005a3e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e11: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3e17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3e1c: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a3e21u); f_005a2040();
    /* 005a3e21: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 005a3e24: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3e26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3e27: ret  */ FN_RET(0x005a3e10); r_esp += 4; return;
}

void f_005a3e30(void) /* sub_5A3E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3e30);
    /* 005a3e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e31: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3e3a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3e3d: mov al, byte ptr [eax + 0xf1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xf1u))) & 0xffu);
    /* 005a3e43: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3e45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3e46: ret 4 */ FN_RET(0x005a3e30); r_esp += 8; return;
}

void f_005a3e50(void) /* sub_5A3E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3e50);
    /* 005a3e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a3e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3e5e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a3e61: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x5a3e66u); f_006437d0();
    /* 005a3e66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e68: push 0x6cf68c */ { u32 v = 0x6cf68cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e6d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e6f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3e74: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005a3e77: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x5a3e7cu); f_00643930();
    /* 005a3e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3e7f: ret  */ FN_RET(0x005a3e50); r_esp += 4; return;
}

void f_005a3e80(void) /* sub_5A3E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a3e80);
    /* 005a3e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3e83: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3e86: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a3e8b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3e8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a3e90: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a3e93: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3e97: jne 0x5a3ea0 */ if (!fZ) goto L_005a3ea0;
L_005a3e99:; BB(0x005a3e99);
    /* 005a3e99: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a3e9b: jmp 0x5a3f69 */ goto L_005a3f69;
L_005a3ea0:; BB(0x005a3ea0);
    /* 005a3ea0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005a3ea7: jmp 0x5a3eb2 */ goto L_005a3eb2;
L_005a3ea9:; BB(0x005a3ea9);
    /* 005a3ea9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3eac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3eaf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005a3eb2:; BB(0x005a3eb2);
    /* 005a3eb2: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3eb6: jge 0x5a3ec4 */ if ((fS==fO)) goto L_005a3ec4;
L_005a3eb8:; BB(0x005a3eb8);
    /* 005a3eb8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3ebb: mov word ptr [ebp + ecx*2 - 0x10], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffff0u), 0x0u);
    /* 005a3ec2: jmp 0x5a3ea9 */ goto L_005a3ea9;
L_005a3ec4:; BB(0x005a3ec4);
    /* 005a3ec4: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005a3ec7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ec8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3eca: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3ecf: add eax, 0xe6 */ {  u32 a = r_eax; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ed5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3ed7: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3edb: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a3ede: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3ee1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ee2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a3ee5: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a3ee8: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a3eed: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005a3ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ef5: call 0x462930 */ r_esp -= 4; W32(r_esp, 0x5a3efau); f_00462930();
    /* 005a3efa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3efd: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005a3f00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f01: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f03: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005a3f06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f07: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f09: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5a3f0eu); f_00462a40();
    /* 005a3f0e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3f11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f13: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f15: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005a3f18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f19: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5a3f1eu); f_00462ba0();
    /* 005a3f1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3f21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a3f24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a3f27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f28: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a3f2b: call 0x5a3660 */ r_esp -= 4; W32(r_esp, 0x5a3f30u); f_005a3660();
    /* 005a3f30: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a3f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3f35: je 0x5a3f5f */ if (fZ) goto L_005a3f5f;
L_005a3f37:; BB(0x005a3f37);
    /* 005a3f37: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3f3b: jg 0x5a3f56 */ if ((!fZ&&fS==fO)) goto L_005a3f56;
L_005a3f3d:; BB(0x005a3f3d);
    /* 005a3f3d: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3f41: jne 0x5a3f5f */ if (!fZ) goto L_005a3f5f;
L_005a3f43:; BB(0x005a3f43);
    /* 005a3f43: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f45: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005a3f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3f49: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x5a3f4eu); f_004639e0();
    /* 005a3f4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3f51: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3f54: jl 0x5a3f5f */ if ((fS!=fO)) goto L_005a3f5f;
L_005a3f56:; BB(0x005a3f56);
    /* 005a3f56: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005a3f5d: jmp 0x5a3f66 */ goto L_005a3f66;
L_005a3f5f:; BB(0x005a3f5f);
    /* 005a3f5f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005a3f66:; BB(0x005a3f66);
    /* 005a3f66: mov al, byte ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
L_005a3f69:; BB(0x005a3f69);
    /* 005a3f69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a3f6c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3f6e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5a3f73u); f_00686d72();
    /* 005a3f73: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3f75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3f76: ret 4 */ FN_RET(0x005a3e80); r_esp += 8; return;
}

