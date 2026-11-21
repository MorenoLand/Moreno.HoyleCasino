#include "protos.h"

void f_005360d0(void) /* sub_5360D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005360d0);
    /* 005360d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005360d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005360d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005360d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005360d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005360db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005360de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005360df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005360e2: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5360e7u); f_00537880();
    /* 005360e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005360ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005360ed: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005360f0: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005360f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005360f6: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 005360fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005360fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005360fe: ret 4 */ FN_RET(0x005360d0); r_esp += 8; return;
}

void f_00536110(void) /* sub_536110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536110);
    /* 00536110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536111: mov ebp, esp */ r_ebp = r_esp;
    /* 00536113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00536119: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053611b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053611e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053611f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536122: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536127u); f_00537880();
    /* 00536127: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053612a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053612d: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536130: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536133: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536136: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 0053613b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053613d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053613e: ret 4 */ FN_RET(0x00536110); r_esp += 8; return;
}

void f_00536150(void) /* sub_536150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536150);
    /* 00536150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536151: mov ebp, esp */ r_ebp = r_esp;
    /* 00536153: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536156: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00536159: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053615e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536160: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536166: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00536169: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53616bu); call_ind(t); }
    /* 0053616b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053616e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536175: jmp 0x536180 */ goto L_00536180;
L_00536177:; BB(0x00536177);
    /* 00536177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053617a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053617d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00536180:; BB(0x00536180);
    /* 00536180: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536184: jge 0x536199 */ if ((fS==fO)) goto L_00536199;
L_00536186:; BB(0x00536186);
    /* 00536186: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536189: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053618c: cmp dword ptr [eax + edx*4 + 0x64], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536191: je 0x536197 */ if (fZ) goto L_00536197;
L_00536193:; BB(0x00536193);
    /* 00536193: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00536195: jmp 0x53619b */ goto L_0053619b;
L_00536197:; BB(0x00536197);
    /* 00536197: jmp 0x536177 */ goto L_00536177;
L_00536199:; BB(0x00536199);
    /* 00536199: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0053619b:; BB(0x0053619b);
    /* 0053619b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053619d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053619e: ret  */ FN_RET(0x00536150); r_esp += 4; return;
}

void f_005361a0(void) /* sub_5361A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005361a0);
    /* 005361a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005361a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005361a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005361a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005361a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005361ac: call 0x536d40 */ r_esp -= 4; W32(r_esp, 0x5361b1u); f_00536d40();
    /* 005361b1: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 005361b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005361b8: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 005361be: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005361c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5361c3u); call_ind(t); }
    /* 005361c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005361c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005361c9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005361cc: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005361d0: je 0x5361e0 */ if (fZ) goto L_005361e0;
L_005361d2:; BB(0x005361d2);
    /* 005361d2: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005361d6: je 0x5361ec */ if (fZ) goto L_005361ec;
L_005361d8:; BB(0x005361d8);
    /* 005361d8: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005361dc: je 0x5361fe */ if (fZ) goto L_005361fe;
L_005361de:; BB(0x005361de);
    /* 005361de: jmp 0x536208 */ goto L_00536208;
L_005361e0:; BB(0x005361e0);
    /* 005361e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005361e3: call 0x536bc0 */ r_esp -= 4; W32(r_esp, 0x5361e8u); f_00536bc0();
    /* 005361e8: jmp 0x53620a */ goto L_0053620a;
L_005361ec:; BB(0x005361ec);
    /* 005361ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005361ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005361f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005361f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005361f5: call 0x536da0 */ r_esp -= 4; W32(r_esp, 0x5361fau); f_00536da0();
    /* 005361fa: jmp 0x53620a */ goto L_0053620a;
L_005361fe:; BB(0x005361fe);
    /* 005361fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536201: call 0x537050 */ r_esp -= 4; W32(r_esp, 0x536206u); f_00537050();
    /* 00536206: jmp 0x53620a */ goto L_0053620a;
L_00536208:; BB(0x00536208);
    /* 00536208: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053620a:; BB(0x0053620a);
    /* 0053620a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053620c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053620d: ret  */ FN_RET(0x005361a0); r_esp += 4; return;
}

void f_00536210(void) /* sub_536210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536210);
    /* 00536210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536211: mov ebp, esp */ r_ebp = r_esp;
    /* 00536213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00536219: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536220: jmp 0x53622b */ goto L_0053622b;
L_00536222:; BB(0x00536222);
    /* 00536222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536225: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536228: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053622b:; BB(0x0053622b);
    /* 0053622b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053622f: jge 0x53623d */ if ((fS==fO)) goto L_0053623d;
L_00536231:; BB(0x00536231);
    /* 00536231: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536234: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536237: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 0053623b: jmp 0x536222 */ goto L_00536222;
L_0053623d:; BB(0x0053623d);
    /* 0053623d: mov esp, ebp */ r_esp = r_ebp;
    /* 0053623f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536240: ret  */ FN_RET(0x00536210); r_esp += 4; return;
}

void f_00536250(void) /* sub_536250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536250);
    /* 00536250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536251: mov ebp, esp */ r_ebp = r_esp;
    /* 00536253: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536256: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00536259: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536260: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00536267: jmp 0x536272 */ goto L_00536272;
L_00536269:; BB(0x00536269);
    /* 00536269: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053626c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053626f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00536272:; BB(0x00536272);
    /* 00536272: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536276: jge 0x536291 */ if ((fS==fO)) goto L_00536291;
L_00536278:; BB(0x00536278);
    /* 00536278: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053627b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053627e: movzx edx, byte ptr [ecx + 0x10] */ r_edx = (u32)R8((u32)(r_ecx+0x10u));
    /* 00536282: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536284: je 0x53628f */ if (fZ) goto L_0053628f;
L_00536286:; BB(0x00536286);
    /* 00536286: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536289: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053628c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053628f:; BB(0x0053628f);
    /* 0053628f: jmp 0x536269 */ goto L_00536269;
