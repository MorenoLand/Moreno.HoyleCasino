#include "protos.h"

void f_006371e0(void) /* sub_6371E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006371e0);
    /* 006371e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006371e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006371e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006371e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006371e9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006371ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006371ed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006371f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006371f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006371f4: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006371f7: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x6371fcu); f_00666c70();
    /* 006371fc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006371ff: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00637202: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637203: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00637206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637207: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063720a: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063720d: call 0x6667c0 */ r_esp -= 4; W32(r_esp, 0x637212u); f_006667c0();
    /* 00637212: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00637215: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0063721c: jmp 0x637227 */ goto L_00637227;
L_0063721e:; BB(0x0063721e);
    /* 0063721e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637221: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637224: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00637227:; BB(0x00637227);
    /* 00637227: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063722a: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063722d: jge 0x63724e */ if ((fS==fO)) goto L_0063724e;
L_0063722f:; BB(0x0063722f);
    /* 0063722f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637232: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00637235: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637236: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637239: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063723c: call 0x666840 */ r_esp -= 4; W32(r_esp, 0x637241u); f_00666840();
    /* 00637241: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00637244: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637246: je 0x63724c */ if (fZ) goto L_0063724c;
L_00637248:; BB(0x00637248);
    /* 00637248: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063724a: jmp 0x637250 */ goto L_00637250;
L_0063724c:; BB(0x0063724c);
    /* 0063724c: jmp 0x63721e */ goto L_0063721e;
L_0063724e:; BB(0x0063724e);
    /* 0063724e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00637250:; BB(0x00637250);
    /* 00637250: mov esp, ebp */ r_esp = r_ebp;
    /* 00637252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637253: ret 0xc */ FN_RET(0x006371e0); r_esp += 16; return;
}

void f_00637260(void) /* sub_637260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637260);
    /* 00637260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637261: mov ebp, esp */ r_ebp = r_esp;
    /* 00637263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637266: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637269: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063726c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063726f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637272: sub ecx, 0x3f4 */ {  u32 a = r_ecx; u32 b = 0x3f4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00637278: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063727b: cmp dword ptr [ebp - 8], 0xae */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xaeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00637282: ja 0x637328 */ if ((!fC&&!fZ)) goto L_00637328;
L_00637288:; BB(0x00637288);
    /* 00637288: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063728b: movzx eax, byte ptr [edx + 0x637360] */ r_eax = (u32)R8((u32)(r_edx+0x637360u));
    /* 00637292: jmp dword ptr [eax*4 + 0x637334] */ { u32 t = R32((u32)(r_eax*4+0x637334u)); switch (t) { case 0x637299u: goto L_00637299; case 0x6372aau: goto L_006372aa; case 0x6372c6u: goto L_006372c6; case 0x6372b8u: goto L_006372b8; case 0x6372feu: goto L_006372fe; case 0x6372f0u: goto L_006372f0; case 0x6372d4u: goto L_006372d4; case 0x6372e2u: goto L_006372e2; case 0x63730cu: goto L_0063730c; case 0x63731au: goto L_0063731a; case 0x637328u: goto L_00637328; default: UNSUP(0x00637292, "jump table entry is not a known target"); } }
L_00637299:; BB(0x00637299);
    /* 00637299: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063729c: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063729f: mov eax, dword ptr [ecx + 0x770cb8] */ r_eax = R32((u32)(r_ecx+0x770cb8u));
    /* 006372a5: jmp 0x63732b */ goto L_0063732b;
L_006372aa:; BB(0x006372aa);
    /* 006372aa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006372ad: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372b0: mov eax, dword ptr [edx + 0x770cbc] */ r_eax = R32((u32)(r_edx+0x770cbcu));
    /* 006372b6: jmp 0x63732b */ goto L_0063732b;
L_006372b8:; BB(0x006372b8);
    /* 006372b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006372bb: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372be: mov eax, dword ptr [eax + 0x770cb0] */ r_eax = R32((u32)(r_eax+0x770cb0u));
    /* 006372c4: jmp 0x63732b */ goto L_0063732b;
L_006372c6:; BB(0x006372c6);
    /* 006372c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006372c9: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372cc: mov eax, dword ptr [ecx + 0x770cb4] */ r_eax = R32((u32)(r_ecx+0x770cb4u));
    /* 006372d2: jmp 0x63732b */ goto L_0063732b;
L_006372d4:; BB(0x006372d4);
    /* 006372d4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006372d7: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372da: mov eax, dword ptr [edx + 0x770cc0] */ r_eax = R32((u32)(r_edx+0x770cc0u));
    /* 006372e0: jmp 0x63732b */ goto L_0063732b;
L_006372e2:; BB(0x006372e2);
    /* 006372e2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006372e5: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372e8: mov eax, dword ptr [eax + 0x770cc4] */ r_eax = R32((u32)(r_eax+0x770cc4u));
    /* 006372ee: jmp 0x63732b */ goto L_0063732b;
L_006372f0:; BB(0x006372f0);
    /* 006372f0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006372f3: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006372f6: mov eax, dword ptr [ecx + 0x770cc8] */ r_eax = R32((u32)(r_ecx+0x770cc8u));
    /* 006372fc: jmp 0x63732b */ goto L_0063732b;
L_006372fe:; BB(0x006372fe);
    /* 006372fe: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00637301: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00637304: mov eax, dword ptr [edx + 0x770ccc] */ r_eax = R32((u32)(r_edx+0x770cccu));
    /* 0063730a: jmp 0x63732b */ goto L_0063732b;
L_0063730c:; BB(0x0063730c);
    /* 0063730c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063730f: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00637312: mov eax, dword ptr [eax + 0x770cd8] */ r_eax = R32((u32)(r_eax+0x770cd8u));
    /* 00637318: jmp 0x63732b */ goto L_0063732b;
L_0063731a:; BB(0x0063731a);
    /* 0063731a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063731d: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00637320: mov eax, dword ptr [ecx + 0x770cdc] */ r_eax = R32((u32)(r_ecx+0x770cdcu));
    /* 00637326: jmp 0x63732b */ goto L_0063732b;
L_00637328:; BB(0x00637328);
    /* 00637328: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0063732b:; BB(0x0063732b);
    /* 0063732b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063732d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063732e: ret 8 */ FN_RET(0x00637260); r_esp += 12; return;
}

