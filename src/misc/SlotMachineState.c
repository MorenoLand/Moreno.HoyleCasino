#include "protos.h"

void f_00535ac0(void) /* SlotMachineState::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535ac0);
    /* 00535ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00535ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535ac7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00535acc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00535ace: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00535ad4: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00535ad7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535ad9u); call_ind(t); }
    /* 00535ad9: mov esp, ebp */ r_esp = r_ebp;
    /* 00535adb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535adc: ret  */ FN_RET(0x00535ac0); r_esp += 4; return;
}

void f_00535ff0(void) /* slotmachinestate::func_00535ff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535ff0);
    /* 00535ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00535ff3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535ff6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00535ff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535ffc: call 0x536d40 */ r_esp -= 4; W32(r_esp, 0x536001u); f_00536d40();
    /* 00536001: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00536007: call 0x52e160 */ r_esp -= 4; W32(r_esp, 0x53600cu); f_0052e160();
    /* 0053600c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053600f: call 0x535f60 */ r_esp -= 4; W32(r_esp, 0x536014u); f_00535f60();
    /* 00536014: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00536019: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053601b: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00536021: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00536024: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x536026u); call_ind(t); }
    /* 00536026: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00536029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053602c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053602f: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536033: je 0x536043 */ if (fZ) goto L_00536043;
L_00536035:; BB(0x00536035);
    /* 00536035: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536039: je 0x536053 */ if (fZ) goto L_00536053;
L_0053603b:; BB(0x0053603b);
    /* 0053603b: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053603f: je 0x536093 */ if (fZ) goto L_00536093;
L_00536041:; BB(0x00536041);
    /* 00536041: jmp 0x5360a3 */ goto L_005360a3;
L_00536043:; BB(0x00536043);
    /* 00536043: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536046: call 0x536bc0 */ r_esp -= 4; W32(r_esp, 0x53604bu); f_00536bc0();
    /* 0053604b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053604e: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00536051: jmp 0x5360be */ goto L_005360be;
L_00536053:; BB(0x00536053);
    /* 00536053: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00536058: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0053605e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00536061: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536065: je 0x53607d */ if (fZ) goto L_0053607d;
L_00536067:; BB(0x00536067);
    /* 00536067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053606b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053606d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536070: call 0x536da0 */ r_esp -= 4; W32(r_esp, 0x536075u); f_00536da0();
    /* 00536075: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536078: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0053607b: jmp 0x536091 */ goto L_00536091;
L_0053607d:; BB(0x0053607d);
    /* 0053607d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053607f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00536081: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536083: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536086: call 0x536da0 */ r_esp -= 4; W32(r_esp, 0x53608bu); f_00536da0();
    /* 0053608b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053608e: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
L_00536091:; BB(0x00536091);
    /* 00536091: jmp 0x5360be */ goto L_005360be;
L_00536093:; BB(0x00536093);
    /* 00536093: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536096: call 0x537050 */ r_esp -= 4; W32(r_esp, 0x53609bu); f_00537050();
    /* 0053609b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053609e: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005360a1: jmp 0x5360be */ goto L_005360be;
L_005360a3:; BB(0x005360a3);
    /* 005360a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005360a5: jne 0x5360be */ if (!fZ) goto L_005360be;
L_005360a7:; BB(0x005360a7);
    /* 005360a7: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005360ac: push 0x6c5918 */ { u32 v = 0x6c5918u; r_esp -= 4; W32(r_esp, v); }
    /* 005360b1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005360b6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5360bbu); f_005e9f20();
    /* 005360bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005360be:; BB(0x005360be);
    /* 005360be: mov esp, ebp */ r_esp = r_ebp;
    /* 005360c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005360c1: ret  */ FN_RET(0x00535ff0); r_esp += 4; return;
}

void f_00537690(void) /* slotmachinestate::func_00537690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537690);
    /* 00537690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537691: mov ebp, esp */ r_ebp = r_esp;
    /* 00537693: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537696: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00537699: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053769c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053769f: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005376a3: ja 0x537842 */ if ((!fC&&!fZ)) goto L_00537842;
