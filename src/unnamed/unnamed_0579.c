#include "protos.h"

void f_00579230(void) /* sub_579230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579230);
    /* 00579230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579231: mov ebp, esp */ r_ebp = r_esp;
    /* 00579233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579237: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057923d: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x579242u); f_00637670();
    /* 00579242: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00579245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579247: jne 0x57924b */ if (!fZ) goto L_0057924b;
L_00579249:; BB(0x00579249);
    /* 00579249: jmp 0x579253 */ goto L_00579253;
L_0057924b:; BB(0x0057924b);
    /* 0057924b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057924e: call 0x579260 */ r_esp -= 4; W32(r_esp, 0x579253u); f_00579260();
L_00579253:; BB(0x00579253);
    /* 00579253: mov esp, ebp */ r_esp = r_ebp;
    /* 00579255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579256: ret  */ FN_RET(0x00579230); r_esp += 4; return;
}

void f_00579260(void) /* sub_579260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579260);
    /* 00579260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579261: mov ebp, esp */ r_ebp = r_esp;
    /* 00579263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579267: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057926d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x579272u); f_005f3e50();
    /* 00579272: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579275: cmp eax, dword ptr [ecx + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057927b: jle 0x5792ac */ if ((fZ||fS!=fO)) goto L_005792ac;
L_0057927d:; BB(0x0057927d);
    /* 0057927d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579283: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x579288u); f_005f3e50();
    /* 00579288: add eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057928d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579290: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 00579296: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579297: fld1  */ FPUSH(1.0);
    /* 00579299: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057929c: push 0x1925a */ { u32 v = 0x1925au; r_esp -= 4; W32(r_esp, v); }
    /* 005792a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005792a7: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x5792acu); f_005f4620();
L_005792ac:; BB(0x005792ac);
    /* 005792ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005792ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005792af: ret  */ FN_RET(0x00579260); r_esp += 4; return;
}

void f_00579bf0(void) /* sub_579BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579bf0);
    /* 00579bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579bf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579bf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00579bf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00579c00: push 0x311e38 */ { u32 v = 0x311e38u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c05: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579c08: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x579c0du); f_005f1ad0();
    /* 00579c0d: cmp dword ptr [0x793570], 0 */ {  u32 a = R32((u32)(0x793570u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579c14: jl 0x579c29 */ if ((fS!=fO)) goto L_00579c29;
L_00579c16:; BB(0x00579c16);
    /* 00579c16: mov eax, dword ptr [0x793570] */ r_eax = R32((u32)(0x793570u));
    /* 00579c1b: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00579c1e: mov ecx, dword ptr [eax + 0x74b060] */ r_ecx = R32((u32)(r_eax+0x74b060u));
    /* 00579c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579c27: jmp 0x579c30 */ goto L_00579c30;
L_00579c29:; BB(0x00579c29);
    /* 00579c29: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
L_00579c30:; BB(0x00579c30);
    /* 00579c30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c32: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c39: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c42: push 0x311e39 */ { u32 v = 0x311e39u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c4b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00579c51: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00579c54: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x579c59u); f_005f9ce0();
    /* 00579c59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c5b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579c60: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00579c63: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x579c68u); f_005fb2b0();
    /* 00579c68: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00579c6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579c6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579c6f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579c72: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00579c74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579c77: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00579c7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x579c7fu); call_ind(t); }
    /* 00579c7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00579c81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579c82: ret  */ FN_RET(0x00579bf0); r_esp += 4; return;
}

void f_00579c90(void) /* sub_579C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579c90);
    /* 00579c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00579c93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579c96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579c99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00579c9b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579ca0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00579ca3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x579ca8u); f_005fb2b0();
    /* 00579ca8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00579cab: mov ecx, dword ptr [0x74b060] */ r_ecx = R32((u32)(0x74b060u));
    /* 00579cb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579cb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579cb5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00579cb7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579cba: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00579cc0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x579cc2u); call_ind(t); }
    /* 00579cc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00579cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579cc5: ret  */ FN_RET(0x00579c90); r_esp += 4; return;
}

void f_00579cd0(void) /* sub_579CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579cd0);
    /* 00579cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579cd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579cd6: mov dword ptr [0x793570], 0xffffffff */ W32((u32)(0x793570u), 0xffffffffu);
    /* 00579ce0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579ce5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00579ce8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579ceb: mov byte ptr [ecx + 0x25], 1 */ W8((u32)(r_ecx+0x25u), 0x1u);
    /* 00579cef: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00579cf5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00579cf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579cfb: mov byte ptr [eax + 0x26], 0 */ W8((u32)(r_eax+0x26u), 0x0u);
    /* 00579cff: mov byte ptr [0x79346d], 1 */ W8((u32)(0x79346du), 0x1u);
    /* 00579d06: mov byte ptr [0x79346c], 1 */ W8((u32)(0x79346cu), 0x1u);
    /* 00579d0d: mov byte ptr [0x79346e], 0 */ W8((u32)(0x79346eu), 0x0u);
    /* 00579d14: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579d1a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00579d1d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00579d1f: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x579d24u); f_00520e60();
    /* 00579d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579d25: push 0x793470 */ { u32 v = 0x793470u; r_esp -= 4; W32(r_esp, v); }
    /* 00579d2a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x579d2fu); f_00686d8e();
    /* 00579d2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579d32: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00579d34: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579d39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579d3b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579d41: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00579d44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579d46u); call_ind(t); }
    /* 00579d46: mov esp, ebp */ r_esp = r_ebp;
    /* 00579d48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579d49: ret  */ FN_RET(0x00579cd0); r_esp += 4; return;
}

