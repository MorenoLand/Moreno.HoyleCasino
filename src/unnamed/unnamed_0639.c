#include "protos.h"

void f_006394c0(void) /* sub_6394C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006394c0);
    /* 006394c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006394c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006394c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006394c6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006394c9: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 006394cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006394cf: je 0x6394f4 */ if (fZ) goto L_006394f4;
L_006394d1:; BB(0x006394d1);
    /* 006394d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006394d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006394d5: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 006394d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006394d9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006394de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006394e0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006394e6: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 006394ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6394eeu); call_ind(t); }
    /* 006394ee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006394f0: jmp 0x639514 */ goto L_00639514;
L_006394f4:; BB(0x006394f4);
    /* 006394f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006394f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006394f8: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 006394fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006394fc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00639501: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639503: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00639509: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0063950f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639511u); call_ind(t); }
    /* 00639511: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
L_00639514:; BB(0x00639514);
    /* 00639514: mov esp, ebp */ r_esp = r_ebp;
    /* 00639516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639517: ret 8 */ FN_RET(0x006394c0); r_esp += 12; return;
}

void f_00639610(void) /* sub_639610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639610);
    /* 00639610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639611: mov ebp, esp */ r_ebp = r_esp;
    /* 00639613: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639616: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639619: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063961c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063961d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639620: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x639625u); f_00639520();
    /* 00639625: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639628: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063962b: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00639631: cmp dword ptr [ecx + 0x763574], 1 */ {  u32 a = R32((u32)(r_ecx+0x763574u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639638: jne 0x63964b */ if (!fZ) goto L_0063964b;
L_0063963a:; BB(0x0063963a);
    /* 0063963a: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0063963e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639640: jne 0x63964b */ if (!fZ) goto L_0063964b;
L_00639642:; BB(0x00639642);
    /* 00639642: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00639649: jmp 0x639652 */ goto L_00639652;
L_0063964b:; BB(0x0063964b);
    /* 0063964b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00639652:; BB(0x00639652);
    /* 00639652: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639655: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063965b: mov eax, dword ptr [eax + 0x763578] */ r_eax = R32((u32)(r_eax+0x763578u));
    /* 00639661: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639664: mov esp, ebp */ r_esp = r_ebp;
    /* 00639666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639667: ret 8 */ FN_RET(0x00639610); r_esp += 12; return;
}

void f_00639670(void) /* sub_639670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639670);
    /* 00639670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639671: mov ebp, esp */ r_ebp = r_esp;
    /* 00639673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639677: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0063967a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063967b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063967e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063967f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639682: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x639687u); f_00639610();
    /* 00639687: mov esp, ebp */ r_esp = r_ebp;
    /* 00639689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063968a: ret 8 */ FN_RET(0x00639670); r_esp += 12; return;
}

void f_00639700(void) /* sub_639700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639700);
    /* 00639700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639701: mov ebp, esp */ r_ebp = r_esp;
    /* 00639703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063970a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063970b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063970e: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x639713u); f_00639520();
    /* 00639713: imul eax, eax, 0x380 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x380u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00639719: mov eax, dword ptr [eax + 0x763574] */ r_eax = R32((u32)(r_eax+0x763574u));
    /* 0063971f: mov esp, ebp */ r_esp = r_ebp;
    /* 00639721: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639722: ret 4 */ FN_RET(0x00639700); r_esp += 8; return;
}

void f_006397a0(void) /* sub_6397A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006397a0);
    /* 006397a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006397a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006397a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006397a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006397a7: movzx eax, byte ptr [0x795fbf] */ r_eax = (u32)R8((u32)(0x795fbfu));
    /* 006397ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006397b0: je 0x6397f2 */ if (fZ) goto L_006397f2;
L_006397b2:; BB(0x006397b2);
    /* 006397b2: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006397b9: je 0x6397f0 */ if (fZ) goto L_006397f0;
L_006397bb:; BB(0x006397bb);
    /* 006397bb: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006397c0: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 006397c6: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x6397cbu); f_005f2300();
    /* 006397cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006397cd: je 0x6397f0 */ if (fZ) goto L_006397f0;
L_006397cf:; BB(0x006397cf);
    /* 006397cf: push 0x186a2 */ { u32 v = 0x186a2u; r_esp -= 4; W32(r_esp, v); }
    /* 006397d4: push 0x186ab */ { u32 v = 0x186abu; r_esp -= 4; W32(r_esp, v); }
    /* 006397d9: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006397de: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 006397e4: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x6397e9u); f_005f2300();
    /* 006397e9: mov ecx, eax */ r_ecx = r_eax;
    /* 006397eb: call 0x5fdff0 */ r_esp -= 4; W32(r_esp, 0x6397f0u); f_005fdff0();