L_005376a9:; BB(0x005376a9);
    /* 005376a9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005376ac: jmp dword ptr [ecx*4 + 0x537868] */ { u32 t = R32((u32)(r_ecx*4+0x537868u)); switch (t) { case 0x5376b3u: goto L_005376b3; case 0x5376dau: goto L_005376da; case 0x537701u: goto L_00537701; case 0x537728u: goto L_00537728; case 0x5377bcu: goto L_005377bc; default: UNSUP(0x005376ac, "jump table entry is not a known target"); } }
L_005376b3:; BB(0x005376b3);
    /* 005376b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005376b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005376b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005376b9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005376bc: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5376c1u); f_00537880();
    /* 005376c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005376c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005376c7: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005376ca: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005376cd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005376d0: movsx eax, byte ptr [ecx + eax + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005376d5: jmp 0x537860 */ goto L_00537860;
L_005376da:; BB(0x005376da);
    /* 005376da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005376dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005376df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005376e0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005376e3: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5376e8u); f_00537880();
    /* 005376e8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005376eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005376ee: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005376f1: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005376f4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005376f7: movsx eax, byte ptr [ecx + eax + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 005376fc: jmp 0x537860 */ goto L_00537860;
L_00537701:; BB(0x00537701);
    /* 00537701: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00537703: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537706: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537707: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053770a: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x53770fu); f_00537880();
    /* 0053770f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00537712: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537715: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537718: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053771b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053771e: movsx eax, byte ptr [ecx + eax + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x15u));
    /* 00537723: jmp 0x537860 */ goto L_00537860;
L_00537728:; BB(0x00537728);
    /* 00537728: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053772b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0053772e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537732: je 0x537742 */ if (fZ) goto L_00537742;
L_00537734:; BB(0x00537734);
    /* 00537734: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537738: je 0x537769 */ if (fZ) goto L_00537769;
L_0053773a:; BB(0x0053773a);
    /* 0053773a: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053773e: je 0x537790 */ if (fZ) goto L_00537790;
L_00537740:; BB(0x00537740);
    /* 00537740: jmp 0x5377b7 */ goto L_005377b7;
L_00537742:; BB(0x00537742);
    /* 00537742: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537744: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537748: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053774b: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x537750u); f_00537880();
    /* 00537750: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00537753: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537756: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537759: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053775c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053775f: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 00537764: jmp 0x537860 */ goto L_00537860;
L_00537769:; BB(0x00537769);
    /* 00537769: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053776b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053776e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053776f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537772: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x537777u); f_00537880();
    /* 00537777: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053777a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053777d: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537780: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00537783: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537786: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 0053778b: jmp 0x537860 */ goto L_00537860;
L_00537790:; BB(0x00537790);
    /* 00537790: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00537792: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537796: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537799: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x53779eu); f_00537880();
    /* 0053779e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005377a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005377a4: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005377a7: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005377aa: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005377ad: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 005377b2: jmp 0x537860 */ goto L_00537860;
L_005377b7:; BB(0x005377b7);
    /* 005377b7: jmp 0x537842 */ goto L_00537842;
L_005377bc:; BB(0x005377bc);
    /* 005377bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005377bf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005377c2: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005377c6: je 0x5377d6 */ if (fZ) goto L_005377d6;
L_005377c8:; BB(0x005377c8);
    /* 005377c8: cmp dword ptr [ebp - 0x34], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005377cc: je 0x5377fa */ if (fZ) goto L_005377fa;
L_005377ce:; BB(0x005377ce);
    /* 005377ce: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005377d2: je 0x53781e */ if (fZ) goto L_0053781e;
L_005377d4:; BB(0x005377d4);
    /* 005377d4: jmp 0x537842 */ goto L_00537842;
L_005377d6:; BB(0x005377d6);
    /* 005377d6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005377d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005377db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005377dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005377df: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x5377e4u); f_00537880();
    /* 005377e4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005377e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005377ea: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005377ed: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005377f0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005377f3: movsx eax, byte ptr [eax + edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 005377f8: jmp 0x537860 */ goto L_00537860;
L_005377fa:; BB(0x005377fa);
    /* 005377fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005377fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005377ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537800: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537803: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x537808u); f_00537880();
    /* 00537808: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053780b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053780e: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537811: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537814: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537817: movsx eax, byte ptr [eax + edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0053781c: jmp 0x537860 */ goto L_00537860;