L_00536291:; BB(0x00536291);
    /* 00536291: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536294: mov esp, ebp */ r_esp = r_ebp;
    /* 00536296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536297: ret  */ FN_RET(0x00536250); r_esp += 4; return;
}

void f_005362a0(void) /* sub_5362A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005362a0);
    /* 005362a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005362a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005362a3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005362a6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005362a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005362b0: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 005362b7: mov dword ptr [ebp - 0x10], 0x32 */ W32((u32)(r_ebp+0xfffffff0u), 0x32u);
    /* 005362be: mov dword ptr [ebp - 0xc], 0x64 */ W32((u32)(r_ebp+0xfffffff4u), 0x64u);
    /* 005362c5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005362cc: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005362d1: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005362d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005362da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005362dd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005362e0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005362e3: sub eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005362e6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005362e9: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005362ed: ja 0x53632b */ if ((!fC&&!fZ)) goto L_0053632b;
L_005362ef:; BB(0x005362ef);
    /* 005362ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005362f2: movzx edx, byte ptr [ecx + 0x5366c0] */ r_edx = (u32)R8((u32)(r_ecx+0x5366c0u));
    /* 005362f9: jmp dword ptr [edx*4 + 0x5366b4] */ { u32 t = R32((u32)(r_edx*4+0x5366b4u)); switch (t) { case 0x536300u: goto L_00536300; case 0x53630fu: goto L_0053630f; case 0x53632bu: goto L_0053632b; default: UNSUP(0x005362f9, "jump table entry is not a known target"); } }
L_00536300:; BB(0x00536300);
    /* 00536300: mov dword ptr [ebp - 0x10], 0x16 */ W32((u32)(r_ebp+0xfffffff0u), 0x16u);
    /* 00536307: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053630a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053630d: jmp 0x53632b */ goto L_0053632b;
L_0053630f:; BB(0x0053630f);
    /* 0053630f: mov dword ptr [ebp - 0x14], 0x3c */ W32((u32)(r_ebp+0xffffffecu), 0x3cu);
    /* 00536316: mov dword ptr [ebp - 0x10], 0x28 */ W32((u32)(r_ebp+0xfffffff0u), 0x28u);
    /* 0053631d: mov dword ptr [ebp - 0xc], 0x14 */ W32((u32)(r_ebp+0xfffffff4u), 0x14u);
    /* 00536324: mov dword ptr [ebp - 0x1c], 0x50 */ W32((u32)(r_ebp+0xffffffe4u), 0x50u);
L_0053632b:; BB(0x0053632b);
    /* 0053632b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053632d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536332u); f_0062fbf0();
    /* 00536332: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536335: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536338: jg 0x5364f4 */ if ((!fZ&&fS==fO)) goto L_005364f4;
L_0053633e:; BB(0x0053633e);
    /* 0053633e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00536340: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536345u); f_0062fbf0();
    /* 00536345: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536348: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053634b: jge 0x536419 */ if ((fS==fO)) goto L_00536419;
L_00536351:; BB(0x00536351);
    /* 00536351: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00536353: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536356: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x53635bu); f_00536b40();
    /* 0053635b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053635e: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 00536361: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536368: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053636a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053636d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053636e: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536374: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536379u); f_00537880();
    /* 00536379: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053637c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053637f: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536382: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536385: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536388: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 0053638d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536390: jne 0x536351 */ if (!fZ) goto L_00536351;
L_00536392:; BB(0x00536392);
    /* 00536392: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536394: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536397: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x53639cu); f_00536b40();
    /* 0053639c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053639f: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 005363a2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005363a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005363ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005363ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005363af: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005363b5: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5363bau); f_00537880();
    /* 005363ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005363bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005363c0: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005363c3: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005363c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005363c9: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005363ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005363d1: je 0x536392 */ if (fZ) goto L_00536392;
L_005363d3:; BB(0x005363d3);
    /* 005363d3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005363d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005363d8: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x5363ddu); f_00536b40();
    /* 005363dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005363e0: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005363e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005363ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005363ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005363ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005363f0: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005363f6: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5363fbu); f_00537880();
    /* 005363fb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005363fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536401: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536404: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536407: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053640a: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 0053640f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536412: jne 0x5363d3 */ if (!fZ) goto L_005363d3;
L_00536414:; BB(0x00536414);
    /* 00536414: jmp 0x5364ef */ goto L_005364ef;
L_00536419:; BB(0x00536419);
    /* 00536419: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053641b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536420u); f_0062fbf0();
    /* 00536420: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536423: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536426: jge 0x5364ef */ if ((fS==fO)) goto L_005364ef;
L_0053642c:; BB(0x0053642c);
    /* 0053642c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053642e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536431: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536436u); f_00536b40();
    /* 00536436: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536439: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0053643c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536443: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536445: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536449: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0053644f: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536454u); f_00537880();
    /* 00536454: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053645a: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053645d: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536460: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536463: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00536468: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053646b: je 0x53642c */ if (fZ) goto L_0053642c;
L_0053646d:; BB(0x0053646d);
    /* 0053646d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053646f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536472: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536477u); f_00536b40();
    /* 00536477: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053647a: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0053647d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00536484: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536486: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536489: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053648a: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536490: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536495u); f_00537880();
    /* 00536495: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536498: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053649b: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053649e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005364a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005364a4: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005364a9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005364ac: jne 0x53646d */ if (!fZ) goto L_0053646d;
L_005364ae:; BB(0x005364ae);
    /* 005364ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005364b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005364b3: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x5364b8u); f_00536b40();
    /* 005364b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005364bb: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005364be: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005364c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005364c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005364ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005364cb: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005364d1: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5364d6u); f_00537880();
    /* 005364d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005364d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005364dc: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005364df: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005364e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005364e5: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005364ea: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005364ed: je 0x5364ae */ if (fZ) goto L_005364ae;
L_005364ef:; BB(0x005364ef);
    /* 005364ef: jmp 0x5366af */ goto L_005366af;
