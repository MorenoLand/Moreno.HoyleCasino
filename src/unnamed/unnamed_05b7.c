#include "protos.h"

void f_005b7090(void) /* sub_5B7090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7090);
    /* 005b7090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7091: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7097: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b709a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b70a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b70a3: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b70a6: mov byte ptr [ecx + eax + 0x67], dl */ W8((u32)(r_ecx+r_eax+0x67u), (u8)r_edx);
    /* 005b70aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005b70ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b70ad: ret 8 */ FN_RET(0x005b7090); r_esp += 12; return;
}

void f_005b70b0(void) /* sub_5B70B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b70b0);
    /* 005b70b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b70b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b70b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b70b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b70b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b70ba: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b70c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b70c3: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 005b70c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b70ca: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b70cd: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b70d0: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005b70d3: mov byte ptr [eax + edx], cl */ W8((u32)(r_eax+r_edx), (u8)r_ecx);
    /* 005b70d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005b70d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b70d9: ret 0x10 */ FN_RET(0x005b70b0); r_esp += 20; return;
}

void f_005b70e0(void) /* sub_5B70E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b70e0);
    /* 005b70e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b70e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b70e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b70e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b70e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b70ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b70ed: mov dword ptr [eax + 0x5b8], ecx */ W32((u32)(r_eax+0x5b8u), r_ecx);
    /* 005b70f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b70f6: cmp dword ptr [edx + 0x5b8], -1 */ {  u32 a = R32((u32)(r_edx+0x5b8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b70fd: je 0x5b711c */ if (fZ) goto L_005b711c;
L_005b70ff:; BB(0x005b70ff);
    /* 005b70ff: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b7102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7106: mov edx, dword ptr [ecx + 0x5b8] */ r_edx = R32((u32)(r_ecx+0x5b8u));
    /* 005b710c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b710d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b710f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b7115: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x5b711au); f_005d8a20();
    /* 005b711a: jmp 0x5b712d */ goto L_005b712d;
L_005b711c:; BB(0x005b711c);
    /* 005b711c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b711e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7122: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b7128: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x5b712du); f_005d8a20();
L_005b712d:; BB(0x005b712d);
    /* 005b712d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b712f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7130: ret 8 */ FN_RET(0x005b70e0); r_esp += 12; return;
}

void f_005b7140(void) /* sub_5B7140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7140);
    /* 005b7140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7141: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7147: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b714a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7150: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7153: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7156: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005b7159: mov byte ptr [ecx + eax + 0x5c], dl */ W8((u32)(r_ecx+r_eax+0x5cu), (u8)r_edx);
    /* 005b715d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b715f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7160: ret 0xc */ FN_RET(0x005b7140); r_esp += 16; return;
}

void f_005b7170(void) /* sub_5B7170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7170);
    /* 005b7170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7171: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b717a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7180: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7186: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005b7189: mov byte ptr [ecx + eax + 0x60], dl */ W8((u32)(r_ecx+r_eax+0x60u), (u8)r_edx);
    /* 005b718d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b718f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7190: ret 0xc */ FN_RET(0x005b7170); r_esp += 16; return;
}

void f_005b71a0(void) /* sub_5B71A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b71a0);
    /* 005b71a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b71a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b71a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b71a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b71a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b71ac: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b71b2: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b71b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b71b8: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005b71bb: mov byte ptr [ecx + eax + 0x68], dl */ W8((u32)(r_ecx+r_eax+0x68u), (u8)r_edx);
    /* 005b71bf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b71c2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b71c5: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b71c9: ja 0x5b71ee */ if ((!fC&&!fZ)) goto L_005b71ee;
L_005b71cb:; BB(0x005b71cb);
    /* 005b71cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b71ce: movzx edx, byte ptr [ecx + 0x5b7218] */ r_edx = (u32)R8((u32)(r_ecx+0x5b7218u));
    /* 005b71d5: jmp dword ptr [edx*4 + 0x5b720c] */ { u32 t = R32((u32)(r_edx*4+0x5b720cu)); switch (t) { case 0x5b71e5u: goto L_005b71e5; case 0x5b71dcu: goto L_005b71dc; case 0x5b71eeu: goto L_005b71ee; default: UNSUP(0x005b71d5, "jump table entry is not a known target"); } }
L_005b71dc:; BB(0x005b71dc);
    /* 005b71dc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b71e3: jmp 0x5b71f5 */ goto L_005b71f5;
L_005b71e5:; BB(0x005b71e5);
    /* 005b71e5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b71ec: jmp 0x5b71f5 */ goto L_005b71f5;
