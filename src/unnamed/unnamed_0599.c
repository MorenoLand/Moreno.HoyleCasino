#include "protos.h"

void f_00599020(void) /* sub_599020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599020);
    /* 00599020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599021: mov ebp, esp */ r_ebp = r_esp;
    /* 00599023: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599026: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00599029: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059902c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059902f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00599032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599034: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599037: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599038: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059903b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059903e: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00599042: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x599047u); f_005cb7d0();
    /* 00599047: mov esp, ebp */ r_esp = r_ebp;
    /* 00599049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059904a: ret 4 */ FN_RET(0x00599020); r_esp += 8; return;
}

void f_00599050(void) /* sub_599050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599050);
    /* 00599050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599051: mov ebp, esp */ r_ebp = r_esp;
    /* 00599053: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599056: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00599059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059905c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059905f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00599062: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599066: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00599069: call 0x598700 */ r_esp -= 4; W32(r_esp, 0x59906eu); f_00598700();
    /* 0059906e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00599071: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599073: jne 0x59907a */ if (!fZ) goto L_0059907a;
L_00599075:; BB(0x00599075);
    /* 00599075: jmp 0x599156 */ goto L_00599156;
L_0059907a:; BB(0x0059907a);
    /* 0059907a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059907d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059907e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599083u); f_005dcb00();
    /* 00599083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599088: jne 0x59908f */ if (!fZ) goto L_0059908f;
L_0059908a:; BB(0x0059908a);
    /* 0059908a: jmp 0x599156 */ goto L_00599156;
L_0059908f:; BB(0x0059908f);
    /* 0059908f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599092: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599093: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00599099: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059909b: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005990a1: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 005990a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5990a9u); call_ind(t); }
    /* 005990a9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005990b0: jmp 0x5990bb */ goto L_005990bb;
L_005990b2:; BB(0x005990b2);
    /* 005990b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005990b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005990b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005990bb:; BB(0x005990bb);
    /* 005990bb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005990bf: jge 0x599109 */ if ((fS==fO)) goto L_00599109;
L_005990c1:; BB(0x005990c1);
    /* 005990c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005990c4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005990c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005990ca: cmp dword ptr [edx + ecx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005990cf: jle 0x599107 */ if ((fZ||fS!=fO)) goto L_00599107;
L_005990d1:; BB(0x005990d1);
    /* 005990d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005990d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005990d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005990d8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005990db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005990de: lea edx, [ecx + eax*8 + 0x38] */ r_edx = (u32)(r_ecx+r_eax*8+0x38u);
    /* 005990e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005990e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005990e6: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005990e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005990ec: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005990f0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005990f3: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005990f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005990f9: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005990fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005990ff: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00599105: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599107u); call_ind(t); }
L_00599107:; BB(0x00599107);
    /* 00599107: jmp 0x5990b2 */ goto L_005990b2;
L_00599109:; BB(0x00599109);
    /* 00599109: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059910c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059910d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599112u); f_005dcb00();
    /* 00599112: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599115: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00599118: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059911b: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 00599122: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00599128: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x59912du); f_00591a70();
    /* 0059912d: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599133: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x599138u); f_005db890();
    /* 00599138: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059913a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059913c: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00599141: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00599144: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 0059914a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059914d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059914f: mov ecx, eax */ r_ecx = r_eax;
    /* 00599151: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00599154: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599156u); call_ind(t); }
L_00599156:; BB(0x00599156);
    /* 00599156: mov esp, ebp */ r_esp = r_ebp;
    /* 00599158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599159: ret 4 */ FN_RET(0x00599050); r_esp += 8; return;
}

void f_00599160(void) /* sub_599160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599160);
    /* 00599160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599161: mov ebp, esp */ r_ebp = r_esp;
    /* 00599163: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599166: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00599169: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00599170: jmp 0x59917b */ goto L_0059917b;
L_00599172:; BB(0x00599172);
    /* 00599172: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599175: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599178: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0059917b:; BB(0x0059917b);
    /* 0059917b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059917f: jge 0x5991fc */ if ((fS==fO)) goto L_005991fc;
L_00599181:; BB(0x00599181);
    /* 00599181: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599185: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59918au); f_005dcb00();
    /* 0059918a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059918d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00599190: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00599193: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x599198u); f_0063aac0();
    /* 00599198: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059919a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0059919d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059919f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005991a3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005991a6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005991a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005991ab: jne 0x5991f7 */ if (!fZ) goto L_005991f7;