L_005364f4:; BB(0x005364f4);
    /* 005364f4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005364f8: jle 0x5366af */ if ((fZ||fS!=fO)) goto L_005366af;
L_005364fe:; BB(0x005364fe);
    /* 005364fe: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00536500: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536505u); f_0062fbf0();
    /* 00536505: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536508: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053650b: jge 0x5366af */ if ((fS==fO)) goto L_005366af;
L_00536511:; BB(0x00536511);
    /* 00536511: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00536513: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536518u); f_0062fbf0();
    /* 00536518: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053651b: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053651e: jge 0x5365ec */ if ((fS==fO)) goto L_005365ec;
L_00536524:; BB(0x00536524);
    /* 00536524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00536526: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536529: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x53652eu); f_00536b40();
    /* 0053652e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536531: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 00536534: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053653b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053653d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536541: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536547: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x53654cu); f_00537880();
    /* 0053654c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053654f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536552: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536555: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536558: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053655b: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00536560: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536563: je 0x536524 */ if (fZ) goto L_00536524;
L_00536565:; BB(0x00536565);
    /* 00536565: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536567: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053656a: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x53656fu); f_00536b40();
    /* 0053656f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536572: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00536575: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053657c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053657e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536582: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536588: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x53658du); f_00537880();
    /* 0053658d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536590: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536593: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536596: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536599: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053659c: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005365a1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005365a4: je 0x536565 */ if (fZ) goto L_00536565;
L_005365a6:; BB(0x005365a6);
    /* 005365a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005365a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005365ab: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x5365b0u); f_00536b40();
    /* 005365b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005365b3: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005365b6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005365bd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005365bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005365c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005365c3: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005365c9: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5365ceu); f_00537880();
    /* 005365ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005365d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005365d4: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005365d7: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005365da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005365dd: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005365e2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005365e5: je 0x5365a6 */ if (fZ) goto L_005365a6;
L_005365e7:; BB(0x005365e7);
    /* 005365e7: jmp 0x5366af */ goto L_005366af;
L_005365ec:; BB(0x005365ec);
    /* 005365ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005365ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005365f1: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x5365f6u); f_00536b40();
    /* 005365f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005365f9: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 005365fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536603: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536605: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536609: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0053660f: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536614u); f_00537880();
    /* 00536614: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536617: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053661a: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053661d: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536620: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536623: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00536628: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053662b: jne 0x5365ec */ if (!fZ) goto L_005365ec;
L_0053662d:; BB(0x0053662d);
    /* 0053662d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053662f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536632: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536637u); f_00536b40();
    /* 00536637: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053663a: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0053663d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00536644: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536646: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536649: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053664a: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536650: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536655u); f_00537880();
    /* 00536655: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536658: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053665b: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053665e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536661: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536664: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00536669: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053666c: jne 0x53662d */ if (!fZ) goto L_0053662d;
L_0053666e:; BB(0x0053666e);
    /* 0053666e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536670: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536673: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536678u); f_00536b40();
    /* 00536678: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053667b: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0053667e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00536685: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536687: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053668a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053668b: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00536691: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x536696u); f_00537880();
    /* 00536696: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00536699: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053669c: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053669f: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005366a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005366a5: movsx edx, byte ptr [ecx + eax + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005366aa: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005366ad: jne 0x53666e */ if (!fZ) goto L_0053666e;
L_005366af:; BB(0x005366af);
    /* 005366af: mov esp, ebp */ r_esp = r_ebp;
    /* 005366b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005366b2: ret  */ FN_RET(0x005362a0); r_esp += 4; return;
}

void f_005366d0(void) /* sub_5366D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005366d0);
    /* 005366d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005366d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005366d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005366d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005366d9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005366e0:; BB(0x005366e0);
    /* 005366e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005366e7: jmp 0x5366f2 */ goto L_005366f2;
L_005366e9:; BB(0x005366e9);
    /* 005366e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005366ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005366ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005366f2:; BB(0x005366f2);
    /* 005366f2: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005366f6: jge 0x536710 */ if ((fS==fO)) goto L_00536710;
L_005366f8:; BB(0x005366f8);
    /* 005366f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005366fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005366fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005366ff: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536704u); f_00536b40();
    /* 00536704: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536707: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053670a: mov dword ptr [ecx + edx*4 + 0x58], eax */ W32((u32)(r_ecx+r_edx*4+0x58u), r_eax);
    /* 0053670e: jmp 0x5366e9 */ goto L_005366e9;
L_00536710:; BB(0x00536710);
    /* 00536710: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536713: call 0x5362a0 */ r_esp -= 4; W32(r_esp, 0x536718u); f_005362a0();
    /* 00536718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053671b: call 0x5361a0 */ r_esp -= 4; W32(r_esp, 0x536720u); f_005361a0();
    /* 00536720: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00536723: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536727: jg 0x5366e0 */ if ((!fZ&&fS==fO)) goto L_005366e0;
L_00536729:; BB(0x00536729);
    /* 00536729: mov esp, ebp */ r_esp = r_ebp;
    /* 0053672b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053672c: ret  */ FN_RET(0x005366d0); r_esp += 4; return;
}

void f_00536730(void) /* sub_536730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536730);
    /* 00536730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536731: mov ebp, esp */ r_ebp = r_esp;
    /* 00536733: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536736: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00536739: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0053673e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536740: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536746: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00536749: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53674bu); call_ind(t); }
    /* 0053674b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053674e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536751: call 0x536210 */ r_esp -= 4; W32(r_esp, 0x536756u); f_00536210();
    /* 00536756: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053675d: jmp 0x536768 */ goto L_00536768;
L_0053675f:; BB(0x0053675f);
    /* 0053675f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536762: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536765: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00536768:; BB(0x00536768);
    /* 00536768: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053676c: jge 0x536786 */ if ((fS==fO)) goto L_00536786;