L_005b71ee:; BB(0x005b71ee);
    /* 005b71ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005b71f5:; BB(0x005b71f5);
    /* 005b71f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b71f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b71f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b71fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b71fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7200: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5b7205u); f_005b73a0();
    /* 005b7205: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7208: ret 0xc */ FN_RET(0x005b71a0); r_esp += 16; return;
}

void f_005b7220(void) /* sub_5B7220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7220);
    /* 005b7220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7221: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7223: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7226: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b7229: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b7230: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b7237: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b723e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b7245: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b724c: jmp 0x5b7257 */ goto L_005b7257;
L_005b724e:; BB(0x005b724e);
    /* 005b724e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7251: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7254: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b7257:; BB(0x005b7257);
    /* 005b7257: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b725b: jge 0x5b7304 */ if ((fS==fO)) goto L_005b7304;
L_005b7261:; BB(0x005b7261);
    /* 005b7261: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7264: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b7268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7269: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b726eu); f_005dcb00();
    /* 005b726e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7271: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b7274: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7277: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b727cu); f_0063aac0();
    /* 005b727c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b727e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b7281: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7283: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7287: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b728a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005b728d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b728f: jne 0x5b72ff */ if (!fZ) goto L_005b72ff;
L_005b7291:; BB(0x005b7291);
    /* 005b7291: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7294: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b7298: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7299: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b729eu); f_005dcb00();
    /* 005b729e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b72a1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b72a4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b72a7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b72acu); f_0063aac0();
    /* 005b72ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b72ae: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005b72b1: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b72b5: je 0x5b72d3 */ if (fZ) goto L_005b72d3;
L_005b72b7:; BB(0x005b72b7);
    /* 005b72b7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b72ba: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b72bfu); f_0063aac0();
    /* 005b72bf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b72c1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b72c4: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b72c8: je 0x5b72d3 */ if (fZ) goto L_005b72d3;
L_005b72ca:; BB(0x005b72ca);
    /* 005b72ca: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005b72d1: jmp 0x5b72da */ goto L_005b72da;
L_005b72d3:; BB(0x005b72d3);
    /* 005b72d3: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_005b72da:; BB(0x005b72da);
    /* 005b72da: movzx ecx, byte ptr [ebp - 0x34] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 005b72de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b72e0: je 0x5b72ff */ if (fZ) goto L_005b72ff;
L_005b72e2:; BB(0x005b72e2);
    /* 005b72e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b72e5: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b72e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b72ea: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b72efu); f_005dcb00();
    /* 005b72ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b72f2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b72f5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b72f8: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
L_005b72ff:; BB(0x005b72ff);
    /* 005b72ff: jmp 0x5b724e */ goto L_005b724e;
L_005b7304:; BB(0x005b7304);
    /* 005b7304: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7307: ret  */ FN_RET(0x005b7220); r_esp += 4; return;
}

void f_005b7310(void) /* sub_5B7310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7310);
    /* 005b7310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7311: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7317: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b731a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b731d: mov dword ptr [eax + 0x5d4], ecx */ W32((u32)(r_eax+0x5d4u), r_ecx);
    /* 005b7323: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7326: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7329: mov dword ptr [edx + 0x5d8], eax */ W32((u32)(r_edx+0x5d8u), r_eax);
    /* 005b732f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7332: ret 8 */ FN_RET(0x005b7310); r_esp += 12; return;
}

void f_005b7340(void) /* sub_5B7340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7340);
    /* 005b7340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7341: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7347: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b734a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7350: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7353: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 005b7357: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b735a: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b735d: lea ecx, [edx + eax + 0x68] */ r_ecx = (u32)(r_edx+r_eax+0x68u);
    /* 005b7361: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b7364: mov ax, word ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 005b7368: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 005b736c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b736e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b736f: ret 0x10 */ FN_RET(0x005b7340); r_esp += 20; return;
}

void f_005b7380(void) /* sub_5B7380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7380);
    /* 005b7380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7381: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7387: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b738a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7390: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7393: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b7396: mov byte ptr [ecx + eax + 0x64], dl */ W8((u32)(r_ecx+r_eax+0x64u), (u8)r_edx);
    /* 005b739a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b739c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b739d: ret 8 */ FN_RET(0x005b7380); r_esp += 12; return;
}