void f_006375b0(void) /* sub_6375B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006375b0);
    /* 006375b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006375b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006375b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006375b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006375b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006375ba: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006375bd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006375bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006375c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006375c2: ret  */ FN_RET(0x006375b0); r_esp += 4; return;
}

void f_006375d0(void) /* sub_6375D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006375d0);
    /* 006375d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006375d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006375d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006375d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006375d7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006375db: jne 0x6375e8 */ if (!fZ) goto L_006375e8;
L_006375dd:; BB(0x006375dd);
    /* 006375dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006375e0: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6375e5u); f_005f3bf0();
    /* 006375e5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_006375e8:; BB(0x006375e8);
    /* 006375e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006375eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006375ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006375ef: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6375f4u); f_006375b0();
    /* 006375f4: mov ecx, eax */ r_ecx = r_eax;
    /* 006375f6: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x6375fbu); f_0063aae0();
    /* 006375fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006375fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006375fe: ret 4 */ FN_RET(0x006375d0); r_esp += 8; return;
}

void f_00637610(void) /* sub_637610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637610);
    /* 00637610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637611: mov ebp, esp */ r_ebp = r_esp;
    /* 00637613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063761a: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x63761fu); f_006375b0();
    /* 0063761f: mov ecx, eax */ r_ecx = r_eax;
    /* 00637621: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x637626u); f_0063b0a0();
    /* 00637626: mov esp, ebp */ r_esp = r_ebp;
    /* 00637628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637629: ret  */ FN_RET(0x00637610); r_esp += 4; return;
}

void f_00637630(void) /* sub_637630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637630);
    /* 00637630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637631: mov ebp, esp */ r_ebp = r_esp;
    /* 00637633: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637636: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637639: movzx eax, byte ptr [0x795f98] */ r_eax = (u32)R8((u32)(0x795f98u));
    /* 00637640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637642: je 0x637648 */ if (fZ) goto L_00637648;
L_00637644:; BB(0x00637644);
    /* 00637644: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00637646: jmp 0x637664 */ goto L_00637664;
