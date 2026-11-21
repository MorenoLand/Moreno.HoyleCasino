#include "protos.h"

void f_004122a0(void) /* sub_4122A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004122a0);
    /* 004122a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004122a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004122a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004122a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004122a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004122b0: jmp 0x4122bb */ goto L_004122bb;
L_004122b2:; BB(0x004122b2);
    /* 004122b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004122b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004122bb:; BB(0x004122bb);
    /* 004122bb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004122bf: jge 0x4122cd */ if ((fS==fO)) goto L_004122cd;
L_004122c1:; BB(0x004122c1);
    /* 004122c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004122c4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004122c7: mov byte ptr [ecx + 0x14], 0 */ W8((u32)(r_ecx+0x14u), 0x0u);
    /* 004122cb: jmp 0x4122b2 */ goto L_004122b2;
L_004122cd:; BB(0x004122cd);
    /* 004122cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004122cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004122d0: ret  */ FN_RET(0x004122a0); r_esp += 4; return;
}

void f_004122e0(void) /* sub_4122E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004122e0);
    /* 004122e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004122e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004122e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004122e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004122e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122ea: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 004122ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122f1: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 004122f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122f8: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 004122fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004122ff: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 00412303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412306: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0041230a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041230d: mov byte ptr [edx + 0xb], 0 */ W8((u32)(r_edx+0xbu), 0x0u);
    /* 00412311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412314: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 00412318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041231b: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 0041231f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412322: mov byte ptr [edx + 0xd], 0 */ W8((u32)(r_edx+0xdu), 0x0u);
    /* 00412326: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412329: mov byte ptr [eax + 0xe], 0 */ W8((u32)(r_eax+0xeu), 0x0u);
    /* 0041232d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412330: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 00412334: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412337: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 0041233b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041233e: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 00412342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412345: mov byte ptr [ecx + 0x13], 0 */ W8((u32)(r_ecx+0x13u), 0x0u);
    /* 00412349: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041234c: mov byte ptr [edx + 0xf], 0 */ W8((u32)(r_edx+0xfu), 0x0u);
    /* 00412350: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412353: mov byte ptr [eax + 0x18], 0 */ W8((u32)(r_eax+0x18u), 0x0u);
    /* 00412357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041235a: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 0041235e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412362: jne 0x412391 */ if (!fZ) goto L_00412391;
L_00412364:; BB(0x00412364);
    /* 00412364: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041236a: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x41236fu); f_004189a0();
    /* 0041236f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00412372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412373: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412375: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041237a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041237d: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412383: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412386: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00412388: mov ecx, eax */ r_ecx = r_eax;
    /* 0041238a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041238d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41238fu); call_ind(t); }
    /* 0041238f: jmp 0x4123b3 */ goto L_004123b3;
L_00412391:; BB(0x00412391);
    /* 00412391: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412394: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412395: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041239a: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004123a0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004123a3: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004123a9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004123ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004123ae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004123b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4123b3u); call_ind(t); }
L_004123b3:; BB(0x004123b3);
    /* 004123b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004123b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004123b6: ret 4 */ FN_RET(0x004122e0); r_esp += 8; return;
}

void f_004123c0(void) /* sub_4123C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004123c0);
    /* 004123c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004123c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004123c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004123c5: push 0x69dcfb */ { u32 v = 0x69dcfbu; r_esp -= 4; W32(r_esp, v); }
    /* 004123ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004123d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004123d1: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004123d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004123d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004123db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004123dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004123df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004123e5: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004123e8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004123ed: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 004123f0: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 004123f3: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004123f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004123f9: je 0x412406 */ if (fZ) goto L_00412406;
L_004123fb:; BB(0x004123fb);
    /* 004123fb: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412401: call 0x419100 */ r_esp -= 4; W32(r_esp, 0x412406u); f_00419100();
L_00412406:; BB(0x00412406);
    /* 00412406: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041240c: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x412411u); f_0040cc00();
    /* 00412411: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412413: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00412419: call 0x40d6b0 */ r_esp -= 4; W32(r_esp, 0x41241eu); f_0040d6b0();
    /* 0041241e: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00412423: mov ecx, dword ptr [eax + 0x4ec] */ r_ecx = R32((u32)(r_eax+0x4ecu));
    /* 00412429: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041242c: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412430: je 0x412441 */ if (fZ) goto L_00412441;
L_00412432:; BB(0x00412432);
    /* 00412432: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412434: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412437: call 0x413790 */ r_esp -= 4; W32(r_esp, 0x41243cu); f_00413790();
    /* 0041243c: jmp 0x412a3f */ goto L_00412a3f;
L_00412441:; BB(0x00412441);
    /* 00412441: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412444: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 00412448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041244a: jne 0x412498 */ if (!fZ) goto L_00412498;
L_0041244c:; BB(0x0041244c);
    /* 0041244c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041244f: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 00412453: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00412459: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0041245c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041245f: mov dword ptr [eax + 0x4ec], 7 */ W32((u32)(r_eax+0x4ecu), 0x7u);
    /* 00412469: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041246c: mov dword ptr [ecx + 0x4f0], 4 */ W32((u32)(r_ecx+0x4f0u), 0x4u);
    /* 00412476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412478: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041247a: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412480: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412483: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412489: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0041248c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041248e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412491: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412493u); call_ind(t); }
    /* 00412493: jmp 0x412a3f */ goto L_00412a3f;