L_0053781e:; BB(0x0053781e);
    /* 0053781e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00537820: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537824: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00537827: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x53782cu); f_00537880();
    /* 0053782c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053782f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537832: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00537835: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00537838: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053783b: movsx eax, byte ptr [eax + edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 00537840: jmp 0x537860 */ goto L_00537860;
L_00537842:; BB(0x00537842);
    /* 00537842: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00537844: jne 0x53785d */ if (!fZ) goto L_0053785d;
L_00537846:; BB(0x00537846);
    /* 00537846: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0053784b: push 0x6c5918 */ { u32 v = 0x6c5918u; r_esp -= 4; W32(r_esp, v); }
    /* 00537850: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00537855: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53785au); f_005e9f20();
    /* 0053785a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053785d:; BB(0x0053785d);
    /* 0053785d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00537860:; BB(0x00537860);
    /* 00537860: mov esp, ebp */ r_esp = r_ebp;
    /* 00537862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537863: ret 8 */ FN_RET(0x00537690); r_esp += 12; return;
}

void f_00537e60(void) /* slotmachinestate::func_00537e60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00537e60);
    /* 00537e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00537e63: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537e66: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00537e69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537e6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537e70: call 0x537de0 */ r_esp -= 4; W32(r_esp, 0x537e75u); f_00537de0();
    /* 00537e75: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00537e78: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00537e7f: jmp 0x537e8a */ goto L_00537e8a;
L_00537e81:; BB(0x00537e81);
    /* 00537e81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537e84: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00537e87: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00537e8a:; BB(0x00537e8a);
    /* 00537e8a: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537e8e: jge 0x537e9a */ if ((fS==fO)) goto L_00537e9a;
L_00537e90:; BB(0x00537e90);
    /* 00537e90: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00537e93: mov byte ptr [ebp + edx - 0xc], 0 */ W8((u32)(r_ebp+r_edx+0xfffffff4u), 0x0u);
    /* 00537e98: jmp 0x537e81 */ goto L_00537e81;
L_00537e9a:; BB(0x00537e9a);
    /* 00537e9a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537e9d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00537ea0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00537ea3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00537ea6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00537ea9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00537eac: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00537eb0: ja 0x538401 */ if ((!fC&&!fZ)) goto L_00538401;
L_00537eb6:; BB(0x00537eb6);
    /* 00537eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00537eb9: jmp dword ptr [eax*4 + 0x53840c] */ { u32 t = R32((u32)(r_eax*4+0x53840cu)); switch (t) { case 0x537ec0u: goto L_00537ec0; case 0x537ee9u: goto L_00537ee9; case 0x537f8cu: goto L_00537f8c; case 0x537f61u: goto L_00537f61; case 0x537fb7u: goto L_00537fb7; case 0x537feeu: goto L_00537fee; case 0x5381eeu: goto L_005381ee; case 0x538117u: goto L_00538117; case 0x538293u: goto L_00538293; case 0x53839eu: goto L_0053839e; case 0x5383c3u: goto L_005383c3; default: UNSUP(0x00537eb9, "jump table entry is not a known target"); } }
L_00537ec0:; BB(0x00537ec0);
    /* 00537ec0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537ec4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537ec7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00537ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537eca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537ecd: call 0x537ac0 */ r_esp -= 4; W32(r_esp, 0x537ed2u); f_00537ac0();
    /* 00537ed2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537ed5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ed7: je 0x537ee4 */ if (fZ) goto L_00537ee4;
L_00537ed9:; BB(0x00537ed9);
    /* 00537ed9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537edc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00537edf: jmp 0x538404 */ goto L_00538404;
L_00537ee4:; BB(0x00537ee4);
    /* 00537ee4: jmp 0x538401 */ goto L_00538401;
L_00537ee9:; BB(0x00537ee9);
    /* 00537ee9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00537eec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00537eef: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ef3: je 0x537efd */ if (fZ) goto L_00537efd;
L_00537ef5:; BB(0x00537ef5);
    /* 00537ef5: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ef9: je 0x537f2a */ if (fZ) goto L_00537f2a;