void f_005b73a0(void) /* sub_5B73A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b73a0);
    /* 005b73a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b73a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b73a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b73a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b73a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b73aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b73ad: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b73b0: mov dword ptr [ecx + eax*4 + 0x5dc], edx */ W32((u32)(r_ecx+r_eax*4+0x5dcu), r_edx);
    /* 005b73b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b73b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b73ba: ret 8 */ FN_RET(0x005b73a0); r_esp += 12; return;
}

void f_005b73c0(void) /* sub_5B73C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b73c0);
    /* 005b73c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b73c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b73c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b73c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b73c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b73ca: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b73d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b73d3: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b73d6: mov byte ptr [ecx + eax + 0x66], dl */ W8((u32)(r_ecx+r_eax+0x66u), (u8)r_edx);
    /* 005b73da: mov esp, ebp */ r_esp = r_ebp;
    /* 005b73dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b73dd: ret 8 */ FN_RET(0x005b73c0); r_esp += 12; return;
}

void f_005b73e0(void) /* sub_5B73E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b73e0);
    /* 005b73e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b73e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b73e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b73e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b73e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b73eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b73ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b73ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b73f2: call 0x5b73c0 */ r_esp -= 4; W32(r_esp, 0x5b73f7u); f_005b73c0();
    /* 005b73f7: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b73fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b73fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b73fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b73ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7402: call 0x5b7380 */ r_esp -= 4; W32(r_esp, 0x5b7407u); f_005b7380();
    /* 005b7407: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b740a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b740b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b740e: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5b7413u); f_005b6660();
    /* 005b7413: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b7416: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7418: je 0x5b7458 */ if (fZ) goto L_005b7458;
L_005b741a:; BB(0x005b741a);
    /* 005b741a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b741d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b741e: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b7421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7422: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7425: call 0x5b51a0 */ r_esp -= 4; W32(r_esp, 0x5b742au); f_005b51a0();
    /* 005b742a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b742c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b742e: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b7431: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7432: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7435: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7438: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b743f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7442: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7445: mov edx, dword ptr [eax + edx*4 + 0x580] */ r_edx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b744c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b744e: mov ecx, edx */ r_ecx = r_edx;
    /* 005b7450: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005b7456: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b7458u); call_ind(t); }
L_005b7458:; BB(0x005b7458);
    /* 005b7458: mov esp, ebp */ r_esp = r_ebp;
    /* 005b745a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b745b: ret 8 */ FN_RET(0x005b73e0); r_esp += 12; return;
}

void f_005b7460(void) /* sub_5B7460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7460);
    /* 005b7460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7461: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7469: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b746c: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b7471u); f_005b5fb0();
    /* 005b7471: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005b7474: mov byte ptr [eax + 7], cl */ W8((u32)(r_eax+0x7u), (u8)r_ecx);
    /* 005b7477: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b747a: ret 4 */ FN_RET(0x005b7460); r_esp += 8; return;
}

void f_005b7480(void) /* sub_5B7480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7480);
    /* 005b7480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7481: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7487: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b748a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b7490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7493: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b7496: mov byte ptr [ecx + eax + 0x65], dl */ W8((u32)(r_ecx+r_eax+0x65u), (u8)r_edx);
    /* 005b749a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b749c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b749d: ret 8 */ FN_RET(0x005b7480); r_esp += 12; return;
}

void f_005b74a0(void) /* sub_5B74A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b74a0);
    /* 005b74a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b74a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b74a3: sub esp, 0x414 */ {  u32 a = r_esp; u32 b = 0x414u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b74a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b74ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b74b0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b74b3: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 005b74b9: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b74bf: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b74c4u); f_005b4f00();
    /* 005b74c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b74c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b74ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b74cb: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b74d1: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b74d6u); f_005b4e50();
    /* 005b74d6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b74d9: push 0x6d1794 */ { u32 v = 0x6d1794u; r_esp -= 4; W32(r_esp, v); }
    /* 005b74de: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b74e3u); f_00630f40();
    /* 005b74e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b74e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b74e7: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 005b74ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b74ee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b74f3u); f_00686d8e();
    /* 005b74f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b74f6: push 0x6d1774 */ { u32 v = 0x6d1774u; r_esp -= 4; W32(r_esp, v); }
    /* 005b74fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7500u); f_00630f40();
    /* 005b7500: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7504: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 005b750a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b750b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5b7510u); f_00686ec6();
    /* 005b7510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7513: push 0x6d1750 */ { u32 v = 0x6d1750u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7518: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b751du); f_00630f40();
    /* 005b751d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7521: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 005b7527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7528: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5b752du); f_00686ec6();
    /* 005b752d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7534: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b753a: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5b753fu); f_005b3430();
    /* 005b753f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b7542: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7544: je 0x5b7563 */ if (fZ) goto L_005b7563;
