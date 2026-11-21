#include "protos.h"

void f_00544050(void) /* sub_544050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544050);
    /* 00544050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544051: mov ebp, esp */ r_ebp = r_esp;
    /* 00544053: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544056: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00544059: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00544060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544067: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 0054406c: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00544070: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544072: jne 0x5440a9 */ if (!fZ) goto L_005440a9;
L_00544074:; BB(0x00544074);
    /* 00544074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544077: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0054407d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00544080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544081: fld1  */ FPUSH(1.0);
    /* 00544083: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00544086: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544088: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054408a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054408c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054408e: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00544093: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00544099: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054409b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005440a1: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005440a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5440a9u); call_ind(t); }
L_005440a9:; BB(0x005440a9);
    /* 005440a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005440ac: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005440af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005440b2: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 005440b6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005440b9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005440bc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005440bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005440c2: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005440c5: mov byte ptr [edx + 0x1a4], al */ W8((u32)(r_edx+0x1a4u), (u8)r_eax);
    /* 005440cb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005440ce: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005440d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005440d4: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 005440d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005440db: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005440de: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005440e2: mov word ptr [edx + 0x190], ax */ W16((u32)(r_edx+0x190u), (u16)r_eax);
    /* 005440e9: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 005440ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005440ed: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005440f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005440f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005440f4: call 0x543d20 */ r_esp -= 4; W32(r_esp, 0x5440f9u); f_00543d20();
    /* 005440f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005440fa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005440fd: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544100: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544103: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00544107: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0054410a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0054410d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x544112u); f_005eaf00();
    /* 00544112: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 00544116: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544118: jne 0x544134 */ if (!fZ) goto L_00544134;
L_0054411a:; BB(0x0054411a);
    /* 0054411a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0054411d: mov eax, dword ptr [edx*8 + 0x73b408] */ r_eax = R32((u32)(r_edx*8+0x73b408u));
    /* 00544124: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00544127: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0054412a: mov edx, dword ptr [ecx*8 + 0x73b40c] */ r_edx = R32((u32)(r_ecx*8+0x73b40cu));
    /* 00544131: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00544134:; BB(0x00544134);
    /* 00544134: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544138: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054413b: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054413e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544141: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 00544145: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00544148: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0054414b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054414e: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544151: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544154: lea eax, [ecx + eax + 0x44] */ r_eax = (u32)(r_ecx+r_eax+0x44u);
    /* 00544158: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0054415b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0054415e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00544160: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00544163: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544165u); call_ind(t); }
    /* 00544165: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544169: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0054416c: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054416f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544172: lea ecx, [eax + edx + 0x44] */ r_ecx = (u32)(r_eax+r_edx+0x44u);
    /* 00544176: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00544179: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0054417c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054417f: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544182: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544185: lea ecx, [edx + ecx + 0x44] */ r_ecx = (u32)(r_edx+r_ecx+0x44u);
    /* 00544189: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0054418c: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0054418f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00544191: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00544194: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x544196u); call_ind(t); }
    /* 00544196: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00544199: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054419c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054419d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005441a0: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005441a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005441a6: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 005441aa: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005441ad: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005441b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005441b3: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005441b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005441b9: lea eax, [ecx + eax + 0x44] */ r_eax = (u32)(r_ecx+r_eax+0x44u);
    /* 005441bd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005441c0: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005441c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005441c5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005441c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5441cau); call_ind(t); }
    /* 005441ca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005441cd: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005441d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005441d3: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 005441d7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005441da: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005441dd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005441e0: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005441e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005441e6: lea eax, [ecx + eax + 0x44] */ r_eax = (u32)(r_ecx+r_eax+0x44u);
    /* 005441ea: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005441ed: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005441f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005441f2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005441f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5441f7u); call_ind(t); }
    /* 005441f7: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441fb: jne 0x544221 */ if (!fZ) goto L_00544221;
L_005441fd:; BB(0x005441fd);
    /* 005441fd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00544200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544201: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00544207: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54420cu); f_00548f80();
    /* 0054420c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054420f: jg 0x544221 */ if ((!fZ&&fS==fO)) goto L_00544221;
L_00544211:; BB(0x00544211);
    /* 00544211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544213: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00544216: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544217: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054421a: call 0x544300 */ r_esp -= 4; W32(r_esp, 0x54421fu); f_00544300();
    /* 0054421f: jmp 0x54422f */ goto L_0054422f;
L_00544221:; BB(0x00544221);
    /* 00544221: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544223: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00544226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544227: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054422a: call 0x544300 */ r_esp -= 4; W32(r_esp, 0x54422fu); f_00544300();
L_0054422f:; BB(0x0054422f);
    /* 0054422f: mov esp, ebp */ r_esp = r_ebp;
    /* 00544231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544232: ret 0x14 */ FN_RET(0x00544050); r_esp += 24; return;
}