L_0053676e:; BB(0x0053676e);
    /* 0053676e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536771: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536772: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536775: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x53677au); f_00536b40();
    /* 0053677a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053677d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536780: mov dword ptr [edx + ecx*4 + 0x58], eax */ W32((u32)(r_edx+r_ecx*4+0x58u), r_eax);
    /* 00536784: jmp 0x53675f */ goto L_0053675f;
L_00536786:; BB(0x00536786);
    /* 00536786: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053678a: jle 0x536a10 */ if ((fZ||fS!=fO)) goto L_00536a10;
L_00536790:; BB(0x00536790);
    /* 00536790: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536793: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x536798u); f_00538440();
    /* 00536798: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053679b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053679d: jne 0x536a10 */ if (!fZ) goto L_00536a10;
L_005367a3:; BB(0x005367a3);
    /* 005367a3: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 005367a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005367aa: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005367ad: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005367af: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005367b1: and ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005367b4: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005367b7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005367ba: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005367bd: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005367c0: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005367c2: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005367c4: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005367c7: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005367ca: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005367cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005367cf: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005367d3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005367d6: lea eax, [eax + eax + 1] */ r_eax = (u32)(r_eax+r_eax+0x1u);
    /* 005367da: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005367dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005367df: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005367e3: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005367e6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005367e9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005367ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005367ef: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005367f2: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005367f4: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005367f6: and edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005367f9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005367fc: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005367ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536802: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536805: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00536807: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00536809: and eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053680c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053680f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00536812: mov dword ptr [ebp - 0x24], 0x14 */ W32((u32)(r_ebp+0xffffffdcu), 0x14u);
    /* 00536819: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053681f: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00536825: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00536828: mov dword ptr [ebp - 0x14], 0x5f */ W32((u32)(r_ebp+0xffffffecu), 0x5fu);
    /* 0053682f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00536836: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00536839: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0053683c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053683f: sub ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00536842: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00536845: cmp dword ptr [ebp - 0x5c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00536849: ja 0x5368b5 */ if ((!fC&&!fZ)) goto L_005368b5;
L_0053684b:; BB(0x0053684b);
    /* 0053684b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053684e: jmp dword ptr [edx*4 + 0x536af4] */ { u32 t = R32((u32)(r_edx*4+0x536af4u)); switch (t) { case 0x536855u: goto L_00536855; case 0x53686cu: goto L_0053686c; case 0x5368b5u: goto L_005368b5; case 0x536875u: goto L_00536875; case 0x53687eu: goto L_0053687e; case 0x53688eu: goto L_0053688e; case 0x536897u: goto L_00536897; case 0x5368aeu: goto L_005368ae; case 0x536964u: goto L_00536964; case 0x53696au: goto L_0053696a; case 0x536981u: goto L_00536981; case 0x536998u: goto L_00536998; case 0x5369afu: goto L_005369af; case 0x5369c6u: goto L_005369c6; default: UNSUP(0x0053684e, "jump table entry is not a known target"); } }
L_00536855:; BB(0x00536855);
    /* 00536855: mov dword ptr [ebp - 0x14], 0x4b */ W32((u32)(r_ebp+0xffffffecu), 0x4bu);
    /* 0053685c: mov dword ptr [ebp - 0x1c], 0x14 */ W32((u32)(r_ebp+0xffffffe4u), 0x14u);
    /* 00536863: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 0053686a: jmp 0x5368b5 */ goto L_005368b5;
L_0053686c:; BB(0x0053686c);
    /* 0053686c: mov dword ptr [ebp - 0x14], 0x3c */ W32((u32)(r_ebp+0xffffffecu), 0x3cu);
    /* 00536873: jmp 0x5368b5 */ goto L_005368b5;
