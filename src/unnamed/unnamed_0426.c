#include "protos.h"

void f_00426150(void) /* sub_426150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426150);
    /* 00426150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426151: mov ebp, esp */ r_ebp = r_esp;
    /* 00426153: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426156: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00426159: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426160: jmp 0x42616b */ goto L_0042616b;
L_00426162:; BB(0x00426162);
    /* 00426162: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426165: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426168: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042616b:; BB(0x0042616b);
    /* 0042616b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042616f: jge 0x4261ec */ if ((fS==fO)) goto L_004261ec;
L_00426171:; BB(0x00426171);
    /* 00426171: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426174: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426175: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42617au); f_005dcb00();
    /* 0042617a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042617d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00426180: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426183: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x426188u); f_0063aac0();
    /* 00426188: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042618a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042618d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042618f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426193: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00426196: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00426199: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042619b: jne 0x4261e7 */ if (!fZ) goto L_004261e7;
L_0042619d:; BB(0x0042619d);
    /* 0042619d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004261a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004261a1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4261a6u); f_005dcb00();
    /* 004261a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004261a9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004261ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004261af: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 004261b5: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 004261b8: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004261bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004261be: jne 0x4261e7 */ if (!fZ) goto L_004261e7;
L_004261c0:; BB(0x004261c0);
    /* 004261c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004261c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004261c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4261c9u); f_005dcb00();
    /* 004261c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004261cc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004261cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004261d2: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 004261d8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 004261db: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004261df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004261e1: jne 0x4261e7 */ if (!fZ) goto L_004261e7;
L_004261e3:; BB(0x004261e3);
    /* 004261e3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004261e5: jmp 0x4261ee */ goto L_004261ee;
L_004261e7:; BB(0x004261e7);
    /* 004261e7: jmp 0x426162 */ goto L_00426162;
L_004261ec:; BB(0x004261ec);
    /* 004261ec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004261ee:; BB(0x004261ee);
    /* 004261ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004261f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004261f1: ret  */ FN_RET(0x00426150); r_esp += 4; return;
}

void f_00426200(void) /* sub_426200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426200);
    /* 00426200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426201: mov ebp, esp */ r_ebp = r_esp;
    /* 00426203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426207: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042620b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042620e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00426211: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x426216u); f_006437d0();
    /* 00426216: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426218: push 0x6b6784 */ { u32 v = 0x6b6784u; r_esp -= 4; W32(r_esp, v); }
    /* 0042621d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042621f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426221: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426224: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00426227: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x42622cu); f_00643930();
    /* 0042622c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042622e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042622f: ret  */ FN_RET(0x00426200); r_esp += 4; return;
}

void f_00426230(void) /* sub_426230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426230);
    /* 00426230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426231: mov ebp, esp */ r_ebp = r_esp;
    /* 00426233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426237: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042623a: cmp dword ptr [eax + 0xa0], -1 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426241: jne 0x426247 */ if (!fZ) goto L_00426247;
L_00426243:; BB(0x00426243);
    /* 00426243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426245: jmp 0x426259 */ goto L_00426259;
L_00426247:; BB(0x00426247);
    /* 00426247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042624a: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 00426250: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426251: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426256u); f_005dcb00();
    /* 00426256: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00426259:; BB(0x00426259);
    /* 00426259: mov esp, ebp */ r_esp = r_ebp;
    /* 0042625b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042625c: ret  */ FN_RET(0x00426230); r_esp += 4; return;
}

void f_00426260(void) /* sub_426260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426260);
    /* 00426260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426261: mov ebp, esp */ r_ebp = r_esp;
    /* 00426263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042626a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042626d: mov dword ptr [eax + 0xa0], ecx */ W32((u32)(r_eax+0xa0u), r_ecx);
    /* 00426273: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426276: cmp dword ptr [edx + 0xa0], -1 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042627d: je 0x426296 */ if (fZ) goto L_00426296;
L_0042627f:; BB(0x0042627f);
    /* 0042627f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00426282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426283: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426286: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426287: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426289: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0042628f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x426294u); f_005d8a20();
    /* 00426294: jmp 0x4262a7 */ goto L_004262a7;
L_00426296:; BB(0x00426296);
    /* 00426296: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426298: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042629a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042629c: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004262a2: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x4262a7u); f_005d8a20();
L_004262a7:; BB(0x004262a7);
    /* 004262a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004262a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004262aa: ret 8 */ FN_RET(0x00426260); r_esp += 12; return;
}

void f_004262b0(void) /* sub_4262B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004262b0);
    /* 004262b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004262b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004262b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004262b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004262b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004262ba: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004262bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004262c0: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 004262c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004262c7: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004262cb: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004262cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004262d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004262d2: ret 0xc */ FN_RET(0x004262b0); r_esp += 16; return;
}

void f_004262e0(void) /* sub_4262E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004262e0);
    /* 004262e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004262e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004262e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004262e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004262e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004262ea: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004262ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004262f0: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 004262f4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004262f7: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004262fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004262fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004262fe: ret 8 */ FN_RET(0x004262e0); r_esp += 12; return;
}

void f_00426310(void) /* sub_426310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426310);
    /* 00426310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426311: mov ebp, esp */ r_ebp = r_esp;
    /* 00426313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426316: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426319: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426320: jmp 0x42632b */ goto L_0042632b;
L_00426322:; BB(0x00426322);
    /* 00426322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426325: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426328: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042632b:; BB(0x0042632b);
    /* 0042632b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042632f: jge 0x42634c */ if ((fS==fO)) goto L_0042634c;
L_00426331:; BB(0x00426331);
    /* 00426331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426334: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426335: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426339: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042633c: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x426341u); f_004262e0();
    /* 00426341: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00426344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426346: jne 0x42634a */ if (!fZ) goto L_0042634a;
L_00426348:; BB(0x00426348);
    /* 00426348: jmp 0x42634c */ goto L_0042634c;
L_0042634a:; BB(0x0042634a);
    /* 0042634a: jmp 0x426322 */ goto L_00426322;