void f_00544240(void) /* sub_544240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544240);
    /* 00544240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544241: mov ebp, esp */ r_ebp = r_esp;
    /* 00544243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544247: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054424a: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054424d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544250: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00544254: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00544257: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0054425a: mov word ptr [ecx + 0x190], 0 */ W16((u32)(r_ecx+0x190u), 0x0u);
    /* 00544263: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00544266: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544269: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054426c: lea ecx, [eax + edx + 0x44] */ r_ecx = (u32)(r_eax+r_edx+0x44u);
    /* 00544270: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00544273: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00544276: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544279: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054427c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054427f: lea ecx, [edx + ecx + 0x44] */ r_ecx = (u32)(r_edx+r_ecx+0x44u);
    /* 00544283: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00544286: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00544289: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0054428b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0054428e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x544290u); call_ind(t); }
    /* 00544290: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544292: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544296: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544299: call 0x544300 */ r_esp -= 4; W32(r_esp, 0x54429eu); f_00544300();
    /* 0054429e: mov esp, ebp */ r_esp = r_ebp;
    /* 005442a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005442a1: ret 8 */ FN_RET(0x00544240); r_esp += 12; return;
}

void f_005442b0(void) /* sub_5442B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005442b0);
    /* 005442b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005442b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005442b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005442b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005442b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005442bc: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005442bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005442c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005442c5: mov byte ptr [edx + 0x1a4], 1 */ W8((u32)(r_edx+0x1a4u), 0x1u);
    /* 005442cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005442cf: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005442d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005442d5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005442d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005442da: mov ecx, eax */ r_ecx = r_eax;
    /* 005442dc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005442df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5442e1u); call_ind(t); }
    /* 005442e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005442e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005442e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005442e8: call 0x544300 */ r_esp -= 4; W32(r_esp, 0x5442edu); f_00544300();
    /* 005442ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005442ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005442f0: ret  */ FN_RET(0x005442b0); r_esp += 4; return;
}

void f_00544300(void) /* sub_544300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544300);
    /* 00544300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544301: mov ebp, esp */ r_ebp = r_esp;
    /* 00544303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544309: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0054430c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054430d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544311: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00544317: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54431cu); f_00549e80();
    /* 0054431c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054431f: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544323: jne 0x544361 */ if (!fZ) goto L_00544361;
L_00544325:; BB(0x00544325);
    /* 00544325: mov edx, dword ptr [0x793404] */ r_edx = R32((u32)(0x793404u));
    /* 0054432b: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 0054432f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544331: je 0x544348 */ if (fZ) goto L_00544348;
L_00544333:; BB(0x00544333);
    /* 00544333: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544335: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00544337: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544339: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0054433b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054433e: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00544341: call 0x546760 */ r_esp -= 4; W32(r_esp, 0x544346u); f_00546760();
    /* 00544346: jmp 0x544361 */ goto L_00544361;
L_00544348:; BB(0x00544348);
    /* 00544348: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0054434a: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054434f: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00544351: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00544356: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544359: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0054435c: call 0x546760 */ r_esp -= 4; W32(r_esp, 0x544361u); f_00546760();
L_00544361:; BB(0x00544361);
    /* 00544361: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544365: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544368: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054436b: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 0054436f: call 0x5468e0 */ r_esp -= 4; W32(r_esp, 0x544374u); f_005468e0();
    /* 00544374: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544377: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054437a: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 0054437e: call 0x5467b0 */ r_esp -= 4; W32(r_esp, 0x544383u); f_005467b0();
    /* 00544383: mov esp, ebp */ r_esp = r_ebp;
    /* 00544385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544386: ret 8 */ FN_RET(0x00544300); r_esp += 12; return;
}

void f_00544390(void) /* sub_544390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544390);
    /* 00544390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544391: mov ebp, esp */ r_ebp = r_esp;
    /* 00544393: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544396: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544399: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005443a0: jmp 0x5443ab */ goto L_005443ab;
L_005443a2:; BB(0x005443a2);
    /* 005443a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005443a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005443a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005443ab:; BB(0x005443ab);
    /* 005443ab: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005443af: jge 0x5443c2 */ if ((fS==fO)) goto L_005443c2;
L_005443b1:; BB(0x005443b1);
    /* 005443b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005443b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005443b7: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005443bb: call 0x5468a0 */ r_esp -= 4; W32(r_esp, 0x5443c0u); f_005468a0();
    /* 005443c0: jmp 0x5443a2 */ goto L_005443a2;
L_005443c2:; BB(0x005443c2);
    /* 005443c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005443c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005443c5: ret  */ FN_RET(0x00544390); r_esp += 4; return;
}

void f_005443d0(void) /* sub_5443D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005443d0);
    /* 005443d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005443d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005443d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005443d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005443d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005443e0: jmp 0x5443eb */ goto L_005443eb;
L_005443e2:; BB(0x005443e2);
    /* 005443e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005443e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005443e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005443eb:; BB(0x005443eb);
    /* 005443eb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005443ef: jge 0x544480 */ if ((fS==fO)) goto L_00544480;
