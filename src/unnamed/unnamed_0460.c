#include "protos.h"

void f_004601b0(void) /* sub_4601B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004601b0);
    /* 004601b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004601b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004601b3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004601b6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004601b9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004601bc: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004601c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004601c5: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004601c9: je 0x4601f2 */ if (fZ) goto L_004601f2;
L_004601cb:; BB(0x004601cb);
    /* 004601cb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004601ce: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 004601d4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004601d7: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004601db: je 0x4601f2 */ if (fZ) goto L_004601f2;
L_004601dd:; BB(0x004601dd);
    /* 004601dd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004601e0: movzx edx, byte ptr [ecx + 0x114] */ r_edx = (u32)R8((u32)(r_ecx+0x114u));
    /* 004601e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004601e9: jne 0x4601f2 */ if (!fZ) goto L_004601f2;
L_004601eb:; BB(0x004601eb);
    /* 004601eb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004601ed: jmp 0x46029f */ goto L_0046029f;
L_004601f2:; BB(0x004601f2);
    /* 004601f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004601f9: jmp 0x460204 */ goto L_00460204;
L_004601fb:; BB(0x004601fb);
    /* 004601fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004601fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460201: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460204:; BB(0x00460204);
    /* 00460204: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460208: jge 0x46029d */ if ((fS==fO)) goto L_0046029d;
L_0046020e:; BB(0x0046020e);
    /* 0046020e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00460211: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00460217: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046021a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046021d: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460220: je 0x460298 */ if (fZ) goto L_00460298;
L_00460222:; BB(0x00460222);
    /* 00460222: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460225: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460226: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46022bu); f_005dcb00();
    /* 0046022b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046022e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00460231: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460234: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460239u); f_0063aac0();
    /* 00460239: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046023b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0046023e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460240: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460244: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00460247: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046024a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046024c: jne 0x460298 */ if (!fZ) goto L_00460298;
L_0046024e:; BB(0x0046024e);
    /* 0046024e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460252: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460257u); f_005dcb00();
    /* 00460257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046025a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046025d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00460260: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00460266: mov byte ptr [ebp - 0x1d], cl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_ecx);
    /* 00460269: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 0046026d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046026f: jne 0x460298 */ if (!fZ) goto L_00460298;
L_00460271:; BB(0x00460271);
    /* 00460271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460275: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46027au); f_005dcb00();
    /* 0046027a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046027d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00460280: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460283: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00460289: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 0046028c: movzx eax, byte ptr [ebp - 0x25] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 00460290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460292: jne 0x460298 */ if (!fZ) goto L_00460298;
L_00460294:; BB(0x00460294);
    /* 00460294: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00460296: jmp 0x46029f */ goto L_0046029f;
L_00460298:; BB(0x00460298);
    /* 00460298: jmp 0x4601fb */ goto L_004601fb;
L_0046029d:; BB(0x0046029d);
    /* 0046029d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0046029f:; BB(0x0046029f);
    /* 0046029f: mov esp, ebp */ r_esp = r_ebp;
    /* 004602a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004602a2: ret  */ FN_RET(0x004601b0); r_esp += 4; return;
}

void f_004603a0(void) /* sub_4603A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004603a0);
    /* 004603a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004603a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004603a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004603a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004603a9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 004603ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004603af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004603b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004603b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004603b6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004603b9: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x4603beu); f_005cb7d0();
    /* 004603be: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004603c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004603c3: jne 0x4603dd */ if (!fZ) goto L_004603dd;
L_004603c5:; BB(0x004603c5);
    /* 004603c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004603c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004603ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004603cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004603ce: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004603d1: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x4603d6u); f_005cb7d0();
    /* 004603d6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004603d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004603db: je 0x4603e1 */ if (fZ) goto L_004603e1;
L_004603dd:; BB(0x004603dd);
    /* 004603dd: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_004603e1:; BB(0x004603e1);
    /* 004603e1: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004603e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004603e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004603e7: ret 4 */ FN_RET(0x004603a0); r_esp += 8; return;
}

void f_004603f0(void) /* sub_4603F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004603f0);
    /* 004603f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004603f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004603f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004603f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004603f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004603fa: cmp dword ptr [eax + 0x104], -1 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460401: jne 0x460407 */ if (!fZ) goto L_00460407;
L_00460403:; BB(0x00460403);
    /* 00460403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460405: jmp 0x460419 */ goto L_00460419;
L_00460407:; BB(0x00460407);
    /* 00460407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046040a: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 00460410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460411: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460416u); f_005dcb00();
    /* 00460416: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460419:; BB(0x00460419);
    /* 00460419: mov esp, ebp */ r_esp = r_ebp;
    /* 0046041b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046041c: ret  */ FN_RET(0x004603f0); r_esp += 4; return;
}