L_00412498:; BB(0x00412498);
    /* 00412498: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041249e: call 0x419dd0 */ r_esp -= 4; W32(r_esp, 0x4124a3u); f_00419dd0();
    /* 004124a3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004124a6: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004124aa: je 0x412515 */ if (fZ) goto L_00412515;
L_004124ac:; BB(0x004124ac);
    /* 004124ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004124af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004124b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4124b5u); f_005dcb00();
    /* 004124b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004124b8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004124bb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004124be: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4124c3u); f_0063aac0();
    /* 004124c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004124c5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004124c8: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004124cc: je 0x4124ea */ if (fZ) goto L_004124ea;
L_004124ce:; BB(0x004124ce);
    /* 004124ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004124d1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4124d6u); f_0063aac0();
    /* 004124d6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004124d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004124db: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004124df: je 0x4124ea */ if (fZ) goto L_004124ea;
L_004124e1:; BB(0x004124e1);
    /* 004124e1: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 004124e8: jmp 0x4124f1 */ goto L_004124f1;
L_004124ea:; BB(0x004124ea);
    /* 004124ea: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_004124f1:; BB(0x004124f1);
    /* 004124f1: mov cl, byte ptr [ebp - 0x60] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa0u))) & 0xffu);
    /* 004124f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004124f5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004124f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004124f9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004124ff: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412504u); f_004190b0();
    /* 00412504: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412508: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041250b: call 0x412a50 */ r_esp -= 4; W32(r_esp, 0x412510u); f_00412a50();
    /* 00412510: jmp 0x412a3f */ goto L_00412a3f;
L_00412515:; BB(0x00412515);
    /* 00412515: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412518: movzx edx, byte ptr [ecx + 0x18] */ r_edx = (u32)R8((u32)(r_ecx+0x18u));
    /* 0041251c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041251e: jne 0x412532 */ if (!fZ) goto L_00412532;
L_00412520:; BB(0x00412520);
    /* 00412520: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412526: call 0x41a190 */ r_esp -= 4; W32(r_esp, 0x41252bu); f_0041a190();
    /* 0041252b: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041252e: mov byte ptr [eax + 0x18], 1 */ W8((u32)(r_eax+0x18u), 0x1u);
L_00412532:; BB(0x00412532);
    /* 00412532: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412538: call 0x41a260 */ r_esp -= 4; W32(r_esp, 0x41253du); f_0041a260();
    /* 0041253d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00412540: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412542: jne 0x412565 */ if (!fZ) goto L_00412565;
L_00412544:; BB(0x00412544);
    /* 00412544: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412546: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412548: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041254e: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412553u); f_004190b0();
    /* 00412553: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00412558: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041255b: call 0x4122e0 */ r_esp -= 4; W32(r_esp, 0x412560u); f_004122e0();
    /* 00412560: jmp 0x412a3f */ goto L_00412a3f;
L_00412565:; BB(0x00412565);
    /* 00412565: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041256b: call 0x41a350 */ r_esp -= 4; W32(r_esp, 0x412570u); f_0041a350();
    /* 00412570: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00412573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412575: je 0x412593 */ if (fZ) goto L_00412593;
L_00412577:; BB(0x00412577);
    /* 00412577: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412579: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041257b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412581: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412586u); f_004190b0();
    /* 00412586: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412589: call 0x412cc0 */ r_esp -= 4; W32(r_esp, 0x41258eu); f_00412cc0();
    /* 0041258e: jmp 0x412a3f */ goto L_00412a3f;
L_00412593:; BB(0x00412593);
    /* 00412593: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412599: call 0x41a430 */ r_esp -= 4; W32(r_esp, 0x41259eu); f_0041a430();
    /* 0041259e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004125a1: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125a5: je 0x4125c9 */ if (fZ) goto L_004125c9;
L_004125a7:; BB(0x004125a7);
    /* 004125a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004125a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004125ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004125ad: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004125b3: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x4125b8u); f_004190b0();
    /* 004125b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004125bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004125bc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004125bf: call 0x412e10 */ r_esp -= 4; W32(r_esp, 0x4125c4u); f_00412e10();
    /* 004125c4: jmp 0x412a3f */ goto L_00412a3f;
L_004125c9:; BB(0x004125c9);
    /* 004125c9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004125cf: call 0x41a810 */ r_esp -= 4; W32(r_esp, 0x4125d4u); f_0041a810();
    /* 004125d4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004125d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125d9: je 0x4125f7 */ if (fZ) goto L_004125f7;
L_004125db:; BB(0x004125db);
    /* 004125db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004125dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004125df: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004125e5: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x4125eau); f_004190b0();
    /* 004125ea: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004125ed: call 0x412f40 */ r_esp -= 4; W32(r_esp, 0x4125f2u); f_00412f40();
    /* 004125f2: jmp 0x412a3f */ goto L_00412a3f;
L_004125f7:; BB(0x004125f7);
    /* 004125f7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004125fd: call 0x41a700 */ r_esp -= 4; W32(r_esp, 0x412602u); f_0041a700();
    /* 00412602: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412605: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412609: je 0x41264d */ if (fZ) goto L_0041264d;