L_0042634c:; BB(0x0042634c);
    /* 0042634c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00426350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426351: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426355: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426359: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042635c: call 0x4262b0 */ r_esp -= 4; W32(r_esp, 0x426361u); f_004262b0();
    /* 00426361: mov esp, ebp */ r_esp = r_ebp;
    /* 00426363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426364: ret 8 */ FN_RET(0x00426310); r_esp += 12; return;
}

void f_00426370(void) /* sub_426370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426370);
    /* 00426370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426371: mov ebp, esp */ r_ebp = r_esp;
    /* 00426373: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426376: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426379: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426380: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426387: jmp 0x426392 */ goto L_00426392;
L_00426389:; BB(0x00426389);
    /* 00426389: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042638c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042638f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426392:; BB(0x00426392);
    /* 00426392: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426396: jge 0x4263ba */ if ((fS==fO)) goto L_004263ba;
L_00426398:; BB(0x00426398);
    /* 00426398: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042639b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042639c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042639f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004263a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263a3: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x4263a8u); f_004262e0();
    /* 004263a8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004263ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004263ad: je 0x4263b8 */ if (fZ) goto L_004263b8;
L_004263af:; BB(0x004263af);
    /* 004263af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004263b2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004263b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004263b8:; BB(0x004263b8);
    /* 004263b8: jmp 0x426389 */ goto L_00426389;
L_004263ba:; BB(0x004263ba);
    /* 004263ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004263bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004263bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004263c0: ret 4 */ FN_RET(0x00426370); r_esp += 8; return;
}

void f_004263d0(void) /* sub_4263D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004263d0);
    /* 004263d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004263d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004263d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004263d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004263d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004263d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004263db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004263dc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4263e1u); f_005dcb00();
    /* 004263e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004263e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004263e6: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4263ebu); f_005d5a50();
    /* 004263eb: mov esi, eax */ r_esi = r_eax;
    /* 004263ed: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004263f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004263f5: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004263fb: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00426401: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x426403u); call_ind(t); }
    /* 00426403: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00426406: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426408: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042640a: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0042640d: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0042640f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426410: mov esp, ebp */ r_esp = r_ebp;
    /* 00426412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426413: ret 4 */ FN_RET(0x004263d0); r_esp += 8; return;
}

void f_00426420(void) /* sub_426420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426420);
    /* 00426420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426421: mov ebp, esp */ r_ebp = r_esp;
    /* 00426423: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426426: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00426429: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00426430: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00426437: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0042643e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00426445: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042644c: jmp 0x426457 */ goto L_00426457;
L_0042644e:; BB(0x0042644e);
    /* 0042644e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426451: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426454: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426457:; BB(0x00426457);
    /* 00426457: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042645b: jge 0x4264ed */ if ((fS==fO)) goto L_004264ed;
L_00426461:; BB(0x00426461);
    /* 00426461: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426464: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00426468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426469: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42646eu); f_005dcb00();
    /* 0042646e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426471: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00426474: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426477: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42647cu); f_0063aac0();
    /* 0042647c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042647e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00426481: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426483: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426487: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042648a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0042648d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042648f: jne 0x4264e8 */ if (!fZ) goto L_004264e8;
L_00426491:; BB(0x00426491);
    /* 00426491: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426494: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00426498: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426499: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42649eu); f_005dcb00();
    /* 0042649e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004264a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004264a4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004264a7: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 004264ad: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 004264b0: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 004264b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004264b6: jne 0x4264e8 */ if (!fZ) goto L_004264e8;
L_004264b8:; BB(0x004264b8);
    /* 004264b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004264bb: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 004264bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004264c0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4264c5u); f_005dcb00();
    /* 004264c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004264c8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004264cb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004264ce: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 004264d4: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 004264d7: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 004264db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004264dd: jne 0x4264e8 */ if (!fZ) goto L_004264e8;
L_004264df:; BB(0x004264df);
    /* 004264df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004264e2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004264e6: jmp 0x4264f0 */ goto L_004264f0;
L_004264e8:; BB(0x004264e8);
    /* 004264e8: jmp 0x42644e */ goto L_0042644e;
L_004264ed:; BB(0x004264ed);
    /* 004264ed: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004264f0:; BB(0x004264f0);
    /* 004264f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004264f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004264f3: ret  */ FN_RET(0x00426420); r_esp += 4; return;
}

void f_00426500(void) /* sub_426500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426500);
    /* 00426500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426501: mov ebp, esp */ r_ebp = r_esp;
    /* 00426503: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426506: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042650c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042650e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426511: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426518: jmp 0x426523 */ goto L_00426523;
L_0042651a:; BB(0x0042651a);
    /* 0042651a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042651d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426520: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00426523:; BB(0x00426523);
    /* 00426523: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426527: jge 0x42654e */ if ((fS==fO)) goto L_0042654e;
L_00426529:; BB(0x00426529);
    /* 00426529: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042652b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042652e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042652f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426532: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426535: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426538: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0042653c: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x426541u); f_005cb7d0();
    /* 00426541: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00426544: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426546: je 0x42654c */ if (fZ) goto L_0042654c;
L_00426548:; BB(0x00426548);
    /* 00426548: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042654a: jmp 0x426550 */ goto L_00426550;
L_0042654c:; BB(0x0042654c);
    /* 0042654c: jmp 0x42651a */ goto L_0042651a;
L_0042654e:; BB(0x0042654e);
    /* 0042654e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00426550:; BB(0x00426550);
    /* 00426550: mov esp, ebp */ r_esp = r_ebp;
    /* 00426552: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426553: ret 4 */ FN_RET(0x00426500); r_esp += 8; return;
}

void f_00426560(void) /* sub_426560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426560);
    /* 00426560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426561: mov ebp, esp */ r_ebp = r_esp;
    /* 00426563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426566: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426569: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426570: jmp 0x42657b */ goto L_0042657b;
L_00426572:; BB(0x00426572);
    /* 00426572: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426575: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426578: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042657b:; BB(0x0042657b);
    /* 0042657b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042657f: jge 0x426597 */ if ((fS==fO)) goto L_00426597;