void f_00460420(void) /* sub_460420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460420);
    /* 00460420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460421: mov ebp, esp */ r_ebp = r_esp;
    /* 00460423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046042a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046042d: mov dword ptr [eax + 0x104], ecx */ W32((u32)(r_eax+0x104u), r_ecx);
    /* 00460433: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460436: cmp dword ptr [edx + 0x104], -1 */ {  u32 a = R32((u32)(r_edx+0x104u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046043d: je 0x460456 */ if (fZ) goto L_00460456;
L_0046043f:; BB(0x0046043f);
    /* 0046043f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00460442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460443: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460446: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460447: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460449: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0046044f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x460454u); f_005d8a20();
    /* 00460454: jmp 0x460467 */ goto L_00460467;
L_00460456:; BB(0x00460456);
    /* 00460456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460458: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046045a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046045c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460462: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x460467u); f_005d8a20();
L_00460467:; BB(0x00460467);
    /* 00460467: mov esp, ebp */ r_esp = r_ebp;
    /* 00460469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046046a: ret 8 */ FN_RET(0x00460420); r_esp += 12; return;
}

void f_00460470(void) /* sub_460470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460470);
    /* 00460470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460471: mov ebp, esp */ r_ebp = r_esp;
    /* 00460473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460477: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460479: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046047b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046047e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00460481: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x460486u); f_006437d0();
    /* 00460486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460488: push 0x6ba540 */ { u32 v = 0x6ba540u; r_esp -= 4; W32(r_esp, v); }
    /* 0046048d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046048f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00460491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460494: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00460497: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x46049cu); f_00643930();
    /* 0046049c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046049e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046049f: ret  */ FN_RET(0x00460470); r_esp += 4; return;
}

void f_004604a0(void) /* sub_4604A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004604a0);
    /* 004604a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004604a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004604a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004604a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004604a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004604aa: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004604ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004604b0: lea edx, [ecx + eax + 0x5c] */ r_edx = (u32)(r_ecx+r_eax+0x5cu);
    /* 004604b4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004604b7: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004604bb: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004604bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004604c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004604c2: ret 0xc */ FN_RET(0x004604a0); r_esp += 16; return;
}

void f_004604d0(void) /* sub_4604D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004604d0);
    /* 004604d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004604d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004604d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004604d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004604d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004604da: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004604dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004604e0: lea edx, [ecx + eax + 0x5c] */ r_edx = (u32)(r_ecx+r_eax+0x5cu);
    /* 004604e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004604e7: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004604eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004604ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004604ee: ret 8 */ FN_RET(0x004604d0); r_esp += 12; return;
}

void f_00460500(void) /* sub_460500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460500);
    /* 00460500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460501: mov ebp, esp */ r_ebp = r_esp;
    /* 00460503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460506: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00460509: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460510: jmp 0x46051b */ goto L_0046051b;
L_00460512:; BB(0x00460512);
    /* 00460512: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460515: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460518: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046051b:; BB(0x0046051b);
    /* 0046051b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046051f: jge 0x46053c */ if ((fS==fO)) goto L_0046053c;
L_00460521:; BB(0x00460521);
    /* 00460521: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460524: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460525: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460529: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046052c: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x460531u); f_004604d0();
    /* 00460531: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00460534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460536: jne 0x46053a */ if (!fZ) goto L_0046053a;
L_00460538:; BB(0x00460538);
    /* 00460538: jmp 0x46053c */ goto L_0046053c;
L_0046053a:; BB(0x0046053a);
    /* 0046053a: jmp 0x460512 */ goto L_00460512;
L_0046053c:; BB(0x0046053c);
    /* 0046053c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00460540: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460541: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460545: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460549: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046054c: call 0x4604a0 */ r_esp -= 4; W32(r_esp, 0x460551u); f_004604a0();
    /* 00460551: mov esp, ebp */ r_esp = r_ebp;
    /* 00460553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460554: ret 8 */ FN_RET(0x00460500); r_esp += 12; return;
}

void f_00460560(void) /* sub_460560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460560);
    /* 00460560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460561: mov ebp, esp */ r_ebp = r_esp;
    /* 00460563: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460566: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00460569: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00460570: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460577: jmp 0x460582 */ goto L_00460582;
L_00460579:; BB(0x00460579);
    /* 00460579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046057c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046057f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460582:; BB(0x00460582);
    /* 00460582: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460586: jge 0x4605aa */ if ((fS==fO)) goto L_004605aa;
L_00460588:; BB(0x00460588);
    /* 00460588: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046058b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046058c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046058f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460590: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460593: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x460598u); f_004604d0();
    /* 00460598: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0046059b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046059d: je 0x4605a8 */ if (fZ) goto L_004605a8;
L_0046059f:; BB(0x0046059f);
    /* 0046059f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004605a2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004605a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004605a8:; BB(0x004605a8);
    /* 004605a8: jmp 0x460579 */ goto L_00460579;
L_004605aa:; BB(0x004605aa);
    /* 004605aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004605ad: mov esp, ebp */ r_esp = r_ebp;
    /* 004605af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004605b0: ret 4 */ FN_RET(0x00460560); r_esp += 8; return;
}

void f_004605c0(void) /* sub_4605C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004605c0);
    /* 004605c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004605c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004605c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004605c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004605c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004605cc: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004605cf: mov cl, byte ptr [eax + 0xef] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xefu))) & 0xffu);
    /* 004605d5: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004605d8: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004605dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004605de: je 0x4605fe */ if (fZ) goto L_004605fe;
L_004605e0:; BB(0x004605e0);
    /* 004605e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004605e3: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004605e6: mov cl, byte ptr [eax + 0xea] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xeau))) & 0xffu);
    /* 004605ec: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 004605ef: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 004605f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004605f5: je 0x4605fe */ if (fZ) goto L_004605fe;
L_004605f7:; BB(0x004605f7);
    /* 004605f7: mov eax, 1 */ r_eax = 0x1u;
    /* 004605fc: jmp 0x460635 */ goto L_00460635;
L_004605fe:; BB(0x004605fe);
    /* 004605fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460601: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460604: mov cl, byte ptr [eax + 0xef] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xefu))) & 0xffu);
    /* 0046060a: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 0046060d: movzx edx, byte ptr [ebp - 3] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 00460611: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460613: jne 0x46062c */ if (!fZ) goto L_0046062c;
