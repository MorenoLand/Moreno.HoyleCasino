#include "protos.h"

void f_0051a3a0(void) /* sub_51A3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a3a0);
    /* 0051a3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051a3a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051a3aa: mov eax, dword ptr [eax*4 + 0x721858] */ r_eax = R32((u32)(r_eax*4+0x721858u));
    /* 0051a3b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a3b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a3b4: ret 4 */ FN_RET(0x0051a3a0); r_esp += 8; return;
}

void f_0051a460(void) /* sub_51A460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a460);
    /* 0051a460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a461: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a463: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a469: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051a46e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a470: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051a473: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0051a479: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051a480: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x51a485u); f_00520d60();
    /* 0051a485: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051a488: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0051a48f: jmp 0x51a49a */ goto L_0051a49a;
L_0051a491:; BB(0x0051a491);
    /* 0051a491: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a494: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a497: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0051a49a:; BB(0x0051a49a);
    /* 0051a49a: cmp dword ptr [ebp - 0xc], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a49e: jge 0x51a69a */ if ((fS==fO)) goto L_0051a69a;
L_0051a4a4:; BB(0x0051a4a4);
    /* 0051a4a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a4a7: imul ecx, ecx, 0x688 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x688u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a4ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a4b0: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 0051a4b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051a4b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a4ba: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a4c0: mov eax, dword ptr [edx + ecx*4 + 0x1bc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 0051a4c7: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0051a4cd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a4d0: mov edx, dword ptr [ecx + 0x3e0] */ r_edx = R32((u32)(r_ecx+0x3e0u));
    /* 0051a4d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4d7: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4dc: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0051a4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4e3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51a4e9u); call_ind(t); }
    /* 0051a4e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a4ec: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0051a4f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4f3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a4f9: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51a4feu); f_005fb550();
    /* 0051a4fe: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0051a504: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0051a50a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a50b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0051a511: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051a513: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0051a519: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051a51f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51a521u); call_ind(t); }
    /* 0051a521: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a524: cmp dword ptr [ecx + 0x3e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x3e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a52b: jle 0x51a54f */ if ((fZ||fS!=fO)) goto L_0051a54f;
L_0051a52d:; BB(0x0051a52d);
    /* 0051a52d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a530: fild dword ptr [edx + 0x3e4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x3e4u)));
    /* 0051a536: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a539: fidiv dword ptr [eax + 0x3e0] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_eax+0x3e0u));
    /* 0051a53f: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0051a545: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x51a54au); f_00686cc0();
    /* 0051a54a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051a54d: jmp 0x51a556 */ goto L_0051a556;