L_00536875:; BB(0x00536875);
    /* 00536875: mov dword ptr [ebp - 0x34], 5 */ W32((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 0053687c: jmp 0x5368b5 */ goto L_005368b5;
L_0053687e:; BB(0x0053687e);
    /* 0053687e: mov dword ptr [ebp - 0x14], 0x1e */ W32((u32)(r_ebp+0xffffffecu), 0x1eu);
    /* 00536885: mov dword ptr [ebp - 0x1c], 0x28 */ W32((u32)(r_ebp+0xffffffe4u), 0x28u);
    /* 0053688c: jmp 0x5368b5 */ goto L_005368b5;
L_0053688e:; BB(0x0053688e);
    /* 0053688e: mov dword ptr [ebp - 0x34], 5 */ W32((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 00536895: jmp 0x5368b5 */ goto L_005368b5;
L_00536897:; BB(0x00536897);
    /* 00536897: mov dword ptr [ebp - 0x14], 0x1e */ W32((u32)(r_ebp+0xffffffecu), 0x1eu);
    /* 0053689e: mov dword ptr [ebp - 0x1c], 0x1e */ W32((u32)(r_ebp+0xffffffe4u), 0x1eu);
    /* 005368a5: mov dword ptr [ebp - 0x2c], 0x1e */ W32((u32)(r_ebp+0xffffffd4u), 0x1eu);
    /* 005368ac: jmp 0x5368b5 */ goto L_005368b5;
L_005368ae:; BB(0x005368ae);
    /* 005368ae: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
L_005368b5:; BB(0x005368b5);
    /* 005368b5: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005368bc:; BB(0x005368bc);
    /* 005368bc: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005368c0: je 0x5368e2 */ if (fZ) goto L_005368e2;
L_005368c2:; BB(0x005368c2);
    /* 005368c2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005368c4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5368c9u); f_0062fbf0();
    /* 005368c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005368cc: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005368cf: jge 0x5368e2 */ if ((fS==fO)) goto L_005368e2;
L_005368d1:; BB(0x005368d1);
    /* 005368d1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005368d4: call 0x5366d0 */ r_esp -= 4; W32(r_esp, 0x5368d9u); f_005366d0();
    /* 005368d9: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 005368dd: jmp 0x536a04 */ goto L_00536a04;
L_005368e2:; BB(0x005368e2);
    /* 005368e2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005368e9: jmp 0x5368f4 */ goto L_005368f4;
L_005368eb:; BB(0x005368eb);
    /* 005368eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005368ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005368f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005368f4:; BB(0x005368f4);
    /* 005368f4: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005368f8: jge 0x536912 */ if ((fS==fO)) goto L_00536912;
L_005368fa:; BB(0x005368fa);
    /* 005368fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005368fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005368fe: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536901: call 0x536b40 */ r_esp -= 4; W32(r_esp, 0x536906u); f_00536b40();
    /* 00536906: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536909: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053690c: mov dword ptr [ecx + edx*4 + 0x58], eax */ W32((u32)(r_ecx+r_edx*4+0x58u), r_eax);
    /* 00536910: jmp 0x5368eb */ goto L_005368eb;
L_00536912:; BB(0x00536912);
    /* 00536912: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536915: call 0x5362a0 */ r_esp -= 4; W32(r_esp, 0x53691au); f_005362a0();
    /* 0053691a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053691d: call 0x5361a0 */ r_esp -= 4; W32(r_esp, 0x536922u); f_005361a0();
    /* 00536922: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536925: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536929: jg 0x536945 */ if ((!fZ&&fS==fO)) goto L_00536945;
L_0053692b:; BB(0x0053692b);
    /* 0053692b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053692d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536932u); f_0062fbf0();
    /* 00536932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536935: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00536937: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053693a: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0053693d: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 00536940: jmp 0x5369db */ goto L_005369db;
L_00536945:; BB(0x00536945);
    /* 00536945: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536948: call 0x536250 */ r_esp -= 4; W32(r_esp, 0x53694du); f_00536250();
    /* 0053694d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00536950: cmp dword ptr [ebp - 0x60], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00536954: ja 0x5369db */ if ((!fC&&!fZ)) goto L_005369db;
L_0053695a:; BB(0x0053695a);
    /* 0053695a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0053695d: jmp dword ptr [eax*4 + 0x536b20] */ { u32 t = R32((u32)(r_eax*4+0x536b20u)); switch (t) { case 0x536897u: goto L_00536897; case 0x5368aeu: goto L_005368ae; case 0x5368b5u: goto L_005368b5; case 0x53688eu: goto L_0053688e; case 0x53687eu: goto L_0053687e; case 0x536875u: goto L_00536875; case 0x536855u: goto L_00536855; case 0x53686cu: goto L_0053686c; case 0x536964u: goto L_00536964; case 0x53696au: goto L_0053696a; case 0x536981u: goto L_00536981; case 0x536998u: goto L_00536998; case 0x5369afu: goto L_005369af; case 0x5369c6u: goto L_005369c6; default: UNSUP(0x0053695d, "jump table entry is not a known target"); } }
L_00536964:; BB(0x00536964);
    /* 00536964: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 00536968: jmp 0x5369db */ goto L_005369db;
L_0053696a:; BB(0x0053696a);
    /* 0053696a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053696c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536971u); f_0062fbf0();
    /* 00536971: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536974: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536976: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536979: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0053697c: mov byte ptr [ebp - 0x35], cl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_ecx);
    /* 0053697f: jmp 0x5369db */ goto L_005369db;
L_00536981:; BB(0x00536981);
    /* 00536981: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00536983: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536988u); f_0062fbf0();
    /* 00536988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053698b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053698d: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536990: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00536993: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 00536996: jmp 0x5369db */ goto L_005369db;
L_00536998:; BB(0x00536998);
    /* 00536998: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053699a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53699fu); f_0062fbf0();
    /* 0053699f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005369a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005369a4: cmp eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369a7: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005369aa: mov byte ptr [ebp - 0x35], cl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_ecx);
    /* 005369ad: jmp 0x5369db */ goto L_005369db;
L_005369af:; BB(0x005369af);
    /* 005369af: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005369b1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5369b6u); f_0062fbf0();
    /* 005369b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005369b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005369bb: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369be: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005369c1: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 005369c4: jmp 0x5369db */ goto L_005369db;
L_005369c6:; BB(0x005369c6);
    /* 005369c6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005369c8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5369cdu); f_0062fbf0();
    /* 005369cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005369d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005369d2: cmp eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369d5: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005369d8: mov byte ptr [ebp - 0x35], cl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_ecx);
L_005369db:; BB(0x005369db);
    /* 005369db: movzx edx, byte ptr [ebp - 0x35] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005369df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005369e1: jne 0x536a04 */ if (!fZ) goto L_00536a04;
L_005369e3:; BB(0x005369e3);
    /* 005369e3: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369e7: jle 0x536a04 */ if ((fZ||fS!=fO)) goto L_00536a04;
L_005369e9:; BB(0x005369e9);
    /* 005369e9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005369ec: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369ef: jle 0x536a04 */ if ((fZ||fS!=fO)) goto L_00536a04;
L_005369f1:; BB(0x005369f1);
    /* 005369f1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005369f3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5369f8u); f_0062fbf0();
    /* 005369f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005369fb: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005369fe: jge 0x536a04 */ if ((fS==fO)) goto L_00536a04;
L_00536a00:; BB(0x00536a00);
    /* 00536a00: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
L_00536a04:; BB(0x00536a04);
    /* 00536a04: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 00536a08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536a0a: jne 0x5368bc */ if (!fZ) goto L_005368bc;
L_00536a10:; BB(0x00536a10);
    /* 00536a10: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536a16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536a18: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536a1e: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00536a21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536a23u); call_ind(t); }
    /* 00536a23: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00536a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536a28: je 0x536aef */ if (fZ) goto L_00536aef;
L_00536a2e:; BB(0x00536a2e);
    /* 00536a2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536a35: jmp 0x536a40 */ goto L_00536a40;
L_00536a37:; BB(0x00536a37);
    /* 00536a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536a3a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536a3d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00536a40:; BB(0x00536a40);
    /* 00536a40: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536a44: jge 0x536aef */ if ((fS==fO)) goto L_00536aef;
L_00536a4a:; BB(0x00536a4a);
    /* 00536a4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536a4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536a4e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536a51: call 0x5360d0 */ r_esp -= 4; W32(r_esp, 0x536a56u); f_005360d0();
    /* 00536a56: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00536a59: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536a5e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00536a61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00536a64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536a65: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00536a68: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536a6a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00536a6d: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00536a70: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536a72u); call_ind(t); }
    /* 00536a72: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536a75: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00536a77: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00536a79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536a7c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00536a7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536a81: je 0x536a9c */ if (fZ) goto L_00536a9c;
L_00536a83:; BB(0x00536a83);
    /* 00536a83: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536a89: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00536a8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536a8f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00536a92: mov dword ptr [eax + edx*4 + 8], 1 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x1u);
    /* 00536a9a: jmp 0x536aea */ goto L_00536aea;
L_00536a9c:; BB(0x00536a9c);
    /* 00536a9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536a9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536aa0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00536aa3: call 0x536110 */ r_esp -= 4; W32(r_esp, 0x536aa8u); f_00536110();
    /* 00536aa8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00536aab: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536ab1: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00536ab4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536ab8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00536abb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00536abd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00536ac0: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00536ac3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536ac5u); call_ind(t); }
    /* 00536ac5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536ac7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536aca: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00536acd: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00536ad0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536ad2: je 0x536aea */ if (fZ) goto L_00536aea;
L_00536ad4:; BB(0x00536ad4);
    /* 00536ad4: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536ad9: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00536adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536adf: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00536ae2: mov dword ptr [edx + ecx*4 + 8], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x8u), 0xffffffffu);
L_00536aea:; BB(0x00536aea);
    /* 00536aea: jmp 0x536a37 */ goto L_00536a37;
L_00536aef:; BB(0x00536aef);
    /* 00536aef: mov esp, ebp */ r_esp = r_ebp;
    /* 00536af1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536af2: ret  */ FN_RET(0x00536730); r_esp += 4; return;
}

void f_00536b40(void) /* sub_536B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536b40);
    /* 00536b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00536b43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536b46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00536b49: push 0x7fffffff */ { u32 v = 0x7fffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00536b4e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x536b53u); f_0062fbf0();
    /* 00536b53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536b56: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00536b59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536b5c: and eax, 0x8000003f */ {  u32 a = r_eax; u32 b = 0x8000003fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00536b61: jns 0x536b68 */ if (!fS) goto L_00536b68;
L_00536b63:; BB(0x00536b63);
    /* 00536b63: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536b64: or eax, 0xffffffc0 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00536b67: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00536b68:; BB(0x00536b68);
    /* 00536b68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00536b6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536b6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536b6f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00536b72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536b73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536b76: call 0x536b90 */ r_esp -= 4; W32(r_esp, 0x536b7bu); f_00536b90();
    /* 00536b7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00536b7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536b7e: ret 4 */ FN_RET(0x00536b40); r_esp += 8; return;
}

void f_00536b90(void) /* sub_536B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536b90);
    /* 00536b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00536b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00536b97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00536b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536b9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00536b9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536b9f: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536ba5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536ba7: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536bad: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00536bb0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536bb2u); call_ind(t); }
    /* 00536bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00536bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536bb5: ret 8 */ FN_RET(0x00536b90); r_esp += 12; return;
}

void f_00536bc0(void) /* sub_536BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536bc0);
    /* 00536bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00536bc3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536bc6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00536bc9: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536bce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536bd0: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536bd6: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00536bd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536bdbu); call_ind(t); }
    /* 00536bdb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00536bde: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00536be5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536bec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00536bf2: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00536bf8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00536bfb: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00536c02: jmp 0x536c0d */ goto L_00536c0d;
L_00536c04:; BB(0x00536c04);
    /* 00536c04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00536c07: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536c0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00536c0d:; BB(0x00536c0d);
    /* 00536c0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00536c10: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536c13: jge 0x536d2d */ if ((fS==fO)) goto L_00536d2d;
L_00536c19:; BB(0x00536c19);
    /* 00536c19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536c1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00536c1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536c1f: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536c24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536c26: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536c2c: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00536c2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536c31u); call_ind(t); }
    /* 00536c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536c32: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c35: call 0x537e60 */ r_esp -= 4; W32(r_esp, 0x536c3au); f_00537e60();
    /* 00536c3a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00536c3d: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536c41: je 0x536d28 */ if (fZ) goto L_00536d28;
L_00536c47:; BB(0x00536c47);
    /* 00536c47: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536c4b: jne 0x536c54 */ if (!fZ) goto L_00536c54;
L_00536c4d:; BB(0x00536c4d);
    /* 00536c4d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c50: mov byte ptr [ecx + 0x7c], 1 */ W8((u32)(r_ecx+0x7cu), 0x1u);
L_00536c54:; BB(0x00536c54);
    /* 00536c54: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536c58: jne 0x536cd1 */ if (!fZ) goto L_00536cd1;
L_00536c5a:; BB(0x00536c5a);
    /* 00536c5a: cmp dword ptr [ebp - 0x14], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536c5e: je 0x536c66 */ if (fZ) goto L_00536c66;
L_00536c60:; BB(0x00536c60);
    /* 00536c60: cmp dword ptr [ebp - 0x14], 0x1d */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536c64: jne 0x536c95 */ if (!fZ) goto L_00536c95;
L_00536c66:; BB(0x00536c66);
    /* 00536c66: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c69: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x536c6eu); f_00535e50();
    /* 00536c6e: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536c71: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536c74: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c77: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00536c7a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c7d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00536c80: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00536c83: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00536c86: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536c89: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00536c8c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c8f: mov byte ptr [eax + 0x7e], 1 */ W8((u32)(r_eax+0x7eu), 0x1u);
    /* 00536c93: jmp 0x536ccf */ goto L_00536ccf;
L_00536c95:; BB(0x00536c95);
    /* 00536c95: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c98: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x536c9du); f_00535e50();
    /* 00536c9d: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536ca0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536ca3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536ca6: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00536ca9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536cac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00536caf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00536cb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536cb6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536cb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536cba: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536cbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536cc1: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536cc7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00536cca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536cccu); call_ind(t); }
    /* 00536ccc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00536ccf:; BB(0x00536ccf);
    /* 00536ccf: jmp 0x536d0b */ goto L_00536d0b;
L_00536cd1:; BB(0x00536cd1);
    /* 00536cd1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536cd4: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x536cd9u); f_00535e50();
    /* 00536cd9: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536cdc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536cdf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536ce2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00536ce5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536ce8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00536ceb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00536cee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536cf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536cf2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536cf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536cf6: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536cfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536cfd: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536d03: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00536d06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536d08u); call_ind(t); }
    /* 00536d08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00536d0b:; BB(0x00536d0b);
    /* 00536d0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00536d0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536d0f: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536d15: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536d17: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536d1d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00536d20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536d22u); call_ind(t); }
    /* 00536d22: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00536d26: jmp 0x536d2f */ goto L_00536d2f;
L_00536d28:; BB(0x00536d28);
    /* 00536d28: jmp 0x536c04 */ goto L_00536c04;
L_00536d2d:; BB(0x00536d2d);
    /* 00536d2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00536d2f:; BB(0x00536d2f);
    /* 00536d2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00536d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536d32: ret  */ FN_RET(0x00536bc0); r_esp += 4; return;
}

void f_00536d40(void) /* sub_536D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536d40);
    /* 00536d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00536d43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536d46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00536d49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536d50: jmp 0x536d5b */ goto L_00536d5b;
L_00536d52:; BB(0x00536d52);
    /* 00536d52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536d55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536d58: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00536d5b:; BB(0x00536d5b);
    /* 00536d5b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536d5f: jge 0x536d71 */ if ((fS==fO)) goto L_00536d71;
L_00536d61:; BB(0x00536d61);
    /* 00536d61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00536d64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536d67: mov dword ptr [edx + ecx*4 + 0x64], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x64u), 0xffffffffu);
    /* 00536d6f: jmp 0x536d52 */ goto L_00536d52;
L_00536d71:; BB(0x00536d71);
    /* 00536d71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536d74: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 00536d78: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536d7b: mov byte ptr [ecx + 0x7e], 0 */ W8((u32)(r_ecx+0x7eu), 0x0u);
    /* 00536d7f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00536d82: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 00536d89: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536d8f: call 0x5385b0 */ r_esp -= 4; W32(r_esp, 0x536d94u); f_005385b0();
    /* 00536d94: mov esp, ebp */ r_esp = r_ebp;
    /* 00536d96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536d97: ret  */ FN_RET(0x00536d40); r_esp += 4; return;
}