L_0041260b:; BB(0x0041260b);
    /* 0041260b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041260d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412611: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412617: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x41261cu); f_004190b0();
    /* 0041261c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041261f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412620: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412626: call 0x41b700 */ r_esp -= 4; W32(r_esp, 0x41262bu); f_0041b700();
    /* 0041262b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041262d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041262f: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412635: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412638: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041263e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00412641: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412643: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412646: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412648u); call_ind(t); }
    /* 00412648: jmp 0x412a3f */ goto L_00412a3f;
L_0041264d:; BB(0x0041264d);
    /* 0041264d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412653: call 0x41a890 */ r_esp -= 4; W32(r_esp, 0x412658u); f_0041a890();
    /* 00412658: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041265b: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041265f: je 0x4126c3 */ if (fZ) goto L_004126c3;
L_00412661:; BB(0x00412661);
    /* 00412661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412663: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412667: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041266d: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412672u); f_004190b0();
    /* 00412672: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412676: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041267c: call 0x41a830 */ r_esp -= 4; W32(r_esp, 0x412681u); f_0041a830();
    /* 00412681: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00412684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412686: je 0x412699 */ if (fZ) goto L_00412699;
L_00412688:; BB(0x00412688);
    /* 00412688: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041268b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041268c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041268f: call 0x413090 */ r_esp -= 4; W32(r_esp, 0x412694u); f_00413090();
    /* 00412694: jmp 0x412a3f */ goto L_00412a3f;
L_00412699:; BB(0x00412699);
    /* 00412699: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041269c: movzx eax, byte ptr [edx + 0xd] */ r_eax = (u32)R8((u32)(r_edx+0xdu));
    /* 004126a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004126a2: jne 0x4126b2 */ if (!fZ) goto L_004126b2;
L_004126a4:; BB(0x004126a4);
    /* 004126a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004126a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004126a8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004126ab: call 0x413190 */ r_esp -= 4; W32(r_esp, 0x4126b0u); f_00413190();
    /* 004126b0: jmp 0x4126be */ goto L_004126be;
L_004126b2:; BB(0x004126b2);
    /* 004126b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004126b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004126b6: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004126b9: call 0x413690 */ r_esp -= 4; W32(r_esp, 0x4126beu); f_00413690();
L_004126be:; BB(0x004126be);
    /* 004126be: jmp 0x412a3f */ goto L_00412a3f;
L_004126c3:; BB(0x004126c3);
    /* 004126c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004126c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004126c7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004126cd: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x4126d2u); f_004190b0();
    /* 004126d2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004126d8: call 0x41b830 */ r_esp -= 4; W32(r_esp, 0x4126ddu); f_0041b830();
    /* 004126dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004126e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004126e2: jne 0x4127bc */ if (!fZ) goto L_004127bc;
L_004126e8:; BB(0x004126e8);
    /* 004126e8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004126eb: movzx edx, byte ptr [ecx + 0xf] */ r_edx = (u32)R8((u32)(r_ecx+0xfu));
    /* 004126ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004126f1: jne 0x41273e */ if (!fZ) goto L_0041273e;
L_004126f3:; BB(0x004126f3);
    /* 004126f3: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004126f6: mov byte ptr [eax + 0xf], 1 */ W8((u32)(r_eax+0xfu), 0x1u);
    /* 004126fa: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412700: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00412703: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00412706: mov dword ptr [edx + 0x4ec], 0xb */ W32((u32)(r_edx+0x4ecu), 0xbu);
    /* 00412710: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00412713: mov dword ptr [eax + 0x4f0], 4 */ W32((u32)(r_eax+0x4f0u), 0x4u);
    /* 0041271d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041271f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412721: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412727: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0041272a: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041272f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412732: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00412734: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412737: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412739u); call_ind(t); }
    /* 00412739: jmp 0x412a3f */ goto L_00412a3f;
L_0041273e:; BB(0x0041273e);
    /* 0041273e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412741: mov byte ptr [ecx + 0xf], 0 */ W8((u32)(r_ecx+0xfu), 0x0u);
    /* 00412745: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412747: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041274d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412750: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412756: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00412759: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041275b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041275e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412760u); call_ind(t); }
    /* 00412760: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00412762: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x412767u); f_00686d82();
    /* 00412767: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041276a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041276d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412774: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412778: je 0x412791 */ if (fZ) goto L_00412791;
L_0041277a:; BB(0x0041277a);
    /* 0041277a: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412780: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00412783: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412784: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412787: call 0x410d40 */ r_esp -= 4; W32(r_esp, 0x41278cu); f_00410d40();
    /* 0041278c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0041278f: jmp 0x412798 */ goto L_00412798;
L_00412791:; BB(0x00412791);
    /* 00412791: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00412798:; BB(0x00412798);
    /* 00412798: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041279b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041279e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004127a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004127a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004127a9: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004127af: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004127b2: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4127b7u); f_005fc420();
    /* 004127b7: jmp 0x412a3f */ goto L_00412a3f;