L_00460615:; BB(0x00460615);
    /* 00460615: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460618: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046061b: mov cl, byte ptr [eax + 0xea] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xeau))) & 0xffu);
    /* 00460621: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 00460624: movzx edx, byte ptr [ebp - 4] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 00460628: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046062a: je 0x460633 */ if (fZ) goto L_00460633;
L_0046062c:; BB(0x0046062c);
    /* 0046062c: mov eax, 2 */ r_eax = 0x2u;
    /* 00460631: jmp 0x460635 */ goto L_00460635;
L_00460633:; BB(0x00460633);
    /* 00460633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00460635:; BB(0x00460635);
    /* 00460635: mov esp, ebp */ r_esp = r_ebp;
    /* 00460637: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460638: ret 4 */ FN_RET(0x004605c0); r_esp += 8; return;
}

void f_00460640(void) /* sub_460640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460640);
    /* 00460640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460641: mov ebp, esp */ r_ebp = r_esp;
    /* 00460643: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460646: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00460647: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046064a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046064e: jne 0x460657 */ if (!fZ) goto L_00460657;
L_00460650:; BB(0x00460650);
    /* 00460650: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00460652: jmp 0x4606ea */ goto L_004606ea;
L_00460657:; BB(0x00460657);
    /* 00460657: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046065a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046065b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460660u); f_005dcb00();
    /* 00460660: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460663: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00460666: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460669: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x46066eu); f_0063aac0();
    /* 0046066e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00460670: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460673: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460677: je 0x460695 */ if (fZ) goto L_00460695;
L_00460679:; BB(0x00460679);
    /* 00460679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046067c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460681u); f_0063aac0();
    /* 00460681: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00460683: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00460686: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046068a: je 0x460695 */ if (fZ) goto L_00460695;
L_0046068c:; BB(0x0046068c);
    /* 0046068c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00460693: jmp 0x46069c */ goto L_0046069c;
L_00460695:; BB(0x00460695);
    /* 00460695: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0046069c:; BB(0x0046069c);
    /* 0046069c: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 004606a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004606a2: jne 0x4606a8 */ if (!fZ) goto L_004606a8;
L_004606a4:; BB(0x004606a4);
    /* 004606a4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004606a6: jmp 0x4606ea */ goto L_004606ea;
L_004606a8:; BB(0x004606a8);
    /* 004606a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004606ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004606ac: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004606b2: call 0x5de320 */ r_esp -= 4; W32(r_esp, 0x4606b7u); f_005de320();
    /* 004606b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004606ba: jle 0x4606c0 */ if ((fZ||fS!=fO)) goto L_004606c0;
L_004606bc:; BB(0x004606bc);
    /* 004606bc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004606be: jmp 0x4606ea */ goto L_004606ea;
L_004606c0:; BB(0x004606c0);
    /* 004606c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004606c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004606c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4606c9u); f_005dcb00();
    /* 004606c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004606cc: mov ecx, eax */ r_ecx = r_eax;
    /* 004606ce: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4606d3u); f_005d5a50();
    /* 004606d3: mov esi, eax */ r_esi = r_eax;
    /* 004606d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004606d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004606d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004606dc: call 0x460740 */ r_esp -= 4; W32(r_esp, 0x4606e1u); f_00460740();
    /* 004606e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004606e3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004606e5: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 004606e8: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_004606ea:; BB(0x004606ea);
    /* 004606ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004606eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004606ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004606ee: ret 4 */ FN_RET(0x00460640); r_esp += 8; return;
}

void f_00460700(void) /* sub_460700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460700);
    /* 00460700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460701: mov ebp, esp */ r_ebp = r_esp;
    /* 00460703: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460706: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00460709: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00460710: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00460717: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0046071e: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00460725: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0046072c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046072f: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00460735: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00460739: mov esp, ebp */ r_esp = r_ebp;
    /* 0046073b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046073c: ret  */ FN_RET(0x00460700); r_esp += 4; return;
}

void f_00460740(void) /* sub_460740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460740);
    /* 00460740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460741: mov ebp, esp */ r_ebp = r_esp;
    /* 00460743: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460746: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00460749: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00460750: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460757: jmp 0x460762 */ goto L_00460762;
L_00460759:; BB(0x00460759);
    /* 00460759: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046075c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046075f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460762:; BB(0x00460762);
    /* 00460762: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460766: jge 0x4607c1 */ if ((fS==fO)) goto L_004607c1;
L_00460768:; BB(0x00460768);
    /* 00460768: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046076b: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046076e: je 0x4607bf */ if (fZ) goto L_004607bf;
L_00460770:; BB(0x00460770);
    /* 00460770: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460774: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460779u); f_005dcb00();
    /* 00460779: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046077c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046077f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00460782: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460787u); f_0063aac0();
    /* 00460787: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00460789: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046078c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046078e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460792: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00460795: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00460798: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046079a: jne 0x4607bf */ if (!fZ) goto L_004607bf;
L_0046079c:; BB(0x0046079c);
    /* 0046079c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046079f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004607a0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4607a5u); f_005dcb00();
    /* 004607a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004607a8: mov ecx, eax */ r_ecx = r_eax;
    /* 004607aa: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x4607afu); f_005d5840();
    /* 004607af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004607b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004607b4: je 0x4607bf */ if (fZ) goto L_004607bf;