L_005991ad:; BB(0x005991ad);
    /* 005991ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005991b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005991b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5991b6u); f_005dcb00();
    /* 005991b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005991b9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005991bc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005991bf: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 005991c5: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 005991c8: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005991cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005991ce: jne 0x5991f7 */ if (!fZ) goto L_005991f7;
L_005991d0:; BB(0x005991d0);
    /* 005991d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005991d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005991d4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5991d9u); f_005dcb00();
    /* 005991d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005991dc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005991df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005991e2: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005991e8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005991eb: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005991ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005991f1: jne 0x5991f7 */ if (!fZ) goto L_005991f7;
L_005991f3:; BB(0x005991f3);
    /* 005991f3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005991f5: jmp 0x5991fe */ goto L_005991fe;
L_005991f7:; BB(0x005991f7);
    /* 005991f7: jmp 0x599172 */ goto L_00599172;
L_005991fc:; BB(0x005991fc);
    /* 005991fc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005991fe:; BB(0x005991fe);
    /* 005991fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00599200: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599201: ret  */ FN_RET(0x00599160); r_esp += 4; return;
}

void f_00599210(void) /* sub_599210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599210);
    /* 00599210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599211: mov ebp, esp */ r_ebp = r_esp;
    /* 00599213: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599216: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00599219: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059921c: call 0x5997c0 */ r_esp -= 4; W32(r_esp, 0x599221u); f_005997c0();
    /* 00599221: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599225: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599228: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x59922du); f_00599450();
    /* 0059922d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059922f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599231: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599234: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x599239u); f_005994c0();
    /* 00599239: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059923c: mov byte ptr [eax + 0x108], 0 */ W8((u32)(r_eax+0x108u), 0x0u);
    /* 00599243: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059924a: jmp 0x599255 */ goto L_00599255;
L_0059924c:; BB(0x0059924c);
    /* 0059924c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059924f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599252: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00599255:; BB(0x00599255);
    /* 00599255: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599259: jge 0x59927d */ if ((fS==fO)) goto L_0059927d;
L_0059925b:; BB(0x0059925b);
    /* 0059925b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059925e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599261: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00599265: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x59926au); f_005cb9b0();
    /* 0059926a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059926d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599270: mov dword ptr [edx + ecx*4 + 0x98], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x98u), 0xffffffffu);
    /* 0059927b: jmp 0x59924c */ goto L_0059924c;
L_0059927d:; BB(0x0059927d);
    /* 0059927d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00599284: jmp 0x59928f */ goto L_0059928f;
L_00599286:; BB(0x00599286);
    /* 00599286: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00599289: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059928c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0059928f:; BB(0x0059928f);
    /* 0059928f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599293: jge 0x5992d1 */ if ((fS==fO)) goto L_005992d1;
L_00599295:; BB(0x00599295);
    /* 00599295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599297: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059929a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059929b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059929e: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x5992a3u); f_00599570();
    /* 005992a3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005992aa: jmp 0x5992b5 */ goto L_005992b5;
L_005992ac:; BB(0x005992ac);
    /* 005992ac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005992af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005992b2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005992b5:; BB(0x005992b5);
    /* 005992b5: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005992b9: jge 0x5992cf */ if ((fS==fO)) goto L_005992cf;
L_005992bb:; BB(0x005992bb);
    /* 005992bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005992bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005992c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005992c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005992c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005992c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005992c8: call 0x5994f0 */ r_esp -= 4; W32(r_esp, 0x5992cdu); f_005994f0();
    /* 005992cd: jmp 0x5992ac */ goto L_005992ac;
L_005992cf:; BB(0x005992cf);
    /* 005992cf: jmp 0x599286 */ goto L_00599286;
L_005992d1:; BB(0x005992d1);
    /* 005992d1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005992d8: jmp 0x5992e3 */ goto L_005992e3;
L_005992da:; BB(0x005992da);
    /* 005992da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005992dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005992e0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005992e3:; BB(0x005992e3);
    /* 005992e3: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005992e7: jge 0x599350 */ if ((fS==fO)) goto L_00599350;