L_004127bc:; BB(0x004127bc);
    /* 004127bc: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004127bf: movzx ecx, byte ptr [eax + 0xf] */ r_ecx = (u32)R8((u32)(r_eax+0xfu));
    /* 004127c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004127c5: jne 0x412828 */ if (!fZ) goto L_00412828;
L_004127c7:; BB(0x004127c7);
    /* 004127c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004127c9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004127cb: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004127d1: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x4127d6u); f_0041b990();
    /* 004127d6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004127d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004127db: jne 0x412828 */ if (!fZ) goto L_00412828;
L_004127dd:; BB(0x004127dd);
    /* 004127dd: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004127e0: mov byte ptr [eax + 0xf], 1 */ W8((u32)(r_eax+0xfu), 0x1u);
    /* 004127e4: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004127ea: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004127ed: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004127f0: mov dword ptr [edx + 0x4ec], 0xb */ W32((u32)(r_edx+0x4ecu), 0xbu);
    /* 004127fa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004127fd: mov dword ptr [eax + 0x4f0], 4 */ W32((u32)(r_eax+0x4f0u), 0x4u);
    /* 00412807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412809: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041280b: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412811: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00412814: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00412819: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041281c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041281e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412821: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412823u); call_ind(t); }
    /* 00412823: jmp 0x412a3f */ goto L_00412a3f;
L_00412828:; BB(0x00412828);
    /* 00412828: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041282e: call 0x41b8f0 */ r_esp -= 4; W32(r_esp, 0x412833u); f_0041b8f0();
    /* 00412833: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412836: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041283a: je 0x41299c */ if (fZ) goto L_0041299c;
L_00412840:; BB(0x00412840);
    /* 00412840: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412842: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412845: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412846: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041284c: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412851u); f_004190b0();
    /* 00412851: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412855: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041285b: call 0x41ba00 */ r_esp -= 4; W32(r_esp, 0x412860u); f_0041ba00();
    /* 00412860: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412863: movzx ecx, byte ptr [eax + 0x11] */ r_ecx = (u32)R8((u32)(r_eax+0x11u));
    /* 00412867: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412869: jne 0x4128b7 */ if (!fZ) goto L_004128b7;
L_0041286b:; BB(0x0041286b);
    /* 0041286b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041286e: mov byte ptr [edx + 0x11], 1 */ W8((u32)(r_edx+0x11u), 0x1u);
    /* 00412872: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00412877: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0041287a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041287d: mov dword ptr [ecx + 0x4ec], 0xc */ W32((u32)(r_ecx+0x4ecu), 0xcu);
    /* 00412887: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041288a: mov dword ptr [edx + 0x4f0], 4 */ W32((u32)(r_edx+0x4f0u), 0x4u);
    /* 00412894: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412896: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412898: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041289d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004128a0: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004128a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004128a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004128ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004128ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004128b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4128b2u); call_ind(t); }
    /* 004128b2: jmp 0x412a3f */ goto L_00412a3f;
L_004128b7:; BB(0x004128b7);
    /* 004128b7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004128ba: movzx edx, byte ptr [ecx + 0x12] */ r_edx = (u32)R8((u32)(r_ecx+0x12u));
    /* 004128be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004128c0: jne 0x41296b */ if (!fZ) goto L_0041296b;
L_004128c6:; BB(0x004128c6);
    /* 004128c6: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004128c9: mov byte ptr [eax + 0x12], 1 */ W8((u32)(r_eax+0x12u), 0x1u);
    /* 004128cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004128d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004128d1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4128d6u); f_005dcb00();
    /* 004128d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004128d9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004128dc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004128df: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4128e4u); f_0063aac0();
    /* 004128e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004128e6: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 004128e9: cmp dword ptr [ebp - 0x40], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004128ed: je 0x41290b */ if (fZ) goto L_0041290b;
L_004128ef:; BB(0x004128ef);
    /* 004128ef: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004128f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4128f7u); f_0063aac0();
    /* 004128f7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004128f9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004128fc: cmp dword ptr [ebp - 0x44], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412900: je 0x41290b */ if (fZ) goto L_0041290b;
L_00412902:; BB(0x00412902);
    /* 00412902: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00412909: jmp 0x412912 */ goto L_00412912;
L_0041290b:; BB(0x0041290b);
    /* 0041290b: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
L_00412912:; BB(0x00412912);
    /* 00412912: movzx ecx, byte ptr [ebp - 0x68] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff98u));
    /* 00412916: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412918: je 0x412923 */ if (fZ) goto L_00412923;
L_0041291a:; BB(0x0041291a);
    /* 0041291a: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 00412921: jmp 0x412929 */ goto L_00412929;
L_00412923:; BB(0x00412923);
    /* 00412923: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412926: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
L_00412929:; BB(0x00412929);
    /* 00412929: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041292e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00412931: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00412934: mov dword ptr [ecx + 0x4ec], 5 */ W32((u32)(r_ecx+0x4ecu), 0x5u);
    /* 0041293e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00412941: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00412944: mov dword ptr [edx + 0x4f0], eax */ W32((u32)(r_edx+0x4f0u), r_eax);
    /* 0041294a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041294c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041294e: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412954: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00412957: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041295c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041295f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00412961: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412964: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412966u); call_ind(t); }
    /* 00412966: jmp 0x412a3f */ goto L_00412a3f;
