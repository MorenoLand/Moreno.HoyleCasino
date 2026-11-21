#include "protos.h"

void f_006311e0(void) /* sub_6311E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006311e0);
    /* 006311e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006311e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006311e3: cmp dword ptr [ebp + 8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006311ea: jle 0x631247 */ if ((fZ||fS!=fO)) goto L_00631247;
L_006311ec:; BB(0x006311ec);
    /* 006311ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006311ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006311f0: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006311f5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006311f5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006311f5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006311f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006311f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006311fb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006311fc: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00631201: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00631201, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00631201, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00631203: mov eax, edx */ r_eax = r_edx;
    /* 00631205: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631206: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0063120b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063120b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063120b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063120d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063120e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631211: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631212: mov ecx, 0x3b9aca00 */ r_ecx = 0x3b9aca00u;
    /* 00631217: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00631217, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00631217, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00631219: mov eax, edx */ r_eax = r_edx;
    /* 0063121b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063121c: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00631221: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00631221, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00631221, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00631223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631224: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631227: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631228: mov ecx, 0x3b9aca00 */ r_ecx = 0x3b9aca00u;
    /* 0063122d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063122d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063122d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063122f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631230: push 0x6d9e00 */ { u32 v = 0x6d9e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00631235: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00631238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631239: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63123fu); call_ind(t); }
    /* 0063123f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631242: jmp 0x6312dd */ goto L_006312dd;
L_00631247:; BB(0x00631247);
    /* 00631247: cmp dword ptr [ebp + 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063124e: jle 0x631292 */ if ((fZ||fS!=fO)) goto L_00631292;
L_00631250:; BB(0x00631250);
    /* 00631250: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631253: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631254: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00631259: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00631259, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00631259, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063125b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063125c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063125f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631260: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 00631265: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00631265, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00631265, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00631267: mov eax, edx */ r_eax = r_edx;
    /* 00631269: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063126a: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0063126f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063126f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063126f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00631271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631272: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631275: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00631276: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0063127b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063127b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063127b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063127d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063127e: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631283: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00631286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631287: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63128du); call_ind(t); }
    /* 0063128d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631290: jmp 0x6312dd */ goto L_006312dd;
L_00631292:; BB(0x00631292);
    /* 00631292: cmp dword ptr [ebp + 8], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631299: jle 0x6312c7 */ if ((fZ||fS!=fO)) goto L_006312c7;
L_0063129b:; BB(0x0063129b);
    /* 0063129b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063129e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063129f: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006312a4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006312a4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006312a4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006312a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006312a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006312aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006312ab: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006312b0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006312b0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006312b0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006312b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006312b3: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 006312b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006312bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006312bc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6312c2u); call_ind(t); }
    /* 006312c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006312c5: jmp 0x6312dd */ goto L_006312dd;
L_006312c7:; BB(0x006312c7);
    /* 006312c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006312ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006312cb: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 006312d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006312d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006312d4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6312dau); call_ind(t); }
    /* 006312da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006312dd:; BB(0x006312dd);
    /* 006312dd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006312e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006312e1: ret  */ FN_RET(0x006311e0); r_esp += 4; return;
}

void f_00631420(void) /* sub_631420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631420);
    /* 00631420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631421: mov ebp, esp */ r_ebp = r_esp;
    /* 00631423: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631429: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x63142eu); f_005f3fe0();
    /* 0063142e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631430: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631434: ret  */ FN_RET(0x00631420); r_esp += 4; return;
}