L_00537efb:; BB(0x00537efb);
    /* 00537efb: jmp 0x537f5c */ goto L_00537f5c;
L_00537efd:; BB(0x00537efd);
    /* 00537efd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537f00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f01: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537f04: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00537f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537f08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537f0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00537f0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537f11: call 0x537bf0 */ r_esp -= 4; W32(r_esp, 0x537f16u); f_00537bf0();
    /* 00537f16: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00537f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f1b: je 0x537f28 */ if (fZ) goto L_00537f28;
L_00537f1d:; BB(0x00537f1d);
    /* 00537f1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537f20: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00537f23: jmp 0x538404 */ goto L_00538404;
L_00537f28:; BB(0x00537f28);
    /* 00537f28: jmp 0x537f5c */ goto L_00537f5c;
L_00537f2a:; BB(0x00537f2a);
    /* 00537f2a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00537f2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537f31: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00537f34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537f38: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00537f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537f3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537f3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00537f41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537f45: call 0x537c60 */ r_esp -= 4; W32(r_esp, 0x537f4au); f_00537c60();
    /* 00537f4a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00537f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f4f: je 0x537f5c */ if (fZ) goto L_00537f5c;
L_00537f51:; BB(0x00537f51);
    /* 00537f51: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537f54: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00537f57: jmp 0x538404 */ goto L_00538404;
L_00537f5c:; BB(0x00537f5c);
    /* 00537f5c: jmp 0x538401 */ goto L_00538401;
L_00537f61:; BB(0x00537f61);
    /* 00537f61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537f63: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00537f66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537f6a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00537f6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537f70: call 0x537b80 */ r_esp -= 4; W32(r_esp, 0x537f75u); f_00537b80();
    /* 00537f75: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00537f78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f7a: je 0x537f87 */ if (fZ) goto L_00537f87;
L_00537f7c:; BB(0x00537f7c);
    /* 00537f7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537f7f: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00537f82: jmp 0x538404 */ goto L_00538404;
L_00537f87:; BB(0x00537f87);
    /* 00537f87: jmp 0x538401 */ goto L_00538401;
L_00537f8c:; BB(0x00537f8c);
    /* 00537f8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537f8e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00537f91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537f92: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537f95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00537f97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537f98: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537f9b: call 0x537b10 */ r_esp -= 4; W32(r_esp, 0x537fa0u); f_00537b10();
    /* 00537fa0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537fa3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537fa5: je 0x537fb2 */ if (fZ) goto L_00537fb2;
L_00537fa7:; BB(0x00537fa7);
    /* 00537fa7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537faa: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00537fad: jmp 0x538404 */ goto L_00538404;
L_00537fb2:; BB(0x00537fb2);
    /* 00537fb2: jmp 0x538401 */ goto L_00538401;
L_00537fb7:; BB(0x00537fb7);
    /* 00537fb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537fbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537fbe: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00537fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537fc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00537fc5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00537fc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00537fc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537fcc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00537fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537fcf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00537fd2: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x537fd7u); f_00537a50();
    /* 00537fd7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00537fda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537fdc: je 0x537fe9 */ if (fZ) goto L_00537fe9;
L_00537fde:; BB(0x00537fde);
    /* 00537fde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00537fe1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00537fe4: jmp 0x538404 */ goto L_00538404;
L_00537fe9:; BB(0x00537fe9);
    /* 00537fe9: jmp 0x538401 */ goto L_00538401;
L_00537fee:; BB(0x00537fee);
    /* 00537fee: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ff2: jne 0x5380f7 */ if (!fZ) goto L_005380f7;
L_00537ff8:; BB(0x00537ff8);
    /* 00537ff8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00537ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537ffc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00537fff: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00538002: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538003: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538006: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00538009: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053800a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053800d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053800f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538010: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538013: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x538018u); f_00537a50();
    /* 00538018: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053801b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053801d: jne 0x5380ea */ if (!fZ) goto L_005380ea;
L_00538023:; BB(0x00538023);
    /* 00538023: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00538026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538027: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053802a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053802d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053802e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00538031: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00538034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538035: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538038: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053803a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053803b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053803e: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x538043u); f_00537a50();
    /* 00538043: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00538046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538048: jne 0x5380ea */ if (!fZ) goto L_005380ea;