L_0041296b:; BB(0x0041296b);
    /* 0041296b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041296e: mov byte ptr [ecx + 0x11], 0 */ W8((u32)(r_ecx+0x11u), 0x0u);
    /* 00412972: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412975: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 00412979: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041297b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041297d: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00412982: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412985: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041298b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041298e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00412990: mov ecx, eax */ r_ecx = r_eax;
    /* 00412992: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412995: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412997u); call_ind(t); }
    /* 00412997: jmp 0x412a3f */ goto L_00412a3f;
L_0041299c:; BB(0x0041299c);
    /* 0041299c: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004129a2: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4129a7u); f_005da7b0();
    /* 004129a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004129aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004129ac: je 0x412a02 */ if (fZ) goto L_00412a02;
L_004129ae:; BB(0x004129ae);
    /* 004129ae: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004129b1: movzx eax, byte ptr [edx + 0x13] */ r_eax = (u32)R8((u32)(r_edx+0x13u));
    /* 004129b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004129b7: jne 0x412a02 */ if (!fZ) goto L_00412a02;
L_004129b9:; BB(0x004129b9);
    /* 004129b9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004129bc: mov byte ptr [ecx + 0x13], 1 */ W8((u32)(r_ecx+0x13u), 0x1u);
    /* 004129c0: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004129c6: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004129c9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004129cc: mov dword ptr [eax + 0x4ec], 6 */ W32((u32)(r_eax+0x4ecu), 0x6u);
    /* 004129d6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004129d9: mov dword ptr [ecx + 0x4f0], 0xffffffff */ W32((u32)(r_ecx+0x4f0u), 0xffffffffu);
    /* 004129e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004129e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004129e7: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004129ed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004129f0: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004129f6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004129f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004129fb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004129fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412a00u); call_ind(t); }
    /* 00412a00: jmp 0x412a3f */ goto L_00412a3f;
L_00412a02:; BB(0x00412a02);
    /* 00412a02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412a04: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412a06: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412a0c: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412a11u); f_004190b0();
    /* 00412a11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00412a17: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00412a1a: mov byte ptr [ebp - 0x55], dl */ W8((u32)(r_ebp+0xffffffabu), (u8)r_edx);
    /* 00412a1d: movzx eax, byte ptr [ebp - 0x55] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 00412a21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412a23: je 0x412a34 */ if (fZ) goto L_00412a34;
L_00412a25:; BB(0x00412a25);
    /* 00412a25: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00412a2a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00412a2d: call 0x4122e0 */ r_esp -= 4; W32(r_esp, 0x412a32u); f_004122e0();
    /* 00412a32: jmp 0x412a3f */ goto L_00412a3f;
L_00412a34:; BB(0x00412a34);
    /* 00412a34: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00412a3a: call 0x40daf0 */ r_esp -= 4; W32(r_esp, 0x412a3fu); f_0040daf0();
L_00412a3f:; BB(0x00412a3f);
    /* 00412a3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412a42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412a49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412a4a: mov esp, ebp */ r_esp = r_ebp;
    /* 00412a4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412a4d: ret  */ FN_RET(0x004123c0); r_esp += 4; return;
}

void f_00412a50(void) /* sub_412A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412a50);
    /* 00412a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00412a53: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412a56: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00412a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412a5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412a62u); f_005dcb00();
    /* 00412a62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412a65: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00412a68: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412a6b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x412a70u); f_0063aac0();
    /* 00412a70: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00412a72: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00412a75: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412a79: je 0x412a97 */ if (fZ) goto L_00412a97;
L_00412a7b:; BB(0x00412a7b);
    /* 00412a7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412a7e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x412a83u); f_0063aac0();
    /* 00412a83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412a85: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00412a88: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412a8c: je 0x412a97 */ if (fZ) goto L_00412a97;
L_00412a8e:; BB(0x00412a8e);
    /* 00412a8e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00412a95: jmp 0x412a9e */ goto L_00412a9e;
L_00412a97:; BB(0x00412a97);
    /* 00412a97: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_00412a9e:; BB(0x00412a9e);
    /* 00412a9e: movzx eax, byte ptr [ebp - 0x30] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 00412aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412aa4: je 0x412b7d */ if (fZ) goto L_00412b7d;
L_00412aaa:; BB(0x00412aaa);
    /* 00412aaa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412aac: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00412ab2: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x412ab7u); f_005df700();
    /* 00412ab7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00412aba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412abc: je 0x412aeb */ if (fZ) goto L_00412aeb;
L_00412abe:; BB(0x00412abe);
    /* 00412abe: push 0x707448 */ { u32 v = 0x707448u; r_esp -= 4; W32(r_esp, v); }
    /* 00412ac3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00412ac5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00412acb: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x412ad0u); f_0057ab80();
    /* 00412ad0: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00412ad6: mov ax, word ptr [edx + 0x4e0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4e0u))) & 0xffffu);
    /* 00412add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412ade: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412ae4: call 0x41bc50 */ r_esp -= 4; W32(r_esp, 0x412ae9u); f_0041bc50();
    /* 00412ae9: jmp 0x412af6 */ goto L_00412af6;
