#include "protos.h"

void f_0044e170(void) /* LetItRideBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e170);
    /* 0044e170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e171: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e173: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e176: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0044e179: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044e17e: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0044e184: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044e187: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044e18a: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044e18d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044e190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e194: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44e199u); f_0064c8a0();
    /* 0044e199: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e19c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044e19f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044e1a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044e1a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044e1a8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044e1ab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044e1ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e1b1: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e1b4: jne 0x44e1ce */ if (!fZ) goto L_0044e1ce;
L_0044e1b6:; BB(0x0044e1b6);
    /* 0044e1b6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0044e1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e1ba: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e1c0: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44e1c5u); f_0044ccc0();
    /* 0044e1c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e1c7: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x44e1ccu); f_005d5de0();
    /* 0044e1cc: jmp 0x44e1dc */ goto L_0044e1dc;
L_0044e1ce:; BB(0x0044e1ce);
    /* 0044e1ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e1d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044e1d3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0044e1d6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044e1d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0044e1dc:; BB(0x0044e1dc);
    /* 0044e1dc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e1e0: jne 0x44e1fb */ if (!fZ) goto L_0044e1fb;
L_0044e1e2:; BB(0x0044e1e2);
    /* 0044e1e2: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044e1e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044e1ea: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044e1f0: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0044e1f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e1f8u); call_ind(t); }
    /* 0044e1f8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0044e1fb:; BB(0x0044e1fb);
    /* 0044e1fb: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e1ff: jle 0x44e25a */ if ((fZ||fS!=fO)) goto L_0044e25a;
L_0044e201:; BB(0x0044e201);
    /* 0044e201: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 0044e204: fmul qword ptr [0x6b9490] */ ST(0) = ST(0) * R_F64((u32)(0x6b9490u));
    /* 0044e20a: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0044e20d: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e213: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44e218u); f_0044ccc0();
    /* 0044e218: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e21a: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44e21fu); f_005d5a50();
    /* 0044e21f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044e222: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0044e225: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0044e228: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044e22a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0044e22d: jp 0x44e25a */ if (fP) goto L_0044e25a;
L_0044e22f:; BB(0x0044e22f);
    /* 0044e22f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e231: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e236: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e23bu); f_00630f40();
    /* 0044e23b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e23e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e23f: push 0x6b814c */ { u32 v = 0x6b814cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e244: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44e249u); f_00630f40();
    /* 0044e249: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e24d: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x44e252u); f_0062ff10();
    /* 0044e252: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e255: jmp 0x44e333 */ goto L_0044e333;
L_0044e25a:; BB(0x0044e25a);
    /* 0044e25a: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0044e25d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e25e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044e261: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e262: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e266: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044e269: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x44e26eu); f_005cba10();
    /* 0044e26e: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e274: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044e27a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0044e27d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044e280: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044e283: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044e286: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0044e28a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044e28d: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0044e290: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0044e294: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044e297: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044e29a: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e29e: jne 0x44e2a5 */ if (!fZ) goto L_0044e2a5;
L_0044e2a0:; BB(0x0044e2a0);
    /* 0044e2a0: jmp 0x44e333 */ goto L_0044e333;
L_0044e2a5:; BB(0x0044e2a5);
    /* 0044e2a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044e2ac: jmp 0x44e2b7 */ goto L_0044e2b7;
L_0044e2ae:; BB(0x0044e2ae);
    /* 0044e2ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e2b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e2b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044e2b7:; BB(0x0044e2b7);
    /* 0044e2b7: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e2bb: jge 0x44e2fd */ if ((fS==fO)) goto L_0044e2fd;
L_0044e2bd:; BB(0x0044e2bd);
    /* 0044e2bd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044e2c0: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x44e2c5u); f_005f5400();
    /* 0044e2c5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e2c8: jne 0x44e2d5 */ if (!fZ) goto L_0044e2d5;
L_0044e2ca:; BB(0x0044e2ca);
    /* 0044e2ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e2cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e2d0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044e2d3: jmp 0x44e2ae */ goto L_0044e2ae;