L_005b7546:; BB(0x005b7546);
    /* 005b7546: push 0x6d1728 */ { u32 v = 0x6d1728u; r_esp -= 4; W32(r_esp, v); }
    /* 005b754b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7550u); f_00630f40();
    /* 005b7550: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7554: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 005b755a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b755b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5b7560u); f_00686ec6();
    /* 005b7560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b7563:; BB(0x005b7563);
    /* 005b7563: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7567: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b756a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b756b: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b7571: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5b7576u); f_005b3710();
    /* 005b7576: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b7579: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b757b: je 0x5b759a */ if (fZ) goto L_005b759a;
L_005b757d:; BB(0x005b757d);
    /* 005b757d: push 0x6d1704 */ { u32 v = 0x6d1704u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7582: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7587u); f_00630f40();
    /* 005b7587: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b758a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b758b: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 005b7591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7592: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5b7597u); f_00686ec6();
    /* 005b7597: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b759a:; BB(0x005b759a);
    /* 005b759a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b759d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b759e: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b75a4: call 0x5b37f0 */ r_esp -= 4; W32(r_esp, 0x5b75a9u); f_005b37f0();
    /* 005b75a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b75ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b75ae: je 0x5b75cd */ if (fZ) goto L_005b75cd;
L_005b75b0:; BB(0x005b75b0);
    /* 005b75b0: push 0x6d16dc */ { u32 v = 0x6d16dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b75b5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b75bau); f_00630f40();
    /* 005b75ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b75bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b75be: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 005b75c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b75c5: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5b75cau); f_00686ec6();
    /* 005b75ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b75cd:; BB(0x005b75cd);
    /* 005b75cd: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 005b75d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b75d4: push 0x6b4d38 */ { u32 v = 0x6b4d38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b75d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b75deu); f_00630f40();
    /* 005b75de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b75e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b75e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b75e4: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005b75ea: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x5b75efu); f_0057be80();
    /* 005b75ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b75f2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b75f4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5b75f9u); f_00686d72();
    /* 005b75f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b75fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b75fc: ret  */ FN_RET(0x005b74a0); r_esp += 4; return;
}