L_00426581:; BB(0x00426581);
    /* 00426581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426584: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426587: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0042658b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042658e: jne 0x426595 */ if (!fZ) goto L_00426595;
L_00426590:; BB(0x00426590);
    /* 00426590: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426593: jmp 0x42659a */ goto L_0042659a;
L_00426595:; BB(0x00426595);
    /* 00426595: jmp 0x426572 */ goto L_00426572;
L_00426597:; BB(0x00426597);
    /* 00426597: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0042659a:; BB(0x0042659a);
    /* 0042659a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042659c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042659d: ret 4 */ FN_RET(0x00426560); r_esp += 8; return;
}

void f_004265a0(void) /* sub_4265A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004265a0);
    /* 004265a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004265a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004265a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004265a6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004265a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004265ac: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004265ae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004265b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004265b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004265b7: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 004265bb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004265be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004265c1: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004265c4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004265c7: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 004265cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004265cd: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004265d0: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 004265d3: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 004265d7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004265da: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004265dd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004265e0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004265e3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004265e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004265e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004265eb: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004265ef: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004265f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004265f5: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004265f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004265fb: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 004265ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426601: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00426604: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00426607: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0042660b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042660e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00426611: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00426614: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426617: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0042661a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042661c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042661d: ret 8 */ FN_RET(0x004265a0); r_esp += 12; return;
}

void f_00426620(void) /* sub_426620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426620);
    /* 00426620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426621: mov ebp, esp */ r_ebp = r_esp;
    /* 00426623: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426626: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426629: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042662b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042662d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x426632u); f_0064c8a0();
    /* 00426632: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426635: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426638: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042663b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042663e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042663f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426642: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426643: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426646: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426647: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42664cu); f_005dcb00();
    /* 0042664c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042664f: mov ecx, eax */ r_ecx = r_eax;
    /* 00426651: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x426656u); f_005d5cf0();
    /* 00426656: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426659: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042665c: mov byte ptr [eax + 0xd4], 1 */ W8((u32)(r_eax+0xd4u), 0x1u);
    /* 00426663: mov esp, ebp */ r_esp = r_ebp;
    /* 00426665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426666: ret 4 */ FN_RET(0x00426620); r_esp += 8; return;
}

void f_00426670(void) /* sub_426670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426670);
    /* 00426670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426671: mov ebp, esp */ r_ebp = r_esp;
    /* 00426673: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426676: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426679: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042667c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042667e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00426681: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426688: jmp 0x426693 */ goto L_00426693;
L_0042668a:; BB(0x0042668a);
    /* 0042668a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042668d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426690: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00426693:; BB(0x00426693);
    /* 00426693: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426697: jge 0x4266af */ if ((fS==fO)) goto L_004266af;
L_00426699:; BB(0x00426699);
    /* 00426699: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042669c: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042669f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004266a2: cmp dword ptr [eax + edx*8 + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004266a7: jle 0x4266ad */ if ((fZ||fS!=fO)) goto L_004266ad;
L_004266a9:; BB(0x004266a9);
    /* 004266a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004266ab: jmp 0x4266b1 */ goto L_004266b1;
L_004266ad:; BB(0x004266ad);
    /* 004266ad: jmp 0x42668a */ goto L_0042668a;
L_004266af:; BB(0x004266af);
    /* 004266af: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004266b1:; BB(0x004266b1);
    /* 004266b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004266b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004266b4: ret 4 */ FN_RET(0x00426670); r_esp += 8; return;
}

void f_004266c0(void) /* sub_4266C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004266c0);
    /* 004266c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004266c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004266c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004266c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004266c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004266cc: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004266ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004266d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004266d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004266d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4266dau); f_005dcb00();
    /* 004266da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004266dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004266df: jne 0x4266e6 */ if (!fZ) goto L_004266e6;
L_004266e1:; BB(0x004266e1);
    /* 004266e1: jmp 0x426805 */ goto L_00426805;
L_004266e6:; BB(0x004266e6);
    /* 004266e6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004266e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004266ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004266ed: call 0x426670 */ r_esp -= 4; W32(r_esp, 0x4266f2u); f_00426670();
    /* 004266f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004266f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004266f7: jne 0x4266fe */ if (!fZ) goto L_004266fe;
L_004266f9:; BB(0x004266f9);
    /* 004266f9: jmp 0x426805 */ goto L_00426805;
L_004266fe:; BB(0x004266fe);
    /* 004266fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426701: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426702: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00426708: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042670a: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00426710: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 00426716: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x426718u); call_ind(t); }
    /* 00426718: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042671f: jmp 0x42672a */ goto L_0042672a;
L_00426721:; BB(0x00426721);
    /* 00426721: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426727: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0042672a:; BB(0x0042672a);
    /* 0042672a: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042672e: jge 0x426778 */ if ((fS==fO)) goto L_00426778;
L_00426730:; BB(0x00426730);
    /* 00426730: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426733: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426736: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426739: cmp dword ptr [edx + ecx*8 + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042673e: jle 0x426776 */ if ((fZ||fS!=fO)) goto L_00426776;
L_00426740:; BB(0x00426740);
    /* 00426740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426742: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426744: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426747: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042674a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042674d: lea edx, [ecx + eax*8 + 0x28] */ r_edx = (u32)(r_ecx+r_eax*8+0x28u);
    /* 00426751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426752: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426755: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426758: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042675b: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0042675f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426762: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426765: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426768: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0042676c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042676e: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00426774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x426776u); call_ind(t); }
L_00426776:; BB(0x00426776);
    /* 00426776: jmp 0x426721 */ goto L_00426721;
L_00426778:; BB(0x00426778);
    /* 00426778: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042677b: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042677e: movzx edx, byte ptr [ecx + 0x68] */ r_edx = (u32)R8((u32)(r_ecx+0x68u));
    /* 00426782: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426784: je 0x4267b9 */ if (fZ) goto L_004267b9;