L_00412aeb:; BB(0x00412aeb);
    /* 00412aeb: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00412af1: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x412af6u); f_0057ae30();
L_00412af6:; BB(0x00412af6);
    /* 00412af6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412af9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412afa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412affu); f_005dcb00();
    /* 00412aff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412b02: mov ecx, eax */ r_ecx = r_eax;
    /* 00412b04: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x412b09u); f_005d5840();
    /* 00412b09: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00412b0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b0e: jne 0x412b78 */ if (!fZ) goto L_00412b78;
L_00412b10:; BB(0x00412b10);
    /* 00412b10: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412b16: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x412b1bu); f_005da7b0();
    /* 00412b1b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00412b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b20: je 0x412b4a */ if (fZ) goto L_00412b4a;
L_00412b22:; BB(0x00412b22);
    /* 00412b22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412b25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412b26: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412b2bu); f_005dcb00();
    /* 00412b2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412b2e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00412b31: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412b34: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 00412b3b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412b3e: call 0x4123c0 */ r_esp -= 4; W32(r_esp, 0x412b43u); f_004123c0();
    /* 00412b43: jmp 0x412cac */ goto L_00412cac;
L_00412b4a:; BB(0x00412b4a);
    /* 00412b4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412b4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412b4e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412b54: call 0x419f00 */ r_esp -= 4; W32(r_esp, 0x412b59u); f_00419f00();
    /* 00412b59: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00412b5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b5e: je 0x412b78 */ if (fZ) goto L_00412b78;
L_00412b60:; BB(0x00412b60);
    /* 00412b60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00412b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412b64: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412b69u); f_005dcb00();
    /* 00412b69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412b6d: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412b73: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x412b78u); f_005dbb70();
L_00412b78:; BB(0x00412b78);
    /* 00412b78: jmp 0x412cac */ goto L_00412cac;
L_00412b7d:; BB(0x00412b7d);
    /* 00412b7d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412b80: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00412b84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b86: jne 0x412bad */ if (!fZ) goto L_00412bad;
L_00412b88:; BB(0x00412b88);
    /* 00412b88: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412b8b: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00412b8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b91: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00412b97: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x412b9cu); f_00637810();
    /* 00412b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412b9d: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412ba3: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x412ba8u); f_005da360();
    /* 00412ba8: jmp 0x412cac */ goto L_00412cac;
L_00412bad:; BB(0x00412bad);
    /* 00412bad: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412bb0: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 00412bb4: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00412bba: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x412bbfu); f_0057ae30();
    /* 00412bbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412bc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412bc3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412bc8u); f_005dcb00();
    /* 00412bc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412bcb: mov ecx, eax */ r_ecx = r_eax;
    /* 00412bcd: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x412bd2u); f_005d5840();
    /* 00412bd2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00412bd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412bd7: je 0x412c52 */ if (fZ) goto L_00412c52;
L_00412bd9:; BB(0x00412bd9);
    /* 00412bd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412bdb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412bdf: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00412be5: call 0x40a0b0 */ r_esp -= 4; W32(r_esp, 0x412beau); f_0040a0b0();
    /* 00412bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412beb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x412bf0u); f_0064c8a0();
    /* 00412bf0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412bf3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412bf6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00412bf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412bfc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00412bff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412c02: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00412c05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c09: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00412c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412c0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412c10: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00412c16: mov eax, dword ptr [edx + ecx*4 + 0x468] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 00412c1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412c20: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00412c26: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 00412c2d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00412c2f: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00412c35: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x412c37u); call_ind(t); }
    /* 00412c37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412c3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412c3b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412c40u); f_005dcb00();
    /* 00412c40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412c43: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412c46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412c49: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00412c50: jmp 0x412c8e */ goto L_00412c8e;
L_00412c52:; BB(0x00412c52);
    /* 00412c52: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412c58: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x412c5du); f_005da7b0();
    /* 00412c5d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00412c60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412c62: je 0x412c7f */ if (fZ) goto L_00412c7f;
L_00412c64:; BB(0x00412c64);
    /* 00412c64: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412c68: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412c6du); f_005dcb00();
    /* 00412c6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412c70: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00412c73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00412c76: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
    /* 00412c7d: jmp 0x412c8e */ goto L_00412c8e;
L_00412c7f:; BB(0x00412c7f);
    /* 00412c7f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00412c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412c83: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412c89: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x412c8eu); f_005d9570();
L_00412c8e:; BB(0x00412c8e);
    /* 00412c8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c92: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00412c97: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412c9a: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00412ca0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412ca3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00412ca5: mov ecx, eax */ r_ecx = r_eax;
    /* 00412ca7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412caa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412cacu); call_ind(t); }
L_00412cac:; BB(0x00412cac);
    /* 00412cac: mov esp, ebp */ r_esp = r_ebp;
    /* 00412cae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412caf: ret 4 */ FN_RET(0x00412a50); r_esp += 8; return;
}

void f_00412cc0(void) /* sub_412CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412cc0);
    /* 00412cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00412cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412cc5: push 0x69dd21 */ { u32 v = 0x69dd21u; r_esp -= 4; W32(r_esp, v); }
    /* 00412cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412cd1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412cd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00412cd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412cdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00412cdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00412ce5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00412ce8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00412cee: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x412cf3u); f_005f2870();
    /* 00412cf3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00412cfa: jmp 0x412d05 */ goto L_00412d05;