void f_005b7a70(void) /* sub_5B7A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7a70);
    /* 005b7a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7a73: sub esp, 0x5cc */ {  u32 a = r_esp; u32 b = 0x5ccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b7a7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7a80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b7a83: mov dword ptr [ebp - 0x5bc], ecx */ W32((u32)(r_ebp+0xfffffa44u), r_ecx);
    /* 005b7a89: push 0x6d1a30 */ { u32 v = 0x6d1a30u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a8e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7a93u); f_00630f40();
    /* 005b7a93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a97: lea eax, [ebp - 0x5b8] */ r_eax = (u32)(r_ebp+0xfffffa48u);
    /* 005b7a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a9e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7aa3u); f_00686d8e();
    /* 005b7aa3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7aa6: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7aaa: jle 0x5b7b3d */ if ((fZ||fS!=fO)) goto L_005b7b3d;
L_005b7ab0:; BB(0x005b7ab0);
    /* 005b7ab0: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7ab4: jle 0x5b7acb */ if ((fZ||fS!=fO)) goto L_005b7acb;
L_005b7ab6:; BB(0x005b7ab6);
    /* 005b7ab6: push 0x6d1a14 */ { u32 v = 0x6d1a14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7abb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7ac0u); f_00630f40();
    /* 005b7ac0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ac3: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
    /* 005b7ac9: jmp 0x5b7ade */ goto L_005b7ade;
L_005b7acb:; BB(0x005b7acb);
    /* 005b7acb: push 0x6d19fc */ { u32 v = 0x6d19fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ad0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7ad5u); f_00630f40();
    /* 005b7ad5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ad8: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
L_005b7ade:; BB(0x005b7ade);
    /* 005b7ade: mov ecx, dword ptr [ebp - 0x5c0] */ r_ecx = R32((u32)(r_ebp+0xfffffa40u));
    /* 005b7ae4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ae5: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 005b7aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7aec: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7af1u); f_00686d8e();
    /* 005b7af1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7af4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7af8: jle 0x5b7b0f */ if ((fZ||fS!=fO)) goto L_005b7b0f;
L_005b7afa:; BB(0x005b7afa);
    /* 005b7afa: push 0x6d19dc */ { u32 v = 0x6d19dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7aff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7b04u); f_00630f40();
    /* 005b7b04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b07: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
    /* 005b7b0d: jmp 0x5b7b22 */ goto L_005b7b22;
L_005b7b0f:; BB(0x005b7b0f);
    /* 005b7b0f: push 0x6d19c0 */ { u32 v = 0x6d19c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b14: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7b19u); f_00630f40();
    /* 005b7b19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b1c: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
L_005b7b22:; BB(0x005b7b22);
    /* 005b7b22: mov eax, dword ptr [ebp - 0x5c4] */ r_eax = R32((u32)(r_ebp+0xfffffa3cu));
    /* 005b7b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b29: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 005b7b2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b30: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7b35u); f_00686d8e();
    /* 005b7b35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b38: jmp 0x5b7c0b */ goto L_005b7c0b;
L_005b7b3d:; BB(0x005b7b3d);
    /* 005b7b3d: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7b41: jge 0x5b7bd1 */ if ((fS==fO)) goto L_005b7bd1;
L_005b7b47:; BB(0x005b7b47);
    /* 005b7b47: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7b4b: jle 0x5b7b62 */ if ((fZ||fS!=fO)) goto L_005b7b62;
L_005b7b4d:; BB(0x005b7b4d);
    /* 005b7b4d: push 0x6d19a4 */ { u32 v = 0x6d19a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7b57u); f_00630f40();
    /* 005b7b57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b5a: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
    /* 005b7b60: jmp 0x5b7b75 */ goto L_005b7b75;
L_005b7b62:; BB(0x005b7b62);
    /* 005b7b62: push 0x6d198c */ { u32 v = 0x6d198cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b67: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7b6cu); f_00630f40();
    /* 005b7b6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b6f: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
L_005b7b75:; BB(0x005b7b75);
    /* 005b7b75: mov edx, dword ptr [ebp - 0x5c8] */ r_edx = R32((u32)(r_ebp+0xfffffa38u));
    /* 005b7b7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b7c: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 005b7b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b83: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7b88u); f_00686d8e();
    /* 005b7b88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b8b: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7b8f: jle 0x5b7ba6 */ if ((fZ||fS!=fO)) goto L_005b7ba6;
L_005b7b91:; BB(0x005b7b91);
    /* 005b7b91: push 0x6d196c */ { u32 v = 0x6d196cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b96: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7b9bu); f_00630f40();
    /* 005b7b9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b9e: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
    /* 005b7ba4: jmp 0x5b7bb9 */ goto L_005b7bb9;
L_005b7ba6:; BB(0x005b7ba6);
    /* 005b7ba6: push 0x6d1950 */ { u32 v = 0x6d1950u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7bb0u); f_00630f40();
    /* 005b7bb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7bb3: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
L_005b7bb9:; BB(0x005b7bb9);
    /* 005b7bb9: mov ecx, dword ptr [ebp - 0x5cc] */ r_ecx = R32((u32)(r_ebp+0xfffffa34u));
    /* 005b7bbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bc0: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 005b7bc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bc7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7bccu); f_00686d8e();
    /* 005b7bcc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7bcf: jmp 0x5b7c0b */ goto L_005b7c0b;
L_005b7bd1:; BB(0x005b7bd1);
    /* 005b7bd1: push 0x6d1934 */ { u32 v = 0x6d1934u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bd6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7bdbu); f_00630f40();
    /* 005b7bdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bdf: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 005b7be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7be6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7bebu); f_00686d8e();
    /* 005b7beb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7bee: push 0x6d191c */ { u32 v = 0x6d191cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bf3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7bf8u); f_00630f40();
    /* 005b7bf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bfc: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 005b7c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7c08u); f_00686d8e();
    /* 005b7c08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b7c0b:; BB(0x005b7c0b);
    /* 005b7c0b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7c0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c0f: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 005b7c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c16: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 005b7c1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c1d: push 0x6d18f8 */ { u32 v = 0x6d18f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c22: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7c27u); f_00630f40();
    /* 005b7c27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c2b: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 005b7c31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c32: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b7c38u); call_ind(t); }
    /* 005b7c38: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7c3b: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7c3f: jle 0x5b7c6f */ if ((fZ||fS!=fO)) goto L_005b7c6f;
L_005b7c41:; BB(0x005b7c41);
    /* 005b7c41: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 005b7c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c48: lea ecx, [ebp - 0x5b8] */ r_ecx = (u32)(r_ebp+0xfffffa48u);
    /* 005b7c4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c4f: push 0x6d18dc */ { u32 v = 0x6d18dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c54: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7c59u); f_00630f40();
    /* 005b7c59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c5d: lea edx, [ebp - 0x4b8] */ r_edx = (u32)(r_ebp+0xfffffb48u);
    /* 005b7c63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c64: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b7c6au); call_ind(t); }
    /* 005b7c6a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7c6d: jmp 0x5b7ccf */ goto L_005b7ccf;
L_005b7c6f:; BB(0x005b7c6f);
    /* 005b7c6f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7c73: jge 0x5b7ca3 */ if ((fS==fO)) goto L_005b7ca3;
L_005b7c75:; BB(0x005b7c75);
    /* 005b7c75: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 005b7c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c7c: lea ecx, [ebp - 0x5b8] */ r_ecx = (u32)(r_ebp+0xfffffa48u);
    /* 005b7c82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c83: push 0x6d18c0 */ { u32 v = 0x6d18c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c88: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7c8du); f_00630f40();
    /* 005b7c8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c91: lea edx, [ebp - 0x4b8] */ r_edx = (u32)(r_ebp+0xfffffb48u);
    /* 005b7c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c98: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b7c9eu); call_ind(t); }
    /* 005b7c9e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ca1: jmp 0x5b7ccf */ goto L_005b7ccf;
L_005b7ca3:; BB(0x005b7ca3);
    /* 005b7ca3: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 005b7ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7caa: lea ecx, [ebp - 0x5b8] */ r_ecx = (u32)(r_ebp+0xfffffa48u);
    /* 005b7cb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cb1: push 0x6d18a0 */ { u32 v = 0x6d18a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7cbbu); f_00630f40();
    /* 005b7cbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cbf: lea edx, [ebp - 0x4b8] */ r_edx = (u32)(r_ebp+0xfffffb48u);
    /* 005b7cc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cc6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b7cccu); call_ind(t); }
    /* 005b7ccc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b7ccf:; BB(0x005b7ccf);
    /* 005b7ccf: lea eax, [ebp - 0x4b8] */ r_eax = (u32)(r_ebp+0xfffffb48u);
    /* 005b7cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cd6: push 0x6d17b0 */ { u32 v = 0x6d17b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7cdb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7ce0u); f_00630f40();
    /* 005b7ce0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ce4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ce6: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005b7cec: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x5b7cf1u); f_0057be80();
    /* 005b7cf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7cf4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7cf6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5b7cfbu); f_00686d72();
    /* 005b7cfb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7cfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7cfe: ret 4 */ FN_RET(0x005b7a70); r_esp += 8; return;
}