void f_00579d50(void) /* sub_579D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579d50);
    /* 00579d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00579d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579d54: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579d59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00579d5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579d5f: mov byte ptr [ecx + 0x25], 0 */ W8((u32)(r_ecx+0x25u), 0x0u);
    /* 00579d63: call 0x579fa0 */ r_esp -= 4; W32(r_esp, 0x579d68u); f_00579fa0();
    /* 00579d68: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00579d6e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00579d70: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579d76: mov edx, dword ptr [eax + 0x258] */ r_edx = R32((u32)(r_eax+0x258u));
    /* 00579d7c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x579d7eu); call_ind(t); }
    /* 00579d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579d7f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579d84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579d86: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579d8c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00579d8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579d91u); call_ind(t); }
    /* 00579d91: mov byte ptr [0x79346d], 0 */ W8((u32)(0x79346du), 0x0u);
    /* 00579d98: mov esp, ebp */ r_esp = r_ebp;
    /* 00579d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579d9b: ret  */ FN_RET(0x00579d50); r_esp += 4; return;
}

void f_00579da0(void) /* sub_579DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579da0);
    /* 00579da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579da3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579da6: movzx eax, byte ptr [0x79346d] */ r_eax = (u32)R8((u32)(0x79346du));
    /* 00579dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579daf: jne 0x579dc0 */ if (!fZ) goto L_00579dc0;
L_00579db1:; BB(0x00579db1);
    /* 00579db1: call 0x579cd0 */ r_esp -= 4; W32(r_esp, 0x579db6u); f_00579cd0();
    /* 00579db6: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00579dbb: jmp 0x579e73 */ goto L_00579e73;
L_00579dc0:; BB(0x00579dc0);
    /* 00579dc0: movzx ecx, byte ptr [0x79346c] */ r_ecx = (u32)R8((u32)(0x79346cu));
    /* 00579dc7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579dc9: jne 0x579dd2 */ if (!fZ) goto L_00579dd2;
L_00579dcb:; BB(0x00579dcb);
    /* 00579dcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579dcd: jmp 0x579e73 */ goto L_00579e73;
L_00579dd2:; BB(0x00579dd2);
    /* 00579dd2: mov byte ptr [0x79346c], 0 */ W8((u32)(0x79346cu), 0x0u);
    /* 00579dd9: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00579de0: mov edx, dword ptr [0x793570] */ r_edx = R32((u32)(0x793570u));
    /* 00579de6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00579de9: mov dword ptr [0x793570], edx */ W32((u32)(0x793570u), r_edx);
    /* 00579def: mov eax, dword ptr [0x793570] */ r_eax = R32((u32)(0x793570u));
    /* 00579df4: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00579df7: jl 0x579e03 */ if ((fS!=fO)) goto L_00579e03;
L_00579df9:; BB(0x00579df9);
    /* 00579df9: mov dword ptr [0x793570], 0 */ W32((u32)(0x793570u), 0x0u);
L_00579e03:; BB(0x00579e03);
    /* 00579e03: movzx ecx, byte ptr [0x79346e] */ r_ecx = (u32)R8((u32)(0x79346eu));
    /* 00579e0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579e0c: je 0x579e4f */ if (fZ) goto L_00579e4f;
L_00579e0e:; BB(0x00579e0e);
    /* 00579e0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e12: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x579e17u); f_005dcb00();
    /* 00579e17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579e1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00579e1c: call 0x5d7090 */ r_esp -= 4; W32(r_esp, 0x579e21u); f_005d7090();
    /* 00579e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e23: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e28: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x579e2du); f_0064c8a0();
    /* 00579e2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579e30: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00579e33: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00579e36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579e3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579e3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e40: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x579e45u); f_005dcb00();
    /* 00579e45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579e48: mov ecx, eax */ r_ecx = r_eax;
    /* 00579e4a: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x579e4fu); f_005d5af0();
L_00579e4f:; BB(0x00579e4f);
    /* 00579e4f: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00579e51: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579e57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00579e59: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579e5f: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00579e62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579e64u); call_ind(t); }
    /* 00579e64: mov ecx, dword ptr [0x793570] */ r_ecx = R32((u32)(0x793570u));
    /* 00579e6a: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00579e6d: mov eax, dword ptr [ecx + 0x74b05c] */ r_eax = R32((u32)(r_ecx+0x74b05cu));