L_005992e9:; BB(0x005992e9);
    /* 005992e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005992ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005992ed: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5992f2u); f_005dcb00();
    /* 005992f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005992f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005992f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005992fb: mov byte ptr [ecx + 0x4a0], 0 */ W8((u32)(r_ecx+0x4a0u), 0x0u);
    /* 00599302: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00599305: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599306: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59930bu); f_005dcb00();
    /* 0059930b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059930e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00599311: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00599314: mov byte ptr [eax + 0x4a1], 0 */ W8((u32)(r_eax+0x4a1u), 0x0u);
    /* 0059931b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059931e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059931f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599324u); f_005dcb00();
    /* 00599324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599327: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059932a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059932d: mov byte ptr [edx + 0x4a2], 0 */ W8((u32)(r_edx+0x4a2u), 0x0u);
    /* 00599334: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599337: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059933a: mov byte ptr [eax + 0x117], 0 */ W8((u32)(r_eax+0x117u), 0x0u);
    /* 00599341: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599344: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599347: mov byte ptr [ecx + 0x112], 0 */ W8((u32)(r_ecx+0x112u), 0x0u);
    /* 0059934e: jmp 0x5992da */ goto L_005992da;
L_00599350:; BB(0x00599350);
    /* 00599350: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599353: call 0x597c60 */ r_esp -= 4; W32(r_esp, 0x599358u); f_00597c60();
    /* 00599358: mov esp, ebp */ r_esp = r_ebp;
    /* 0059935a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059935b: ret  */ FN_RET(0x00599210); r_esp += 4; return;
}

void f_00599360(void) /* sub_599360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599360);
    /* 00599360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599361: mov ebp, esp */ r_ebp = r_esp;
    /* 00599363: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599366: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599367: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0059936a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00599371: jmp 0x59937c */ goto L_0059937c;
L_00599373:; BB(0x00599373);
    /* 00599373: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599376: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599379: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0059937c:; BB(0x0059937c);
    /* 0059937c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599380: jge 0x599442 */ if ((fS==fO)) goto L_00599442;
L_00599386:; BB(0x00599386);
    /* 00599386: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599389: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059938c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0059938f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00599396: jmp 0x5993a1 */ goto L_005993a1;
L_00599398:; BB(0x00599398);
    /* 00599398: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059939b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059939e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005993a1:; BB(0x005993a1);
    /* 005993a1: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005993a5: jge 0x59943d */ if ((fS==fO)) goto L_0059943d;
L_005993ab:; BB(0x005993ab);
    /* 005993ab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005993ae: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005993b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005993b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005993b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005993b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005993ba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005993bd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005993c0: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005993c4: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5993c9u); f_005cb7d0();
    /* 005993c9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005993cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005993ce: je 0x599412 */ if (fZ) goto L_00599412;
L_005993d0:; BB(0x005993d0);
    /* 005993d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005993d3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005993d6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005993da: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005993dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005993e0: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005993e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005993e6: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005993ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005993ec: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005993ef: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005993f2: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005993f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005993f9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005993fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005993ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00599402: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00599405: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00599408: mov dword ptr [esi + ecx*8 + 0x38], edx */ W32((u32)(r_esi+r_ecx*8+0x38u), r_edx);
    /* 0059940c: mov dword ptr [esi + ecx*8 + 0x3c], eax */ W32((u32)(r_esi+r_ecx*8+0x3cu), r_eax);
    /* 00599410: jmp 0x599438 */ goto L_00599438;
L_00599412:; BB(0x00599412);
    /* 00599412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599414: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599416: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59941bu); f_0064c8a0();
    /* 0059941b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059941e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00599421: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00599424: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00599427: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059942a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059942d: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 00599431: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599434: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
L_00599438:; BB(0x00599438);
    /* 00599438: jmp 0x599398 */ goto L_00599398;
L_0059943d:; BB(0x0059943d);
    /* 0059943d: jmp 0x599373 */ goto L_00599373;
L_00599442:; BB(0x00599442);
    /* 00599442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599443: mov esp, ebp */ r_esp = r_ebp;
    /* 00599445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599446: ret  */ FN_RET(0x00599360); r_esp += 4; return;
}