L_00426786:; BB(0x00426786);
    /* 00426786: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042678a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42678fu); f_005dcb00();
    /* 0042678f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426792: mov ecx, eax */ r_ecx = r_eax;
    /* 00426794: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x426799u); f_005d5a50();
    /* 00426799: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042679c: jle 0x4267b9 */ if ((fZ||fS!=fO)) goto L_004267b9;
L_0042679e:; BB(0x0042679e);
    /* 0042679e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004267a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004267a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004267a5: call 0x426620 */ r_esp -= 4; W32(r_esp, 0x4267aau); f_00426620();
    /* 004267aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004267ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004267ae: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004267b4: call 0x41f9c0 */ r_esp -= 4; W32(r_esp, 0x4267b9u); f_0041f9c0();
L_004267b9:; BB(0x004267b9);
    /* 004267b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004267bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004267bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4267c2u); f_005dcb00();
    /* 004267c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004267c5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004267c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004267cb: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 004267d2: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004267d8: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x4267ddu); f_0041f1b0();
    /* 004267dd: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004267e3: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x4267e8u); f_005db890();
    /* 004267e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004267ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004267ec: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 004267f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004267f5: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004267fb: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004267fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426800: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00426803: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x426805u); call_ind(t); }
L_00426805:; BB(0x00426805);
    /* 00426805: mov esp, ebp */ r_esp = r_ebp;
    /* 00426807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426808: ret 4 */ FN_RET(0x004266c0); r_esp += 8; return;
}

void f_00426810(void) /* sub_426810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426810);
    /* 00426810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426811: mov ebp, esp */ r_ebp = r_esp;
    /* 00426813: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426816: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426817: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042681a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426821: jmp 0x42682c */ goto L_0042682c;
L_00426823:; BB(0x00426823);
    /* 00426823: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426826: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426829: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042682c:; BB(0x0042682c);
    /* 0042682c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426830: jge 0x426906 */ if ((fS==fO)) goto L_00426906;
L_00426836:; BB(0x00426836);
    /* 00426836: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426839: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042683b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042683e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426845: jmp 0x426850 */ goto L_00426850;
L_00426847:; BB(0x00426847);
    /* 00426847: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042684a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042684d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00426850:; BB(0x00426850);
    /* 00426850: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426854: jge 0x4268ec */ if ((fS==fO)) goto L_004268ec;
L_0042685a:; BB(0x0042685a);
    /* 0042685a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042685d: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426860: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00426863: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426868: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426869: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042686c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042686f: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00426873: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x426878u); f_005cb7d0();
    /* 00426878: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042687b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042687d: je 0x4268c1 */ if (fZ) goto L_004268c1;
L_0042687f:; BB(0x0042687f);
    /* 0042687f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426882: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426885: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00426889: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042688c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042688f: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00426892: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00426895: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00426899: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042689b: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042689e: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 004268a1: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 004268a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004268a8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004268ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004268ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004268b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004268b4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004268b7: mov dword ptr [esi + ecx*8 + 0x28], edx */ W32((u32)(r_esi+r_ecx*8+0x28u), r_edx);
    /* 004268bb: mov dword ptr [esi + ecx*8 + 0x2c], eax */ W32((u32)(r_esi+r_ecx*8+0x2cu), r_eax);
    /* 004268bf: jmp 0x4268e7 */ goto L_004268e7;
L_004268c1:; BB(0x004268c1);
    /* 004268c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004268c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004268c5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4268cau); f_0064c8a0();
    /* 004268ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004268cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004268d0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004268d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004268d6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004268d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004268dc: mov dword ptr [eax + edx*8 + 0x28], ecx */ W32((u32)(r_eax+r_edx*8+0x28u), r_ecx);
    /* 004268e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004268e3: mov dword ptr [eax + edx*8 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*8+0x2cu), r_ecx);
L_004268e7:; BB(0x004268e7);
    /* 004268e7: jmp 0x426847 */ goto L_00426847;
L_004268ec:; BB(0x004268ec);
    /* 004268ec: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004268ef: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004268f2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004268f5: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004268f8: mov cl, byte ptr [eax + 0xd4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xd4u))) & 0xffu);
    /* 004268fe: mov byte ptr [edx + 0x68], cl */ W8((u32)(r_edx+0x68u), (u8)r_ecx);
    /* 00426901: jmp 0x426823 */ goto L_00426823;
L_00426906:; BB(0x00426906);
    /* 00426906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426907: mov esp, ebp */ r_esp = r_ebp;
    /* 00426909: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042690a: ret  */ FN_RET(0x00426810); r_esp += 4; return;
}

void f_00426910(void) /* sub_426910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426910);
    /* 00426910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426911: mov ebp, esp */ r_ebp = r_esp;
    /* 00426913: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426919: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042691c: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042691f: mov byte ptr [eax + 0xd4], 0 */ W8((u32)(r_eax+0xd4u), 0x0u);
    /* 00426926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426928: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042692a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42692fu); f_0064c8a0();
    /* 0042692f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426932: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426935: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00426938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042693b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042693c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042693f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426940: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426944: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426949u); f_005dcb00();
    /* 00426949: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042694c: mov ecx, eax */ r_ecx = r_eax;
    /* 0042694e: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x426953u); f_005d5cf0();
    /* 00426953: mov esp, ebp */ r_esp = r_ebp;
    /* 00426955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426956: ret 4 */ FN_RET(0x00426910); r_esp += 8; return;
}

void f_00426960(void) /* sub_426960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426960);
    /* 00426960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426961: mov ebp, esp */ r_ebp = r_esp;
    /* 00426963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426969: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426970: jmp 0x42697b */ goto L_0042697b;
L_00426972:; BB(0x00426972);
    /* 00426972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426975: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426978: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042697b:; BB(0x0042697b);
    /* 0042697b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042697f: jge 0x426997 */ if ((fS==fO)) goto L_00426997;
L_00426981:; BB(0x00426981);
    /* 00426981: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426984: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426985: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426988: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x42698du); f_00426370();
    /* 0042698d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042698f: je 0x426995 */ if (fZ) goto L_00426995;
L_00426991:; BB(0x00426991);
    /* 00426991: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00426993: jmp 0x426999 */ goto L_00426999;
