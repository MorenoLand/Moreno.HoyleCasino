#include "protos.h"

void f_0063d4b0(void) /* sub_63D4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d4b0);
    /* 0063d4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d4b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d4b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063d4b9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d4bd: je 0x63d563 */ if (fZ) goto L_0063d563;
L_0063d4c3:; BB(0x0063d4c3);
    /* 0063d4c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d4c6: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d4ca: je 0x63d4e8 */ if (fZ) goto L_0063d4e8;
L_0063d4cc:; BB(0x0063d4cc);
    /* 0063d4cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d4cf: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0063d4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4d5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063d4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d4dc: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d4e1u); f_005fb480();
    /* 0063d4e1: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d4e3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63d4e8u); f_005ff5a0();
L_0063d4e8:; BB(0x0063d4e8);
    /* 0063d4e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d4eb: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d4ef: je 0x63d50d */ if (fZ) goto L_0063d50d;
L_0063d4f1:; BB(0x0063d4f1);
    /* 0063d4f1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d4f4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0063d4f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063d4fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d501: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d506u); f_005fb480();
    /* 0063d506: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d508: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63d50du); f_005ff5a0();
L_0063d50d:; BB(0x0063d50d);
    /* 0063d50d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d510: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d514: je 0x63d563 */ if (fZ) goto L_0063d563;
L_0063d516:; BB(0x0063d516);
    /* 0063d516: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d51d: jmp 0x63d528 */ goto L_0063d528;
L_0063d51f:; BB(0x0063d51f);
    /* 0063d51f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d522: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d525: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063d528:; BB(0x0063d528);
    /* 0063d528: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d52c: jge 0x63d563 */ if ((fS==fO)) goto L_0063d563;
L_0063d52e:; BB(0x0063d52e);
    /* 0063d52e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d531: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0063d534: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d537: cmp dword ptr [edx + eax*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d53c: je 0x63d561 */ if (fZ) goto L_0063d561;
L_0063d53e:; BB(0x0063d53e);
    /* 0063d53e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d541: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0063d544: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d547: mov ecx, dword ptr [edx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x5cu));
    /* 0063d54b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d54c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d54e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063d551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d552: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d555: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d55au); f_005fb480();
    /* 0063d55a: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d55c: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63d561u); f_005ff5a0();
L_0063d561:; BB(0x0063d561);
    /* 0063d561: jmp 0x63d51f */ goto L_0063d51f;
L_0063d563:; BB(0x0063d563);
    /* 0063d563: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d566: ret 8 */ FN_RET(0x0063d4b0); r_esp += 12; return;
}

void f_0063d570(void) /* sub_63D570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d570);
    /* 0063d570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d571: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d573: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063d579: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d57d: je 0x63d5fd */ if (fZ) goto L_0063d5fd;
L_0063d57f:; BB(0x0063d57f);
    /* 0063d57f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d582: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0063d585: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d586: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d588: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063d58b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d58c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d58f: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d594u); f_005fb480();
    /* 0063d594: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d596: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d59bu); f_005ff670();
    /* 0063d59b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d59e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0063d5a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5a4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063d5a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d5ab: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d5b0u); f_005fb480();
    /* 0063d5b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d5b2: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d5b7u); f_005ff670();
    /* 0063d5b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d5ba: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d5be: je 0x63d5fd */ if (fZ) goto L_0063d5fd;
L_0063d5c0:; BB(0x0063d5c0);
    /* 0063d5c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d5c7: jmp 0x63d5d2 */ goto L_0063d5d2;
L_0063d5c9:; BB(0x0063d5c9);
    /* 0063d5c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d5cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d5cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063d5d2:; BB(0x0063d5d2);
    /* 0063d5d2: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d5d6: jge 0x63d5fd */ if ((fS==fO)) goto L_0063d5fd;
L_0063d5d8:; BB(0x0063d5d8);
    /* 0063d5d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d5db: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0063d5de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d5e1: mov edx, dword ptr [eax + ecx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x5cu));
    /* 0063d5e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063d5eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d5ef: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d5f4u); f_005fb480();
    /* 0063d5f4: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d5f6: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d5fbu); f_005ff670();
    /* 0063d5fb: jmp 0x63d5c9 */ goto L_0063d5c9;
L_0063d5fd:; BB(0x0063d5fd);
    /* 0063d5fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d5ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d600: ret 8 */ FN_RET(0x0063d570); r_esp += 12; return;
}