L_006397f0:; BB(0x006397f0);
    /* 006397f0: jmp 0x639830 */ goto L_00639830;
L_006397f2:; BB(0x006397f2);
    /* 006397f2: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006397f9: je 0x639830 */ if (fZ) goto L_00639830;
L_006397fb:; BB(0x006397fb);
    /* 006397fb: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639800: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00639806: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x63980bu); f_005f2300();
    /* 0063980b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063980d: je 0x639830 */ if (fZ) goto L_00639830;
L_0063980f:; BB(0x0063980f);
    /* 0063980f: push 0x186ab */ { u32 v = 0x186abu; r_esp -= 4; W32(r_esp, v); }
    /* 00639814: push 0x186a2 */ { u32 v = 0x186a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00639819: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063981e: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 00639824: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x639829u); f_005f2300();
    /* 00639829: mov ecx, eax */ r_ecx = r_eax;
    /* 0063982b: call 0x5fdff0 */ r_esp -= 4; W32(r_esp, 0x639830u); f_005fdff0();
L_00639830:; BB(0x00639830);
    /* 00639830: mov esp, ebp */ r_esp = r_ebp;
    /* 00639832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639833: ret  */ FN_RET(0x006397a0); r_esp += 4; return;
}

void f_00639840(void) /* sub_639840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639840);
    /* 00639840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639841: mov ebp, esp */ r_ebp = r_esp;
    /* 00639843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639846: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639849: movzx eax, byte ptr [0x795fbf] */ r_eax = (u32)R8((u32)(0x795fbfu));
    /* 00639850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639852: je 0x639868 */ if (fZ) goto L_00639868;
L_00639854:; BB(0x00639854);
    /* 00639854: movzx ecx, byte ptr [0x7960c6] */ r_ecx = (u32)R8((u32)(0x7960c6u));
    /* 0063985b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063985d: je 0x639868 */ if (fZ) goto L_00639868;
L_0063985f:; BB(0x0063985f);
    /* 0063985f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00639866: jmp 0x63986f */ goto L_0063986f;
L_00639868:; BB(0x00639868);
    /* 00639868: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0063986f:; BB(0x0063986f);
    /* 0063986f: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00639872: mov esp, ebp */ r_esp = r_ebp;
    /* 00639874: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639875: ret  */ FN_RET(0x00639840); r_esp += 4; return;
}

void f_00639950(void) /* sub_639950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639950);
    /* 00639950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639951: mov ebp, esp */ r_ebp = r_esp;
    /* 00639953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639955: push 0x6abac2 */ { u32 v = 0x6abac2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063995a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00639960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639961: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00639969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063996b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063996c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063996f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00639975: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00639978: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0063997d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x639982u); f_00686d82();
    /* 00639982: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639985: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00639988: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063998f: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639993: je 0x6399a2 */ if (fZ) goto L_006399a2;
L_00639995:; BB(0x00639995);
    /* 00639995: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00639998: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x63999du); f_005eaaf0();
    /* 0063999d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006399a0: jmp 0x6399a9 */ goto L_006399a9;
L_006399a2:; BB(0x006399a2);
    /* 006399a2: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006399a9:; BB(0x006399a9);
    /* 006399a9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006399ac: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006399af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006399b6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006399b9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006399bc: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 006399c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006399c4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6399c9u); f_005eaf00();
    /* 006399c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006399cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006399ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006399d1: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006399d4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6399d6u); call_ind(t); }
    /* 006399d6: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 006399d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006399da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006399dd: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x6399e2u); f_005ebf80();
    /* 006399e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006399e5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006399e8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006399eb: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006399ee: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006399f2: je 0x639a07 */ if (fZ) goto L_00639a07;
L_006399f4:; BB(0x006399f4);
    /* 006399f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006399f6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006399f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006399fb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006399fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00639a00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639a02u); call_ind(t); }
    /* 00639a02: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00639a05: jmp 0x639a0e */ goto L_00639a0e;
L_00639a07:; BB(0x00639a07);
    /* 00639a07: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00639a0e:; BB(0x00639a0e);
    /* 00639a0e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00639a11: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00639a14: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00639a17: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00639a1a: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00639a1d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00639a20: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639a22: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a26: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a28: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a2a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a2c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00639a2f: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00639a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639a33: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00639a38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a3d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00639a40: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x639a45u); f_005fa5b0();
    /* 00639a45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639a48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00639a4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639a50: mov esp, ebp */ r_esp = r_ebp;
    /* 00639a52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639a53: ret 4 */ FN_RET(0x00639950); r_esp += 8; return;
}