L_0044e2d5:; BB(0x0044e2d5);
    /* 0044e2d5: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0044e2d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e2d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044e2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e2dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e2e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e2e4: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044e2e9: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0044e2ed: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x44e2f2u); f_005cba10();
    /* 0044e2f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e2f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e2f8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044e2fb: jmp 0x44e2ae */ goto L_0044e2ae;
L_0044e2fd:; BB(0x0044e2fd);
    /* 0044e2fd: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e303: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44e308u); f_0044ccc0();
    /* 0044e308: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044e30b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044e30e: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 0044e315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e317: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e319: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 0044e31e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044e321: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044e327: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044e32a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044e32c: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e32e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044e331: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e333u); call_ind(t); }
L_0044e333:; BB(0x0044e333);
    /* 0044e333: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e336: ret 0xc */ FN_RET(0x0044e170); r_esp += 16; return;
}

void f_0044e620(void) /* LetItRideBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e620);
    /* 0044e620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e621: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e627: cmp dword ptr [0x790718], 0 */ {  u32 a = R32((u32)(0x790718u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e62e: je 0x44e648 */ if (fZ) goto L_0044e648;
L_0044e630:; BB(0x0044e630);
    /* 0044e630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e633: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x44e638u); f_005f5400();
    /* 0044e638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e639: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e63d: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044e643: call 0x447840 */ r_esp -= 4; W32(r_esp, 0x44e648u); f_00447840();
L_0044e648:; BB(0x0044e648);
    /* 0044e648: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e64a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e64b: ret 8 */ FN_RET(0x0044e620); r_esp += 12; return;
}

void f_0044e650(void) /* LetItRideBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e650);
    /* 0044e650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e651: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e653: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e656: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044e659: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044e65e: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0044e664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e667: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044e66a: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x44e66fu); f_005f5400();
    /* 0044e66f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044e670: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0044e675: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044e675, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044e675, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044e677: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e67a: jne 0x44e6f3 */ if (!fZ) goto L_0044e6f3;
L_0044e67c:; BB(0x0044e67c);
    /* 0044e67c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e682: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44e687u); f_0044ccc0();
    /* 0044e687: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044e68a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044e68d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44e692u); f_0063aac0();
    /* 0044e692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e694: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044e697: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e69b: je 0x44e6b9 */ if (fZ) goto L_0044e6b9;
L_0044e69d:; BB(0x0044e69d);
    /* 0044e69d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044e6a0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44e6a5u); f_0063aac0();
    /* 0044e6a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044e6a7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044e6aa: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e6ae: je 0x44e6b9 */ if (fZ) goto L_0044e6b9;
L_0044e6b0:; BB(0x0044e6b0);
    /* 0044e6b0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0044e6b7: jmp 0x44e6c0 */ goto L_0044e6c0;
L_0044e6b9:; BB(0x0044e6b9);
    /* 0044e6b9: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0044e6c0:; BB(0x0044e6c0);
    /* 0044e6c0: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0044e6c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e6c6: je 0x44e6f3 */ if (fZ) goto L_0044e6f3;
L_0044e6c8:; BB(0x0044e6c8);
    /* 0044e6c8: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044e6ce: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44e6d3u); f_0044ccc0();
    /* 0044e6d3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044e6d6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e6d9: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0044e6df: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 0044e6e2: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0044e6e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e6e8: jne 0x44e6f3 */ if (!fZ) goto L_0044e6f3;
L_0044e6ea:; BB(0x0044e6ea);
    /* 0044e6ea: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044e6f1: jmp 0x44e6fa */ goto L_0044e6fa;
L_0044e6f3:; BB(0x0044e6f3);
    /* 0044e6f3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044e6fa:; BB(0x0044e6fa);
    /* 0044e6fa: mov al, byte ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 0044e6fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e6ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e700: ret  */ FN_RET(0x0044e650); r_esp += 4; return;
}

