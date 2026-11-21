#include "protos.h"

void f_00625240(void) /* sub_625240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625240);
    /* 00625240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625241: mov ebp, esp */ r_ebp = r_esp;
    /* 00625243: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625246: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00625249: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062524d: jne 0x625257 */ if (!fZ) goto L_00625257;
L_0062524f:; BB(0x0062524f);
    /* 0062524f: mov eax, dword ptr [0x795f9c] */ r_eax = R32((u32)(0x795f9cu));
    /* 00625254: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00625257:; BB(0x00625257);
    /* 00625257: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062525a: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0062525d: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x625262u); f_0062ac30();
    /* 00625262: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00625265:; BB(0x00625265);
    /* 00625265: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625269: je 0x625292 */ if (fZ) goto L_00625292;
L_0062526b:; BB(0x0062526b);
    /* 0062526b: mov edx, dword ptr [0x7950a8] */ r_edx = R32((u32)(0x7950a8u));
    /* 00625271: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625274: jle 0x625292 */ if ((fZ||fS!=fO)) goto L_00625292;
L_00625276:; BB(0x00625276);
    /* 00625276: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062527a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062527d: call 0x6042b0 */ r_esp -= 4; W32(r_esp, 0x625282u); f_006042b0();
    /* 00625282: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625285: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00625288: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x62528du); f_0062ace0();
    /* 0062528d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00625290: jmp 0x625265 */ goto L_00625265;
L_00625292:; BB(0x00625292);
    /* 00625292: mov esp, ebp */ r_esp = r_ebp;
    /* 00625294: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625295: ret 4 */ FN_RET(0x00625240); r_esp += 8; return;
}

void f_00625350(void) /* sub_625350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625350);
    /* 00625350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625351: mov ebp, esp */ r_ebp = r_esp;
    /* 00625353: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625356: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00625359: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062535d: jne 0x625375 */ if (!fZ) goto L_00625375;
L_0062535f:; BB(0x0062535f);
    /* 0062535f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00625361: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625363: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00625366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625367: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62536cu); f_00686fa2();
    /* 0062536c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062536f: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00625372: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00625375:; BB(0x00625375);
    /* 00625375: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00625378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625379: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062537c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062537d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625381: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625384: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625386: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625389: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0062538c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62538eu); call_ind(t); }
    /* 0062538e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00625391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625393: jne 0x62539c */ if (!fZ) goto L_0062539c;
L_00625395:; BB(0x00625395);
    /* 00625395: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00625397: jmp 0x625439 */ goto L_00625439;
L_0062539c:; BB(0x0062539c);
    /* 0062539c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062539f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006253a0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006253a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006253a4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006253a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006253a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006253ac: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006253af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6253b1u); call_ind(t); }
    /* 006253b1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006253b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006253b6: jne 0x6253bc */ if (!fZ) goto L_006253bc;
L_006253b8:; BB(0x006253b8);
    /* 006253b8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006253ba: jmp 0x625439 */ goto L_00625439;
L_006253bc:; BB(0x006253bc);
    /* 006253bc: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006253bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006253c0: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006253c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006253c4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006253c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006253c9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006253cc: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006253cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6253d1u); call_ind(t); }
    /* 006253d1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006253d4: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 006253d6: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006253d9: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006253df: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6253e4u); f_00686cc0();
    /* 006253e4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006253e7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006253e9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006253ec: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 006253ef: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006253f2: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006253f8: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6253fdu); f_00686cc0();
    /* 006253fd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625400: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00625403: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625406: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00625409: fdiv dword ptr [ebp - 8] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0062540c: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625412: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625417u); f_00686cc0();
    /* 00625417: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062541a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062541d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625420: fild dword ptr [edx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+0xcu)));
    /* 00625423: fdiv dword ptr [ebp - 8] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625426: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062542c: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625431u); f_00686cc0();
    /* 00625431: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625434: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00625437: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00625439:; BB(0x00625439);
    /* 00625439: mov esp, ebp */ r_esp = r_ebp;
    /* 0062543b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062543c: ret 0x10 */ FN_RET(0x00625350); r_esp += 20; return;
}

void f_00625c30(void) /* sub_625C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625c30);
    /* 00625c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00625c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625c37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c3a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00625c3d: mov byte ptr [eax + 0x21c], cl */ W8((u32)(r_eax+0x21cu), (u8)r_ecx);
    /* 00625c43: mov esp, ebp */ r_esp = r_ebp;
    /* 00625c45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625c46: ret 4 */ FN_RET(0x00625c30); r_esp += 8; return;
}

void f_00625e00(void) /* sub_625E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625e00);
    /* 00625e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00625e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625e0a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00625e0d: mov byte ptr [eax + 0x21d], cl */ W8((u32)(r_eax+0x21du), (u8)r_ecx);
    /* 00625e13: mov esp, ebp */ r_esp = r_ebp;
    /* 00625e15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625e16: ret 4 */ FN_RET(0x00625e00); r_esp += 8; return;
}