L_005443f5:; BB(0x005443f5);
    /* 005443f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005443f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005443f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005443fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005443fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005443ff: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00544404: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054440a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054440d: add ecx, 0x31166a */ {  u32 a = r_ecx; u32 b = 0x31166au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544414: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054441a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0054441f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00544422: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x544427u); f_005f9de0();
    /* 00544427: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054442c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054442d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00544433: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00544436: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x54443bu); f_005fb300();
    /* 0054443b: mov ecx, eax */ r_ecx = r_eax;
    /* 0054443d: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x544442u); f_005eb700();
    /* 00544442: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544446: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544449: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x54444eu); f_00544b30();
    /* 0054444e: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544452: jne 0x54447b */ if (!fZ) goto L_0054447b;
L_00544454:; BB(0x00544454);
    /* 00544454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544456: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054445a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00544460: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00544463: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x544468u); f_005fb300();
    /* 00544468: mov ecx, eax */ r_ecx = r_eax;
    /* 0054446a: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x54446fu); f_00602790();
    /* 0054446f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544473: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544476: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x54447bu); f_00544ac0();
L_0054447b:; BB(0x0054447b);
    /* 0054447b: jmp 0x5443e2 */ goto L_005443e2;
L_00544480:; BB(0x00544480);
    /* 00544480: mov esp, ebp */ r_esp = r_ebp;
    /* 00544482: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544483: ret  */ FN_RET(0x005443d0); r_esp += 4; return;
}

void f_00544620(void) /* sub_544620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544620);
    /* 00544620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544621: mov ebp, esp */ r_ebp = r_esp;
    /* 00544623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544625: push 0x6a4fce */ { u32 v = 0x6a4fceu; r_esp -= 4; W32(r_esp, v); }
    /* 0054462a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00544630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544631: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544634: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00544639: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054463b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054463c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054463f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00544645: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00544648: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054464f: jmp 0x54465a */ goto L_0054465a;
L_00544651:; BB(0x00544651);
    /* 00544651: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544654: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544657: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0054465a:; BB(0x0054465a);
    /* 0054465a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054465e: jge 0x5446f1 */ if ((fS==fO)) goto L_005446f1;
L_00544664:; BB(0x00544664);
    /* 00544664: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00544669: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54466eu); f_00686d82();
    /* 0054466e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544671: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00544674: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054467b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054467f: je 0x54468e */ if (fZ) goto L_0054468e;
L_00544681:; BB(0x00544681);
    /* 00544681: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00544684: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x544689u); f_005eaaf0();
    /* 00544689: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054468c: jmp 0x544695 */ goto L_00544695;
L_0054468e:; BB(0x0054468e);
    /* 0054468e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00544695:; BB(0x00544695);
    /* 00544695: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544698: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054469b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005446a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005446a5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005446a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005446ab: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005446af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005446b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005446b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005446b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005446b7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005446ba: mov eax, dword ptr [edx*4 + 0x73b460] */ r_eax = R32((u32)(r_edx*4+0x73b460u));
    /* 005446c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005446c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005446c5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005446c8: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005446cc: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5446d1u); f_005eae80();
    /* 005446d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005446d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005446d7: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005446db: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005446de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005446e1: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005446e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005446e7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005446ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5446ecu); call_ind(t); }
    /* 005446ec: jmp 0x544651 */ goto L_00544651;
L_005446f1:; BB(0x005446f1);
    /* 005446f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005446f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005446fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005446fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005446fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005446ff: ret  */ FN_RET(0x00544620); r_esp += 4; return;
}

void f_00544700(void) /* sub_544700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544700);
    /* 00544700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544701: mov ebp, esp */ r_ebp = r_esp;
    /* 00544703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054470a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054470d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00544711: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544714: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544717: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0054471b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054471d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00544720: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544722u); call_ind(t); }
    /* 00544722: mov esp, ebp */ r_esp = r_ebp;
    /* 00544724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544725: ret 4 */ FN_RET(0x00544700); r_esp += 8; return;
}

void f_00544730(void) /* sub_544730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544730);
    /* 00544730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544731: mov ebp, esp */ r_ebp = r_esp;
    /* 00544733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544737: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054473a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054473d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00544741: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544744: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544747: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0054474b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054474d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00544750: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544752u); call_ind(t); }
    /* 00544752: mov esp, ebp */ r_esp = r_ebp;
    /* 00544754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544755: ret 4 */ FN_RET(0x00544730); r_esp += 8; return;
}

void f_00544760(void) /* sub_544760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544760);
    /* 00544760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544761: mov ebp, esp */ r_ebp = r_esp;
    /* 00544763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544767: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054476a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054476d: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00544771: call 0x5f54e0 */ r_esp -= 4; W32(r_esp, 0x544776u); f_005f54e0();
    /* 00544776: mov esp, ebp */ r_esp = r_ebp;
    /* 00544778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544779: ret 4 */ FN_RET(0x00544760); r_esp += 8; return;
}

void f_00544780(void) /* sub_544780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544780);
    /* 00544780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544781: mov ebp, esp */ r_ebp = r_esp;
    /* 00544783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544787: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544789: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054478c: call 0x544700 */ r_esp -= 4; W32(r_esp, 0x544791u); f_00544700();
    /* 00544791: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544796: call 0x544700 */ r_esp -= 4; W32(r_esp, 0x54479bu); f_00544700();
    /* 0054479b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054479d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054479e: ret  */ FN_RET(0x00544780); r_esp += 4; return;
}