L_00426995:; BB(0x00426995);
    /* 00426995: jmp 0x426972 */ goto L_00426972;
L_00426997:; BB(0x00426997);
    /* 00426997: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00426999:; BB(0x00426999);
    /* 00426999: mov esp, ebp */ r_esp = r_ebp;
    /* 0042699b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042699c: ret  */ FN_RET(0x00426960); r_esp += 4; return;
}

void f_004269a0(void) /* sub_4269A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004269a0);
    /* 004269a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004269a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004269a3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004269a6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004269a9: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 004269b0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004269b7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 004269be: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 004269c5: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 004269cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004269ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004269d1: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x4269d6u); f_00426370();
    /* 004269d6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004269d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004269e0: jmp 0x4269eb */ goto L_004269eb;
L_004269e2:; BB(0x004269e2);
    /* 004269e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004269e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004269e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004269eb:; BB(0x004269eb);
    /* 004269eb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004269ef: jge 0x426a38 */ if ((fS==fO)) goto L_00426a38;
L_004269f1:; BB(0x004269f1);
    /* 004269f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004269f4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004269f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004269f9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004269fc: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x426a01u); f_00426370();
    /* 00426a01: cmp dword ptr [ebp - 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a04: jne 0x426a36 */ if (!fZ) goto L_00426a36;
L_00426a06:; BB(0x00426a06);
    /* 00426a06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a09: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00426a0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a0e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426a13u); f_005dcb00();
    /* 00426a13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426a16: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00426a19: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426a1c: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00426a22: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00426a25: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00426a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a2b: je 0x426a36 */ if (fZ) goto L_00426a36;
L_00426a2d:; BB(0x00426a2d);
    /* 00426a2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a30: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00426a34: jmp 0x426a3b */ goto L_00426a3b;
L_00426a36:; BB(0x00426a36);
    /* 00426a36: jmp 0x4269e2 */ goto L_004269e2;
L_00426a38:; BB(0x00426a38);
    /* 00426a38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_00426a3b:; BB(0x00426a3b);
    /* 00426a3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00426a3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426a3e: ret  */ FN_RET(0x004269a0); r_esp += 4; return;
}

void f_00426a40(void) /* sub_426A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426a40);
    /* 00426a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00426a43: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426a46: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00426a49: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00426a50: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00426a57: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00426a5e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00426a65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426a6c: jmp 0x426a77 */ goto L_00426a77;
L_00426a6e:; BB(0x00426a6e);
    /* 00426a6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a71: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426a74: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426a77:; BB(0x00426a77);
    /* 00426a77: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426a7b: jge 0x426abb */ if ((fS==fO)) goto L_00426abb;
L_00426a7d:; BB(0x00426a7d);
    /* 00426a7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a80: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00426a84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a85: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426a88: call 0x426500 */ r_esp -= 4; W32(r_esp, 0x426a8du); f_00426500();
    /* 00426a8d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00426a90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426a92: je 0x426ab9 */ if (fZ) goto L_00426ab9;
L_00426a94:; BB(0x00426a94);
    /* 00426a94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426a97: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00426a9b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426a9e: mov cl, byte ptr [eax + edx + 0xa5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx+0xa5u))) & 0xffu);
    /* 00426aa5: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 00426aa8: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00426aac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426aae: jne 0x426ab9 */ if (!fZ) goto L_00426ab9;
L_00426ab0:; BB(0x00426ab0);
    /* 00426ab0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426ab3: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00426ab7: jmp 0x426abe */ goto L_00426abe;
L_00426ab9:; BB(0x00426ab9);
    /* 00426ab9: jmp 0x426a6e */ goto L_00426a6e;
L_00426abb:; BB(0x00426abb);
    /* 00426abb: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00426abe:; BB(0x00426abe);
    /* 00426abe: mov esp, ebp */ r_esp = r_ebp;
    /* 00426ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426ac1: ret  */ FN_RET(0x00426a40); r_esp += 4; return;
}

void f_00426ad0(void) /* sub_426AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426ad0);
    /* 00426ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00426ad3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426ad6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00426ad9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426adc: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00426ade: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426ae1: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00426ae5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ae7: je 0x426b5a */ if (fZ) goto L_00426b5a;
L_00426ae9:; BB(0x00426ae9);
    /* 00426ae9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426aec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426aef: mov dword ptr [eax + edx*4 + 0xb0], 4 */ W32((u32)(r_eax+r_edx*4+0xb0u), 0x4u);
    /* 00426afa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426afc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426afe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x426b03u); f_0064c8a0();
    /* 00426b03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426b06: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00426b09: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00426b0c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426b0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426b10: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426b13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426b14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426b18: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426b1du); f_005dcb00();
    /* 00426b1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426b20: mov ecx, eax */ r_ecx = r_eax;
    /* 00426b22: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x426b27u); f_005d6050();
    /* 00426b27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426b29: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426b2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426b2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426b30: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426b33: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00426b37: call 0x427af0 */ r_esp -= 4; W32(r_esp, 0x426b3cu); f_00427af0();
    /* 00426b3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426b3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426b40: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426b45u); f_005dcb00();
    /* 00426b45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426b48: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00426b4b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00426b4e: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 00426b55: jmp 0x426c1a */ goto L_00426c1a;
L_00426b5a:; BB(0x00426b5a);
    /* 00426b5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426b5d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426b60: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00426b64: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00426b67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426b6a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00426b6d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00426b70: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00426b74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426b76: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00426b79: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00426b7c: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00426b80: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00426b83: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00426b86: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00426b89: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00426b8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426b8f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426b92: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00426b96: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00426b99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426b9c: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00426b9f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00426ba2: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00426ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426ba8: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00426bab: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00426bae: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00426bb2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00426bb5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00426bb8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426bbb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00426bbe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426bc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426bc6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x426bcbu); f_0064c8a0();
    /* 00426bcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426bce: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00426bd1: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00426bd4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00426bd7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00426bda: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00426bdd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00426be0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426be3: fld qword ptr [0x6b3740] */ FPUSH(R_F64((u32)(0x6b3740u)));
    /* 00426be9: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00426bec: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00426bef: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x426bf4u); f_0064c560();
    /* 00426bf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426bf8: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00426bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426bfc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426bff: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426c02: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00426c06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426c09: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00426c0c: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00426c10: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00426c12: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00426c18: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x426c1au); call_ind(t); }
L_00426c1a:; BB(0x00426c1a);
    /* 00426c1a: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00426c1f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00426c22: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00426c25: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c28: mov byte ptr [ecx + 0xa9], 0 */ W8((u32)(r_ecx+0xa9u), 0x0u);
    /* 00426c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00426c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426c32: ret 8 */ FN_RET(0x00426ad0); r_esp += 12; return;
}