void f_005b7d10(void) /* sub_5B7D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7d10);
    /* 005b7d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d11: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7d1c: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b7d21u); f_005b5fb0();
    /* 005b7d21: mov al, byte ptr [eax + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x6u))) & 0xffu);
    /* 005b7d24: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7d26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7d27: ret  */ FN_RET(0x005b7d10); r_esp += 4; return;
}

void f_005b7d30(void) /* sub_5B7D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7d30);
    /* 005b7d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d31: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7d37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7d3c: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b7d41u); f_005b5fb0();
    /* 005b7d41: mov al, byte ptr [eax + 7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x7u))) & 0xffu);
    /* 005b7d44: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7d46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7d47: ret  */ FN_RET(0x005b7d30); r_esp += 4; return;
}

void f_005b7d50(void) /* sub_5B7D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7d50);
    /* 005b7d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d51: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7d57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7d5c: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b7d61u); f_005b5fb0();
    /* 005b7d61: mov al, byte ptr [eax + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5u))) & 0xffu);
    /* 005b7d64: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7d67: ret  */ FN_RET(0x005b7d50); r_esp += 4; return;
}

void f_005b7d70(void) /* sub_5B7D70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7d70);
    /* 005b7d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7d73: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d76: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b7d79: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b7d7f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b7d84u); f_005da830();
    /* 005b7d84: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b7d87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d89: jne 0x5b7da5 */ if (!fZ) goto L_005b7da5;
L_005b7d8b:; BB(0x005b7d8b);
    /* 005b7d8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7d8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d8f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b7d94u); f_005dcb00();
    /* 005b7d94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d97: mov ecx, eax */ r_ecx = r_eax;
    /* 005b7d99: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x5b7d9eu); f_005d5840();
    /* 005b7d9e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b7da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7da3: je 0x5b7dac */ if (fZ) goto L_005b7dac;