void f_005447c0(void) /* sub_5447C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005447c0);
    /* 005447c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005447c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005447c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005447c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005447c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005447c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005447cc: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x5447d1u); f_00544860();
    /* 005447d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005447d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005447d6: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x5447dbu); f_00544860();
    /* 005447db: mov esp, ebp */ r_esp = r_ebp;
    /* 005447dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005447de: ret  */ FN_RET(0x005447c0); r_esp += 4; return;
}

void f_005447e0(void) /* sub_5447E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005447e0);
    /* 005447e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005447e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005447e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005447e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005447e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005447e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005447ec: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5447f1u); f_005448f0();
    /* 005447f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005447f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005447f6: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5447fbu); f_005448f0();
    /* 005447fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005447fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005447fe: ret  */ FN_RET(0x005447e0); r_esp += 4; return;
}

void f_00544800(void) /* sub_544800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544800);
    /* 00544800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544801: mov ebp, esp */ r_ebp = r_esp;
    /* 00544803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054480a: call 0x545320 */ r_esp -= 4; W32(r_esp, 0x54480fu); f_00545320();
    /* 0054480f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544812: call 0x545390 */ r_esp -= 4; W32(r_esp, 0x544817u); f_00545390();
    /* 00544817: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054481c: call 0x544700 */ r_esp -= 4; W32(r_esp, 0x544821u); f_00544700();
    /* 00544821: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544824: call 0x5447c0 */ r_esp -= 4; W32(r_esp, 0x544829u); f_005447c0();
    /* 00544829: mov esp, ebp */ r_esp = r_ebp;
    /* 0054482b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054482c: ret  */ FN_RET(0x00544800); r_esp += 4; return;
}

void f_00544830(void) /* sub_544830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544830);
    /* 00544830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544831: mov ebp, esp */ r_ebp = r_esp;
    /* 00544833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544837: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544839: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054483c: call 0x544730 */ r_esp -= 4; W32(r_esp, 0x544841u); f_00544730();
    /* 00544841: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544844: call 0x5447e0 */ r_esp -= 4; W32(r_esp, 0x544849u); f_005447e0();
    /* 00544849: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054484c: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x544851u); f_005452a0();
    /* 00544851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544854: call 0x545340 */ r_esp -= 4; W32(r_esp, 0x544859u); f_00545340();
    /* 00544859: mov esp, ebp */ r_esp = r_ebp;
    /* 0054485b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054485c: ret  */ FN_RET(0x00544830); r_esp += 4; return;
}

void f_00544860(void) /* sub_544860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544860);
    /* 00544860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544861: mov ebp, esp */ r_ebp = r_esp;
    /* 00544863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544866: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544869: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544870: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544873: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544876: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0054487d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544880: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544883: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0054488a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054488c: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00544892: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544894u); call_ind(t); }
    /* 00544894: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544896: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544899: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054489c: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 005448a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005448a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005448a9: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 005448b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005448b2: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005448b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5448b7u); call_ind(t); }
    /* 005448b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005448ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005448bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005448be: call 0x5449e0 */ r_esp -= 4; W32(r_esp, 0x5448c3u); f_005449e0();
    /* 005448c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005448c6: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005448ca: je 0x5448dd */ if (fZ) goto L_005448dd;
L_005448cc:; BB(0x005448cc);
    /* 005448cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005448ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005448d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005448d2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005448d8: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5448ddu); f_005f2b20();
L_005448dd:; BB(0x005448dd);
    /* 005448dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005448df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005448e0: ret 4 */ FN_RET(0x00544860); r_esp += 8; return;
}

void f_005448f0(void) /* sub_5448F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005448f0);
    /* 005448f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005448f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005448f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005448f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005448f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544900: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544903: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544906: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0054490d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544910: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544913: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0054491a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054491c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00544922: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544924u); call_ind(t); }
    /* 00544924: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544926: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544929: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054492c: mov eax, dword ptr [edx + ecx*4 + 0x8c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00544933: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00544936: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544939: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 00544940: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00544942: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00544945: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x544947u); call_ind(t); }
    /* 00544947: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054494a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054494b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054494e: call 0x5449e0 */ r_esp -= 4; W32(r_esp, 0x544953u); f_005449e0();
    /* 00544953: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00544956: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054495a: je 0x54496b */ if (fZ) goto L_0054496b;
L_0054495c:; BB(0x0054495c);
    /* 0054495c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054495f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544960: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544966: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x54496bu); f_005f2ba0();
L_0054496b:; BB(0x0054496b);
    /* 0054496b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054496d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054496e: ret 4 */ FN_RET(0x005448f0); r_esp += 8; return;
}

void f_00544980(void) /* sub_544980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544980);
    /* 00544980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544981: mov ebp, esp */ r_ebp = r_esp;
    /* 00544983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544987: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054498a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054498d: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 00544994: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x544999u); f_006026d0();
    /* 00544999: mov esp, ebp */ r_esp = r_ebp;
    /* 0054499b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054499c: ret 4 */ FN_RET(0x00544980); r_esp += 8; return;
}