L_004607b6:; BB(0x004607b6);
    /* 004607b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004607b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004607bc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004607bf:; BB(0x004607bf);
    /* 004607bf: jmp 0x460759 */ goto L_00460759;
L_004607c1:; BB(0x004607c1);
    /* 004607c1: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 004607c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004607c8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004607ce: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 004607d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4607d6u); call_ind(t); }
    /* 004607d6: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004607da: mov esp, ebp */ r_esp = r_ebp;
    /* 004607dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004607dd: ret 4 */ FN_RET(0x00460740); r_esp += 8; return;
}

void f_004607e0(void) /* sub_4607E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004607e0);
    /* 004607e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004607e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004607e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004607e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004607e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607ea: call 0x45f990 */ r_esp -= 4; W32(r_esp, 0x4607efu); f_0045f990();
    /* 004607ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004607f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004607f4: je 0x46082e */ if (fZ) goto L_0046082e;
L_004607f6:; BB(0x004607f6);
    /* 004607f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004607f9: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 004607ff: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460802: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460805: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 0046080b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046080e: cmp dword ptr [ecx + 0x110], 4 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460815: jle 0x460824 */ if ((fZ||fS!=fO)) goto L_00460824;
L_00460817:; BB(0x00460817);
    /* 00460817: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046081a: mov dword ptr [edx + 0x110], 0 */ W32((u32)(r_edx+0x110u), 0x0u);
L_00460824:; BB(0x00460824);
    /* 00460824: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460827: call 0x460700 */ r_esp -= 4; W32(r_esp, 0x46082cu); f_00460700();
    /* 0046082c: jmp 0x460831 */ goto L_00460831;
L_0046082e:; BB(0x0046082e);
    /* 0046082e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00460831:; BB(0x00460831);
    /* 00460831: mov esp, ebp */ r_esp = r_ebp;
    /* 00460833: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460834: ret  */ FN_RET(0x004607e0); r_esp += 4; return;
}

void f_00460840(void) /* sub_460840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460840);
    /* 00460840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460841: mov ebp, esp */ r_ebp = r_esp;
    /* 00460843: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460846: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00460849: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00460850: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00460857: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046085e: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00460865: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046086c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460873: jmp 0x46087e */ goto L_0046087e;
L_00460875:; BB(0x00460875);
    /* 00460875: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460878: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046087b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046087e:; BB(0x0046087e);
    /* 0046087e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460882: jge 0x460952 */ if ((fS==fO)) goto L_00460952;
L_00460888:; BB(0x00460888);
    /* 00460888: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046088b: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00460891: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00460894: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460897: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0046089b: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046089e: jne 0x4608a2 */ if (!fZ) goto L_004608a2;
L_004608a0:; BB(0x004608a0);
    /* 004608a0: jmp 0x460875 */ goto L_00460875;
L_004608a2:; BB(0x004608a2);
    /* 004608a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004608a5: cmp dword ptr [ebp + edx*4 - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004608aa: jne 0x4608c6 */ if (!fZ) goto L_004608c6;
L_004608ac:; BB(0x004608ac);
    /* 004608ac: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004608af: movzx ecx, byte ptr [eax + 0x114] */ r_ecx = (u32)R8((u32)(r_eax+0x114u));
    /* 004608b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004608b8: jne 0x4608c6 */ if (!fZ) goto L_004608c6;
L_004608ba:; BB(0x004608ba);
    /* 004608ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004608bd: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004608c1: jmp 0x460955 */ goto L_00460955;
L_004608c6:; BB(0x004608c6);
    /* 004608c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004608c9: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 004608cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004608ce: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4608d3u); f_005dcb00();
    /* 004608d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004608d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004608d9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004608dc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4608e1u); f_0063aac0();
    /* 004608e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004608e3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004608e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004608e8: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004608ec: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004608ef: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004608f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004608f4: jne 0x46094d */ if (!fZ) goto L_0046094d;
L_004608f6:; BB(0x004608f6);
    /* 004608f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004608f9: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004608fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004608fe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460903u); f_005dcb00();
    /* 00460903: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460906: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00460909: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046090c: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00460912: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00460915: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00460919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046091b: jne 0x46094d */ if (!fZ) goto L_0046094d;
L_0046091d:; BB(0x0046091d);
    /* 0046091d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460920: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00460924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460925: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46092au); f_005dcb00();
    /* 0046092a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046092d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00460930: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00460933: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00460939: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 0046093c: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00460940: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460942: jne 0x46094d */ if (!fZ) goto L_0046094d;
L_00460944:; BB(0x00460944);
    /* 00460944: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460947: mov eax, dword ptr [ebp + eax*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0046094b: jmp 0x460955 */ goto L_00460955;
L_0046094d:; BB(0x0046094d);
    /* 0046094d: jmp 0x460875 */ goto L_00460875;
L_00460952:; BB(0x00460952);
    /* 00460952: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00460955:; BB(0x00460955);
    /* 00460955: mov esp, ebp */ r_esp = r_ebp;
    /* 00460957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460958: ret  */ FN_RET(0x00460840); r_esp += 4; return;
}

void f_00460960(void) /* sub_460960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460960);
    /* 00460960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460961: mov ebp, esp */ r_ebp = r_esp;
    /* 00460963: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460966: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00460969: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00460970: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00460977: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046097e: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00460985: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046098c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460992: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x460997u); f_005da830();
    /* 00460997: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046099a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046099c: jne 0x4609b8 */ if (!fZ) goto L_004609b8;