void f_00599450(void) /* sub_599450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599450);
    /* 00599450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599451: mov ebp, esp */ r_ebp = r_esp;
    /* 00599453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00599457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059945a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059945d: mov dword ptr [eax + 0x104], ecx */ W32((u32)(r_eax+0x104u), r_ecx);
    /* 00599463: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599466: cmp dword ptr [edx + 0x104], -1 */ {  u32 a = R32((u32)(r_edx+0x104u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059946d: je 0x599486 */ if (fZ) goto L_00599486;
L_0059946f:; BB(0x0059946f);
    /* 0059946f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00599472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599473: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599477: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00599479: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059947f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x599484u); f_005d8a20();
    /* 00599484: jmp 0x599497 */ goto L_00599497;
L_00599486:; BB(0x00599486);
    /* 00599486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599488: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059948a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059948c: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599492: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x599497u); f_005d8a20();
L_00599497:; BB(0x00599497);
    /* 00599497: mov esp, ebp */ r_esp = r_ebp;
    /* 00599499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059949a: ret 8 */ FN_RET(0x00599450); r_esp += 12; return;
}

void f_005994a0(void) /* sub_5994A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005994a0);
    /* 005994a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005994a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005994a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005994a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005994a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005994aa: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005994ad: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005994b0: mov byte ptr [eax + 0x10e], cl */ W8((u32)(r_eax+0x10eu), (u8)r_ecx);
    /* 005994b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005994b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005994b9: ret 8 */ FN_RET(0x005994a0); r_esp += 12; return;
}

void f_005994c0(void) /* sub_5994C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005994c0);
    /* 005994c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005994c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005994c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005994c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005994c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005994ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005994cd: mov dword ptr [eax + 0x11c], ecx */ W32((u32)(r_eax+0x11cu), r_ecx);
    /* 005994d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005994d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005994d9: mov dword ptr [edx + 0x120], eax */ W32((u32)(r_edx+0x120u), r_eax);
    /* 005994df: mov esp, ebp */ r_esp = r_ebp;
    /* 005994e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005994e2: ret 8 */ FN_RET(0x005994c0); r_esp += 12; return;
}

void f_005994f0(void) /* sub_5994F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005994f0);
    /* 005994f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005994f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005994f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005994f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005994f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005994fa: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005994fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599500: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00599507: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059950a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0059950e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 00599512: mov esp, ebp */ r_esp = r_ebp;
    /* 00599514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599515: ret 0xc */ FN_RET(0x005994f0); r_esp += 16; return;
}

void f_00599520(void) /* sub_599520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599520);
    /* 00599520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599521: mov ebp, esp */ r_ebp = r_esp;
    /* 00599523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00599527: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059952c: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x599531u); f_00597d50();
    /* 00599531: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00599534: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00599537: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059953d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x599542u); f_006375b0();
    /* 00599542: mov ecx, eax */ r_ecx = r_eax;
    /* 00599544: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x599549u); f_0063b0a0();
    /* 00599549: mov esp, ebp */ r_esp = r_ebp;
    /* 0059954b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059954c: ret 4 */ FN_RET(0x00599520); r_esp += 8; return;
}

void f_00599550(void) /* sub_599550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599550);
    /* 00599550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599551: mov ebp, esp */ r_ebp = r_esp;
    /* 00599553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00599557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059955c: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x599561u); f_00597d50();
    /* 00599561: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00599564: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00599566: mov esp, ebp */ r_esp = r_ebp;
    /* 00599568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599569: ret 4 */ FN_RET(0x00599550); r_esp += 8; return;
}

void f_00599570(void) /* sub_599570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599570);
    /* 00599570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599571: mov ebp, esp */ r_ebp = r_esp;
    /* 00599573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00599577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059957a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059957d: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00599580: mov byte ptr [eax + 0x109], cl */ W8((u32)(r_eax+0x109u), (u8)r_ecx);
    /* 00599586: mov esp, ebp */ r_esp = r_ebp;
    /* 00599588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599589: ret 8 */ FN_RET(0x00599570); r_esp += 12; return;
}

void f_00599780(void) /* sub_599780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599780);
    /* 00599780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599781: mov ebp, esp */ r_ebp = r_esp;
    /* 00599783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00599787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599789: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059978c: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x599791u); f_00597d50();
    /* 00599791: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00599794: mov esp, ebp */ r_esp = r_ebp;
    /* 00599796: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599797: ret  */ FN_RET(0x00599780); r_esp += 4; return;
}

void f_005997a0(void) /* sub_5997A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005997a0);
    /* 005997a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005997a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005997a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005997a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005997a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005997aa: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005997ad: mov al, byte ptr [eax + 0x109] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x109u))) & 0xffu);
    /* 005997b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005997b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005997b6: ret 4 */ FN_RET(0x005997a0); r_esp += 8; return;
}