L_00637648:; BB(0x00637648);
    /* 00637648: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063764b: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637650u); f_006375b0();
    /* 00637650: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637653: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637656: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63765bu); f_0063aac0();
    /* 0063765b: mov cl, byte ptr [eax + 0x58] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x58u))) & 0xffu);
    /* 0063765e: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 00637661: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
L_00637664:; BB(0x00637664);
    /* 00637664: mov esp, ebp */ r_esp = r_ebp;
    /* 00637666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637667: ret  */ FN_RET(0x00637630); r_esp += 4; return;
}

void f_00637670(void) /* sub_637670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637670);
    /* 00637670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637671: mov ebp, esp */ r_ebp = r_esp;
    /* 00637673: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637676: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637679: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063767c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063767e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637681: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00637687: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637689u); call_ind(t); }
    /* 00637689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063768b: je 0x6376ba */ if (fZ) goto L_006376ba;
L_0063768d:; BB(0x0063768d);
    /* 0063768d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637690: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637695u); f_006375b0();
    /* 00637695: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637698: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063769b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6376a0u); f_0063aac0();
    /* 006376a0: mov cl, byte ptr [eax + 0x25d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25du))) & 0xffu);
    /* 006376a6: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 006376a9: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 006376ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006376af: je 0x6376ba */ if (fZ) goto L_006376ba;
L_006376b1:; BB(0x006376b1);
    /* 006376b1: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 006376b8: jmp 0x6376c1 */ goto L_006376c1;
L_006376ba:; BB(0x006376ba);
    /* 006376ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_006376c1:; BB(0x006376c1);
    /* 006376c1: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 006376c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006376c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006376c7: ret  */ FN_RET(0x00637670); r_esp += 4; return;
}

void f_006376d0(void) /* sub_6376D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006376d0);
    /* 006376d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006376d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006376d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006376d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006376d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006376dc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6376e1u); f_006375b0();
    /* 006376e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006376e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006376e7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6376ecu); f_0063aac0();
    /* 006376ec: mov al, byte ptr [eax + 0x378] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x378u))) & 0xffu);
    /* 006376f2: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 006376f5: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 006376f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006376fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006376fb: ret  */ FN_RET(0x006376d0); r_esp += 4; return;
}

void f_00637730(void) /* sub_637730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637730);
    /* 00637730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637731: mov ebp, esp */ r_ebp = r_esp;
    /* 00637733: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637736: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00637739: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0063773d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063773f: je 0x637782 */ if (fZ) goto L_00637782;
L_00637741:; BB(0x00637741);
    /* 00637741: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00637744: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637749u); f_006375b0();
    /* 00637749: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063774c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063774f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x637754u); f_0063aac0();
    /* 00637754: mov cl, byte ptr [eax + 0x5a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x5au))) & 0xffu);
    /* 00637757: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0063775a: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063775e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637760: je 0x637776 */ if (fZ) goto L_00637776;
L_00637762:; BB(0x00637762);
    /* 00637762: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 00637769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063776b: jne 0x637776 */ if (!fZ) goto L_00637776;
L_0063776d:; BB(0x0063776d);
    /* 0063776d: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 00637774: jmp 0x63777d */ goto L_0063777d;
L_00637776:; BB(0x00637776);
    /* 00637776: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0063777d:; BB(0x0063777d);
    /* 0063777d: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 00637780: jmp 0x63779e */ goto L_0063779e;
L_00637782:; BB(0x00637782);
    /* 00637782: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00637785: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x63778au); f_006375b0();
    /* 0063778a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063778d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637790: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x637795u); f_0063aac0();
    /* 00637795: mov cl, byte ptr [eax + 0x5a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x5au))) & 0xffu);
    /* 00637798: mov byte ptr [ebp - 0xd], cl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_ecx);
    /* 0063779b: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
L_0063779e:; BB(0x0063779e);
    /* 0063779e: mov esp, ebp */ r_esp = r_ebp;
    /* 006377a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006377a1: ret 4 */ FN_RET(0x00637730); r_esp += 8; return;
}

void f_006377b0(void) /* sub_6377B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006377b0);
    /* 006377b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006377b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006377b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006377b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006377b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006377bc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6377c1u); f_006375b0();
    /* 006377c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006377c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006377c7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6377ccu); f_0063aac0();
    /* 006377cc: mov al, byte ptr [eax + 0x5c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5cu))) & 0xffu);
    /* 006377cf: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 006377d2: movsx eax, byte ptr [ebp - 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 006377d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006377d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006377d9: ret  */ FN_RET(0x006377b0); r_esp += 4; return;
}