L_0046099e:; BB(0x0046099e);
    /* 0046099e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004609a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004609a2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4609a7u); f_005dcb00();
    /* 004609a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004609aa: mov ecx, eax */ r_ecx = r_eax;
    /* 004609ac: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x4609b1u); f_005d5840();
    /* 004609b1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004609b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004609b6: je 0x4609bf */ if (fZ) goto L_004609bf;
L_004609b8:; BB(0x004609b8);
    /* 004609b8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004609ba: jmp 0x460aed */ goto L_00460aed;
L_004609bf:; BB(0x004609bf);
    /* 004609bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004609c6: jmp 0x4609d1 */ goto L_004609d1;
L_004609c8:; BB(0x004609c8);
    /* 004609c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004609cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004609ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004609d1:; BB(0x004609d1);
    /* 004609d1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004609d5: jge 0x460aeb */ if ((fS==fO)) goto L_00460aeb;
L_004609db:; BB(0x004609db);
    /* 004609db: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004609de: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004609e4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004609e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004609ea: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 004609ee: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004609f1: jne 0x4609f5 */ if (!fZ) goto L_004609f5;
L_004609f3:; BB(0x004609f3);
    /* 004609f3: jmp 0x4609c8 */ goto L_004609c8;
L_004609f5:; BB(0x004609f5);
    /* 004609f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004609f8: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004609fc: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004609ff: jl 0x460a06 */ if ((fS!=fO)) goto L_00460a06;
L_00460a01:; BB(0x00460a01);
    /* 00460a01: jmp 0x460aeb */ goto L_00460aeb;
L_00460a06:; BB(0x00460a06);
    /* 00460a06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460a09: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00460a0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460a0e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460a13u); f_005dcb00();
    /* 00460a13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460a16: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00460a19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00460a1c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460a21u); f_0063aac0();
    /* 00460a21: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00460a23: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00460a26: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a2a: je 0x460a48 */ if (fZ) goto L_00460a48;
L_00460a2c:; BB(0x00460a2c);
    /* 00460a2c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00460a2f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460a34u); f_0063aac0();
    /* 00460a34: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00460a36: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00460a39: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a3d: je 0x460a48 */ if (fZ) goto L_00460a48;
L_00460a3f:; BB(0x00460a3f);
    /* 00460a3f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00460a46: jmp 0x460a4f */ goto L_00460a4f;
L_00460a48:; BB(0x00460a48);
    /* 00460a48: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_00460a4f:; BB(0x00460a4f);
    /* 00460a4f: movzx edx, byte ptr [ebp - 0x44] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 00460a53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a55: je 0x460ae6 */ if (fZ) goto L_00460ae6;
L_00460a5b:; BB(0x00460a5b);
    /* 00460a5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460a5f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460a64u); f_005dcb00();
    /* 00460a64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460a67: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00460a6a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00460a6d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460a72u); f_0063aac0();
    /* 00460a72: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460a75: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00460a78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460a7b: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00460a7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460a80: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460a85u); f_005dcb00();
    /* 00460a85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460a88: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00460a8b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00460a8e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460a93u); f_0063aac0();
    /* 00460a93: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460a96: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00460a99: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00460a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460a9d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00460aa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460aa1: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x460aa6u); f_00686ec0();
    /* 00460aa6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460aab: jne 0x460ae6 */ if (!fZ) goto L_00460ae6;
L_00460aad:; BB(0x00460aad);
    /* 00460aad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ab1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460ab6u); f_005dcb00();
    /* 00460ab6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460ab9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00460abc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460abf: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00460ac6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460ac8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460aca: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00460ad0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00460ad3: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00460ad8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00460adb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00460add: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00460ae0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x460ae2u); call_ind(t); }
    /* 00460ae2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460ae4: jmp 0x460aed */ goto L_00460aed;
L_00460ae6:; BB(0x00460ae6);
    /* 00460ae6: jmp 0x4609c8 */ goto L_004609c8;
L_00460aeb:; BB(0x00460aeb);
    /* 00460aeb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00460aed:; BB(0x00460aed);
    /* 00460aed: mov esp, ebp */ r_esp = r_ebp;
    /* 00460aef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460af0: ret 4 */ FN_RET(0x00460960); r_esp += 8; return;
}

void f_00460b00(void) /* sub_460B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460b00);
    /* 00460b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00460b03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460b06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00460b09: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00460b0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460b10: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460b13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460b16: cmp dword ptr [ecx + eax + 8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460b1b: jg 0x460b2d */ if ((!fZ&&fS==fO)) goto L_00460b2d;
L_00460b1d:; BB(0x00460b1d);
    /* 00460b1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460b20: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00460b23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460b26: cmp dword ptr [eax + edx + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460b2b: jle 0x460b31 */ if ((fZ||fS!=fO)) goto L_00460b31;
L_00460b2d:; BB(0x00460b2d);
    /* 00460b2d: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00460b31:; BB(0x00460b31);
    /* 00460b31: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00460b34: mov esp, ebp */ r_esp = r_ebp;
    /* 00460b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460b37: ret 4 */ FN_RET(0x00460b00); r_esp += 8; return;
}

void f_00460b40(void) /* sub_460B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460b40);
    /* 00460b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00460b43: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460b46: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00460b49: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460b4d: jne 0x460b54 */ if (!fZ) goto L_00460b54;
L_00460b4f:; BB(0x00460b4f);
    /* 00460b4f: jmp 0x460d3c */ goto L_00460d3c;