void f_00426c40(void) /* sub_426C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426c40);
    /* 00426c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00426c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426c46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426c49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426c50: jmp 0x426c5b */ goto L_00426c5b;
L_00426c52:; BB(0x00426c52);
    /* 00426c52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426c55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426c58: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426c5b:; BB(0x00426c5b);
    /* 00426c5b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426c5f: jge 0x426c70 */ if ((fS==fO)) goto L_00426c70;
L_00426c61:; BB(0x00426c61);
    /* 00426c61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426c64: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c67: mov byte ptr [ecx + 0xa5], 0 */ W8((u32)(r_ecx+0xa5u), 0x0u);
    /* 00426c6e: jmp 0x426c52 */ goto L_00426c52;
L_00426c70:; BB(0x00426c70);
    /* 00426c70: mov esp, ebp */ r_esp = r_ebp;
    /* 00426c72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426c73: ret  */ FN_RET(0x00426c40); r_esp += 4; return;
}

void f_00426c80(void) /* sub_426C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426c80);
    /* 00426c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00426c83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426c87: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00426c8a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426c8c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00426c92: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x426c97u); f_005df7b0();
    /* 00426c97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00426c9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426c9c: je 0x426d34 */ if (fZ) goto L_00426d34;
L_00426ca2:; BB(0x00426ca2);
    /* 00426ca2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426ca5: movzx edx, byte ptr [ecx + 0xa4] */ r_edx = (u32)R8((u32)(r_ecx+0xa4u));
    /* 00426cac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cae: jne 0x426d34 */ if (!fZ) goto L_00426d34;
L_00426cb4:; BB(0x00426cb4);
    /* 00426cb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426cb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426cb8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426cbdu); f_005dcb00();
    /* 00426cbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426cc0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00426cc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426cc6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x426ccbu); f_0063aac0();
    /* 00426ccb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00426ccd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426cd0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cd4: je 0x426cf2 */ if (fZ) goto L_00426cf2;
L_00426cd6:; BB(0x00426cd6);
    /* 00426cd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426cd9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x426cdeu); f_0063aac0();
    /* 00426cde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00426ce0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00426ce3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ce7: je 0x426cf2 */ if (fZ) goto L_00426cf2;
L_00426ce9:; BB(0x00426ce9);
    /* 00426ce9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00426cf0: jmp 0x426cf9 */ goto L_00426cf9;
L_00426cf2:; BB(0x00426cf2);
    /* 00426cf2: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00426cf9:; BB(0x00426cf9);
    /* 00426cf9: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 00426cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426cff: je 0x426d34 */ if (fZ) goto L_00426d34;
L_00426d01:; BB(0x00426d01);
    /* 00426d01: movzx esi, byte ptr [ebp + 0xc] */ r_esi = (u32)R8((u32)(r_ebp+0xcu));
    /* 00426d05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426d08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d09: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00426d0f: call 0x41e290 */ r_esp -= 4; W32(r_esp, 0x426d14u); f_0041e290();
    /* 00426d14: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00426d17: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426d19: je 0x426d34 */ if (fZ) goto L_00426d34;
L_00426d1b:; BB(0x00426d1b);
    /* 00426d1b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426d1e: mov byte ptr [eax + 0xa4], 1 */ W8((u32)(r_eax+0xa4u), 0x1u);
    /* 00426d25: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00426d2b: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x426d30u); f_0057c140();
    /* 00426d30: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00426d32: jmp 0x426d36 */ goto L_00426d36;
L_00426d34:; BB(0x00426d34);
    /* 00426d34: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00426d36:; BB(0x00426d36);
    /* 00426d36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426d37: mov esp, ebp */ r_esp = r_ebp;
    /* 00426d39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426d3a: ret 8 */ FN_RET(0x00426c80); r_esp += 12; return;
}

void f_00426d40(void) /* sub_426D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426d40);
    /* 00426d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00426d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00426d47: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00426d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426d4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426d4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d52: call 0x426c80 */ r_esp -= 4; W32(r_esp, 0x426d57u); f_00426c80();
    /* 00426d57: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00426d5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426d5c: je 0x426d62 */ if (fZ) goto L_00426d62;
L_00426d5e:; BB(0x00426d5e);
    /* 00426d5e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00426d60: jmp 0x426d8b */ goto L_00426d8b;
L_00426d62:; BB(0x00426d62);
    /* 00426d62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d65: mov byte ptr [eax + 0xa4], 0 */ W8((u32)(r_eax+0xa4u), 0x0u);
    /* 00426d6c: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00426d6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426d73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426d74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d77: call 0x426ad0 */ r_esp -= 4; W32(r_esp, 0x426d7cu); f_00426ad0();
    /* 00426d7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426d7f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426d82: mov byte ptr [eax + 0xa5], 1 */ W8((u32)(r_eax+0xa5u), 0x1u);
    /* 00426d89: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00426d8b:; BB(0x00426d8b);
    /* 00426d8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00426d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426d8e: ret 8 */ FN_RET(0x00426d40); r_esp += 12; return;
}

void f_00426da0(void) /* sub_426DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426da0);
    /* 00426da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00426da3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426da6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00426da9: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00426db0: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00426db7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00426dbe: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00426dc5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426dcc: jmp 0x426dd7 */ goto L_00426dd7;