void f_005997c0(void) /* sub_5997C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005997c0);
    /* 005997c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005997c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005997c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005997c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005997c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005997c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005997cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005997ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005997d1: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x5997d6u); f_006437d0();
    /* 005997d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005997d8: push 0x6cea34 */ { u32 v = 0x6cea34u; r_esp -= 4; W32(r_esp, v); }
    /* 005997dd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005997df: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005997e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005997e4: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005997e7: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x5997ecu); f_00643930();
    /* 005997ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005997ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005997ef: ret  */ FN_RET(0x005997c0); r_esp += 4; return;
}

void f_005997f0(void) /* sub_5997F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005997f0);
    /* 005997f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005997f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005997f3: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005997f6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005997fb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005997fd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00599800: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00599803: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599806: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599809: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059980c: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00599810: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599812: je 0x5998b4 */ if (fZ) goto L_005998b4;
L_00599818:; BB(0x00599818);
    /* 00599818: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059981b: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059981e: mov byte ptr [edx + 0x112], 1 */ W8((u32)(r_edx+0x112u), 0x1u);
    /* 00599825: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599827: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599829: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59982eu); f_0064c8a0();
    /* 0059982e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599831: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00599834: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00599837: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059983a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059983b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059983e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059983f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599843: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599848u); f_005dcb00();
    /* 00599848: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059984b: mov ecx, eax */ r_ecx = r_eax;
    /* 0059984d: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x599852u); f_005d6050();
    /* 00599852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599854: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059985b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059985e: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00599862: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x599867u); f_005cb7d0();
    /* 00599867: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059986a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059986c: je 0x5998af */ if (fZ) goto L_005998af;
L_0059986e:; BB(0x0059986e);
    /* 0059986e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599870: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599874: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599876: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059987a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059987d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599880: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00599884: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x599889u); f_0059a150();
    /* 00599889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059988b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059988e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059988f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599892: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599895: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00599899: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059989c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059989f: mov edx, dword ptr [eax + edx*4 + 0xc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005998a3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005998a5: mov ecx, edx */ r_ecx = r_edx;
    /* 005998a7: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005998ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5998afu); call_ind(t); }
L_005998af:; BB(0x005998af);
    /* 005998af: jmp 0x599a56 */ goto L_00599a56;
L_005998b4:; BB(0x005998b4);
    /* 005998b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005998b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005998b8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5998bdu); f_005dcb00();
    /* 005998bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005998c0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005998c3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005998c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5998cbu); f_0063aac0();
    /* 005998cb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005998cd: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005998d0: cmp dword ptr [ebp - 0x44], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005998d4: je 0x5998f2 */ if (fZ) goto L_005998f2;
L_005998d6:; BB(0x005998d6);
    /* 005998d6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005998d9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5998deu); f_0063aac0();
    /* 005998de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005998e0: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005998e3: cmp dword ptr [ebp - 0x48], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005998e7: je 0x5998f2 */ if (fZ) goto L_005998f2;
L_005998e9:; BB(0x005998e9);
    /* 005998e9: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005998f0: jmp 0x5998f9 */ goto L_005998f9;
L_005998f2:; BB(0x005998f2);
    /* 005998f2: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
L_005998f9:; BB(0x005998f9);
    /* 005998f9: movzx eax, byte ptr [ebp - 0x5c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa4u));
    /* 005998fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005998ff: jne 0x599a56 */ if (!fZ) goto L_00599a56;
L_00599905:; BB(0x00599905);
    /* 00599905: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0059990c: jmp 0x599917 */ goto L_00599917;
L_0059990e:; BB(0x0059990e);
    /* 0059990e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00599911: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599914: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00599917:; BB(0x00599917);
    /* 00599917: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059991b: jge 0x599929 */ if ((fS==fO)) goto L_00599929;
L_0059991d:; BB(0x0059991d);
    /* 0059991d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00599920: mov word ptr [ebp + edx*2 - 0x10], 0 */ W16((u32)(r_ebp+r_edx*2+0xfffffff0u), 0x0u);
    /* 00599927: jmp 0x59990e */ goto L_0059990e;
L_00599929:; BB(0x00599929);
    /* 00599929: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0059992c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059992d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059992f: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599933: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00599936: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059993a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059993d: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599940: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599943: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 0059994a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059994b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059994d: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x599952u); f_00462a40();
    /* 00599952: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599955: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599957: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599959: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0059995c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059995d: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x599962u); f_00462ba0();
    /* 00599962: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599965: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00599968: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059996c: jg 0x59998b */ if ((!fZ&&fS==fO)) goto L_0059998b;
L_0059996e:; BB(0x0059996e);
    /* 0059996e: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599972: jne 0x599a04 */ if (!fZ) goto L_00599a04;