L_00412cfc:; BB(0x00412cfc);
    /* 00412cfc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412cff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412d02: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00412d05:; BB(0x00412d05);
    /* 00412d05: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412d09: jge 0x412d3a */ if ((fS==fO)) goto L_00412d3a;
L_00412d0b:; BB(0x00412d0b);
    /* 00412d0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d0f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x412d14u); f_0064c8a0();
    /* 00412d14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412d17: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00412d1a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00412d1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412d20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d21: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412d24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412d29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412d2eu); f_005dcb00();
    /* 00412d2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412d31: mov ecx, eax */ r_ecx = r_eax;
    /* 00412d33: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x412d38u); f_005d6050();
    /* 00412d38: jmp 0x412cfc */ goto L_00412cfc;
L_00412d3a:; BB(0x00412d3a);
    /* 00412d3a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412d40: call 0x418e20 */ r_esp -= 4; W32(r_esp, 0x412d45u); f_00418e20();
    /* 00412d45: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00412d48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412d4a: je 0x412db0 */ if (fZ) goto L_00412db0;
L_00412d4c:; BB(0x00412d4c);
    /* 00412d4c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412d52: call 0x418ed0 */ r_esp -= 4; W32(r_esp, 0x412d57u); f_00418ed0();
    /* 00412d57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d59: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412d5f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412d62: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412d68: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00412d6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412d6d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412d70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412d72u); call_ind(t); }
    /* 00412d72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d75: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00412d7b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00412d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d7f: fld1  */ FPUSH(1.0);
    /* 00412d81: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00412d84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d86: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d8a: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412d90: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00412d93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d94: push 0xfb3 */ { u32 v = 0xfb3u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d99: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00412d9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412da0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00412da6: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00412dac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412daeu); call_ind(t); }
    /* 00412dae: jmp 0x412dfa */ goto L_00412dfa;
L_00412db0:; BB(0x00412db0);
    /* 00412db0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00412db2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x412db7u); f_00686d82();
    /* 00412db7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412dba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00412dbd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412dc4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412dc8: je 0x412dd7 */ if (fZ) goto L_00412dd7;
L_00412dca:; BB(0x00412dca);
    /* 00412dca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412dcd: call 0x40ff90 */ r_esp -= 4; W32(r_esp, 0x412dd2u); f_0040ff90();
    /* 00412dd2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00412dd5: jmp 0x412dde */ goto L_00412dde;
L_00412dd7:; BB(0x00412dd7);
    /* 00412dd7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00412dde:; BB(0x00412dde);
    /* 00412dde: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00412de1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00412de4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00412deb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412dee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412def: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412df5: call 0x5da390 */ r_esp -= 4; W32(r_esp, 0x412dfau); f_005da390();
L_00412dfa:; BB(0x00412dfa);
    /* 00412dfa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412dfd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412e04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412e05: mov esp, ebp */ r_esp = r_ebp;
    /* 00412e07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412e08: ret  */ FN_RET(0x00412cc0); r_esp += 4; return;
}

void f_00412e10(void) /* sub_412E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412e10);
    /* 00412e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00412e13: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412e16: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00412e19: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00412e1d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412e20: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 00412e24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e26: jne 0x412e74 */ if (!fZ) goto L_00412e74;
L_00412e28:; BB(0x00412e28);
    /* 00412e28: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412e2b: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 00412e2f: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00412e34: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00412e37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412e3a: mov dword ptr [ecx + 0x4ec], 8 */ W32((u32)(r_ecx+0x4ecu), 0x8u);
    /* 00412e44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412e47: mov dword ptr [edx + 0x4f0], 4 */ W32((u32)(r_edx+0x4f0u), 0x4u);
    /* 00412e51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412e53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412e55: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00412e5a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412e5d: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412e63: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412e66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00412e68: mov ecx, eax */ r_ecx = r_eax;
    /* 00412e6a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412e6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412e6fu); call_ind(t); }
    /* 00412e6f: jmp 0x412f38 */ goto L_00412f38;
L_00412e74:; BB(0x00412e74);
    /* 00412e74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412e78: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x412e7du); f_005dcb00();
    /* 00412e7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412e80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412e86: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x412e8bu); f_0063aac0();
    /* 00412e8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00412e8d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00412e90: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e94: je 0x412eb2 */ if (fZ) goto L_00412eb2;
L_00412e96:; BB(0x00412e96);
    /* 00412e96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412e99: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x412e9eu); f_0063aac0();
    /* 00412e9e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00412ea0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00412ea3: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ea7: je 0x412eb2 */ if (fZ) goto L_00412eb2;
L_00412ea9:; BB(0x00412ea9);
    /* 00412ea9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00412eb0: jmp 0x412eb9 */ goto L_00412eb9;
L_00412eb2:; BB(0x00412eb2);
    /* 00412eb2: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00412eb9:; BB(0x00412eb9);
    /* 00412eb9: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00412ebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ebf: je 0x412ece */ if (fZ) goto L_00412ece;
L_00412ec1:; BB(0x00412ec1);
    /* 00412ec1: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00412ec7: call 0x40d840 */ r_esp -= 4; W32(r_esp, 0x412eccu); f_0040d840();
    /* 00412ecc: jmp 0x412f38 */ goto L_00412f38;