L_005b7da5:; BB(0x005b7da5);
    /* 005b7da5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b7da7: jmp 0x5b7ede */ goto L_005b7ede;
L_005b7dac:; BB(0x005b7dac);
    /* 005b7dac: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b7db3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b7dba: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b7dc1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b7dc8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b7dcf: jmp 0x5b7dda */ goto L_005b7dda;
L_005b7dd1:; BB(0x005b7dd1);
    /* 005b7dd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7dd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7dd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b7dda:; BB(0x005b7dda);
    /* 005b7dda: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7dde: jge 0x5b7edc */ if ((fS==fO)) goto L_005b7edc;
L_005b7de4:; BB(0x005b7de4);
    /* 005b7de4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7de7: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b7deb: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7dee: jne 0x5b7df5 */ if (!fZ) goto L_005b7df5;
L_005b7df0:; BB(0x005b7df0);
    /* 005b7df0: jmp 0x5b7edc */ goto L_005b7edc;
L_005b7df5:; BB(0x005b7df5);
    /* 005b7df5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7df8: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b7dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7dfd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b7e02u); f_005dcb00();
    /* 005b7e02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e05: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b7e08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7e0b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b7e10u); f_0063aac0();
    /* 005b7e10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7e12: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b7e15: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e19: je 0x5b7e37 */ if (fZ) goto L_005b7e37;
L_005b7e1b:; BB(0x005b7e1b);
    /* 005b7e1b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7e1e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b7e23u); f_0063aac0();
    /* 005b7e23: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b7e25: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b7e28: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e2c: je 0x5b7e37 */ if (fZ) goto L_005b7e37;
L_005b7e2e:; BB(0x005b7e2e);
    /* 005b7e2e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005b7e35: jmp 0x5b7e3e */ goto L_005b7e3e;
L_005b7e37:; BB(0x005b7e37);
    /* 005b7e37: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_005b7e3e:; BB(0x005b7e3e);
    /* 005b7e3e: movzx ecx, byte ptr [ebp - 0x3c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 005b7e42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e44: je 0x5b7ed7 */ if (fZ) goto L_005b7ed7;
L_005b7e4a:; BB(0x005b7e4a);
    /* 005b7e4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7e4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e4e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b7e53u); f_005dcb00();
    /* 005b7e53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e56: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b7e59: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7e5c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b7e61u); f_0063aac0();
    /* 005b7e61: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e64: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b7e67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7e6a: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b7e6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e6f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b7e74u); f_005dcb00();
    /* 005b7e74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e77: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b7e7a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7e7d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b7e82u); f_0063aac0();
    /* 005b7e82: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7e85: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b7e88: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e8c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e90: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5b7e95u); f_00686ec0();
    /* 005b7e95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e9a: jne 0x5b7ed7 */ if (!fZ) goto L_005b7ed7;
L_005b7e9c:; BB(0x005b7e9c);
    /* 005b7e9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b7e9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ea0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b7ea5u); f_005dcb00();
    /* 005b7ea5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ea8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b7eab: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b7eae: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 005b7eb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7eb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7eb9: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 005b7ebe: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b7ec1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005b7ec7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b7eca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b7ecc: mov ecx, eax */ r_ecx = r_eax;
    /* 005b7ece: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b7ed1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b7ed3u); call_ind(t); }
    /* 005b7ed3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b7ed5: jmp 0x5b7ede */ goto L_005b7ede;
L_005b7ed7:; BB(0x005b7ed7);
    /* 005b7ed7: jmp 0x5b7dd1 */ goto L_005b7dd1;
L_005b7edc:; BB(0x005b7edc);
    /* 005b7edc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b7ede:; BB(0x005b7ede);
    /* 005b7ede: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7ee0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7ee1: ret 4 */ FN_RET(0x005b7d70); r_esp += 8; return;
}

void f_005b7ef0(void) /* sub_5B7EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7ef0);
    /* 005b7ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7ef7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ef9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7efb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7efe: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b7f04: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x5b7f09u); f_006437d0();
    /* 005b7f09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f0c: mov dword ptr [ecx + 0x5b0], 0 */ W32((u32)(r_ecx+0x5b0u), 0x0u);
    /* 005b7f16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f19: mov dword ptr [edx + 0x5c4], 0 */ W32((u32)(r_edx+0x5c4u), 0x0u);
    /* 005b7f23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f26: mov dword ptr [eax + 0x5cc], 0 */ W32((u32)(r_eax+0x5ccu), 0x0u);
    /* 005b7f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f33: mov dword ptr [ecx + 0x5d0], 0 */ W32((u32)(r_ecx+0x5d0u), 0x0u);
    /* 005b7f3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f40: mov dword ptr [edx + 0x5c8], 0 */ W32((u32)(r_edx+0x5c8u), 0x0u);
    /* 005b7f4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f4c: push 0x6d1a4c */ { u32 v = 0x6d1a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f53: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7f58: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b7f5e: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x5b7f63u); f_00643930();
    /* 005b7f63: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7f66: ret  */ FN_RET(0x005b7ef0); r_esp += 4; return;
}