void f_005449a0(void) /* sub_5449A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005449a0);
    /* 005449a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005449a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005449a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005449a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005449a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005449aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005449ad: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 005449b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005449b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005449ba: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 005449c1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005449c3: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005449c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5449cbu); call_ind(t); }
    /* 005449cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005449cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005449ce: ret 4 */ FN_RET(0x005449a0); r_esp += 8; return;
}

void f_005449e0(void) /* sub_5449E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005449e0);
    /* 005449e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005449e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005449e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005449e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005449e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005449f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005449f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005449f6: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005449fa: ja 0x544a43 */ if ((!fC&&!fZ)) goto L_00544a43;
L_005449fc:; BB(0x005449fc);
    /* 005449fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005449ff: jmp dword ptr [ecx*4 + 0x544a4c] */ { u32 t = R32((u32)(r_ecx*4+0x544a4cu)); switch (t) { case 0x544a33u: goto L_00544a33; case 0x544a3cu: goto L_00544a3c; case 0x544a43u: goto L_00544a43; case 0x544a2au: goto L_00544a2a; case 0x544a21u: goto L_00544a21; case 0x544a18u: goto L_00544a18; case 0x544a06u: goto L_00544a06; case 0x544a0fu: goto L_00544a0f; default: UNSUP(0x005449ff, "jump table entry is not a known target"); } }
L_00544a06:; BB(0x00544a06);
    /* 00544a06: mov dword ptr [ebp - 4], 0x31166d */ W32((u32)(r_ebp+0xfffffffcu), 0x31166du);
    /* 00544a0d: jmp 0x544a43 */ goto L_00544a43;
L_00544a0f:; BB(0x00544a0f);
    /* 00544a0f: mov dword ptr [ebp - 4], 0x31166e */ W32((u32)(r_ebp+0xfffffffcu), 0x31166eu);
    /* 00544a16: jmp 0x544a43 */ goto L_00544a43;
L_00544a18:; BB(0x00544a18);
    /* 00544a18: mov dword ptr [ebp - 4], 0x31166f */ W32((u32)(r_ebp+0xfffffffcu), 0x31166fu);
    /* 00544a1f: jmp 0x544a43 */ goto L_00544a43;
L_00544a21:; BB(0x00544a21);
    /* 00544a21: mov dword ptr [ebp - 4], 0x311670 */ W32((u32)(r_ebp+0xfffffffcu), 0x311670u);
    /* 00544a28: jmp 0x544a43 */ goto L_00544a43;
L_00544a2a:; BB(0x00544a2a);
    /* 00544a2a: mov dword ptr [ebp - 4], 0x311671 */ W32((u32)(r_ebp+0xfffffffcu), 0x311671u);
    /* 00544a31: jmp 0x544a43 */ goto L_00544a43;
L_00544a33:; BB(0x00544a33);
    /* 00544a33: mov dword ptr [ebp - 4], 0x311672 */ W32((u32)(r_ebp+0xfffffffcu), 0x311672u);
    /* 00544a3a: jmp 0x544a43 */ goto L_00544a43;
L_00544a3c:; BB(0x00544a3c);
    /* 00544a3c: mov dword ptr [ebp - 4], 0x311673 */ W32((u32)(r_ebp+0xfffffffcu), 0x311673u);
L_00544a43:; BB(0x00544a43);
    /* 00544a43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544a46: mov esp, ebp */ r_esp = r_ebp;
    /* 00544a48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544a49: ret 4 */ FN_RET(0x005449e0); r_esp += 8; return;
}

void f_00544a70(void) /* sub_544A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544a70);
    /* 00544a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00544a73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544a76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544a79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544a80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544a83: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00544a86: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a8a: je 0x544a9a */ if (fZ) goto L_00544a9a;
L_00544a8c:; BB(0x00544a8c);
    /* 00544a8c: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a90: je 0x544aa3 */ if (fZ) goto L_00544aa3;
L_00544a92:; BB(0x00544a92);
    /* 00544a92: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a96: je 0x544aac */ if (fZ) goto L_00544aac;
L_00544a98:; BB(0x00544a98);
    /* 00544a98: jmp 0x544ab3 */ goto L_00544ab3;
L_00544a9a:; BB(0x00544a9a);
    /* 00544a9a: mov dword ptr [ebp - 4], 0x31166a */ W32((u32)(r_ebp+0xfffffffcu), 0x31166au);
    /* 00544aa1: jmp 0x544ab3 */ goto L_00544ab3;
L_00544aa3:; BB(0x00544aa3);
    /* 00544aa3: mov dword ptr [ebp - 4], 0x31166b */ W32((u32)(r_ebp+0xfffffffcu), 0x31166bu);
    /* 00544aaa: jmp 0x544ab3 */ goto L_00544ab3;
L_00544aac:; BB(0x00544aac);
    /* 00544aac: mov dword ptr [ebp - 4], 0x31166c */ W32((u32)(r_ebp+0xfffffffcu), 0x31166cu);