L_00599978:; BB(0x00599978);
    /* 00599978: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059997a: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0059997d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059997e: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x599983u); f_004639e0();
    /* 00599983: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599986: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599989: jl 0x599a04 */ if ((fS!=fO)) goto L_00599a04;
L_0059998b:; BB(0x0059998b);
    /* 0059998b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059998e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599991: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00599995: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00599998: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059999b: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0059999e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005999a1: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005999a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005999a7: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005999aa: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005999ad: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005999b1: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005999b4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005999b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005999b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005999bc: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005999bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005999c0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5999c5u); f_0064c8a0();
    /* 005999c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005999c8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005999cb: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005999ce: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005999d1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005999d4: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005999d7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005999da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005999dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005999de: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005999e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005999e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005999e5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005999e8: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005999ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005999ef: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005999f2: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005999f6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005999f8: mov ecx, edx */ r_ecx = r_edx;
    /* 005999fa: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00599a00: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x599a02u); call_ind(t); }
    /* 00599a02: jmp 0x599a56 */ goto L_00599a56;
L_00599a04:; BB(0x00599a04);
    /* 00599a04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599a07: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599a0a: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00599a0e: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00599a11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599a14: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00599a17: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00599a1a: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00599a1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599a20: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00599a23: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00599a26: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00599a2a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00599a2d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00599a30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a34: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00599a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599a38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599a3b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599a3e: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00599a42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599a45: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00599a48: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00599a4c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00599a4e: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00599a54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x599a56u); call_ind(t); }
L_00599a56:; BB(0x00599a56);
    /* 00599a56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00599a59: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599a5b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x599a60u); f_00686d72();
    /* 00599a60: mov esp, ebp */ r_esp = r_ebp;
    /* 00599a62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599a63: ret 8 */ FN_RET(0x005997f0); r_esp += 12; return;
}

void f_00599a70(void) /* sub_599A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599a70);
    /* 00599a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00599a73: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599a76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00599a7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599a7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00599a80: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00599a83: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00599a8a: jmp 0x599a95 */ goto L_00599a95;
L_00599a8c:; BB(0x00599a8c);
    /* 00599a8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00599a8f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599a92: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00599a95:; BB(0x00599a95);
    /* 00599a95: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599a99: jge 0x599aa7 */ if ((fS==fO)) goto L_00599aa7;
L_00599a9b:; BB(0x00599a9b);
    /* 00599a9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599a9e: mov word ptr [ebp + ecx*2 - 0xc], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffff4u), 0x0u);
    /* 00599aa5: jmp 0x599a8c */ goto L_00599a8c;
L_00599aa7:; BB(0x00599aa7);
    /* 00599aa7: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00599aaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599aab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599aad: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599ab1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00599ab4: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599ab8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599abb: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599abe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00599ac1: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00599ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599ac9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599acb: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x599ad0u); f_00462a40();
    /* 00599ad0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599ad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ad5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ad7: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00599ada: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599adb: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x599ae0u); f_00462ba0();
    /* 00599ae0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599ae3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00599ae6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599aea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00599aed: call 0x598ff0 */ r_esp -= 4; W32(r_esp, 0x599af2u); f_00598ff0();
    /* 00599af2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00599af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599af7: je 0x599b21 */ if (fZ) goto L_00599b21;
L_00599af9:; BB(0x00599af9);
    /* 00599af9: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599afd: jg 0x599b18 */ if ((!fZ&&fS==fO)) goto L_00599b18;
L_00599aff:; BB(0x00599aff);
    /* 00599aff: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599b03: jne 0x599b21 */ if (!fZ) goto L_00599b21;
L_00599b05:; BB(0x00599b05);
    /* 00599b05: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599b07: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00599b0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599b0b: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x599b10u); f_004639e0();
    /* 00599b10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599b13: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599b16: jl 0x599b21 */ if ((fS!=fO)) goto L_00599b21;
L_00599b18:; BB(0x00599b18);
    /* 00599b18: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00599b1f: jmp 0x599b28 */ goto L_00599b28;
L_00599b21:; BB(0x00599b21);
    /* 00599b21: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00599b28:; BB(0x00599b28);
    /* 00599b28: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 00599b2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599b2e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599b30: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x599b35u); f_00686d72();
    /* 00599b35: mov esp, ebp */ r_esp = r_ebp;
    /* 00599b37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599b38: ret 4 */ FN_RET(0x00599a70); r_esp += 8; return;
}