void f_005b7f70(void) /* sub_5B7F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7f70);
    /* 005b7f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7f73: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7f76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f77: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b7f7a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b7f81: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b7f88: jmp 0x5b7f93 */ goto L_005b7f93;
L_005b7f8a:; BB(0x005b7f8a);
    /* 005b7f8a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7f8d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7f90: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b7f93:; BB(0x005b7f93);
    /* 005b7f93: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7f97: jge 0x5b7fad */ if ((fS==fO)) goto L_005b7fad;
L_005b7f99:; BB(0x005b7f99);
    /* 005b7f99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7f9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f9d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7fa0: call 0x5b5ff0 */ r_esp -= 4; W32(r_esp, 0x5b7fa5u); f_005b5ff0();
    /* 005b7fa5: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7fa8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b7fab: jmp 0x5b7f8a */ goto L_005b7f8a;
L_005b7fad:; BB(0x005b7fad);
    /* 005b7fad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7fb0: mov eax, dword ptr [edx + 0x57c] */ r_eax = R32((u32)(r_edx+0x57cu));
    /* 005b7fb6: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 005b7fbc: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7fbf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b7fc2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b7fc9: jmp 0x5b7fd4 */ goto L_005b7fd4;
L_005b7fcb:; BB(0x005b7fcb);
    /* 005b7fcb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b7fce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7fd1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005b7fd4:; BB(0x005b7fd4);
    /* 005b7fd4: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7fd8: jge 0x5b8069 */ if ((fS==fO)) goto L_005b8069;
L_005b7fde:; BB(0x005b7fde);
    /* 005b7fde: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7fe1: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b7fe7: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 005b7fed: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ff0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b7ff3: jmp 0x5b7ffe */ goto L_005b7ffe;
L_005b7ff5:; BB(0x005b7ff5);
    /* 005b7ff5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ff8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b7ffb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b7ffe:; BB(0x005b7ffe);
    /* 005b7ffe: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8002: jle 0x5b8064 */ if ((fZ||fS!=fO)) goto L_005b8064;
L_005b8004:; BB(0x005b8004);
    /* 005b8004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8008: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5b800du); f_0062fbf0();
    /* 005b800d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8010: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8013: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b8016: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8019: mov eax, dword ptr [edx + 0x57c] */ r_eax = R32((u32)(r_edx+0x57cu));
    /* 005b801f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8022: mov dx, word ptr [eax + ecx*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0x4u))) & 0xffffu);
    /* 005b8027: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
    /* 005b802b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b802e: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b8034: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8037: mov eax, dword ptr [edx + 0x57c] */ r_eax = R32((u32)(r_edx+0x57cu));
    /* 005b803d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8040: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8043: mov cx, word ptr [ecx + esi*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_esi*2+0x4u))) & 0xffffu);
    /* 005b8048: mov word ptr [eax + edx*2 + 4], cx */ W16((u32)(r_eax+r_edx*2+0x4u), (u16)r_ecx);
    /* 005b804d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8050: mov eax, dword ptr [edx + 0x57c] */ r_eax = R32((u32)(r_edx+0x57cu));
    /* 005b8056: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8059: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005b805d: mov word ptr [eax + ecx*2 + 4], dx */ W16((u32)(r_eax+r_ecx*2+0x4u), (u16)r_edx);
    /* 005b8062: jmp 0x5b7ff5 */ goto L_005b7ff5;
L_005b8064:; BB(0x005b8064);
    /* 005b8064: jmp 0x5b7fcb */ goto L_005b7fcb;
L_005b8069:; BB(0x005b8069);
    /* 005b8069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b806c: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b8072: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 005b8078: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b807b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b807c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b807f: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b8085: call 0x6436a0 */ r_esp -= 4; W32(r_esp, 0x5b808au); f_006436a0();
    /* 005b808a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b808b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b808d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b808e: ret  */ FN_RET(0x005b7f70); r_esp += 4; return;
}