void f_00639ea0(void) /* sub_639EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639ea0);
    /* 00639ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639ea3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639ea6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639ea9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639eac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639eb1u); f_0063aac0();
    /* 00639eb1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00639eb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639eb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00639eb8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ebc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00639ebf: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00639ec2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ec4: je 0x639eda */ if (fZ) goto L_00639eda;
L_00639ec6:; BB(0x00639ec6);
    /* 00639ec6: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 00639ec8: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00639ecd: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639ed2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639ed7u); f_005e9f20();
    /* 00639ed7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639eda:; BB(0x00639eda);
    /* 00639eda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639edd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639ee2u); f_0063aac0();
    /* 00639ee2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00639ee5: movsx eax, byte ptr [eax + ecx + 0x5d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx+0x5du));
    /* 00639eea: mov esp, ebp */ r_esp = r_ebp;
    /* 00639eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639eed: ret 4 */ FN_RET(0x00639ea0); r_esp += 8; return;
}

void f_00639ef0(void) /* sub_639EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639ef0);
    /* 00639ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639ef3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639ef6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639ef9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639efc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639f01u); f_0063aac0();
    /* 00639f01: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00639f03: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639f06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00639f08: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f0c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00639f0f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00639f12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f14: je 0x639f2d */ if (fZ) goto L_00639f2d;
L_00639f16:; BB(0x00639f16);
    /* 00639f16: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00639f1b: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00639f20: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639f25: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639f2au); f_005e9f20();
    /* 00639f2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639f2d:; BB(0x00639f2d);
    /* 00639f2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639f30: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639f35u); f_0063aac0();
    /* 00639f35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00639f38: mov al, byte ptr [eax + ecx + 0x268] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x268u))) & 0xffu);
    /* 00639f3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00639f41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639f42: ret 4 */ FN_RET(0x00639ef0); r_esp += 8; return;
}

void f_00639f50(void) /* sub_639F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639f50);
    /* 00639f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00639f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639f56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639f59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639f5c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639f61u); f_0063aac0();
    /* 00639f61: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00639f63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639f66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00639f68: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f6c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00639f6f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00639f72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f74: je 0x639f8d */ if (fZ) goto L_00639f8d;
L_00639f76:; BB(0x00639f76);
    /* 00639f76: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00639f7b: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00639f80: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639f85: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639f8au); f_005e9f20();
    /* 00639f8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639f8d:; BB(0x00639f8d);
    /* 00639f8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639f90: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639f95u); f_0063aac0();
    /* 00639f95: mov eax, dword ptr [eax + 0x264] */ r_eax = R32((u32)(r_eax+0x264u));
    /* 00639f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00639f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639f9e: ret  */ FN_RET(0x00639f50); r_esp += 4; return;
}

void f_00639fa0(void) /* sub_639FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639fa0);
    /* 00639fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639fa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639fa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639fa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639fac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639fb1u); f_0063aac0();
    /* 00639fb1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00639fb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639fb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00639fb8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639fbc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00639fbf: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00639fc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639fc4: je 0x639fdd */ if (fZ) goto L_00639fdd;
L_00639fc6:; BB(0x00639fc6);
    /* 00639fc6: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fcb: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00639fd0: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fd5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639fdau); f_005e9f20();
    /* 00639fda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639fdd:; BB(0x00639fdd);
    /* 00639fdd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639fe0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x639fe5u); f_0063aac0();
    /* 00639fe5: mov eax, dword ptr [eax + 0x36c] */ r_eax = R32((u32)(r_eax+0x36cu));
    /* 00639feb: mov esp, ebp */ r_esp = r_ebp;
    /* 00639fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639fee: ret  */ FN_RET(0x00639fa0); r_esp += 4; return;
}

void f_00639ff0(void) /* sub_639FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639ff0);
    /* 00639ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639ff3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639ff6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639ff9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00639ffc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a001u); f_0063aac0();
    /* 0063a001: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063a003: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063a006: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a008: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a00c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063a00f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063a012: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a014: je 0x63a02d */ if (fZ) goto L_0063a02d;
L_0063a016:; BB(0x0063a016);
    /* 0063a016: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a01b: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a020: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a025: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63a02au); f_005e9f20();
    /* 0063a02a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a02d:; BB(0x0063a02d);
    /* 0063a02d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a030: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a035u); f_0063aac0();
    /* 0063a035: mov eax, dword ptr [eax + 0x370] */ r_eax = R32((u32)(r_eax+0x370u));
    /* 0063a03b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a03d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a03e: ret  */ FN_RET(0x00639ff0); r_esp += 4; return;
}