L_00460b54:; BB(0x00460b54);
    /* 00460b54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460b57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460b58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460b5b: call 0x460b00 */ r_esp -= 4; W32(r_esp, 0x460b60u); f_00460b00();
    /* 00460b60: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00460b63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460b65: jne 0x460b6c */ if (!fZ) goto L_00460b6c;
L_00460b67:; BB(0x00460b67);
    /* 00460b67: jmp 0x460d3c */ goto L_00460d3c;
L_00460b6c:; BB(0x00460b6c);
    /* 00460b6c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460b6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460b70: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460b75u); f_005dcb00();
    /* 00460b75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460b7a: jne 0x460b81 */ if (!fZ) goto L_00460b81;
L_00460b7c:; BB(0x00460b7c);
    /* 00460b7c: jmp 0x460d3c */ goto L_00460d3c;
L_00460b81:; BB(0x00460b81);
    /* 00460b81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460b85: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460b8au); f_005dcb00();
    /* 00460b8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460b8d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00460b90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00460b93: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460b98u); f_0063aac0();
    /* 00460b98: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00460b9a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00460b9d: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460ba1: je 0x460bbf */ if (fZ) goto L_00460bbf;
L_00460ba3:; BB(0x00460ba3);
    /* 00460ba3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00460ba6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460babu); f_0063aac0();
    /* 00460bab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00460bad: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00460bb0: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460bb4: je 0x460bbf */ if (fZ) goto L_00460bbf;
L_00460bb6:; BB(0x00460bb6);
    /* 00460bb6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00460bbd: jmp 0x460bc6 */ goto L_00460bc6;
L_00460bbf:; BB(0x00460bbf);
    /* 00460bbf: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00460bc6:; BB(0x00460bc6);
    /* 00460bc6: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00460bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460bcc: je 0x460bfa */ if (fZ) goto L_00460bfa;
L_00460bce:; BB(0x00460bce);
    /* 00460bce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460bd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460bd2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460bd7u); f_005dcb00();
    /* 00460bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460bda: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00460bdd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00460be0: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00460be6: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 00460be9: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00460bed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460bef: jne 0x460bfa */ if (!fZ) goto L_00460bfa;
L_00460bf1:; BB(0x00460bf1);
    /* 00460bf1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00460bf8: jmp 0x460c01 */ goto L_00460c01;
L_00460bfa:; BB(0x00460bfa);
    /* 00460bfa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00460c01:; BB(0x00460c01);
    /* 00460c01: mov dl, byte ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 00460c04: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00460c07: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00460c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460c0d: jne 0x460c14 */ if (!fZ) goto L_00460c14;
L_00460c0f:; BB(0x00460c0f);
    /* 00460c0f: jmp 0x460d3c */ goto L_00460d3c;
L_00460c14:; BB(0x00460c14);
    /* 00460c14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460c18: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 00460c1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00460c20: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460c26: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 00460c2c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x460c2eu); call_ind(t); }
    /* 00460c2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460c32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c35: call 0x460b00 */ r_esp -= 4; W32(r_esp, 0x460c3au); f_00460b00();
    /* 00460c3a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00460c3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460c3f: je 0x460ce1 */ if (fZ) goto L_00460ce1;
L_00460c45:; BB(0x00460c45);
    /* 00460c45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460c47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460c49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460c4c: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00460c4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c52: lea ecx, [eax + edx + 8] */ r_ecx = (u32)(r_eax+r_edx+0x8u);
    /* 00460c56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460c57: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c5a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00460c5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c60: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00460c63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00460c65: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00460c6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x460c6du); call_ind(t); }
    /* 00460c6d: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460c73: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x460c78u); f_0045e8e0();
    /* 00460c78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460c7b: jne 0x460ce1 */ if (!fZ) goto L_00460ce1;
L_00460c7d:; BB(0x00460c7d);
    /* 00460c7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00460c80: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00460c83: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c86: cmp dword ptr [edx + ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460c8b: jle 0x460ce1 */ if ((fZ||fS!=fO)) goto L_00460ce1;