L_00544ab3:; BB(0x00544ab3);
    /* 00544ab3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544ab6: mov esp, ebp */ r_esp = r_ebp;
    /* 00544ab8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544ab9: ret 4 */ FN_RET(0x00544a70); r_esp += 8; return;
}

void f_00544ac0(void) /* sub_544AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544ac0);
    /* 00544ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00544ac3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544ac9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544ad0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544ad4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00544ada: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00544add: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x544ae2u); f_005fb300();
    /* 00544ae2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00544ae5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544ae8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00544aea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544aed: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00544af3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x544af5u); call_ind(t); }
    /* 00544af5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544af9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544afc: call 0x544a70 */ r_esp -= 4; W32(r_esp, 0x544b01u); f_00544a70();
    /* 00544b01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00544b04: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544b08: je 0x544b1b */ if (fZ) goto L_00544b1b;
L_00544b0a:; BB(0x00544b0a);
    /* 00544b0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544b0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544b0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544b10: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544b16: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x544b1bu); f_005f2b20();
L_00544b1b:; BB(0x00544b1b);
    /* 00544b1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00544b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544b1e: ret 4 */ FN_RET(0x00544ac0); r_esp += 8; return;
}

void f_00544b30(void) /* sub_544B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544b30);
    /* 00544b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00544b33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544b36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544b39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544b40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544b43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544b44: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00544b4a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00544b4d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x544b52u); f_005fb300();
    /* 00544b52: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00544b55: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544b58: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00544b5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544b5d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00544b63: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x544b65u); call_ind(t); }
    /* 00544b65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00544b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544b69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544b6c: call 0x544a70 */ r_esp -= 4; W32(r_esp, 0x544b71u); f_00544a70();
    /* 00544b71: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00544b74: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544b78: je 0x544b89 */ if (fZ) goto L_00544b89;
L_00544b7a:; BB(0x00544b7a);
    /* 00544b7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544b7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544b7e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544b84: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x544b89u); f_005f2ba0();
L_00544b89:; BB(0x00544b89);
    /* 00544b89: mov esp, ebp */ r_esp = r_ebp;
    /* 00544b8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544b8c: ret 4 */ FN_RET(0x00544b30); r_esp += 8; return;
}

void f_00544b90(void) /* sub_544B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544b90);
    /* 00544b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00544b93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544b96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544b99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544b9c: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x544ba1u); f_005452a0();
    /* 00544ba1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544ba4: call 0x545340 */ r_esp -= 4; W32(r_esp, 0x544ba9u); f_00545340();
    /* 00544ba9: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 00544bae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00544bb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544bb4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544bb8: je 0x544bc4 */ if (fZ) goto L_00544bc4;
L_00544bba:; BB(0x00544bba);
    /* 00544bba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544bbf: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x544bc4u); f_00544860();
L_00544bc4:; BB(0x00544bc4);
    /* 00544bc4: mov esp, ebp */ r_esp = r_ebp;
    /* 00544bc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544bc7: ret  */ FN_RET(0x00544b90); r_esp += 4; return;
}

void f_00544bd0(void) /* sub_544BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544bd0);
    /* 00544bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00544bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd5: push 0x6a4ff4 */ { u32 v = 0x6a4ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00544be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544be1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00544be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00544bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00544bf5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00544bf8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bfa: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 00544bff: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00544c02: mov edx, dword ptr [0x793400] */ r_edx = R32((u32)(0x793400u));
    /* 00544c08: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00544c0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00544c0d: mov ecx, eax */ r_ecx = r_eax;
    /* 00544c0f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00544c12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544c14u); call_ind(t); }
    /* 00544c14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544c17: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00544c1d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00544c20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544c21: fld1  */ FPUSH(1.0);
    /* 00544c23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00544c26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c28: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c2e: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c33: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00544c39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00544c3b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00544c41: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00544c47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544c49u); call_ind(t); }
    /* 00544c49: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544c4c: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00544c52: mov dword ptr [edx + 0x178], 1 */ W32((u32)(r_edx+0x178u), 0x1u);
    /* 00544c5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544c61: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00544c67: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544c6a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00544c70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00544c72: mov ecx, eax */ r_ecx = r_eax;
    /* 00544c74: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00544c7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544c7cu); call_ind(t); }
    /* 00544c7c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544c7f: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00544c85: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544c88: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00544c8e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00544c90: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00544c93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544c95u); call_ind(t); }
    /* 00544c95: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c97: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x544c9cu); f_00686d82();
    /* 00544c9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544c9f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00544ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544ca9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544cad: je 0x544cc6 */ if (fZ) goto L_00544cc6;
L_00544caf:; BB(0x00544caf);
    /* 00544caf: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00544cb5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00544cb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544cb9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544cbc: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x544cc1u); f_006010a0();
    /* 00544cc1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544cc4: jmp 0x544ccd */ goto L_00544ccd;
L_00544cc6:; BB(0x00544cc6);
    /* 00544cc6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00544ccd:; BB(0x00544ccd);
    /* 00544ccd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544cd0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00544cd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544cda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00544cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544cde: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544ce1: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00544ce7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x544cecu); f_005f5d50();
    /* 00544cec: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 00544cf1: mov cl, byte ptr [eax + 0x4d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4du))) & 0xffu);
    /* 00544cf4: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 00544cf7: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00544cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544cfd: je 0x544d09 */ if (fZ) goto L_00544d09;
L_00544cff:; BB(0x00544cff);
    /* 00544cff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544d02: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x544d07u); f_005452a0();
    /* 00544d07: jmp 0x544d11 */ goto L_00544d11;
L_00544d09:; BB(0x00544d09);
    /* 00544d09: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544d0c: call 0x544d20 */ r_esp -= 4; W32(r_esp, 0x544d11u); f_00544d20();
L_00544d11:; BB(0x00544d11);
    /* 00544d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544d14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00544d1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00544d1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00544d1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544d1f: ret  */ FN_RET(0x00544bd0); r_esp += 4; return;
}