L_0053804e:; BB(0x0053804e);
    /* 0053804e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538051: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538052: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00538055: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00538058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538059: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053805c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053805e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053805f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538062: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00538065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538066: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538069: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x53806eu); f_00537a50();
    /* 0053806e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00538071: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538073: jne 0x5380ea */ if (!fZ) goto L_005380ea;
L_00538075:; BB(0x00538075);
    /* 00538075: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00538078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538079: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053807c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053807e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053807f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538082: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00538085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538086: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00538089: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053808c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053808d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538090: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x538095u); f_00537a50();
    /* 00538095: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00538098: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053809a: jne 0x5380ea */ if (!fZ) goto L_005380ea;
L_0053809c:; BB(0x0053809c);
    /* 0053809c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0053809f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005380a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005380a3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005380a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005380a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005380aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005380ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005380ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005380b0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005380b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005380b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005380b7: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x5380bcu); f_00537a50();
    /* 005380bc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005380bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005380c1: jne 0x5380ea */ if (!fZ) goto L_005380ea;
L_005380c3:; BB(0x005380c3);
    /* 005380c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005380c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005380c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005380ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005380cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005380cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005380d0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005380d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005380d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005380d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005380da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005380db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005380de: call 0x537a50 */ r_esp -= 4; W32(r_esp, 0x5380e3u); f_00537a50();
    /* 005380e3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005380e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005380e8: je 0x5380f5 */ if (fZ) goto L_005380f5;
L_005380ea:; BB(0x005380ea);
    /* 005380ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005380ed: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005380f0: jmp 0x538404 */ goto L_00538404;
L_005380f5:; BB(0x005380f5);
    /* 005380f5: jmp 0x538112 */ goto L_00538112;
L_005380f7:; BB(0x005380f7);
    /* 005380f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005380f9: jne 0x538112 */ if (!fZ) goto L_00538112;
L_005380fb:; BB(0x005380fb);
    /* 005380fb: push 0x49e */ { u32 v = 0x49eu; r_esp -= 4; W32(r_esp, v); }
    /* 00538100: push 0x6c5918 */ { u32 v = 0x6c5918u; r_esp -= 4; W32(r_esp, v); }
    /* 00538105: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053810a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53810fu); f_005e9f20();
    /* 0053810f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00538112:; BB(0x00538112);
    /* 00538112: jmp 0x538401 */ goto L_00538401;
L_00538117:; BB(0x00538117);
    /* 00538117: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053811a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053811b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053811d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538120: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00538122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538123: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538126: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x53812bu); f_00537910();
    /* 0053812b: mov byte ptr [ebp - 0xc], al */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_eax);
    /* 0053812e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00538131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538132: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00538134: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538137: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00538139: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053813a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053813d: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538142u); f_00537910();
    /* 00538142: mov byte ptr [ebp - 0xb], al */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_eax);
    /* 00538145: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00538148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538149: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053814b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053814e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00538150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538151: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538154: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538159u); f_00537910();
    /* 00538159: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0053815c: movzx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 00538160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538162: jne 0x538174 */ if (!fZ) goto L_00538174;
L_00538164:; BB(0x00538164);
    /* 00538164: movzx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 00538168: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053816a: jne 0x538174 */ if (!fZ) goto L_00538174;
L_0053816c:; BB(0x0053816c);
    /* 0053816c: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00538170: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538172: je 0x5381e9 */ if (fZ) goto L_005381e9;
L_00538174:; BB(0x00538174);
    /* 00538174: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0053817b: jmp 0x538186 */ goto L_00538186;
L_0053817d:; BB(0x0053817d);
    /* 0053817d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00538180: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538183: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00538186:; BB(0x00538186);
    /* 00538186: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053818a: jge 0x5381c6 */ if ((fS==fO)) goto L_005381c6;
L_0053818c:; BB(0x0053818c);
    /* 0053818c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053818f: movzx edx, byte ptr [ebp + ecx - 0xc] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xfffffff4u));
    /* 00538194: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538196: jne 0x5381c4 */ if (!fZ) goto L_005381c4;