L_00460c8d:; BB(0x00460c8d);
    /* 00460c8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460c8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460c91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00460c94: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460c97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460c9a: lea edx, [ecx + eax + 0x10] */ r_edx = (u32)(r_ecx+r_eax+0x10u);
    /* 00460c9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460c9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460ca2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00460ca5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460ca8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00460cab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00460cad: mov ecx, eax */ r_ecx = r_eax;
    /* 00460caf: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00460cb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x460cb7u); call_ind(t); }
    /* 00460cb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460cba: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460cbd: mov byte ptr [ecx + 0xf4], 1 */ W8((u32)(r_ecx+0xf4u), 0x1u);
    /* 00460cc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460cc7: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00460cca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460ccd: cmp dword ptr [eax + edx + 0x10], 5 */ {  u32 a = R32((u32)(r_eax+r_edx+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460cd2: jl 0x460ce1 */ if ((fS!=fO)) goto L_00460ce1;
L_00460cd4:; BB(0x00460cd4);
    /* 00460cd4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460cd7: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460cda: mov byte ptr [ecx + 0xf9], 1 */ W8((u32)(r_ecx+0xf9u), 0x1u);
L_00460ce1:; BB(0x00460ce1);
    /* 00460ce1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00460ce4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ce5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460ceau); f_005dcb00();
    /* 00460cea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460ced: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00460cf0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00460cf3: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 00460cfa: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00460d00: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x460d05u); f_004587e0();
    /* 00460d05: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460d0b: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x460d10u); f_0045e8e0();
    /* 00460d10: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460d13: jne 0x460d20 */ if (!fZ) goto L_00460d20;
L_00460d15:; BB(0x00460d15);
    /* 00460d15: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460d1b: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x460d20u); f_005db890();
L_00460d20:; BB(0x00460d20);
    /* 00460d20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460d22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460d24: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460d2a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00460d2d: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 00460d32: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00460d35: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00460d37: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00460d3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x460d3cu); call_ind(t); }
L_00460d3c:; BB(0x00460d3c);
    /* 00460d3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00460d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460d3f: ret 4 */ FN_RET(0x00460b40); r_esp += 8; return;
}

void f_00460d50(void) /* sub_460D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460d50);
    /* 00460d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00460d53: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460d56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00460d57: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00460d5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460d61: jmp 0x460d6c */ goto L_00460d6c;
L_00460d63:; BB(0x00460d63);
    /* 00460d63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460d66: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460d69: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460d6c:; BB(0x00460d6c);
    /* 00460d6c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460d70: jge 0x460e9b */ if ((fS==fO)) goto L_00460e9b;
L_00460d76:; BB(0x00460d76);
    /* 00460d76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460d79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460d7a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460d7fu); f_005dcb00();
    /* 00460d7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460d82: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00460d85: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00460d88: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00460d8e: mov byte ptr [ebp - 0x29], al */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_eax);
    /* 00460d91: movzx ecx, byte ptr [ebp - 0x29] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00460d95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460d97: je 0x460e30 */ if (fZ) goto L_00460e30;
L_00460d9d:; BB(0x00460d9d);
    /* 00460d9d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460da0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00460da3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00460da6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460da9: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00460dac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00460daf: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00460db3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00460db5: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00460db8: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00460dbb: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00460dbf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00460dc2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00460dc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460dc8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460dcb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460dce: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460dd1: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460dd4: mov dword ptr [esi + eax + 8], ecx */ W32((u32)(r_esi+r_eax+0x8u), r_ecx);
    /* 00460dd8: mov dword ptr [esi + eax + 0xc], edx */ W32((u32)(r_esi+r_eax+0xcu), r_edx);
    /* 00460ddc: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00460de2: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x460de7u); f_0045e8e0();
    /* 00460de7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460dea: jne 0x460e2e */ if (!fZ) goto L_00460e2e;
L_00460dec:; BB(0x00460dec);
    /* 00460dec: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460def: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00460df2: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00460df5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460df8: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460dfb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00460dfe: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00460e02: mov eax, 1 */ r_eax = 0x1u;
    /* 00460e07: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460e0a: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00460e0d: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00460e11: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00460e14: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00460e17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00460e1a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00460e1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460e20: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00460e23: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460e26: mov dword ptr [esi + edx + 0x10], eax */ W32((u32)(r_esi+r_edx+0x10u), r_eax);
    /* 00460e2a: mov dword ptr [esi + edx + 0x14], ecx */ W32((u32)(r_esi+r_edx+0x14u), r_ecx);
L_00460e2e:; BB(0x00460e2e);
    /* 00460e2e: jmp 0x460e96 */ goto L_00460e96;
L_00460e30:; BB(0x00460e30);
    /* 00460e30: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460e33: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00460e39: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00460e3c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00460e3f: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460e42: je 0x460e96 */ if (fZ) goto L_00460e96;
L_00460e44:; BB(0x00460e44);
    /* 00460e44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460e46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460e48: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x460e4du); f_0064c8a0();
    /* 00460e4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460e50: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00460e53: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00460e56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460e59: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460e5c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00460e62: mov dword ptr [ecx + eax + 8], edx */ W32((u32)(r_ecx+r_eax+0x8u), r_edx);
    /* 00460e66: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00460e69: mov dword ptr [ecx + eax + 0xc], edx */ W32((u32)(r_ecx+r_eax+0xcu), r_edx);
    /* 00460e6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460e6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460e71: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x460e76u); f_0064c8a0();
    /* 00460e76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460e79: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00460e7c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00460e7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460e82: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00460e85: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00460e88: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460e8b: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 00460e8f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460e92: mov dword ptr [ecx + eax + 0x14], edx */ W32((u32)(r_ecx+r_eax+0x14u), r_edx);
L_00460e96:; BB(0x00460e96);
    /* 00460e96: jmp 0x460d63 */ goto L_00460d63;
L_00460e9b:; BB(0x00460e9b);
    /* 00460e9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00460e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460e9f: ret  */ FN_RET(0x00460d50); r_esp += 4; return;
}

void f_00460ea0(void) /* sub_460EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460ea0);
    /* 00460ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00460ea3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460ea6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00460ea9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460eb0: jmp 0x460ebb */ goto L_00460ebb;
L_00460eb2:; BB(0x00460eb2);
    /* 00460eb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460eb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460eb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00460ebb:; BB(0x00460ebb);
    /* 00460ebb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460ebf: jge 0x460ed7 */ if ((fS==fO)) goto L_00460ed7;
L_00460ec1:; BB(0x00460ec1);
    /* 00460ec1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460ec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ec5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460ec8: call 0x460560 */ r_esp -= 4; W32(r_esp, 0x460ecdu); f_00460560();
    /* 00460ecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460ecf: je 0x460ed5 */ if (fZ) goto L_00460ed5;
L_00460ed1:; BB(0x00460ed1);
    /* 00460ed1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460ed3: jmp 0x460ed9 */ goto L_00460ed9;