L_0051a54f:; BB(0x0051a54f);
    /* 0051a54f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0051a556:; BB(0x0051a556);
    /* 0051a556: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a55a: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a55f: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0051a565: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a566: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51a56cu); call_ind(t); }
    /* 0051a56c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a56f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0051a575: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a579: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a57f: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51a584u); f_005fb550();
    /* 0051a584: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0051a58a: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0051a590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a591: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0051a597: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051a599: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0051a59f: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051a5a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51a5a7u); call_ind(t); }
    /* 0051a5a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a5aa: cmp dword ptr [eax + 0x3ec], 0 */ {  u32 a = R32((u32)(r_eax+0x3ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a5b1: jle 0x51a5d5 */ if ((fZ||fS!=fO)) goto L_0051a5d5;
L_0051a5b3:; BB(0x0051a5b3);
    /* 0051a5b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a5b6: fild dword ptr [ecx + 0x3e8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3e8u)));
    /* 0051a5bc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a5bf: fidiv dword ptr [edx + 0x3ec] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_edx+0x3ecu));
    /* 0051a5c5: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0051a5cb: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x51a5d0u); f_00686cc0();
    /* 0051a5d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051a5d3: jmp 0x51a5dc */ goto L_0051a5dc;
L_0051a5d5:; BB(0x0051a5d5);
    /* 0051a5d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0051a5dc:; BB(0x0051a5dc);
    /* 0051a5dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a5e0: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a5e5: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0051a5eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a5ec: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51a5f2u); call_ind(t); }
    /* 0051a5f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a5f5: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0051a5fb: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a5fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a5ff: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a605: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51a60au); f_005fb550();
    /* 0051a60a: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0051a610: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0051a616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a617: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0051a61d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051a61f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0051a625: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051a62b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51a62du); call_ind(t); }
    /* 0051a62d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a630: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 0051a636: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051a639: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0051a640: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a642: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a644: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a646: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0051a64c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a64d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a650: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a651: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a655: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x51a65au); f_0064c8d0();
    /* 0051a65a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a65d: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0051a663: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a667: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a66d: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51a672u); f_005fb550();
    /* 0051a672: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0051a678: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0051a67e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a67f: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0051a685: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051a687: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0051a68d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051a693: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51a695u); call_ind(t); }
    /* 0051a695: jmp 0x51a491 */ goto L_0051a491;
L_0051a69a:; BB(0x0051a69a);
    /* 0051a69a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051a69d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a69f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51a6a4u); f_00686d72();
    /* 0051a6a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a6a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a6a7: ret  */ FN_RET(0x0051a460); r_esp += 4; return;
}

void f_0051a7f0(void) /* sub_51A7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a7f0);
    /* 0051a7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a7f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a7f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051a7f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a7fa: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a800: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0051a803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a804: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051a807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a808: call 0x519e40 */ r_esp -= 4; W32(r_esp, 0x51a80du); f_00519e40();
    /* 0051a80d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a813: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0051a816: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 0051a81c: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a81e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a81f: ret 8 */ FN_RET(0x0051a7f0); r_esp += 12; return;
}

void f_0051aca0(void) /* sub_51ACA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051aca0);
    /* 0051aca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051aca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051aca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aca5: push 0x6a3d79 */ { u32 v = 0x6a3d79u; r_esp -= 4; W32(r_esp, v); }
    /* 0051acaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051acb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051acb1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051acb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051acb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051acbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051acbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051acbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051acc5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051acc8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051accb: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051acd2: jne 0x51ae2e */ if (!fZ) goto L_0051ae2e;
L_0051acd8:; BB(0x0051acd8);
    /* 0051acd8: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0051acdd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51ace2u); f_00686d82();
    /* 0051ace2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ace5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051ace8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051acef: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051acf3: je 0x51ad02 */ if (fZ) goto L_0051ad02;
L_0051acf5:; BB(0x0051acf5);
    /* 0051acf5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051acf8: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x51acfdu); f_005f5bf0();
    /* 0051acfd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051ad00: jmp 0x51ad09 */ goto L_0051ad09;
L_0051ad02:; BB(0x0051ad02);
    /* 0051ad02: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0051ad09:; BB(0x0051ad09);
    /* 0051ad09: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051ad0c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051ad0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051ad16: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad19: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051ad1c: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 0051ad22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad25: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0051ad2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad2e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0051ad31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad34: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0051ad3a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad3d: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0051ad43: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0051ad45: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0051ad48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51ad4au); call_ind(t); }
    /* 0051ad4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad4d: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0051ad53: mov eax, dword ptr [edx*4 + 0x7218cc] */ r_eax = R32((u32)(r_edx*4+0x7218ccu));
    /* 0051ad5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ad5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad5e: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051ad64: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x51ad69u); f_005eaf00();
    /* 0051ad69: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad6c: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0051ad72: mov ecx, dword ptr [eax*8 + 0x7218a8] */ r_ecx = R32((u32)(r_eax*8+0x7218a8u));
    /* 0051ad79: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ad7b: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ad7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ad7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad82: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0051ad88: mov ecx, dword ptr [eax*8 + 0x7218a4] */ r_ecx = R32((u32)(r_eax*8+0x7218a4u));
    /* 0051ad8f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ad91: add ecx, 0xca */ {  u32 a = r_ecx; u32 b = 0xcau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ad97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ad98: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ad9b: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0051ada1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ada4: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051adaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051adac: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0051adaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51adb1u); call_ind(t); }
    /* 0051adb1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051adb4: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0051adba: mov dword ptr [edx + 0x178], 5 */ W32((u32)(r_edx+0x178u), 0x5u);
    /* 0051adc4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051adc6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51adcbu); f_00686d82();
    /* 0051adcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051adce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051add1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0051add8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051addc: je 0x51aded */ if (fZ) goto L_0051aded;
L_0051adde:; BB(0x0051adde);
    /* 0051adde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ade0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051ade3: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x51ade8u); f_00600a70();
    /* 0051ade8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0051adeb: jmp 0x51adf4 */ goto L_0051adf4;