void f_0063d610(void) /* sub_63D610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d610);
    /* 0063d610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d611: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063d617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d61a: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x63d61fu); f_005f85d0();
    /* 0063d61f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063d624: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d626: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d62c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063d632: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d634u); call_ind(t); }
    /* 0063d634: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063d637: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d639: je 0x63d648 */ if (fZ) goto L_0063d648;
L_0063d63b:; BB(0x0063d63b);
    /* 0063d63b: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d63f: jne 0x63d648 */ if (!fZ) goto L_0063d648;
L_0063d641:; BB(0x0063d641);
    /* 0063d641: mov dword ptr [ebp + 8], 3 */ W32((u32)(r_ebp+0x8u), 0x3u);
L_0063d648:; BB(0x0063d648);
    /* 0063d648: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d64b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d64c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d64e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d651: call 0x5fb430 */ r_esp -= 4; W32(r_esp, 0x63d656u); f_005fb430();
    /* 0063d656: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d658: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x63d65du); f_006065d0();
    /* 0063d65d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d660: ret 4 */ FN_RET(0x0063d610); r_esp += 8; return;
}

void f_0063d7c0(void) /* sub_63D7C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d7c0);
    /* 0063d7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d7c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d7c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063d7c9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d7ce: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d7d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d7d7: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063d7da: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063d7dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d7e1: call 0x63d570 */ r_esp -= 4; W32(r_esp, 0x63d7e6u); f_0063d570();
    /* 0063d7e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d7e9: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063d7ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d7f2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063d7f5: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x63d7fau); f_0063b2d0();
    /* 0063d7fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d7ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d800: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d803: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d809: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d80c: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0063d80f: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x63d814u); f_0063a3e0();
    /* 0063d814: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d817: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d81d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d820: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063d823: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063d826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d829: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63d82eu); f_0063aac0();
    /* 0063d82e: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0063d834: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d837: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d838: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063d83e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d840: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d846: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 0063d84c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d84eu); call_ind(t); }
    /* 0063d84e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d851: ret 4 */ FN_RET(0x0063d7c0); r_esp += 8; return;
}

void f_0063d860(void) /* sub_63D860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d860);
    /* 0063d860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d861: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d863: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d866: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063d869: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0063d870: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d877: jmp 0x63d882 */ goto L_0063d882;
L_0063d879:; BB(0x0063d879);
    /* 0063d879: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d87c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d87f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063d882:; BB(0x0063d882);
    /* 0063d882: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d888: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d88a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d890: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063d896: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d898u); call_ind(t); }
    /* 0063d898: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d89b: jge 0x63d8d7 */ if ((fS==fO)) goto L_0063d8d7;
L_0063d89d:; BB(0x0063d89d);
    /* 0063d89d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063d8a0: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063d8a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d8a9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063d8ac: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063d8af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d8b2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63d8b7u); f_0063aac0();
    /* 0063d8b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d8b9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0063d8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063d8be: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d8c2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063d8c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063d8c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d8ca: jne 0x63d8d5 */ if (!fZ) goto L_0063d8d5;
L_0063d8cc:; BB(0x0063d8cc);
    /* 0063d8cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d8cf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d8d2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0063d8d5:; BB(0x0063d8d5);
    /* 0063d8d5: jmp 0x63d879 */ goto L_0063d879;
L_0063d8d7:; BB(0x0063d8d7);
    /* 0063d8d7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d8da: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d8dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d8dd: ret  */ FN_RET(0x0063d860); r_esp += 4; return;
}