L_00579e73:; BB(0x00579e73);
    /* 00579e73: mov esp, ebp */ r_esp = r_ebp;
    /* 00579e75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579e76: ret  */ FN_RET(0x00579da0); r_esp += 4; return;
}

void f_00579f50(void) /* sub_579F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579f50);
    /* 00579f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00579f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579f56: push 0x6cba4c */ { u32 v = 0x6cba4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00579f5b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x579f60u); f_00630f40();
    /* 00579f60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579f64: call 0x57a070 */ r_esp -= 4; W32(r_esp, 0x579f69u); f_0057a070();
    /* 00579f69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579f6e: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 00579f73: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x579f78u); f_0064c8a0();
    /* 00579f78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f7b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00579f7e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00579f81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579f85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00579f88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579f89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579f8b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x579f90u); f_005dcb00();
    /* 00579f90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f93: mov ecx, eax */ r_ecx = r_eax;
    /* 00579f95: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x579f9au); f_005d5af0();
    /* 00579f9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00579f9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579f9d: ret  */ FN_RET(0x00579f50); r_esp += 4; return;
}

void f_00579fa0(void) /* sub_579FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579fa0);
    /* 00579fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579fa3: push 0x793470 */ { u32 v = 0x793470u; r_esp -= 4; W32(r_esp, v); }
    /* 00579fa8: call 0x57a070 */ r_esp -= 4; W32(r_esp, 0x579fadu); f_0057a070();
    /* 00579fad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579fb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579fb1: ret  */ FN_RET(0x00579fa0); r_esp += 4; return;
}

void f_00579fc0(void) /* sub_579FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579fc0);
    /* 00579fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579fc7: movzx eax, byte ptr [0x79346e] */ r_eax = (u32)R8((u32)(0x79346eu));
    /* 00579fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579fd0: jne 0x579fe3 */ if (!fZ) goto L_00579fe3;
L_00579fd2:; BB(0x00579fd2);
    /* 00579fd2: call 0x579e80 */ r_esp -= 4; W32(r_esp, 0x579fd7u); f_00579e80();
    /* 00579fd7: call 0x579f50 */ r_esp -= 4; W32(r_esp, 0x579fdcu); f_00579f50();
    /* 00579fdc: mov byte ptr [0x79346e], 1 */ W8((u32)(0x79346eu), 0x1u);
L_00579fe3:; BB(0x00579fe3);
    /* 00579fe3: mov ecx, dword ptr [0x793570] */ r_ecx = R32((u32)(0x793570u));
    /* 00579fe9: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00579fec: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00579ff2: mov eax, dword ptr [ecx + 0x74b064] */ r_eax = R32((u32)(r_ecx+0x74b064u));
    /* 00579ff8: mov dword ptr [edx + 0x4f0c], eax */ W32((u32)(r_edx+0x4f0cu), r_eax);
    /* 00579ffe: mov ecx, dword ptr [0x793570] */ r_ecx = R32((u32)(0x793570u));
    /* 0057a004: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057a007: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057a00d: mov eax, dword ptr [ecx + 0x74b068] */ r_eax = R32((u32)(r_ecx+0x74b068u));
    /* 0057a013: mov dword ptr [edx + 0x4f14], eax */ W32((u32)(r_edx+0x4f14u), r_eax);
    /* 0057a019: mov ecx, dword ptr [0x793570] */ r_ecx = R32((u32)(0x793570u));
    /* 0057a01f: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057a022: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057a028: mov eax, dword ptr [ecx + 0x74b06c] */ r_eax = R32((u32)(r_ecx+0x74b06cu));
    /* 0057a02e: mov dword ptr [edx + 0x4f10], eax */ W32((u32)(r_edx+0x4f10u), r_eax);
    /* 0057a034: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a036: mov ecx, dword ptr [0x793570] */ r_ecx = R32((u32)(0x793570u));
    /* 0057a03c: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057a03f: mov edx, dword ptr [ecx + 0x74b058] */ r_edx = R32((u32)(r_ecx+0x74b058u));
    /* 0057a045: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a046: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057a04b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a04d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057a053: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0057a059: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a05bu); call_ind(t); }
    /* 0057a05b: mov byte ptr [0x79346c], 1 */ W8((u32)(0x79346cu), 0x1u);
    /* 0057a062: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a065: ret  */ FN_RET(0x00579fc0); r_esp += 4; return;
}