L_00538198:; BB(0x00538198);
    /* 00538198: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053819b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053819c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053819f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005381a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005381a3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005381a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005381a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005381aa: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005381ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005381ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005381b1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005381b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005381b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005381b8: call 0x537ce0 */ r_esp -= 4; W32(r_esp, 0x5381bdu); f_00537ce0();
    /* 005381bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005381c0: mov byte ptr [ebp + edx - 0xc], al */ W8((u32)(r_ebp+r_edx+0xfffffff4u), (u8)r_eax);
L_005381c4:; BB(0x005381c4);
    /* 005381c4: jmp 0x53817d */ goto L_0053817d;
L_005381c6:; BB(0x005381c6);
    /* 005381c6: movzx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 005381ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381cc: je 0x5381e9 */ if (fZ) goto L_005381e9;
L_005381ce:; BB(0x005381ce);
    /* 005381ce: movzx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 005381d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381d4: je 0x5381e9 */ if (fZ) goto L_005381e9;
L_005381d6:; BB(0x005381d6);
    /* 005381d6: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005381da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381dc: je 0x5381e9 */ if (fZ) goto L_005381e9;
L_005381de:; BB(0x005381de);
    /* 005381de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005381e1: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005381e4: jmp 0x538404 */ goto L_00538404;
L_005381e9:; BB(0x005381e9);
    /* 005381e9: jmp 0x538401 */ goto L_00538401;
L_005381ee:; BB(0x005381ee);
    /* 005381ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005381f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005381f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005381f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005381f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005381f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005381fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005381fd: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538202u); f_00537910();
    /* 00538202: mov byte ptr [ebp - 0xc], al */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_eax);
    /* 00538205: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053820b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053820e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00538210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538211: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538214: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538219u); f_00537910();
    /* 00538219: mov byte ptr [ebp - 0xb], al */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_eax);
    /* 0053821c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053821f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538220: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00538222: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00538225: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00538227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538228: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053822b: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538230u); f_00537910();
    /* 00538230: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 00538233: movzx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 00538237: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538239: jne 0x53824b */ if (!fZ) goto L_0053824b;
L_0053823b:; BB(0x0053823b);
    /* 0053823b: movzx edx, byte ptr [ebp - 0xb] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 0053823f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538241: jne 0x53824b */ if (!fZ) goto L_0053824b;
L_00538243:; BB(0x00538243);
    /* 00538243: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00538247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538249: je 0x53828e */ if (fZ) goto L_0053828e;
L_0053824b:; BB(0x0053824b);
    /* 0053824b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00538252: jmp 0x53825d */ goto L_0053825d;
L_00538254:; BB(0x00538254);
    /* 00538254: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00538257: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053825a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0053825d:; BB(0x0053825d);
    /* 0053825d: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538261: jge 0x53828e */ if ((fS==fO)) goto L_0053828e;
L_00538263:; BB(0x00538263);
    /* 00538263: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00538266: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538267: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053826a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053826b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053826e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00538271: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538272: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00538275: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x53827au); f_00537910();
    /* 0053827a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053827d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053827f: je 0x53828c */ if (fZ) goto L_0053828c;
L_00538281:; BB(0x00538281);
    /* 00538281: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538284: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00538287: jmp 0x538404 */ goto L_00538404;
L_0053828c:; BB(0x0053828c);
    /* 0053828c: jmp 0x538254 */ goto L_00538254;
L_0053828e:; BB(0x0053828e);
    /* 0053828e: jmp 0x538401 */ goto L_00538401;
L_00538293:; BB(0x00538293);
    /* 00538293: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00538296: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00538299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053829c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053829e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053829f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005382a2: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5382a7u); f_00537910();
    /* 005382a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005382aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382ac: jne 0x5382d3 */ if (!fZ) goto L_005382d3;
L_005382ae:; BB(0x005382ae);
    /* 005382ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005382b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005382b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005382b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005382b7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005382ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005382bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005382be: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5382c3u); f_00537910();
    /* 005382c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005382c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382c8: jne 0x5382d3 */ if (!fZ) goto L_005382d3;
L_005382ca:; BB(0x005382ca);
    /* 005382ca: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005382d1: jmp 0x5382da */ goto L_005382da;
