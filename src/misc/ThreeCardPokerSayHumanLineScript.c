#include "protos.h"

void f_0053d030(void) /* ThreeCardPokerSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d030);
    /* 0053d030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d031: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d03c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x53d041u); f_005fc0d0();
    /* 0053d041: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d044: mov dword ptr [eax], 0x6c5d80 */ W32((u32)(r_eax), 0x6c5d80u);
    /* 0053d04a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d04d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053d050: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0053d053: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d056: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d059: ret 4 */ FN_RET(0x0053d030); r_esp += 8; return;
}

void f_0053d060(void) /* ThreeCardPokerSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053d060);
    /* 0053d060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d061: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d063: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d066: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0053d069: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053d06e: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053d074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053d077: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d07a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x53d07fu); f_005fc360();
    /* 0053d07f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053d082: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d086: je 0x53d097 */ if (fZ) goto L_0053d097;
L_0053d088:; BB(0x0053d088);
    /* 0053d088: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d08c: je 0x53d184 */ if (fZ) goto L_0053d184;
L_0053d092:; BB(0x0053d092);
    /* 0053d092: jmp 0x53d1e3 */ goto L_0053d1e3;
L_0053d097:; BB(0x0053d097);
    /* 0053d097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d099: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d09c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053d09e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d0a1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053d0a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53d0a6u); call_ind(t); }
    /* 0053d0a6: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0053d0ad: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d0b1: je 0x53d154 */ if (fZ) goto L_0053d154;
L_0053d0b7:; BB(0x0053d0b7);
    /* 0053d0b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53d0c0u); f_005dcb00();
    /* 0053d0c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d0c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053d0c6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053d0c9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d0ceu); f_0063aac0();
    /* 0053d0ce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053d0d0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053d0d3: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d0d7: je 0x53d0f5 */ if (fZ) goto L_0053d0f5;
L_0053d0d9:; BB(0x0053d0d9);
    /* 0053d0d9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053d0dc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53d0e1u); f_0063aac0();
    /* 0053d0e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d0e3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0053d0e6: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d0ea: je 0x53d0f5 */ if (fZ) goto L_0053d0f5;
L_0053d0ec:; BB(0x0053d0ec);
    /* 0053d0ec: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0053d0f3: jmp 0x53d0fc */ goto L_0053d0fc;
L_0053d0f5:; BB(0x0053d0f5);
    /* 0053d0f5: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0053d0fc:; BB(0x0053d0fc);
    /* 0053d0fc: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 0053d100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d102: je 0x53d154 */ if (fZ) goto L_0053d154;
L_0053d104:; BB(0x0053d104);
    /* 0053d104: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053d107: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0053d10a: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0053d111: fldz  */ FPUSH(0.0);
    /* 0053d113: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0053d116: fld1  */ FPUSH(1.0);
    /* 0053d118: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053d11b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d11e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0053d121: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053d124: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d128: je 0x53d13b */ if (fZ) goto L_0053d13b;
L_0053d12a:; BB(0x0053d12a);
    /* 0053d12a: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d12e: je 0x53d132 */ if (fZ) goto L_0053d132;
L_0053d130:; BB(0x0053d130);
    /* 0053d130: jmp 0x53d154 */ goto L_0053d154;
L_0053d132:; BB(0x0053d132);
    /* 0053d132: mov dword ptr [ebp - 0x24], 0x82e */ W32((u32)(r_ebp+0xffffffdcu), 0x82eu);
    /* 0053d139: jmp 0x53d154 */ goto L_0053d154;
L_0053d13b:; BB(0x0053d13b);
    /* 0053d13b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d13d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53d142u); f_0062fbf0();
    /* 0053d142: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d145: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0053d147: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0053d149: and eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053d14c: add eax, 0x803 */ {  u32 a = r_eax; u32 b = 0x803u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053d151: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0053d154:; BB(0x0053d154);
    /* 0053d154: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d158: je 0x53d173 */ if (fZ) goto L_0053d173;
L_0053d15a:; BB(0x0053d15a);
    /* 0053d15a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d15c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d15e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d162: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0053d165: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d166: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053d16c: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x53d171u); f_00639390();
    /* 0053d171: jmp 0x53d182 */ goto L_0053d182;
L_0053d173:; BB(0x0053d173);
    /* 0053d173: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d175: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d178: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d17a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d17d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053d180: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d182u); call_ind(t); }
L_0053d182:; BB(0x0053d182);
    /* 0053d182: jmp 0x53d1e3 */ goto L_0053d1e3;
L_0053d184:; BB(0x0053d184);
    /* 0053d184: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d18a: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0053d190: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0053d193: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053d196: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d19a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0053d19d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d19e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053d1a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1a2: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053d1a8: call 0x541600 */ r_esp -= 4; W32(r_esp, 0x53d1adu); f_00541600();
    /* 0053d1ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053d1b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d1b2: jne 0x53d1b6 */ if (!fZ) goto L_0053d1b6;
L_0053d1b4:; BB(0x0053d1b4);
    /* 0053d1b4: jmp 0x53d1e3 */ goto L_0053d1e3;
L_0053d1b6:; BB(0x0053d1b6);
    /* 0053d1b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1b8: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d1be: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053d1c1: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53d1c6u); f_005fc420();
    /* 0053d1c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1ca: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053d1d0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053d1d3: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053d1d9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053d1dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053d1de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053d1e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53d1e3u); call_ind(t); }
L_0053d1e3:; BB(0x0053d1e3);
    /* 0053d1e3: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d1e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d1e6: ret  */ FN_RET(0x0053d060); r_esp += 4; return;
}