void f_006377e0(void) /* sub_6377E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006377e0);
    /* 006377e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006377e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006377e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006377e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006377e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006377ec: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6377f1u); f_006375b0();
    /* 006377f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006377f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006377f7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6377fcu); f_0063aac0();
    /* 006377fc: mov eax, dword ptr [eax + 0x260] */ r_eax = R32((u32)(r_eax+0x260u));
    /* 00637802: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00637805: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637808: mov esp, ebp */ r_esp = r_ebp;
    /* 0063780a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063780b: ret  */ FN_RET(0x006377e0); r_esp += 4; return;
}

void f_00637810(void) /* sub_637810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637810);
    /* 00637810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637811: mov ebp, esp */ r_ebp = r_esp;
    /* 00637813: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637816: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00637819: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063781c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637821u); f_006375b0();
    /* 00637821: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00637824: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637827: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63782cu); f_0063aac0();
    /* 0063782c: mov al, byte ptr [eax + 0x5b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5bu))) & 0xffu);
    /* 0063782f: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 00637832: movsx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 00637836: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637839: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063783c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063783f: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637843: je 0x637853 */ if (fZ) goto L_00637853;
L_00637845:; BB(0x00637845);
    /* 00637845: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637849: je 0x63785e */ if (fZ) goto L_0063785e;
L_0063784b:; BB(0x0063784b);
    /* 0063784b: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063784f: je 0x637866 */ if (fZ) goto L_00637866;
L_00637851:; BB(0x00637851);
    /* 00637851: jmp 0x637888 */ goto L_00637888;
L_00637853:; BB(0x00637853);
    /* 00637853: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637855: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637859: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0063785c: jmp 0x63788b */ goto L_0063788b;
L_0063785e:; BB(0x0063785e);
    /* 0063785e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637861: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00637864: jmp 0x63788b */ goto L_0063788b;
L_00637866:; BB(0x00637866);
    /* 00637866: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637869: imul eax, eax, 0xf */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063786c: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063786f: jge 0x63787a */ if ((fS==fO)) goto L_0063787a;
L_00637871:; BB(0x00637871);
    /* 00637871: mov dword ptr [ebp - 0x18], 0x2d */ W32((u32)(r_ebp+0xffffffe8u), 0x2du);
    /* 00637878: jmp 0x637883 */ goto L_00637883;
L_0063787a:; BB(0x0063787a);
    /* 0063787a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063787d: imul ecx, ecx, 0xf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00637880: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00637883:; BB(0x00637883);
    /* 00637883: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00637886: jmp 0x63788b */ goto L_0063788b;
L_00637888:; BB(0x00637888);
    /* 00637888: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0063788b:; BB(0x0063788b);
    /* 0063788b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063788d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063788e: ret 4 */ FN_RET(0x00637810); r_esp += 8; return;
}

void f_006378a0(void) /* sub_6378A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006378a0);
    /* 006378a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006378a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006378a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006378a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006378a9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006378ad: jne 0x6378ba */ if (!fZ) goto L_006378ba;
L_006378af:; BB(0x006378af);
    /* 006378af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006378b2: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6378b7u); f_005f3bf0();
    /* 006378b7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_006378ba:; BB(0x006378ba);
    /* 006378ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006378bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006378be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006378c1: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6378c6u); f_006375b0();
    /* 006378c6: mov ecx, eax */ r_ecx = r_eax;
    /* 006378c8: call 0x639ef0 */ r_esp -= 4; W32(r_esp, 0x6378cdu); f_00639ef0();
    /* 006378cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006378cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006378d0: ret 4 */ FN_RET(0x006378a0); r_esp += 8; return;
}

void f_006378e0(void) /* sub_6378E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006378e0);
    /* 006378e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006378e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006378e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006378e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006378e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006378ec: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6378f1u); f_006375b0();
    /* 006378f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006378f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006378f7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6378fcu); f_0063aac0();
    /* 006378fc: mov al, byte ptr [eax + 0x368] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x368u))) & 0xffu);
    /* 00637902: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00637905: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 00637908: mov esp, ebp */ r_esp = r_ebp;
    /* 0063790a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063790b: ret  */ FN_RET(0x006378e0); r_esp += 4; return;
}