void f_00536da0(void) /* sub_536DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00536da0);
    /* 00536da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00536da3: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00536da7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00536da8: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00536dab: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00536db2: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00536db9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00536dc0: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536dc5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536dc7: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536dcd: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00536dd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536dd2u); call_ind(t); }
    /* 00536dd2: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00536dd5: mov dword ptr [ebp - 0x40], 0xffffffff */ W32((u32)(r_ebp+0xffffffc0u), 0xffffffffu);
    /* 00536ddc: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00536de3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536de6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00536de9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00536dec: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00536df3: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 00536df7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00536dfa: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00536dfd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00536e00: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00536e03: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00536e06: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00536e09: mov byte ptr [ebp - 8], 0 */ W8((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00536e0d: mov byte ptr [ebp - 7], 0 */ W8((u32)(r_ebp+0xfffffff9u), 0x0u);
    /* 00536e11: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 00536e15: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00536e1c: jmp 0x536e27 */ goto L_00536e27;
L_00536e1e:; BB(0x00536e1e);
    /* 00536e1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536e21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536e24: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00536e27:; BB(0x00536e27);
    /* 00536e27: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536e2b: jge 0x536e52 */ if ((fS==fO)) goto L_00536e52;
L_00536e2d:; BB(0x00536e2d);
    /* 00536e2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536e30: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536e33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00536e35: cmp dword ptr [ebp - 0x50], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536e38: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00536e3b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536e3e: mov byte ptr [ebp + eax - 0x64], dl */ W8((u32)(r_ebp+r_eax+0xffffff9cu), (u8)r_edx);
    /* 00536e42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536e45: mov dword ptr [ecx*4 + 0x7933c4], 0xffffffff */ W32((u32)(r_ecx*4+0x7933c4u), 0xffffffffu);
    /* 00536e50: jmp 0x536e1e */ goto L_00536e1e;
L_00536e52:; BB(0x00536e52);
    /* 00536e52: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536e55: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00536e58: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00536e5b: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00536e62: jmp 0x536e6d */ goto L_00536e6d;
L_00536e64:; BB(0x00536e64);
    /* 00536e64: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00536e67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536e6a: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
L_00536e6d:; BB(0x00536e6d);
    /* 00536e6d: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536e71: jge 0x537043 */ if ((fS==fO)) goto L_00537043;
L_00536e77:; BB(0x00536e77);
    /* 00536e77: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00536e7a: mov eax, dword ptr [ebp + edx*4 - 0x4c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb4u));
    /* 00536e7e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00536e81: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00536e84: movzx edx, byte ptr [ebp + ecx - 0x64] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff9cu));
    /* 00536e89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536e8b: je 0x53703e */ if (fZ) goto L_0053703e;
L_00536e91:; BB(0x00536e91);
    /* 00536e91: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00536e98:; BB(0x00536e98);
    /* 00536e98: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00536e9b: cmp dword ptr [eax*4 + 0x7933c4], -1 */ {  u32 a = R32((u32)(r_eax*4+0x7933c4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536ea3: jne 0x53703e */ if (!fZ) goto L_0053703e;
L_00536ea9:; BB(0x00536ea9);
    /* 00536ea9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536eac: cmp ecx, dword ptr [ebp - 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536eaf: jge 0x53703e */ if ((fS==fO)) goto L_0053703e;
L_00536eb5:; BB(0x00536eb5);
    /* 00536eb5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00536eb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536eb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536ebd: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536ec3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00536ec5: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536ecb: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00536ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536ed0u); call_ind(t); }
    /* 00536ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536ed1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536ed4: call 0x537e60 */ r_esp -= 4; W32(r_esp, 0x536ed9u); f_00537e60();
    /* 00536ed9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00536edc: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536ee0: je 0x537030 */ if (fZ) goto L_00537030;
L_00536ee6:; BB(0x00536ee6);
    /* 00536ee6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536ee9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536eea: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536ef0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536ef2: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536ef8: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00536efb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536efdu); call_ind(t); }
    /* 00536efd: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00536f02: mov esi, eax */ r_esi = r_eax;
    /* 00536f04: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 00536f07: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00536f09: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00536f0c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f0f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00536f12: mov dword ptr [ecx + eax*4 + 0x64], edx */ W32((u32)(r_ecx+r_eax*4+0x64u), r_edx);
    /* 00536f16: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f19: add eax, dword ptr [ebp - 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536f1c: mov byte ptr [eax + 0x10], 1 */ W8((u32)(r_eax+0x10u), 0x1u);
    /* 00536f20: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f24: jne 0x536f35 */ if (!fZ) goto L_00536f35;
L_00536f26:; BB(0x00536f26);
    /* 00536f26: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f29: mov byte ptr [ecx + 0x7c], 1 */ W8((u32)(r_ecx+0x7cu), 0x1u);
    /* 00536f2d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00536f30: mov byte ptr [ebp + edx - 8], 1 */ W8((u32)(r_ebp+r_edx+0xfffffff8u), 0x1u);
L_00536f35:; BB(0x00536f35);
    /* 00536f35: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f38: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 00536f3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f3e: je 0x536fbc */ if (fZ) goto L_00536fbc;
L_00536f40:; BB(0x00536f40);
    /* 00536f40: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00536f46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00536f48: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536f4e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00536f51: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x536f53u); call_ind(t); }
    /* 00536f53: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00536f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f58: je 0x536fbc */ if (fZ) goto L_00536fbc;
L_00536f5a:; BB(0x00536f5a);
    /* 00536f5a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f5d: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x536f62u); f_00538440();
    /* 00536f62: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00536f65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f67: jne 0x536f8a */ if (!fZ) goto L_00536f8a;
L_00536f69:; BB(0x00536f69);
    /* 00536f69: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f6d: jne 0x536fbc */ if (!fZ) goto L_00536fbc;
L_00536f6f:; BB(0x00536f6f);
    /* 00536f6f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00536f72: movzx eax, byte ptr [ebp + edx - 8] */ r_eax = (u32)R8((u32)(r_ebp+r_edx+0xfffffff8u));
    /* 00536f77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f7a: jne 0x536fbc */ if (!fZ) goto L_00536fbc;
L_00536f7c:; BB(0x00536f7c);
    /* 00536f7c: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f80: jne 0x536fbc */ if (!fZ) goto L_00536fbc;
L_00536f82:; BB(0x00536f82);
    /* 00536f82: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00536f86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f88: jne 0x536fbc */ if (!fZ) goto L_00536fbc;
L_00536f8a:; BB(0x00536f8a);
    /* 00536f8a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536f8d: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x536f92u); f_00538440();
    /* 00536f92: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00536f95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f97: je 0x536fa2 */ if (fZ) goto L_00536fa2;
L_00536f99:; BB(0x00536f99);
    /* 00536f99: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00536f9c: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00536f9f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
L_00536fa2:; BB(0x00536fa2);
    /* 00536fa2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00536fa5: call 0x5374b0 */ r_esp -= 4; W32(r_esp, 0x536faau); f_005374b0();
    /* 00536faa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00536fad: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00536fb0: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536fb3: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00536fb6: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 00536fba: jmp 0x537023 */ goto L_00537023;
L_00536fbc:; BB(0x00536fbc);
    /* 00536fbc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536fc0: jne 0x536fe5 */ if (!fZ) goto L_00536fe5;
L_00536fc2:; BB(0x00536fc2);
    /* 00536fc2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00536fc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536fc6: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00536fc9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536fcd: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536fd3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00536fd5: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536fdb: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00536fde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536fe0u); call_ind(t); }
    /* 00536fe0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00536fe3: jmp 0x537002 */ goto L_00537002;
L_00536fe5:; BB(0x00536fe5);
    /* 00536fe5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00536fe8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00536fe9: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00536fec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536fed: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536ff2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00536ff4: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536ffa: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00536ffd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536fffu); call_ind(t); }
    /* 00536fff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00537002:; BB(0x00537002);
    /* 00537002: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00537005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537006: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 0053700c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053700e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00537014: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00537017: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x537019u); call_ind(t); }
    /* 00537019: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053701d: add eax, dword ptr [ebp - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537020: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
L_00537023:; BB(0x00537023);
    /* 00537023: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00537026: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00537029: mov dword ptr [eax*4 + 0x7933c4], ecx */ W32((u32)(r_eax*4+0x7933c4u), r_ecx);
L_00537030:; BB(0x00537030);
    /* 00537030: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00537033: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537036: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00537039: jmp 0x536e98 */ goto L_00536e98;
L_0053703e:; BB(0x0053703e);
    /* 0053703e: jmp 0x536e64 */ goto L_00536e64;
L_00537043:; BB(0x00537043);
    /* 00537043: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00537046: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537047: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537048: mov esp, ebp */ r_esp = r_ebp;
    /* 0053704a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053704b: ret 0xc */ FN_RET(0x00536da0); r_esp += 16; return;
}