void f_0063d8e0(void) /* sub_63D8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d8e0);
    /* 0063d8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063d8e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d8ea: cmp dword ptr [eax + 0x1e4], 0 */ {  u32 a = R32((u32)(r_eax+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d8f1: jne 0x63d8fa */ if (!fZ) goto L_0063d8fa;
L_0063d8f3:; BB(0x0063d8f3);
    /* 0063d8f3: mov eax, 0x138c */ r_eax = 0x138cu;
    /* 0063d8f8: jmp 0x63d912 */ goto L_0063d912;
L_0063d8fa:; BB(0x0063d8fa);
    /* 0063d8fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d8fd: cmp dword ptr [ecx + 0x1dc], 1 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d904: jne 0x63d90d */ if (!fZ) goto L_0063d90d;
L_0063d906:; BB(0x0063d906);
    /* 0063d906: mov eax, 0x138d */ r_eax = 0x138du;
    /* 0063d90b: jmp 0x63d912 */ goto L_0063d912;
L_0063d90d:; BB(0x0063d90d);
    /* 0063d90d: mov eax, 0x138b */ r_eax = 0x138bu;
L_0063d912:; BB(0x0063d912);
    /* 0063d912: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d915: ret  */ FN_RET(0x0063d8e0); r_esp += 4; return;
}

void f_0063d920(void) /* sub_63D920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d920);
    /* 0063d920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d921: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d925: push 0x6abc5c */ { u32 v = 0x6abc5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d92a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d931: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d934: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063d939: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063d93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d93c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063d93f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063d945: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0063d948: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063d94b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d94e: mov dword ptr [eax + 0x1c4], ecx */ W32((u32)(r_eax+0x1c4u), r_ecx);
    /* 0063d954: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d95b: jne 0x63da20 */ if (!fZ) goto L_0063da20;
L_0063d961:; BB(0x0063d961);
    /* 0063d961: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d966: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63d96bu); f_00686d82();
    /* 0063d96b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063d96e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063d971: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d978: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d97c: je 0x63d9e2 */ if (fZ) goto L_0063d9e2;
L_0063d97e:; BB(0x0063d97e);
    /* 0063d97e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063d981: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063d987: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063d98a: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063d98d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0063d990: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d993: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63d998u); f_0063aac0();
    /* 0063d998: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063d99a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063d99d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063d9a0: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063d9a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d9a9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063d9ac: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x63d9b1u); f_0057a470();
    /* 0063d9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063d9b5: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063d9bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d9be: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063d9c1: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x63d9c6u); f_004842b0();
    /* 0063d9c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9c7: mov cl, byte ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 0063d9ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9cb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063d9ce: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063d9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063d9d8: call 0x640d00 */ r_esp -= 4; W32(r_esp, 0x63d9ddu); f_00640d00();
    /* 0063d9dd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063d9e0: jmp 0x63d9e9 */ goto L_0063d9e9;
L_0063d9e2:; BB(0x0063d9e2);
    /* 0063d9e2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0063d9e9:; BB(0x0063d9e9);
    /* 0063d9e9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063d9ec: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063d9ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063d9f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d9f9: mov dword ptr [0x1630690], edx */ W32((u32)(0x1630690u), r_edx);
    /* 0063d9ff: mov eax, dword ptr [0x1630690] */ r_eax = R32((u32)(0x1630690u));
    /* 0063da04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063da06: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0063da0c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0063da0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63da11u); call_ind(t); }
    /* 0063da11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063da13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063da15: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0063da1b: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x63da20u); f_005f7340();
L_0063da20:; BB(0x0063da20);
    /* 0063da20: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0063da26: call 0x65c4d0 */ r_esp -= 4; W32(r_esp, 0x63da2bu); f_0065c4d0();
    /* 0063da2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063da2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063da35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063da36: mov esp, ebp */ r_esp = r_ebp;
    /* 0063da38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063da39: ret 4 */ FN_RET(0x0063d920); r_esp += 8; return;
}

void f_0063da40(void) /* sub_63DA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063da40);
    /* 0063da40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063da41: mov ebp, esp */ r_ebp = r_esp;
    /* 0063da43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063da45: push 0x6abc82 */ { u32 v = 0x6abc82u; r_esp -= 4; W32(r_esp, v); }
    /* 0063da4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063da50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063da51: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063da54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063da59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063da5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063da5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063da5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063da65: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063da68: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063da6b: cmp dword ptr [eax + 0x1e8], 0 */ {  u32 a = R32((u32)(r_eax+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063da72: jne 0x63db06 */ if (!fZ) goto L_0063db06;
L_0063da78:; BB(0x0063da78);
    /* 0063da78: push 0x56c */ { u32 v = 0x56cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063da7d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63da82u); f_00686d82();
    /* 0063da82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063da85: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063da88: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063da8f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063da93: je 0x63dabb */ if (fZ) goto L_0063dabb;
L_0063da95:; BB(0x0063da95);
    /* 0063da95: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063da98: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063da9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063daa1: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063daa4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0063daa7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0063daaa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063daad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063daae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063dab1: call 0x63fe70 */ r_esp -= 4; W32(r_esp, 0x63dab6u); f_0063fe70();
    /* 0063dab6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063dab9: jmp 0x63dac2 */ goto L_0063dac2;
L_0063dabb:; BB(0x0063dabb);
    /* 0063dabb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0063dac2:; BB(0x0063dac2);
    /* 0063dac2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063dac5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063dac8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063dacf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dad2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063dad5: mov dword ptr [edx + 0x1e8], eax */ W32((u32)(r_edx+0x1e8u), r_eax);
    /* 0063dadb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dade: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0063dae4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dae7: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0063daed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0063daef: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0063daf2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63daf4u); call_ind(t); }
    /* 0063daf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063daf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063daf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dafb: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0063db01: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x63db06u); f_005f7340();
L_0063db06:; BB(0x0063db06);
    /* 0063db06: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063db09: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0063db0f: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x63db14u); f_005f85d0();
    /* 0063db14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063db17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063db1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063db1f: mov esp, ebp */ r_esp = r_ebp;
    /* 0063db21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063db22: ret 4 */ FN_RET(0x0063da40); r_esp += 8; return;
}

void f_0063db30(void) /* sub_63DB30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063db30);
    /* 0063db30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063db31: mov ebp, esp */ r_ebp = r_esp;
    /* 0063db33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063db34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063db37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063db3a: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0063db40: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x63db45u); f_005f8990();
    /* 0063db45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063db48: mov dword ptr [ecx + 0x1e8], 0 */ W32((u32)(r_ecx+0x1e8u), 0x0u);
    /* 0063db52: mov esp, ebp */ r_esp = r_ebp;
    /* 0063db54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063db55: ret  */ FN_RET(0x0063db30); r_esp += 4; return;
}

void f_0063db60(void) /* sub_63DB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063db60);
    /* 0063db60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063db61: mov ebp, esp */ r_ebp = r_esp;
    /* 0063db63: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063db66: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0063db69: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063db6c: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063db72: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063db75: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063db7b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063db7e: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063db82: je 0x63dc08 */ if (fZ) goto L_0063dc08;
L_0063db88:; BB(0x0063db88);
    /* 0063db88: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063db8a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063db8d: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063db93: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063db96: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063db9c: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063db9f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063dba2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dba3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dba6: call 0x63d570 */ r_esp -= 4; W32(r_esp, 0x63dbabu); f_0063d570();
    /* 0063dbab: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dbae: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063dbb4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dbb7: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063dbbd: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063dbc0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063dbc3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063dbc6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063dbc9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063dbcc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dbd0: je 0x63dbe5 */ if (fZ) goto L_0063dbe5;
L_0063dbd2:; BB(0x0063dbd2);
    /* 0063dbd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063dbd4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063dbd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063dbd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063dbdc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063dbde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63dbe0u); call_ind(t); }
    /* 0063dbe0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0063dbe3: jmp 0x63dbec */ goto L_0063dbec;
L_0063dbe5:; BB(0x0063dbe5);
    /* 0063dbe5: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0063dbec:; BB(0x0063dbec);
    /* 0063dbec: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dbef: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0063dbf5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dbf8: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063dbfe: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0063dc01: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_0063dc08:; BB(0x0063dc08);
    /* 0063dc08: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc0b: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063dc11: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc14: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dc1a: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dc1d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063dc20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063dc23: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dc28u); f_0063aac0();
    /* 0063dc28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063dc2a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0063dc2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063dc2f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dc33: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063dc36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063dc39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dc3b: jne 0x63dc4f */ if (!fZ) goto L_0063dc4f;
L_0063dc3d:; BB(0x0063dc3d);
    /* 0063dc3d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc40: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063dc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063dc47: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc4a: call 0x63d7c0 */ r_esp -= 4; W32(r_esp, 0x63dc4fu); f_0063d7c0();
L_0063dc4f:; BB(0x0063dc4f);
    /* 0063dc4f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063dc52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dc53: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc56: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063dc5c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc5f: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063dc65: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063dc68: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x63dc6du); f_0063ab10();
    /* 0063dc6d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc70: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063dc76: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc79: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dc7f: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dc82: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063dc85: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063dc88: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dc8du); f_0063aac0();
    /* 0063dc8d: movsx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0063dc91: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0063dc93: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc96: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063dc9c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dc9f: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dca5: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dca8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063dcab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dcae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dcb3u); f_0063aac0();
    /* 0063dcb3: movsx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x10u));
    /* 0063dcb7: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0063dcba: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dcbd: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063dcc3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dcc6: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dccc: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dccf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063dcd2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0063dcd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcd6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063dcd9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dcdeu); f_0063aac0();
    /* 0063dcde: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063dce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063dce2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63dce7u); f_00686d8e();
    /* 0063dce7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063dcea: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dced: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063dcf3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dcf6: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dcfc: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dcff: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x63dd04u); f_0063b0a0();
    /* 0063dd04: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dd07: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0063dd0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd0e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dd11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063dd13: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dd16: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0063dd19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63dd1bu); call_ind(t); }
    /* 0063dd1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063dd22: jmp 0x63dd2d */ goto L_0063dd2d;
L_0063dd24:; BB(0x0063dd24);
    /* 0063dd24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dd27: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063dd2a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063dd2d:; BB(0x0063dd2d);
    /* 0063dd2d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063dd33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063dd35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063dd3b: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063dd41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63dd43u); call_ind(t); }
    /* 0063dd43: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063dd46: jge 0x63de7a */ if ((fS==fO)) goto L_0063de7a;
L_0063dd4c:; BB(0x0063dd4c);
    /* 0063dd4c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dd4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dd52: cmp ecx, dword ptr [eax + 0x1c4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd58: jne 0x63dd5c */ if (!fZ) goto L_0063dd5c;
L_0063dd5a:; BB(0x0063dd5a);
    /* 0063dd5a: jmp 0x63dd24 */ goto L_0063dd24;
L_0063dd5c:; BB(0x0063dd5c);
    /* 0063dd5c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063dd5f: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dd65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dd68: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dd6b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0063dd6e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063dd71: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dd76u); f_0063aac0();
    /* 0063dd76: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063dd78: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063dd7b: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd7f: je 0x63dd9d */ if (fZ) goto L_0063dd9d;
L_0063dd81:; BB(0x0063dd81);
    /* 0063dd81: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063dd84: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dd89u); f_0063aac0();
    /* 0063dd89: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063dd8b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0063dd8e: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd92: je 0x63dd9d */ if (fZ) goto L_0063dd9d;
L_0063dd94:; BB(0x0063dd94);
    /* 0063dd94: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0063dd9b: jmp 0x63dda4 */ goto L_0063dda4;
L_0063dd9d:; BB(0x0063dd9d);
    /* 0063dd9d: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
L_0063dda4:; BB(0x0063dda4);
    /* 0063dda4: movzx edx, byte ptr [ebp - 0x54] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffacu));
    /* 0063dda8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ddaa: je 0x63de75 */ if (fZ) goto L_0063de75;
L_0063ddb0:; BB(0x0063ddb0);
    /* 0063ddb0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063ddb3: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063ddb9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063ddbc: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063ddc2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063ddc5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0063ddc8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063ddcb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63ddd0u); f_0063aac0();
    /* 0063ddd0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063ddd3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063ddd6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063ddd9: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dddf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dde2: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dde5: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063dde8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0063ddeb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63ddf0u); f_0063aac0();
    /* 0063ddf0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063ddf3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063ddf6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0063ddf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ddfa: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063ddfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ddfe: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63de03u); f_00686ec0();
    /* 0063de03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063de06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063de08: jne 0x63de75 */ if (!fZ) goto L_0063de75;
L_0063de0a:; BB(0x0063de0a);
    /* 0063de0a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063de0d: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063de13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063de16: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063de19: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0063de1c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063de1f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63de24u); f_0063aac0();
    /* 0063de24: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0063de28: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0063de2a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063de2d: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063de33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063de36: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063de39: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0063de3c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063de3f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63de44u); f_0063aac0();
    /* 0063de44: movsx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x10u));
    /* 0063de48: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0063de4b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063de4e: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063de54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063de57: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063de5a: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0063de5d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0063de60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063de61: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063de64: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63de69u); f_0063aac0();
    /* 0063de69: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063de6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063de6d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63de72u); f_00686d8e();
    /* 0063de72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063de75:; BB(0x0063de75);
    /* 0063de75: jmp 0x63dd24 */ goto L_0063dd24;
L_0063de7a:; BB(0x0063de7a);
    /* 0063de7a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063de7d: mov dword ptr [ecx + 0x1c4], 0xffffffff */ W32((u32)(r_ecx+0x1c4u), 0xffffffffu);
    /* 0063de87: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063de8a: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63de8fu); f_0063c620();
    /* 0063de8f: mov esp, ebp */ r_esp = r_ebp;
    /* 0063de91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063de92: ret 0x10 */ FN_RET(0x0063db60); r_esp += 20; return;
}

void f_0063dea0(void) /* sub_63DEA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063dea0);
    /* 0063dea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063dea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063dea3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063dea6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063dea9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063deb0: jmp 0x63debb */ goto L_0063debb;
L_0063deb2:; BB(0x0063deb2);
    /* 0063deb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063deb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063deb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063debb:; BB(0x0063debb);
    /* 0063debb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063dec1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063dec3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063dec9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063decf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ded1u); call_ind(t); }
    /* 0063ded1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063ded4: jge 0x63df67 */ if ((fS==fO)) goto L_0063df67;
L_0063deda:; BB(0x0063deda);
    /* 0063deda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063dedd: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063dee3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dee6: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063dee9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063deec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063deef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63def4u); f_0063aac0();
    /* 0063def4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063def6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063def9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063defd: je 0x63df1b */ if (fZ) goto L_0063df1b;
L_0063deff:; BB(0x0063deff);
    /* 0063deff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063df02: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63df07u); f_0063aac0();
    /* 0063df07: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063df09: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063df0c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063df10: je 0x63df1b */ if (fZ) goto L_0063df1b;
L_0063df12:; BB(0x0063df12);
    /* 0063df12: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0063df19: jmp 0x63df22 */ goto L_0063df22;
L_0063df1b:; BB(0x0063df1b);
    /* 0063df1b: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0063df22:; BB(0x0063df22);
    /* 0063df22: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0063df26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063df28: je 0x63df62 */ if (fZ) goto L_0063df62;
L_0063df2a:; BB(0x0063df2a);
    /* 0063df2a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063df2d: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063df33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063df36: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063df39: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063df3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063df3f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63df44u); f_0063aac0();
    /* 0063df44: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063df47: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063df4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063df4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063df4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063df51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063df52: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63df57u); f_00686ec0();
    /* 0063df57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063df5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063df5c: jne 0x63df62 */ if (!fZ) goto L_0063df62;
L_0063df5e:; BB(0x0063df5e);
    /* 0063df5e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063df60: jmp 0x63df69 */ goto L_0063df69;
L_0063df62:; BB(0x0063df62);
    /* 0063df62: jmp 0x63deb2 */ goto L_0063deb2;
L_0063df67:; BB(0x0063df67);
    /* 0063df67: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063df69:; BB(0x0063df69);
    /* 0063df69: mov esp, ebp */ r_esp = r_ebp;
    /* 0063df6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063df6c: ret 4 */ FN_RET(0x0063dea0); r_esp += 8; return;
}

void f_0063df70(void) /* sub_63DF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063df70);
    /* 0063df70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063df71: mov ebp, esp */ r_ebp = r_esp;
    /* 0063df73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063df76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063df79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063df80: jmp 0x63df8b */ goto L_0063df8b;
L_0063df82:; BB(0x0063df82);
    /* 0063df82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063df85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063df88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063df8b:; BB(0x0063df8b);
    /* 0063df8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063df91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063df93: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063df99: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063df9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63dfa1u); call_ind(t); }
    /* 0063dfa1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063dfa4: jge 0x63dff8 */ if ((fS==fO)) goto L_0063dff8;
L_0063dfa6:; BB(0x0063dfa6);
    /* 0063dfa6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063dfa9: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063dfaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dfb2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063dfb5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063dfb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063dfbb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63dfc0u); f_0063aac0();
    /* 0063dfc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063dfc2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063dfc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063dfc7: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dfcb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063dfce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063dfd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dfd3: je 0x63dff6 */ if (fZ) goto L_0063dff6;
L_0063dfd5:; BB(0x0063dfd5);
    /* 0063dfd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063dfd8: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063dfde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063dfe1: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063dfe4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0063dfe7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063dfea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063dfed: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dff0: jne 0x63dff6 */ if (!fZ) goto L_0063dff6;
L_0063dff2:; BB(0x0063dff2);
    /* 0063dff2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063dff4: jmp 0x63dffa */ goto L_0063dffa;
L_0063dff6:; BB(0x0063dff6);
    /* 0063dff6: jmp 0x63df82 */ goto L_0063df82;
L_0063dff8:; BB(0x0063dff8);
    /* 0063dff8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063dffa:; BB(0x0063dffa);
    /* 0063dffa: mov esp, ebp */ r_esp = r_ebp;
    /* 0063dffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063dffd: ret 4 */ FN_RET(0x0063df70); r_esp += 8; return;
}