L_0051aded:; BB(0x0051aded);
    /* 0051aded: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0051adf4:; BB(0x0051adf4);
    /* 0051adf4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0051adf7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051adfa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051ae01: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051ae04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae05: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ae08: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0051ae0e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x51ae13u); f_005f5d50();
    /* 0051ae13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ae16: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0051ae1c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ae1f: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0051ae25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051ae27: mov ecx, eax */ r_ecx = r_eax;
    /* 0051ae29: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051ae2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51ae2eu); call_ind(t); }
L_0051ae2e:; BB(0x0051ae2e);
    /* 0051ae2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051ae31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051ae38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ae39: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ae3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ae3c: ret  */ FN_RET(0x0051aca0); r_esp += 4; return;
}

void f_0051ae40(void) /* sub_51AE40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ae40);
    /* 0051ae40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae41: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ae43: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ae49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051ae4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051ae50: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051ae53: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 0051ae59: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051ae60: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0051ae67: jmp 0x51ae72 */ goto L_0051ae72;
L_0051ae69:; BB(0x0051ae69);
    /* 0051ae69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051ae6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ae6f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0051ae72:; BB(0x0051ae72);
    /* 0051ae72: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051ae76: jge 0x51ae9c */ if ((fS==fO)) goto L_0051ae9c;
L_0051ae78:; BB(0x0051ae78);
    /* 0051ae78: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051ae7e: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0051ae84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051ae87: cmp dword ptr [edx + eax*4 + 0x3e4], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x3e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ae8f: je 0x51ae9a */ if (fZ) goto L_0051ae9a;
L_0051ae91:; BB(0x0051ae91);
    /* 0051ae91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ae94: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ae97: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0051ae9a:; BB(0x0051ae9a);
    /* 0051ae9a: jmp 0x51ae69 */ goto L_0051ae69;
L_0051ae9c:; BB(0x0051ae9c);
    /* 0051ae9c: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051aea0: jge 0x51aeb3 */ if ((fS==fO)) goto L_0051aeb3;
L_0051aea2:; BB(0x0051aea2);
    /* 0051aea2: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0051aea8: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0051aeae: call 0x47ffe0 */ r_esp -= 4; W32(r_esp, 0x51aeb3u); f_0047ffe0();
L_0051aeb3:; BB(0x0051aeb3);
    /* 0051aeb3: mov dword ptr [ebp - 0xc], 6 */ W32((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 0051aeba: jmp 0x51aec5 */ goto L_0051aec5;
L_0051aebc:; BB(0x0051aebc);
    /* 0051aebc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051aebf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051aec2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0051aec5:; BB(0x0051aec5);
    /* 0051aec5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051aec9: jl 0x51af69 */ if ((fS!=fO)) goto L_0051af69;
L_0051aecf:; BB(0x0051aecf);
    /* 0051aecf: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051aed5: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0051aedb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051aede: cmp dword ptr [edx + eax*4 + 0x3e4], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x3e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aee6: jne 0x51aeea */ if (!fZ) goto L_0051aeea;
L_0051aee8:; BB(0x0051aee8);
    /* 0051aee8: jmp 0x51aebc */ goto L_0051aebc;
L_0051aeea:; BB(0x0051aeea);
    /* 0051aeea: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051aef0: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0051aef6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051aef9: mov ecx, dword ptr [edx + eax*4 + 0x3e4] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x3e4u));
    /* 0051af00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051af01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051af07: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51af0cu); f_0047e390();
    /* 0051af0c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051af0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051af12: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x51af17u); f_004c6150();
    /* 0051af17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051af18: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051af1d: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0051af23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051af24: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51af2au); call_ind(t); }
    /* 0051af2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051af2d: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0051af32: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051af35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051af36: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0051af3c: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51af41u); f_005fb550();
    /* 0051af41: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0051af47: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0051af4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051af4e: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051af54: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051af56: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051af5c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051af62: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51af64u); call_ind(t); }
    /* 0051af64: jmp 0x51aebc */ goto L_0051aebc;
L_0051af69:; BB(0x0051af69);
    /* 0051af69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051af6c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051af6e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51af73u); f_00686d72();
    /* 0051af73: mov esp, ebp */ r_esp = r_ebp;
    /* 0051af75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051af76: ret  */ FN_RET(0x0051ae40); r_esp += 4; return;
}