L_00412ece:; BB(0x00412ece);
    /* 00412ece: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00412ed1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412ed2: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00412ed8: call 0x40b1c0 */ r_esp -= 4; W32(r_esp, 0x412eddu); f_0040b1c0();
    /* 00412edd: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00412ee0: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00412ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412ee4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00412ee7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412ee8: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412eee: call 0x41a570 */ r_esp -= 4; W32(r_esp, 0x412ef3u); f_0041a570();
    /* 00412ef3: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00412ef7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ef9: je 0x412f1c */ if (fZ) goto L_00412f1c;
L_00412efb:; BB(0x00412efb);
    /* 00412efb: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00412f00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00412f03: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412f06: mov dword ptr [ecx + 0x4ec], 0 */ W32((u32)(r_ecx+0x4ecu), 0x0u);
    /* 00412f10: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00412f13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412f16: mov dword ptr [edx + 0x4f0], eax */ W32((u32)(r_edx+0x4f0u), r_eax);
L_00412f1c:; BB(0x00412f1c);
    /* 00412f1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f20: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00412f26: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00412f29: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00412f2e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412f31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00412f33: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412f36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412f38u); call_ind(t); }
L_00412f38:; BB(0x00412f38);
    /* 00412f38: mov esp, ebp */ r_esp = r_ebp;
    /* 00412f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412f3b: ret 4 */ FN_RET(0x00412e10); r_esp += 8; return;
}

void f_00412f40(void) /* sub_412F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412f40);
    /* 00412f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00412f43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412f46: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00412f49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412f4c: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00412f50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412f52: jne 0x412fb3 */ if (!fZ) goto L_00412fb3;
L_00412f54:; BB(0x00412f54);
    /* 00412f54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412f57: mov byte ptr [edx + 9], 1 */ W8((u32)(r_edx+0x9u), 0x1u);
    /* 00412f5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f61: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f63: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00412f69: call 0x40cdc0 */ r_esp -= 4; W32(r_esp, 0x412f6eu); f_0040cdc0();
    /* 00412f6e: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00412f73: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00412f76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412f79: mov dword ptr [ecx + 0x4ec], 9 */ W32((u32)(r_ecx+0x4ecu), 0x9u);
    /* 00412f83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00412f86: mov dword ptr [edx + 0x4f0], 4 */ W32((u32)(r_edx+0x4f0u), 0x4u);
    /* 00412f90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412f94: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00412f99: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00412f9c: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00412fa2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00412fa5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00412fa7: mov ecx, eax */ r_ecx = r_eax;
    /* 00412fa9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00412fac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x412faeu); call_ind(t); }
    /* 00412fae: jmp 0x413080 */ goto L_00413080;
L_00412fb3:; BB(0x00412fb3);
    /* 00412fb3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412fb9: call 0x41a780 */ r_esp -= 4; W32(r_esp, 0x412fbeu); f_0041a780();
    /* 00412fbe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00412fc1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412fc5: je 0x413066 */ if (fZ) goto L_00413066;
L_00412fcb:; BB(0x00412fcb);
    /* 00412fcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412fcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412fd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412fd1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00412fd7: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x412fdcu); f_004190b0();
    /* 00412fdc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412fdf: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 00412fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412fe5: jne 0x413030 */ if (!fZ) goto L_00413030;
L_00412fe7:; BB(0x00412fe7);
    /* 00412fe7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00412fea: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 00412fee: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00412ff4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00412ff7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412ffa: mov dword ptr [eax + 0x4ec], 2 */ W32((u32)(r_eax+0x4ecu), 0x2u);
    /* 00413004: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413007: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041300a: mov dword ptr [ecx + 0x4f0], edx */ W32((u32)(r_ecx+0x4f0u), r_edx);
    /* 00413010: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413014: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00413019: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041301c: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00413022: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00413025: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00413027: mov ecx, eax */ r_ecx = r_eax;
    /* 00413029: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041302c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41302eu); call_ind(t); }
    /* 0041302e: jmp 0x413080 */ goto L_00413080;
L_00413030:; BB(0x00413030);
    /* 00413030: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413033: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 00413037: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041303a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041303b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413041: call 0x41b620 */ r_esp -= 4; W32(r_esp, 0x413046u); f_0041b620();
    /* 00413046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413048: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041304a: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041304f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00413052: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00413058: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041305b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041305d: mov ecx, eax */ r_ecx = r_eax;
    /* 0041305f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413062: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x413064u); call_ind(t); }
    /* 00413064: jmp 0x413080 */ goto L_00413080;
L_00413066:; BB(0x00413066);
    /* 00413066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413068: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041306a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413070: call 0x4190b0 */ r_esp -= 4; W32(r_esp, 0x413075u); f_004190b0();
    /* 00413075: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041307b: call 0x40daf0 */ r_esp -= 4; W32(r_esp, 0x413080u); f_0040daf0();
L_00413080:; BB(0x00413080);
    /* 00413080: mov esp, ebp */ r_esp = r_ebp;
    /* 00413082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413083: ret  */ FN_RET(0x00412f40); r_esp += 4; return;
}