L_005382d3:; BB(0x005382d3);
    /* 005382d3: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_005382da:; BB(0x005382da);
    /* 005382da: mov cl, byte ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 005382dd: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 005382e0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005382e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005382e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005382e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005382e9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005382ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005382ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005382f0: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5382f5u); f_00537910();
    /* 005382f5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005382f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382fa: jne 0x538321 */ if (!fZ) goto L_00538321;
L_005382fc:; BB(0x005382fc);
    /* 005382fc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005382ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538300: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00538302: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538305: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00538308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538309: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053830c: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538311u); f_00537910();
    /* 00538311: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00538314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538316: jne 0x538321 */ if (!fZ) goto L_00538321;
L_00538318:; BB(0x00538318);
    /* 00538318: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0053831f: jmp 0x538328 */ goto L_00538328;
L_00538321:; BB(0x00538321);
    /* 00538321: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00538328:; BB(0x00538328);
    /* 00538328: mov cl, byte ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0053832b: mov byte ptr [ebp - 0xb], cl */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_ecx);
    /* 0053832e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00538331: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538332: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00538334: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538337: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0053833a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053833b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053833e: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x538343u); f_00537910();
    /* 00538343: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00538346: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538348: jne 0x53836f */ if (!fZ) goto L_0053836f;
L_0053834a:; BB(0x0053834a);
    /* 0053834a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053834d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053834e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00538350: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00538353: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00538356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538357: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053835a: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x53835fu); f_00537910();
    /* 0053835f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00538362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538364: jne 0x53836f */ if (!fZ) goto L_0053836f;
L_00538366:; BB(0x00538366);
    /* 00538366: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0053836d: jmp 0x538376 */ goto L_00538376;
L_0053836f:; BB(0x0053836f);
    /* 0053836f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00538376:; BB(0x00538376);
    /* 00538376: mov cl, byte ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 00538379: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 0053837c: movzx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 00538380: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538382: je 0x53839c */ if (fZ) goto L_0053839c;
L_00538384:; BB(0x00538384);
    /* 00538384: movzx eax, byte ptr [ebp - 0xb] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 00538388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053838a: je 0x53839c */ if (fZ) goto L_0053839c;
L_0053838c:; BB(0x0053838c);
    /* 0053838c: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00538390: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538392: je 0x53839c */ if (fZ) goto L_0053839c;
L_00538394:; BB(0x00538394);
    /* 00538394: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00538397: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053839a: jmp 0x538404 */ goto L_00538404;
L_0053839c:; BB(0x0053839c);
    /* 0053839c: jmp 0x538401 */ goto L_00538401;
L_0053839e:; BB(0x0053839e);
    /* 0053839e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005383a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005383a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005383a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005383a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005383a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005383aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005383ad: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5383b2u); f_00537910();
    /* 005383b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005383b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005383b7: je 0x5383c1 */ if (fZ) goto L_005383c1;
L_005383b9:; BB(0x005383b9);
    /* 005383b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005383bc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005383bf: jmp 0x538404 */ goto L_00538404;
L_005383c1:; BB(0x005383c1);
    /* 005383c1: jmp 0x538401 */ goto L_00538401;
L_005383c3:; BB(0x005383c3);
    /* 005383c3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005383c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005383c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005383c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005383cc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005383ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005383cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005383d2: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5383d7u); f_00537910();
    /* 005383d7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005383da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005383dc: je 0x538401 */ if (fZ) goto L_00538401;
L_005383de:; BB(0x005383de);
    /* 005383de: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005383e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005383e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005383e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005383e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005383e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005383ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005383ed: call 0x537910 */ r_esp -= 4; W32(r_esp, 0x5383f2u); f_00537910();
    /* 005383f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005383f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005383f7: je 0x538401 */ if (fZ) goto L_00538401;
L_005383f9:; BB(0x005383f9);
    /* 005383f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005383fc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005383ff: jmp 0x538404 */ goto L_00538404;
L_00538401:; BB(0x00538401);
    /* 00538401: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00538404:; BB(0x00538404);
    /* 00538404: mov esp, ebp */ r_esp = r_ebp;
    /* 00538406: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538407: ret 8 */ FN_RET(0x00537e60); r_esp += 12; return;
}