void f_00544d20(void) /* sub_544D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544d20);
    /* 00544d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00544d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d2a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00544d2d: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x544d32u); f_005f54c0();
    /* 00544d32: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00544d35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544d37: jne 0x544d3e */ if (!fZ) goto L_00544d3e;
L_00544d39:; BB(0x00544d39);
    /* 00544d39: jmp 0x544de4 */ goto L_00544de4;
L_00544d3e:; BB(0x00544d3e);
    /* 00544d3e: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00544d44: call 0x54a830 */ r_esp -= 4; W32(r_esp, 0x544d49u); f_0054a830();
    /* 00544d49: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00544d4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544d4e: je 0x544d66 */ if (fZ) goto L_00544d66;
L_00544d50:; BB(0x00544d50);
    /* 00544d50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d55: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x544d5au); f_00544ac0();
    /* 00544d5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d5f: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x544d64u); f_00544ac0();
    /* 00544d64: jmp 0x544d7a */ goto L_00544d7a;
L_00544d66:; BB(0x00544d66);
    /* 00544d66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d6b: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x544d70u); f_00544b30();
    /* 00544d70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d75: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x544d7au); f_00544b30();
L_00544d7a:; BB(0x00544d7a);
    /* 00544d7a: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00544d80: call 0x54a890 */ r_esp -= 4; W32(r_esp, 0x544d85u); f_0054a890();
    /* 00544d85: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00544d88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544d8a: je 0x544d98 */ if (fZ) goto L_00544d98;
L_00544d8c:; BB(0x00544d8c);
    /* 00544d8c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d91: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x544d96u); f_00544ac0();
    /* 00544d96: jmp 0x544da2 */ goto L_00544da2;
L_00544d98:; BB(0x00544d98);
    /* 00544d98: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544d9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544d9d: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x544da2u); f_00544b30();
L_00544da2:; BB(0x00544da2);
    /* 00544da2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544da4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544da7: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x544dacu); f_00544860();
    /* 00544dac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544daf: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x544db4u); f_005452a0();
    /* 00544db4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544db7: call 0x545340 */ r_esp -= 4; W32(r_esp, 0x544dbcu); f_00545340();
    /* 00544dbc: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00544dc2: call 0x54a8b0 */ r_esp -= 4; W32(r_esp, 0x544dc7u); f_0054a8b0();
    /* 00544dc7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00544dca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544dcc: je 0x544de4 */ if (fZ) goto L_00544de4;
L_00544dce:; BB(0x00544dce);
    /* 00544dce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544dd0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x544dd5u); f_005dcb00();
    /* 00544dd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544dd9: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00544ddf: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x544de4u); f_005dbb70();
L_00544de4:; BB(0x00544de4);
    /* 00544de4: mov esp, ebp */ r_esp = r_ebp;
    /* 00544de6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544de7: ret  */ FN_RET(0x00544d20); r_esp += 4; return;
}

void f_00544df0(void) /* sub_544DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544df0);
    /* 00544df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00544df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00544df7: push 0x31166c */ { u32 v = 0x31166cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544dfc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544e02: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x544e07u); f_005f2ba0();
    /* 00544e07: push 0x31166a */ { u32 v = 0x31166au; r_esp -= 4; W32(r_esp, v); }
    /* 00544e0c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544e12: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x544e17u); f_005f2ba0();
    /* 00544e17: push 0x31166b */ { u32 v = 0x31166bu; r_esp -= 4; W32(r_esp, v); }
    /* 00544e1c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00544e22: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x544e27u); f_005f2ba0();
    /* 00544e27: mov esp, ebp */ r_esp = r_ebp;
    /* 00544e29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544e2a: ret  */ FN_RET(0x00544df0); r_esp += 4; return;
}

void f_00544e30(void) /* sub_544E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544e30);
    /* 00544e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00544e33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544e36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00544e39: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 00544e3e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00544e41: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544e45: je 0x544e4c */ if (fZ) goto L_00544e4c;
L_00544e47:; BB(0x00544e47);
    /* 00544e47: jmp 0x544ef6 */ goto L_00544ef6;
L_00544e4c:; BB(0x00544e4c);
    /* 00544e4c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544e4f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00544e52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544e55: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00544e58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00544e5a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00544e5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544e5fu); call_ind(t); }
    /* 00544e5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544e66: jmp 0x544e71 */ goto L_00544e71;