L_00426dce:; BB(0x00426dce);
    /* 00426dce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426dd1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426dd4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426dd7:; BB(0x00426dd7);
    /* 00426dd7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426ddb: jge 0x426e6d */ if ((fS==fO)) goto L_00426e6d;
L_00426de1:; BB(0x00426de1);
    /* 00426de1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426de4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00426de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426de9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426deeu); f_005dcb00();
    /* 00426dee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426df1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00426df4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426df7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x426dfcu); f_0063aac0();
    /* 00426dfc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00426dfe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00426e01: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426e03: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426e07: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00426e0a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00426e0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426e0f: jne 0x426e68 */ if (!fZ) goto L_00426e68;
L_00426e11:; BB(0x00426e11);
    /* 00426e11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e14: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00426e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426e19: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426e1eu); f_005dcb00();
    /* 00426e1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426e21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00426e24: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426e27: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00426e2d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00426e30: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00426e34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426e36: jne 0x426e68 */ if (!fZ) goto L_00426e68;
L_00426e38:; BB(0x00426e38);
    /* 00426e38: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e3b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00426e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426e40: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426e45u); f_005dcb00();
    /* 00426e45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426e48: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00426e4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426e4e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00426e54: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00426e57: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00426e5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426e5d: jne 0x426e68 */ if (!fZ) goto L_00426e68;
L_00426e5f:; BB(0x00426e5f);
    /* 00426e5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426e62: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00426e66: jmp 0x426e70 */ goto L_00426e70;
L_00426e68:; BB(0x00426e68);
    /* 00426e68: jmp 0x426dce */ goto L_00426dce;
L_00426e6d:; BB(0x00426e6d);
    /* 00426e6d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00426e70:; BB(0x00426e70);
    /* 00426e70: mov esp, ebp */ r_esp = r_ebp;
    /* 00426e72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426e73: ret  */ FN_RET(0x00426da0); r_esp += 4; return;
}

void f_00426e80(void) /* sub_426E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426e80);
    /* 00426e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00426e83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426e86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00426e89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e8b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e8d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426e90: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426e96: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x426e9bu); f_00462ba0();
    /* 00426e9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426e9e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00426ea1: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ea5: jne 0x426ec6 */ if (!fZ) goto L_00426ec6;
L_00426ea7:; BB(0x00426ea7);
    /* 00426ea7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426ea9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426eab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00426eae: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426eb5: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x426ebau); f_004630c0();
    /* 00426eba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426ebd: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426ec0: jge 0x426ec6 */ if ((fS==fO)) goto L_00426ec6;
L_00426ec2:; BB(0x00426ec2);
    /* 00426ec2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00426ec4: jmp 0x426ec8 */ goto L_00426ec8;
L_00426ec6:; BB(0x00426ec6);
    /* 00426ec6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00426ec8:; BB(0x00426ec8);
    /* 00426ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 00426eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426ecb: ret  */ FN_RET(0x00426e80); r_esp += 4; return;
}

void f_00426ed0(void) /* sub_426ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00426ed0);
    /* 00426ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00426ed3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426ed6: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00426ed9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426edc: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00426ede: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00426ee1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426ee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ee5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426eeau); f_005dcb00();
    /* 00426eea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426eed: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00426ef0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426ef3: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x426ef8u); f_005d52e0();
    /* 00426ef8: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00426efb: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00426efe: movsx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd7u));
    /* 00426f02: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00426f05: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00426f0c: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00426f10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426f12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426f14: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x426f19u); f_0064c8a0();
    /* 00426f19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f1c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00426f1f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00426f22: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426f25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f26: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426f29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f2e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426f33u); f_005dcb00();
    /* 00426f33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f36: mov ecx, eax */ r_ecx = r_eax;
    /* 00426f38: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x426f3du); f_005d6050();
    /* 00426f3d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00426f40: call 0x426e80 */ r_esp -= 4; W32(r_esp, 0x426f45u); f_00426e80();
    /* 00426f45: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00426f48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426f4a: je 0x427060 */ if (fZ) goto L_00427060;
L_00426f50:; BB(0x00426f50);
    /* 00426f50: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426f52: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00426f55: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426f5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00426f5f: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00426f62: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00426f65: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00426f69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f6a: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x426f6fu); f_00462da0();
    /* 00426f6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f72: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00426f75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426f7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f7d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426f80: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00426f83: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00426f87: call 0x427af0 */ r_esp -= 4; W32(r_esp, 0x426f8cu); f_00427af0();
    /* 00426f8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00426f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426f90: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426f95u); f_005dcb00();
    /* 00426f95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f98: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00426f9b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00426f9e: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x426fa3u); f_005d52e0();
    /* 00426fa3: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00426fa6: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 00426fa9: movsx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffcfu));
    /* 00426fad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00426fb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426fb3: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426fb6: je 0x426fc7 */ if (fZ) goto L_00426fc7;
L_00426fb8:; BB(0x00426fb8);
    /* 00426fb8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426fbc: jne 0x426fc7 */ if (!fZ) goto L_00426fc7;
L_00426fbe:; BB(0x00426fbe);
    /* 00426fbe: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00426fc5: jmp 0x426fce */ goto L_00426fce;
L_00426fc7:; BB(0x00426fc7);
    /* 00426fc7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00426fce:; BB(0x00426fce);
    /* 00426fce: mov dl, byte ptr [ebp - 0x54] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffacu))) & 0xffu);
    /* 00426fd1: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00426fd4: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00426fd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426fda: jne 0x426ff3 */ if (!fZ) goto L_00426ff3;
L_00426fdc:; BB(0x00426fdc);
    /* 00426fdc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426fdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00426fe0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426fe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426fe4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00426fe7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00426fea: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00426fee: call 0x427af0 */ r_esp -= 4; W32(r_esp, 0x426ff3u); f_00427af0();
L_00426ff3:; BB(0x00426ff3);
    /* 00426ff3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426ff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426ff7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x426ffcu); f_005dcb00();
    /* 00426ffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426fff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00427002: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00427005: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x42700au); f_005d52e0();
    /* 0042700a: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0042700d: mov byte ptr [ebp - 0x39], al */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_eax);
    /* 00427010: movsx ecx, byte ptr [ebp - 0x39] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffc7u));
    /* 00427014: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427017: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042701a: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042701d: je 0x42702e */ if (fZ) goto L_0042702e;