L_00460ed5:; BB(0x00460ed5);
    /* 00460ed5: jmp 0x460eb2 */ goto L_00460eb2;
L_00460ed7:; BB(0x00460ed7);
    /* 00460ed7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00460ed9:; BB(0x00460ed9);
    /* 00460ed9: mov esp, ebp */ r_esp = r_ebp;
    /* 00460edb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460edc: ret  */ FN_RET(0x00460ea0); r_esp += 4; return;
}

void f_00460ee0(void) /* sub_460EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460ee0);
    /* 00460ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00460ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460ee7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00460ee9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x460eeeu); f_0062fbf0();
    /* 00460eee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460ef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460ef4: mov dword ptr [ecx + 0x108], eax */ W32((u32)(r_ecx+0x108u), r_eax);
    /* 00460efa: mov esp, ebp */ r_esp = r_ebp;
    /* 00460efc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460efd: ret  */ FN_RET(0x00460ee0); r_esp += 4; return;
}

void f_00460f00(void) /* sub_460F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460f00);
    /* 00460f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00460f03: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460f06: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00460f09: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00460f0c: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00460f12: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00460f15: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 00460f1c: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00460f23: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00460f2a: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00460f31: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 00460f38: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00460f3f: jmp 0x460f4a */ goto L_00460f4a;
L_00460f41:; BB(0x00460f41);
    /* 00460f41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460f44: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460f47: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00460f4a:; BB(0x00460f4a);
    /* 00460f4a: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460f4e: jge 0x460f6c */ if ((fS==fO)) goto L_00460f6c;
L_00460f50:; BB(0x00460f50);
    /* 00460f50: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460f53: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00460f56: mov edx, dword ptr [ebp + eax*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00460f5a: cmp edx, dword ptr [ecx + 0x108] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x108u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460f60: jne 0x460f6a */ if (!fZ) goto L_00460f6a;
L_00460f62:; BB(0x00460f62);
    /* 00460f62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460f65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00460f68: jmp 0x460f6c */ goto L_00460f6c;
L_00460f6a:; BB(0x00460f6a);
    /* 00460f6a: jmp 0x460f41 */ goto L_00460f41;
L_00460f6c:; BB(0x00460f6c);
    /* 00460f6c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00460f73: jmp 0x460f7e */ goto L_00460f7e;
L_00460f75:; BB(0x00460f75);
    /* 00460f75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460f78: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460f7b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00460f7e:; BB(0x00460f7e);
    /* 00460f7e: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460f82: jge 0x461045 */ if ((fS==fO)) goto L_00461045;
L_00460f88:; BB(0x00460f88);
    /* 00460f88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460f8b: cmp dword ptr [ebp + edx*4 - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460f90: je 0x460ff2 */ if (fZ) goto L_00460ff2;
L_00460f92:; BB(0x00460f92);
    /* 00460f92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460f95: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00460f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460f9a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460f9fu); f_005dcb00();
    /* 00460f9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460fa2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00460fa5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00460fa8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x460fadu); f_0063aac0();
    /* 00460fad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00460faf: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00460fb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460fb4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460fb8: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00460fbb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00460fbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460fc0: jne 0x460fe9 */ if (!fZ) goto L_00460fe9;
L_00460fc2:; BB(0x00460fc2);
    /* 00460fc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460fc5: mov eax, dword ptr [ebp + edx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe0u));
    /* 00460fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460fca: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460fcfu); f_005dcb00();
    /* 00460fcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460fd2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00460fd5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00460fd8: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00460fde: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 00460fe1: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00460fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460fe7: je 0x460ff2 */ if (fZ) goto L_00460ff2;
L_00460fe9:; BB(0x00460fe9);
    /* 00460fe9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00460ff0: jmp 0x460ff9 */ goto L_00460ff9;
L_00460ff2:; BB(0x00460ff2);
    /* 00460ff2: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00460ff9:; BB(0x00460ff9);
    /* 00460ff9: mov cl, byte ptr [ebp - 0x38] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc8u))) & 0xffu);
    /* 00460ffc: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 00460fff: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00461003: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461005: je 0x461024 */ if (fZ) goto L_00461024;
L_00461007:; BB(0x00461007);
    /* 00461007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046100a: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 0046100e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046100f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00461012: call 0x460560 */ r_esp -= 4; W32(r_esp, 0x461017u); f_00460560();
    /* 00461017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461019: jne 0x461024 */ if (!fZ) goto L_00461024;
L_0046101b:; BB(0x0046101b);
    /* 0046101b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046101e: mov eax, dword ptr [ebp + edx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe0u));
    /* 00461022: jmp 0x461048 */ goto L_00461048;
L_00461024:; BB(0x00461024);
    /* 00461024: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461027: cmp dword ptr [ebp + eax*4 - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046102c: jne 0x461037 */ if (!fZ) goto L_00461037;
L_0046102e:; BB(0x0046102e);
    /* 0046102e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00461035: jmp 0x461040 */ goto L_00461040;
L_00461037:; BB(0x00461037);
    /* 00461037: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046103a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046103d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00461040:; BB(0x00461040);
    /* 00461040: jmp 0x460f75 */ goto L_00460f75;
L_00461045:; BB(0x00461045);
    /* 00461045: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00461048:; BB(0x00461048);
    /* 00461048: mov esp, ebp */ r_esp = r_ebp;
    /* 0046104a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046104b: ret  */ FN_RET(0x00460f00); r_esp += 4; return;
}