L_00544e68:; BB(0x00544e68);
    /* 00544e68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544e6b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544e6e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00544e71:; BB(0x00544e71);
    /* 00544e71: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544e75: jge 0x544e9d */ if ((fS==fO)) goto L_00544e9d;
L_00544e77:; BB(0x00544e77);
    /* 00544e77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544e7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544e7e: call 0x544980 */ r_esp -= 4; W32(r_esp, 0x544e83u); f_00544980();
    /* 00544e83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544e86: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544e89: mov byte ptr [ecx + 0xc0], al */ W8((u32)(r_ecx+0xc0u), (u8)r_eax);
    /* 00544e8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544e93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544e96: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x544e9bu); f_005448f0();
    /* 00544e9b: jmp 0x544e68 */ goto L_00544e68;
L_00544e9d:; BB(0x00544e9d);
    /* 00544e9d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544ea4: jmp 0x544eaf */ goto L_00544eaf;
L_00544ea6:; BB(0x00544ea6);
    /* 00544ea6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544ea9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544eac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00544eaf:; BB(0x00544eaf);
    /* 00544eaf: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544eb3: jge 0x544eec */ if ((fS==fO)) goto L_00544eec;
L_00544eb5:; BB(0x00544eb5);
    /* 00544eb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544eb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544eb9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00544ebf: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00544ec2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x544ec7u); f_005fb300();
    /* 00544ec7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00544eca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544ecd: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x544ed2u); f_006026d0();
    /* 00544ed2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544ed5: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544ed8: mov byte ptr [ecx + 0xc9], al */ W8((u32)(r_ecx+0xc9u), (u8)r_eax);
    /* 00544ede: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544ee1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544ee2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544ee5: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x544eeau); f_00544b30();
    /* 00544eea: jmp 0x544ea6 */ goto L_00544ea6;
L_00544eec:; BB(0x00544eec);
    /* 00544eec: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00544eee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544ef1: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x544ef6u); f_00544860();
L_00544ef6:; BB(0x00544ef6);
    /* 00544ef6: mov esp, ebp */ r_esp = r_ebp;
    /* 00544ef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544ef9: ret  */ FN_RET(0x00544e30); r_esp += 4; return;
}

void f_00544f00(void) /* sub_544F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00544f00);
    /* 00544f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00544f03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544f06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00544f09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f0c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00544f0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f12: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00544f15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00544f17: mov ecx, eax */ r_ecx = r_eax;
    /* 00544f19: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00544f1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x544f1eu); call_ind(t); }
    /* 00544f1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544f25: jmp 0x544f30 */ goto L_00544f30;
L_00544f27:; BB(0x00544f27);
    /* 00544f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f2a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544f2d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00544f30:; BB(0x00544f30);
    /* 00544f30: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544f34: jge 0x544f63 */ if ((fS==fO)) goto L_00544f63;
L_00544f36:; BB(0x00544f36);
    /* 00544f36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f39: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00544f3c: movzx eax, byte ptr [edx + 0xc0] */ r_eax = (u32)R8((u32)(r_edx+0xc0u));
    /* 00544f43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544f45: je 0x544f55 */ if (fZ) goto L_00544f55;
L_00544f47:; BB(0x00544f47);
    /* 00544f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544f4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f4e: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x544f53u); f_00544860();
    /* 00544f53: jmp 0x544f61 */ goto L_00544f61;
L_00544f55:; BB(0x00544f55);
    /* 00544f55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544f59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f5c: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x544f61u); f_005448f0();
L_00544f61:; BB(0x00544f61);
    /* 00544f61: jmp 0x544f27 */ goto L_00544f27;
L_00544f63:; BB(0x00544f63);
    /* 00544f63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544f6a: jmp 0x544f75 */ goto L_00544f75;
L_00544f6c:; BB(0x00544f6c);
    /* 00544f6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544f72: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00544f75:; BB(0x00544f75);
    /* 00544f75: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544f79: jge 0x544fa8 */ if ((fS==fO)) goto L_00544fa8;
L_00544f7b:; BB(0x00544f7b);
    /* 00544f7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f7e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00544f81: movzx edx, byte ptr [ecx + 0xc9] */ r_edx = (u32)R8((u32)(r_ecx+0xc9u));
    /* 00544f88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544f8a: je 0x544f9a */ if (fZ) goto L_00544f9a;
L_00544f8c:; BB(0x00544f8c);
    /* 00544f8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544f90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544f93: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x544f98u); f_00544ac0();
    /* 00544f98: jmp 0x544fa6 */ goto L_00544fa6;
L_00544f9a:; BB(0x00544f9a);
    /* 00544f9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544f9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544f9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544fa1: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x544fa6u); f_00544b30();
L_00544fa6:; BB(0x00544fa6);
    /* 00544fa6: jmp 0x544f6c */ goto L_00544f6c;
L_00544fa8:; BB(0x00544fa8);
    /* 00544fa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00544faa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544fab: ret  */ FN_RET(0x00544f00); r_esp += 4; return;
}