L_0042701f:; BB(0x0042701f);
    /* 0042701f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427023: jne 0x42702e */ if (!fZ) goto L_0042702e;
L_00427025:; BB(0x00427025);
    /* 00427025: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0042702c: jmp 0x427035 */ goto L_00427035;
L_0042702e:; BB(0x0042702e);
    /* 0042702e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00427035:; BB(0x00427035);
    /* 00427035: mov al, byte ptr [ebp - 0x58] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa8u))) & 0xffu);
    /* 00427038: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0042703b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042703e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427041: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427044: mov dword ptr [edx + ecx*4 + 0xb0], eax */ W32((u32)(r_edx+r_ecx*4+0xb0u), r_eax);
    /* 0042704b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042704e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427051: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427054: mov dword ptr [edx + ecx*4 + 0xc0], eax */ W32((u32)(r_edx+r_ecx*4+0xc0u), r_eax);
    /* 0042705b: jmp 0x427144 */ goto L_00427144;
L_00427060:; BB(0x00427060);
    /* 00427060: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427062: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427066: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00427069: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042706c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00427070: call 0x427af0 */ r_esp -= 4; W32(r_esp, 0x427075u); f_00427af0();
    /* 00427075: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427078: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427079: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42707eu); f_005dcb00();
    /* 0042707e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427081: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427084: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00427087: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x42708cu); f_005d52e0();
    /* 0042708c: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0042708f: mov byte ptr [ebp - 0x41], dl */ W8((u32)(r_ebp+0xffffffbfu), (u8)r_edx);
    /* 00427092: movsx eax, byte ptr [ebp - 0x41] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffbfu));
    /* 00427096: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00427099: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042709c: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042709f: je 0x4270b0 */ if (fZ) goto L_004270b0;
L_004270a1:; BB(0x004270a1);
    /* 004270a1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004270a5: jne 0x4270b0 */ if (!fZ) goto L_004270b0;
L_004270a7:; BB(0x004270a7);
    /* 004270a7: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 004270ae: jmp 0x4270b7 */ goto L_004270b7;
L_004270b0:; BB(0x004270b0);
    /* 004270b0: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004270b7:; BB(0x004270b7);
    /* 004270b7: mov dl, byte ptr [ebp - 0x5c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa4u))) & 0xffu);
    /* 004270ba: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 004270bd: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004270c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004270c3: jne 0x4270da */ if (!fZ) goto L_004270da;
L_004270c5:; BB(0x004270c5);
    /* 004270c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004270c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004270ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004270cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004270ce: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004270d1: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 004270d5: call 0x427af0 */ r_esp -= 4; W32(r_esp, 0x4270dau); f_00427af0();
L_004270da:; BB(0x004270da);
    /* 004270da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004270dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004270de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4270e3u); f_005dcb00();
    /* 004270e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004270e6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004270e9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004270ec: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x4270f1u); f_005d52e0();
    /* 004270f1: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 004270f4: mov byte ptr [ebp - 0x49], dl */ W8((u32)(r_ebp+0xffffffb7u), (u8)r_edx);
    /* 004270f7: movsx eax, byte ptr [ebp - 0x49] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffb7u));
    /* 004270fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004270fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427101: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427104: je 0x427115 */ if (fZ) goto L_00427115;
L_00427106:; BB(0x00427106);
    /* 00427106: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042710a: jne 0x427115 */ if (!fZ) goto L_00427115;
L_0042710c:; BB(0x0042710c);
    /* 0042710c: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00427113: jmp 0x42711c */ goto L_0042711c;
L_00427115:; BB(0x00427115);
    /* 00427115: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0042711c:; BB(0x0042711c);
    /* 0042711c: mov dl, byte ptr [ebp - 0x60] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa0u))) & 0xffu);
    /* 0042711f: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00427122: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427125: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427128: mov dword ptr [ecx + eax*4 + 0xb0], 1 */ W32((u32)(r_ecx+r_eax*4+0xb0u), 0x1u);
    /* 00427133: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427136: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427139: mov dword ptr [eax + edx*4 + 0xc0], 3 */ W32((u32)(r_eax+r_edx*4+0xc0u), 0x3u);
L_00427144:; BB(0x00427144);
    /* 00427144: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427147: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427148: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042714b: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x427150u); f_004272e0();
    /* 00427150: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00427153: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427155: jne 0x427190 */ if (!fZ) goto L_00427190;
L_00427157:; BB(0x00427157);
    /* 00427157: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427159: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042715c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042715d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427160: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x427165u); f_00426370();
    /* 00427165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427166: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427169: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042716c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042716f: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427174: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x427179u); f_00462ba0();
    /* 00427179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042717c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042717e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427181: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00427184: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00427187: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042718a: mov byte ptr [edx + 0xd8], cl */ W8((u32)(r_edx+0xd8u), (u8)r_ecx);
L_00427190:; BB(0x00427190);
    /* 00427190: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00427194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427196: je 0x4271e3 */ if (fZ) goto L_004271e3;
L_00427198:; BB(0x00427198);
    /* 00427198: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042719b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042719c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4271a1u); f_005dcb00();
    /* 004271a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004271a4: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004271a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004271a9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004271ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004271ae: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004271b1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004271b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4271b6u); call_ind(t); }
    /* 004271b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004271b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004271ba: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4271bfu); f_0064c8a0();
    /* 004271bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004271c2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004271c5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004271c8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004271cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004271cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004271cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004271d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004271d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004271d4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4271d9u); f_005dcb00();
    /* 004271d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004271dc: mov ecx, eax */ r_ecx = r_eax;
    /* 004271de: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x4271e3u); f_005d6050();
L_004271e3:; BB(0x004271e3);
    /* 004271e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004271e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004271e6: ret 4 */ FN_RET(0x00426ed0); r_esp += 8; return;
}

