#include "protos.h"

void f_00608110(void) /* VSoundManager::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608110);
    /* 00608110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608111: mov ebp, esp */ r_ebp = r_esp;
    /* 00608113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608115: push 0x6aac8b */ { u32 v = 0x6aac8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0060811a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608121: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608122: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608126: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608127: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00608128: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060812d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060812f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608130: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00608133: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00608139: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060813c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0060813f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608142: mov dword ptr [eax], 0x6d7ebc */ W32((u32)(r_eax), 0x6d7ebcu);
    /* 00608148: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060814f: movzx ecx, byte ptr [0x7960cb] */ r_ecx = (u32)R8((u32)(0x7960cbu));
    /* 00608156: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608158: jne 0x608243 */ if (!fZ) goto L_00608243;
L_0060815e:; BB(0x0060815e);
    /* 0060815e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608161: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 00608165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608167: je 0x608175 */ if (fZ) goto L_00608175;
L_00608169:; BB(0x00608169);
    /* 00608169: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060816c: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00608170: jmp 0x608243 */ goto L_00608243;
L_00608175:; BB(0x00608175);
    /* 00608175: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608178: call 0x608290 */ r_esp -= 4; W32(r_esp, 0x60817du); f_00608290();
    /* 0060817d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608180: call 0x60a4d0 */ r_esp -= 4; W32(r_esp, 0x608185u); f_0060a4d0();
    /* 00608185: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00608189: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00608190: jmp 0x60819b */ goto L_0060819b;
L_00608192:; BB(0x00608192);
    /* 00608192: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00608195: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00608198: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0060819b:; BB(0x0060819b);
    /* 0060819b: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060819f: jge 0x6081fd */ if ((fS==fO)) goto L_006081fd;
L_006081a1:; BB(0x006081a1);
    /* 006081a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006081a4: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006081a7: cmp dword ptr [eax + 0x796b38], 0 */ {  u32 a = R32((u32)(r_eax+0x796b38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006081ae: je 0x6081c0 */ if (fZ) goto L_006081c0;
L_006081b0:; BB(0x006081b0);
    /* 006081b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006081b3: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006081b6: mov dword ptr [ecx + 0x796b38], 0 */ W32((u32)(r_ecx+0x796b38u), 0x0u);
L_006081c0:; BB(0x006081c0);
    /* 006081c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006081c3: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006081c6: cmp dword ptr [edx + 0x796b3c], 0 */ {  u32 a = R32((u32)(r_edx+0x796b3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006081cd: je 0x6081fb */ if (fZ) goto L_006081fb;
L_006081cf:; BB(0x006081cf);
    /* 006081cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006081d1: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 006081d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006081d9: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006081dc: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 006081e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006081e3: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x6081e8u); f_006841ae();
    /* 006081e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006081eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006081ee: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006081f1: mov dword ptr [edx + 0x796b3c], 0 */ W32((u32)(r_edx+0x796b3cu), 0x0u);
L_006081fb:; BB(0x006081fb);
    /* 006081fb: jmp 0x608192 */ goto L_00608192;
L_006081fd:; BB(0x006081fd);
    /* 006081fd: push 0x796e88 */ { u32 v = 0x796e88u; r_esp -= 4; W32(r_esp, v); }
    /* 00608202: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00608204: call 0x6841a8 */ r_esp -= 4; W32(r_esp, 0x608209u); f_006841a8();
    /* 00608209: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060820c: push 0x796ce8 */ { u32 v = 0x796ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 00608211: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00608213: call 0x6841a2 */ r_esp -= 4; W32(r_esp, 0x608218u); f_006841a2();
    /* 00608218: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060821b: jmp 0x608237 */ goto L_00608237;
L_00608237:; BB(0x00608237);
    /* 00608237: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060823e: call 0x683f80 */ r_esp -= 4; W32(r_esp, 0x608243u); f_00683f80();
L_00608243:; BB(0x00608243);
    /* 00608243: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060824a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060824d: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x608252u); f_0062aef0();
    /* 00608252: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608255: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060825c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060825d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060825e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060825f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608260: mov esp, ebp */ r_esp = r_ebp;
    /* 00608262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608263: ret  */ FN_RET(0x00608110); r_esp += 4; return;
}

void f_00608550(void) /* VSoundManager::func_00608550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608550);
    /* 00608550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608551: mov ebp, esp */ r_ebp = r_esp;
    /* 00608553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00608557: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060855b: jl 0x608563 */ if ((fS!=fO)) goto L_00608563;
L_0060855d:; BB(0x0060855d);
    /* 0060855d: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608561: jl 0x608580 */ if ((fS!=fO)) goto L_00608580;
L_00608563:; BB(0x00608563);
    /* 00608563: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00608565: jne 0x60857e */ if (!fZ) goto L_0060857e;
L_00608567:; BB(0x00608567);
    /* 00608567: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 0060856c: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00608571: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00608576: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60857bu); f_005e9f20();
    /* 0060857b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060857e:; BB(0x0060857e);
    /* 0060857e: jmp 0x6085d4 */ goto L_006085d4;
L_00608580:; BB(0x00608580);
    /* 00608580: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608583: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608586: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00608589: fstp dword ptr [edx + 0x796b50] */ W_F32((u32)(r_edx+0x796b50u), ST(0)); FPOP();
    /* 0060858f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608590: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00608593: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608596: push 0x100a */ { u32 v = 0x100au; r_esp -= 4; W32(r_esp, v); }
    /* 0060859b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060859e: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006085a1: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 006085a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006085a8: call 0x6841c0 */ r_esp -= 4; W32(r_esp, 0x6085adu); f_006841c0();
    /* 006085ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006085b0: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6085b5u); f_0068419c();
    /* 006085b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006085b7: je 0x6085d4 */ if (fZ) goto L_006085d4;
L_006085b9:; BB(0x006085b9);
    /* 006085b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006085bb: jne 0x6085d4 */ if (!fZ) goto L_006085d4;
L_006085bd:; BB(0x006085bd);
    /* 006085bd: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 006085c2: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006085c7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006085cc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6085d1u); f_005e9f20();
    /* 006085d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006085d4:; BB(0x006085d4);
    /* 006085d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006085d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006085d7: ret 8 */ FN_RET(0x00608550); r_esp += 12; return;
}

void f_006085e0(void) /* VSoundManager::func_006085e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006085e0);
    /* 006085e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006085e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006085e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006085e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006085e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006085eb: jl 0x6085f3 */ if ((fS!=fO)) goto L_006085f3;
L_006085ed:; BB(0x006085ed);
    /* 006085ed: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006085f1: jl 0x608612 */ if ((fS!=fO)) goto L_00608612;
L_006085f3:; BB(0x006085f3);
    /* 006085f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006085f5: jne 0x60860e */ if (!fZ) goto L_0060860e;
L_006085f7:; BB(0x006085f7);
    /* 006085f7: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 006085fc: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00608601: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00608606: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60860bu); f_005e9f20();
    /* 0060860b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060860e:; BB(0x0060860e);
    /* 0060860e: fldz  */ FPUSH(0.0);
    /* 00608610: jmp 0x60861e */ goto L_0060861e;
L_00608612:; BB(0x00608612);
    /* 00608612: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608615: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608618: fld dword ptr [edx + 0x796b50] */ FPUSH(R_F32((u32)(r_edx+0x796b50u)));
L_0060861e:; BB(0x0060861e);
    /* 0060861e: mov esp, ebp */ r_esp = r_ebp;
    /* 00608620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608621: ret 4 */ FN_RET(0x006085e0); r_esp += 8; return;
}

void f_00608790(void) /* VSoundManager::func_00608790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608790);
    /* 00608790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608791: mov ebp, esp */ r_ebp = r_esp;
    /* 00608793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608796: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608799: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060879d: jl 0x6087a5 */ if ((fS!=fO)) goto L_006087a5;
L_0060879f:; BB(0x0060879f);
    /* 0060879f: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006087a3: jl 0x6087c4 */ if ((fS!=fO)) goto L_006087c4;
L_006087a5:; BB(0x006087a5);
    /* 006087a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006087a7: jne 0x6087c0 */ if (!fZ) goto L_006087c0;
L_006087a9:; BB(0x006087a9);
    /* 006087a9: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 006087ae: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006087b3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006087b8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6087bdu); f_005e9f20();
    /* 006087bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006087c0:; BB(0x006087c0);
    /* 006087c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006087c2: jmp 0x6087e9 */ goto L_006087e9;
L_006087c4:; BB(0x006087c4);
    /* 006087c4: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006087ca: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006087cd: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006087d3: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006087d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006087d8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006087db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6087ddu); call_ind(t); }
    /* 006087dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006087e0: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006087e3: sub eax, dword ptr [ecx + 0x796b54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x796b54u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_006087e9:; BB(0x006087e9);
    /* 006087e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006087eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006087ec: ret 4 */ FN_RET(0x00608790); r_esp += 8; return;
}

void f_00608890(void) /* VSoundManager::func_00608890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608890);
    /* 00608890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608891: mov ebp, esp */ r_ebp = r_esp;
    /* 00608893: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608896: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608899: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006088a0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088a4: jl 0x6088ac */ if ((fS!=fO)) goto L_006088ac;
L_006088a6:; BB(0x006088a6);
    /* 006088a6: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088aa: jl 0x6088cb */ if ((fS!=fO)) goto L_006088cb;
L_006088ac:; BB(0x006088ac);
    /* 006088ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006088ae: jne 0x6088c7 */ if (!fZ) goto L_006088c7;
L_006088b0:; BB(0x006088b0);
    /* 006088b0: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 006088b5: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006088ba: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006088bf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6088c4u); f_005e9f20();
    /* 006088c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006088c7:; BB(0x006088c7);
    /* 006088c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006088c9: jmp 0x6088d7 */ goto L_006088d7;
L_006088cb:; BB(0x006088cb);
    /* 006088cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006088ce: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006088d1: mov eax, dword ptr [edx + 0x796b58] */ r_eax = R32((u32)(r_edx+0x796b58u));
L_006088d7:; BB(0x006088d7);
    /* 006088d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006088d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006088da: ret 4 */ FN_RET(0x00608890); r_esp += 8; return;
}

void f_006088e0(void) /* VSoundManager::func_006088e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006088e0);
    /* 006088e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006088e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006088e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006088e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006088e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088eb: jl 0x6088f3 */ if ((fS!=fO)) goto L_006088f3;
L_006088ed:; BB(0x006088ed);
    /* 006088ed: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088f1: jl 0x608912 */ if ((fS!=fO)) goto L_00608912;
L_006088f3:; BB(0x006088f3);
    /* 006088f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006088f5: jne 0x60890e */ if (!fZ) goto L_0060890e;
L_006088f7:; BB(0x006088f7);
    /* 006088f7: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 006088fc: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00608901: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00608906: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60890bu); f_005e9f20();
    /* 0060890b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060890e:; BB(0x0060890e);
    /* 0060890e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608910: jmp 0x60891e */ goto L_0060891e;
L_00608912:; BB(0x00608912);
    /* 00608912: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608915: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608918: mov eax, dword ptr [edx + 0x796b4c] */ r_eax = R32((u32)(r_edx+0x796b4cu));
L_0060891e:; BB(0x0060891e);
    /* 0060891e: mov esp, ebp */ r_esp = r_ebp;
    /* 00608920: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608921: ret 4 */ FN_RET(0x006088e0); r_esp += 8; return;
}

void f_00608930(void) /* VSoundManager::func_00608930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608930);
    /* 00608930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608931: mov ebp, esp */ r_ebp = r_esp;
    /* 00608933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00608937: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060893b: jl 0x608943 */ if ((fS!=fO)) goto L_00608943;
L_0060893d:; BB(0x0060893d);
    /* 0060893d: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608941: jl 0x608960 */ if ((fS!=fO)) goto L_00608960;
L_00608943:; BB(0x00608943);
    /* 00608943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00608945: jne 0x60895e */ if (!fZ) goto L_0060895e;
L_00608947:; BB(0x00608947);
    /* 00608947: push 0x19d */ { u32 v = 0x19du; r_esp -= 4; W32(r_esp, v); }
    /* 0060894c: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00608951: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00608956: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60895bu); f_005e9f20();
    /* 0060895b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060895e:; BB(0x0060895e);
    /* 0060895e: jmp 0x60896f */ goto L_0060896f;
L_00608960:; BB(0x00608960);
    /* 00608960: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608963: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608966: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00608969: mov dword ptr [edx + 0x796b4c], eax */ W32((u32)(r_edx+0x796b4cu), r_eax);
L_0060896f:; BB(0x0060896f);
    /* 0060896f: mov esp, ebp */ r_esp = r_ebp;
    /* 00608971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608972: ret 8 */ FN_RET(0x00608930); r_esp += 12; return;
}

void f_00608aa0(void) /* VSoundManager::func_00608aa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608aa0);
    /* 00608aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00608aa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608aa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608aa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608aad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608ab0: call 0x6089e0 */ r_esp -= 4; W32(r_esp, 0x608ab5u); f_006089e0();
    /* 00608ab5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00608ab8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608abc: jne 0x608ac3 */ if (!fZ) goto L_00608ac3;
L_00608abe:; BB(0x00608abe);
    /* 00608abe: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608ac1: jmp 0x608b3e */ goto L_00608b3e;
L_00608ac3:; BB(0x00608ac3);
    /* 00608ac3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608ac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608ac8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608ac9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608acc: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x608ad1u); f_00609720();
    /* 00608ad1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608ad4: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608ad7: mov eax, dword ptr [edx + 0x796b3c] */ r_eax = R32((u32)(r_edx+0x796b3cu));
    /* 00608add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608ade: call 0x6841d8 */ r_esp -= 4; W32(r_esp, 0x608ae3u); f_006841d8();
    /* 00608ae3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608ae6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608ae9: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608aec: mov edx, dword ptr [ecx + 0x796b3c] */ r_edx = R32((u32)(r_ecx+0x796b3cu));
    /* 00608af2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608af3: call 0x6841d2 */ r_esp -= 4; W32(r_esp, 0x608af8u); f_006841d2();
    /* 00608af8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00608afd: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 00608b02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608b05: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608b08: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 00608b0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608b0f: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x608b14u); f_006841ae();
    /* 00608b14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608b17: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x608b1cu); f_0068419c();
    /* 00608b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b1e: je 0x608b3b */ if (fZ) goto L_00608b3b;
L_00608b20:; BB(0x00608b20);
    /* 00608b20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00608b22: jne 0x608b3b */ if (!fZ) goto L_00608b3b;
L_00608b24:; BB(0x00608b24);
    /* 00608b24: push 0x1e9 */ { u32 v = 0x1e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00608b29: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00608b2e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00608b33: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x608b38u); f_005e9f20();
    /* 00608b38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00608b3b:; BB(0x00608b3b);
    /* 00608b3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00608b3e:; BB(0x00608b3e);
    /* 00608b3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00608b40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608b41: ret 4 */ FN_RET(0x00608aa0); r_esp += 8; return;
}

void f_00608db0(void) /* VSoundManager::func_00608db0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608db0);
    /* 00608db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00608db3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608db6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608db7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00608dba: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00608dc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608dc3: jne 0x6090e8 */ if (!fZ) goto L_006090e8;
L_00608dc9:; BB(0x00608dc9);
    /* 00608dc9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608dcc: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00608dd0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608dd2: je 0x608e0b */ if (fZ) goto L_00608e0b;
L_00608dd4:; BB(0x00608dd4);
    /* 00608dd4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608dd7: cmp dword ptr [eax + 0x30], 0x2033504d */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x2033504du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608dde: je 0x608e04 */ if (fZ) goto L_00608e04;
L_00608de0:; BB(0x00608de0);
    /* 00608de0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608de3: cmp dword ptr [ecx + 0x30], 0x2047474f */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x2047474fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608dea: je 0x608e04 */ if (fZ) goto L_00608e04;
L_00608dec:; BB(0x00608dec);
    /* 00608dec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00608dee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00608df0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608df3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00608df5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608df8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00608dfb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x608dfdu); call_ind(t); }
    /* 00608dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608dfe: call dword ptr [0x6b2498] */ { u32 t = R32((u32)(0x6b2498u)); r_esp -= 4; W32(r_esp, 0x608e04u); call_ind(t); }
L_00608e04:; BB(0x00608e04);
    /* 00608e04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608e06: jmp 0x6090ea */ goto L_006090ea;
L_00608e0b:; BB(0x00608e0b);
    /* 00608e0b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00608e12: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e15: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00608e19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608e1b: je 0x608e28 */ if (fZ) goto L_00608e28;
L_00608e1d:; BB(0x00608e1d);
    /* 00608e1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e20: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00608e24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608e26: jne 0x608e30 */ if (!fZ) goto L_00608e30;
L_00608e28:; BB(0x00608e28);
    /* 00608e28: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608e2b: jmp 0x6090ea */ goto L_006090ea;
L_00608e30:; BB(0x00608e30);
    /* 00608e30: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00608e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608e34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e37: call 0x608aa0 */ r_esp -= 4; W32(r_esp, 0x608e3cu); f_00608aa0();
    /* 00608e3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00608e3f: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608e43: jne 0x608e4d */ if (!fZ) goto L_00608e4d;
L_00608e45:; BB(0x00608e45);
    /* 00608e45: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608e48: jmp 0x6090ea */ goto L_006090ea;
L_00608e4d:; BB(0x00608e4d);
    /* 00608e4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608e50: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608e53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608e56: mov dword ptr [edx + 0x796b40], eax */ W32((u32)(r_edx+0x796b40u), r_eax);
    /* 00608e5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608e5f: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608e62: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00608e65: mov dword ptr [ecx + 0x796b48], edx */ W32((u32)(r_ecx+0x796b48u), r_edx);
    /* 00608e6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608e6e: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608e71: mov dword ptr [eax + 0x796b54], 0 */ W32((u32)(r_eax+0x796b54u), 0x0u);
    /* 00608e7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608e7e: cmp dword ptr [ecx + 0x30], 0x2047474f */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x2047474fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608e85: jne 0x608ec1 */ if (!fZ) goto L_00608ec1;
L_00608e87:; BB(0x00608e87);
    /* 00608e87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608e8a: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x608e8fu); f_0061ed80();
    /* 00608e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608e90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00608e93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00608e95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608e98: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00608e9b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x608e9du); call_ind(t); }
    /* 00608e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608e9e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608ea1: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608ea4: mov ecx, dword ptr [eax + 0x796b38] */ r_ecx = R32((u32)(r_eax+0x796b38u));
    /* 00608eaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608eab: call 0x6091a0 */ r_esp -= 4; W32(r_esp, 0x608eb0u); f_006091a0();
    /* 00608eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608eb3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00608eb6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00608eb8: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00608eba: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00608ebc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00608ebf: jmp 0x608f05 */ goto L_00608f05;
L_00608ec1:; BB(0x00608ec1);
    /* 00608ec1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608ec4: cmp dword ptr [eax + 0x30], 0x2033504d */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x2033504du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ecb: jne 0x608ed6 */ if (!fZ) goto L_00608ed6;
L_00608ecd:; BB(0x00608ecd);
    /* 00608ecd: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00608ed4: jmp 0x608f05 */ goto L_00608f05;
L_00608ed6:; BB(0x00608ed6);
    /* 00608ed6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608ed9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00608edb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608ede: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00608ee1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x608ee3u); call_ind(t); }
    /* 00608ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608ee4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608ee7: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608eea: mov edx, dword ptr [ecx + 0x796b38] */ r_edx = R32((u32)(r_ecx+0x796b38u));
    /* 00608ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608ef1: call 0x609100 */ r_esp -= 4; W32(r_esp, 0x608ef6u); f_00609100();
    /* 00608ef6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608ef9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00608efc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00608efe: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00608f00: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00608f02: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00608f05:; BB(0x00608f05);
    /* 00608f05: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608f09: jne 0x608f20 */ if (!fZ) goto L_00608f20;
L_00608f0b:; BB(0x00608f0b);
    /* 00608f0b: push 0x6d7fe8 */ { u32 v = 0x6d7fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f10: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x608f15u); f_0062fde0();
    /* 00608f15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608f18: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608f1b: jmp 0x6090ea */ goto L_006090ea;
L_00608f20:; BB(0x00608f20);
    /* 00608f20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608f27: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00608f2e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00608f35: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00608f3c: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00608f3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608f40: push 0x2001 */ { u32 v = 0x2001u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608f48: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608f4b: mov eax, dword ptr [edx + 0x796b38] */ r_eax = R32((u32)(r_edx+0x796b38u));
    /* 00608f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f52: call 0x6841e4 */ r_esp -= 4; W32(r_esp, 0x608f57u); f_006841e4();
    /* 00608f57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608f5a: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00608f5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608f5e: push 0x2004 */ { u32 v = 0x2004u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f63: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608f66: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608f69: mov eax, dword ptr [edx + 0x796b38] */ r_eax = R32((u32)(r_edx+0x796b38u));
    /* 00608f6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f70: call 0x6841e4 */ r_esp -= 4; W32(r_esp, 0x608f75u); f_006841e4();
    /* 00608f75: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608f78: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00608f7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608f7c: push 0x2002 */ { u32 v = 0x2002u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f81: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608f84: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608f87: mov eax, dword ptr [edx + 0x796b38] */ r_eax = R32((u32)(r_edx+0x796b38u));
    /* 00608f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f8e: call 0x6841e4 */ r_esp -= 4; W32(r_esp, 0x608f93u); f_006841e4();
    /* 00608f93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608f96: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00608f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608f9a: push 0x2003 */ { u32 v = 0x2003u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f9f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608fa2: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608fa5: mov eax, dword ptr [edx + 0x796b38] */ r_eax = R32((u32)(r_edx+0x796b38u));
    /* 00608fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608fac: call 0x6841e4 */ r_esp -= 4; W32(r_esp, 0x608fb1u); f_006841e4();
    /* 00608fb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608fb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608fb7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00608fb8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00608fbd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00608fbd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00608fbd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00608fbf: mov ecx, eax */ r_ecx = r_eax;
    /* 00608fc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00608fc4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00608fc5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00608fc5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00608fc5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00608fc7: mov ecx, eax */ r_ecx = r_eax;
    /* 00608fc9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608fcc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00608fcd: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00608fd0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608fd2: mov esi, eax */ r_esi = r_eax;
    /* 00608fd4: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00608fd7: mov eax, ecx */ r_eax = r_ecx;
    /* 00608fd9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00608fda: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00608fda, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00608fda, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00608fdc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00608fdd: idiv dword ptr [ebp - 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffecu)); if (!d) UNSUP(0x00608fdd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00608fdd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00608fe0: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608fe3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608fe6: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608fe9: mov dword ptr [edx + 0x796b58], eax */ W32((u32)(r_edx+0x796b58u), r_eax);
    /* 00608fef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608ff1: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ff5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00608ff8: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00608ffb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608ffe: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609001: mov edx, dword ptr [ecx + 0x796b38] */ r_edx = R32((u32)(r_ecx+0x796b38u));
    /* 00609007: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609008: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 0060900d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609010: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609013: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 00609019: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060901a: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x60901fu); f_006841ae();
    /* 0060901f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609022: movsx edx, byte ptr [ebp - 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 00609026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609027: push 0x1007 */ { u32 v = 0x1007u; r_esp -= 4; W32(r_esp, v); }
    /* 0060902c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060902f: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609032: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 00609038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609039: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x60903eu); f_006841ae();
    /* 0060903e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609041: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609044: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609047: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0060904a: fstp dword ptr [edx + 0x796b50] */ W_F32((u32)(r_edx+0x796b50u), ST(0)); FPOP();
    /* 00609050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609051: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00609054: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00609057: push 0x100a */ { u32 v = 0x100au; r_esp -= 4; W32(r_esp, v); }
    /* 0060905c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060905f: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609062: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 00609068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609069: call 0x6841c0 */ r_esp -= 4; W32(r_esp, 0x60906eu); f_006841c0();
    /* 0060906e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609071: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609076u); f_0068419c();
    /* 00609076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609078: je 0x609095 */ if (fZ) goto L_00609095;
L_0060907a:; BB(0x0060907a);
    /* 0060907a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0060907c: jne 0x609095 */ if (!fZ) goto L_00609095;
L_0060907e:; BB(0x0060907e);
    /* 0060907e: push 0x369 */ { u32 v = 0x369u; r_esp -= 4; W32(r_esp, v); }
    /* 00609083: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609088: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060908d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609092u); f_005e9f20();
    /* 00609092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609095:; BB(0x00609095);
    /* 00609095: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060909b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060909e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 006090a3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006090a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006090a8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006090ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6090adu); call_ind(t); }
    /* 006090ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006090b0: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006090b3: mov dword ptr [ecx + 0x796b54], eax */ W32((u32)(r_ecx+0x796b54u), r_eax);
    /* 006090b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006090bc: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006090bf: mov eax, dword ptr [edx + 0x796b3c] */ r_eax = R32((u32)(r_edx+0x796b3cu));
    /* 006090c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006090c6: call 0x6841de */ r_esp -= 4; W32(r_esp, 0x6090cbu); f_006841de();
    /* 006090cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006090ce: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6090d3u); f_0068419c();
    /* 006090d3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006090d6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006090da: je 0x6090e1 */ if (fZ) goto L_006090e1;
L_006090dc:; BB(0x006090dc);
    /* 006090dc: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006090df: jmp 0x6090ea */ goto L_006090ea;
L_006090e1:; BB(0x006090e1);
    /* 006090e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006090e4: jmp 0x6090ea */ goto L_006090ea;
L_006090e8:; BB(0x006090e8);
    /* 006090e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006090ea:; BB(0x006090ea);
    /* 006090ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006090eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006090ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006090ee: ret 0x14 */ FN_RET(0x00608db0); r_esp += 24; return;
}

void f_006091a0(void) /* VSoundManager::func_006091a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006091a0);
    /* 006091a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006091a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006091a3: sub esp, 0x31c */ {  u32 a = r_esp; u32 b = 0x31cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006091a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006091ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006091b0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006091b3: mov dword ptr [ebp - 0x300], 0 */ W32((u32)(r_ebp+0xfffffd00u), 0x0u);
    /* 006091bd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006091bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006091c1: lea eax, [ebp - 0x2ec] */ r_eax = (u32)(r_ebp+0xfffffd14u);
    /* 006091c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006091c8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6091cdu); f_00686fa2();
    /* 006091cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006091d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006091d3: mov dword ptr [ebp - 0x2ec], ecx */ W32((u32)(r_ebp+0xfffffd14u), r_ecx);
    /* 006091d9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006091dc: mov dword ptr [ebp - 0x2e8], edx */ W32((u32)(r_ebp+0xfffffd18u), r_edx);
    /* 006091e2: mov dword ptr [ebp - 0x2e4], 0 */ W32((u32)(r_ebp+0xfffffd1cu), 0x0u);
    /* 006091ec: mov dword ptr [ebp - 0x31c], 0x6094b0 */ W32((u32)(r_ebp+0xfffffce4u), 0x6094b0u);
    /* 006091f6: mov dword ptr [ebp - 0x314], 0x609620 */ W32((u32)(r_ebp+0xfffffcecu), 0x609620u);
    /* 00609200: mov dword ptr [ebp - 0x318], 0x609530 */ W32((u32)(r_ebp+0xfffffce8u), 0x609530u);
    /* 0060920a: mov dword ptr [ebp - 0x310], 0x609630 */ W32((u32)(r_ebp+0xfffffcf0u), 0x609630u);
    /* 00609214: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609217: mov eax, esp */ r_eax = r_esp;
    /* 00609219: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0060921f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00609221: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00609227: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0060922a: mov ecx, dword ptr [ebp - 0x314] */ r_ecx = R32((u32)(r_ebp+0xfffffcecu));
    /* 00609230: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00609233: mov edx, dword ptr [ebp - 0x310] */ r_edx = R32((u32)(r_ebp+0xfffffcf0u));
    /* 00609239: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0060923c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060923e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609240: lea eax, [ebp - 0x2e0] */ r_eax = (u32)(r_ebp+0xfffffd20u);
    /* 00609246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609247: lea ecx, [ebp - 0x2ec] */ r_ecx = (u32)(r_ebp+0xfffffd14u);
    /* 0060924d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060924e: call 0x684340 */ r_esp -= 4; W32(r_esp, 0x609253u); f_00684340();
    /* 00609253: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609256: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x60925bu); f_0068419c();
    /* 0060925b: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00609261: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609268: je 0x609285 */ if (fZ) goto L_00609285;
L_0060926a:; BB(0x0060926a);
    /* 0060926a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0060926c: jne 0x609285 */ if (!fZ) goto L_00609285;
L_0060926e:; BB(0x0060926e);
    /* 0060926e: push 0x2eb */ { u32 v = 0x2ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00609273: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609278: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060927d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609282u); f_005e9f20();
    /* 00609282: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609285:; BB(0x00609285);
    /* 00609285: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609287: lea ecx, [ebp - 0x2e0] */ r_ecx = (u32)(r_ebp+0xfffffd20u);
    /* 0060928d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060928e: call 0x685dd0 */ r_esp -= 4; W32(r_esp, 0x609293u); f_00685dd0();
    /* 00609293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609296: mov dword ptr [ebp - 0x2f4], eax */ W32((u32)(r_ebp+0xfffffd0cu), r_eax);
    /* 0060929c: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6092a1u); f_0068419c();
    /* 006092a1: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 006092a7: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006092ae: je 0x6092cb */ if (fZ) goto L_006092cb;
L_006092b0:; BB(0x006092b0);
    /* 006092b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006092b2: jne 0x6092cb */ if (!fZ) goto L_006092cb;
L_006092b4:; BB(0x006092b4);
    /* 006092b4: push 0x2f0 */ { u32 v = 0x2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006092b9: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006092be: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006092c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6092c8u); f_005e9f20();
    /* 006092c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006092cb:; BB(0x006092cb);
    /* 006092cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006092cd: lea ecx, [ebp - 0x2e0] */ r_ecx = (u32)(r_ebp+0xfffffd20u);
    /* 006092d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006092d4: call 0x685e10 */ r_esp -= 4; W32(r_esp, 0x6092d9u); f_00685e10();
    /* 006092d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006092dc: mov dword ptr [ebp - 0x308], eax */ W32((u32)(r_ebp+0xfffffcf8u), r_eax);
    /* 006092e2: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6092e7u); f_0068419c();
    /* 006092e7: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 006092ed: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006092f4: je 0x609311 */ if (fZ) goto L_00609311;
L_006092f6:; BB(0x006092f6);
    /* 006092f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006092f8: jne 0x609311 */ if (!fZ) goto L_00609311;
L_006092fa:; BB(0x006092fa);
    /* 006092fa: push 0x2f4 */ { u32 v = 0x2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006092ff: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609304: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609309: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60930eu); f_005e9f20();
    /* 0060930e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609311:; BB(0x00609311);
    /* 00609311: mov ecx, dword ptr [ebp - 0x2f4] */ r_ecx = R32((u32)(r_ebp+0xfffffd0cu));
    /* 00609317: cmp dword ptr [ecx + 4], 1 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060931b: jne 0x609329 */ if (!fZ) goto L_00609329;
L_0060931d:; BB(0x0060931d);
    /* 0060931d: mov dword ptr [ebp - 0x304], 0x1101 */ W32((u32)(r_ebp+0xfffffcfcu), 0x1101u);
    /* 00609327: jmp 0x609333 */ goto L_00609333;
L_00609329:; BB(0x00609329);
    /* 00609329: mov dword ptr [ebp - 0x304], 0x1103 */ W32((u32)(r_ebp+0xfffffcfcu), 0x1103u);
L_00609333:; BB(0x00609333);
    /* 00609333: mov edx, dword ptr [ebp - 0x2f4] */ r_edx = R32((u32)(r_ebp+0xfffffd0cu));
    /* 00609339: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060933c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060933f: mov dword ptr [ebp - 0x2f0], 0x796ed0 */ W32((u32)(r_ebp+0xfffffd10u), 0x796ed0u);
    /* 00609349: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00609350:; BB(0x00609350);
    /* 00609350: lea ecx, [ebp - 0x2fc] */ r_ecx = (u32)(r_ebp+0xfffffd04u);
    /* 00609356: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609357: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609359: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060935b: mov edx, dword ptr [ebp - 0x300] */ r_edx = R32((u32)(r_ebp+0xfffffd00u));
    /* 00609361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609362: mov eax, 0xe4e1c0 */ r_eax = 0xe4e1c0u;
    /* 00609367: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060936a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060936b: mov ecx, dword ptr [ebp - 0x2f0] */ r_ecx = R32((u32)(r_ebp+0xfffffd10u));
    /* 00609371: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609372: lea edx, [ebp - 0x2e0] */ r_edx = (u32)(r_ebp+0xfffffd20u);
    /* 00609378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609379: call 0x685e50 */ r_esp -= 4; W32(r_esp, 0x60937eu); f_00685e50();
    /* 0060937e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609381: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 00609387: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x60938cu); f_0068419c();
    /* 0060938c: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00609392: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609399: je 0x6093b6 */ if (fZ) goto L_006093b6;
L_0060939b:; BB(0x0060939b);
    /* 0060939b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060939d: jne 0x6093b6 */ if (!fZ) goto L_006093b6;
L_0060939f:; BB(0x0060939f);
    /* 0060939f: push 0x30c */ { u32 v = 0x30cu; r_esp -= 4; W32(r_esp, v); }
    /* 006093a4: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006093a9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006093ae: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6093b3u); f_005e9f20();
    /* 006093b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006093b6:; BB(0x006093b6);
    /* 006093b6: cmp dword ptr [ebp - 0x30c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006093bd: jge 0x6093d5 */ if ((fS==fO)) goto L_006093d5;
L_006093bf:; BB(0x006093bf);
    /* 006093bf: lea edx, [ebp - 0x2e0] */ r_edx = (u32)(r_ebp+0xfffffd20u);
    /* 006093c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006093c6: call 0x684240 */ r_esp -= 4; W32(r_esp, 0x6093cbu); f_00684240();
    /* 006093cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006093ce: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006093d0: jmp 0x609497 */ goto L_00609497;
L_006093d5:; BB(0x006093d5);
    /* 006093d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006093d8: add eax, dword ptr [ebp - 0x30c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffcf4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006093de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006093e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006093e4: add ecx, 0x796ed0 */ {  u32 a = r_ecx; u32 b = 0x796ed0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006093ea: mov dword ptr [ebp - 0x2f0], ecx */ W32((u32)(r_ebp+0xfffffd10u), r_ecx);
    /* 006093f0: cmp dword ptr [ebp - 4], 0xe4e1c0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xe4e1c0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006093f7: jl 0x6093fb */ if ((fS!=fO)) goto L_006093fb;
L_006093f9:; BB(0x006093f9);
    /* 006093f9: jmp 0x609408 */ goto L_00609408;
L_006093fb:; BB(0x006093fb);
    /* 006093fb: cmp dword ptr [ebp - 0x30c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609402: jg 0x609350 */ if ((!fZ&&fS==fO)) goto L_00609350;
L_00609408:; BB(0x00609408);
    /* 00609408: lea edx, [ebp - 0x2e0] */ r_edx = (u32)(r_ebp+0xfffffd20u);
    /* 0060940e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060940f: call 0x684240 */ r_esp -= 4; W32(r_esp, 0x609414u); f_00684240();
    /* 00609414: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609417: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x60941cu); f_0068419c();
    /* 0060941c: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00609422: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609429: je 0x609446 */ if (fZ) goto L_00609446;
L_0060942b:; BB(0x0060942b);
    /* 0060942b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060942d: jne 0x609446 */ if (!fZ) goto L_00609446;
L_0060942f:; BB(0x0060942f);
    /* 0060942f: push 0x322 */ { u32 v = 0x322u; r_esp -= 4; W32(r_esp, v); }
    /* 00609434: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609439: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060943e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609443u); f_005e9f20();
    /* 00609443: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609446:; BB(0x00609446);
    /* 00609446: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060944a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060944d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060944e: push 0x796ed0 */ { u32 v = 0x796ed0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609453: mov ecx, dword ptr [ebp - 0x304] */ r_ecx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 00609459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060945a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060945d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060945e: call 0x6841ea */ r_esp -= 4; W32(r_esp, 0x609463u); f_006841ea();
    /* 00609463: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609466: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x60946bu); f_0068419c();
    /* 0060946b: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00609471: cmp dword ptr [ebp - 0x2f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609478: je 0x609495 */ if (fZ) goto L_00609495;
L_0060947a:; BB(0x0060947a);
    /* 0060947a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060947c: jne 0x609495 */ if (!fZ) goto L_00609495;
L_0060947e:; BB(0x0060947e);
    /* 0060947e: push 0x327 */ { u32 v = 0x327u; r_esp -= 4; W32(r_esp, v); }
    /* 00609483: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609488: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060948d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609492u); f_005e9f20();
    /* 00609492: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609495:; BB(0x00609495);
    /* 00609495: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00609497:; BB(0x00609497);
    /* 00609497: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060949a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060949c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6094a1u); f_00686d72();
    /* 006094a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006094a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006094a4: ret  */ FN_RET(0x006091a0); r_esp += 4; return;
}

void f_00609650(void) /* VSoundManager::func_00609650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609650);
    /* 00609650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609651: mov ebp, esp */ r_ebp = r_esp;
    /* 00609653: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609656: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609659: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609662: jne 0x60970a */ if (!fZ) goto L_0060970a;
L_00609668:; BB(0x00609668);
    /* 00609668: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060966b: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060966f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609671: je 0x60967a */ if (fZ) goto L_0060967a;
L_00609673:; BB(0x00609673);
    /* 00609673: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00609675: jmp 0x60970c */ goto L_0060970c;
L_0060967a:; BB(0x0060967a);
    /* 0060967a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060967e: jl 0x609686 */ if ((fS!=fO)) goto L_00609686;
L_00609680:; BB(0x00609680);
    /* 00609680: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609684: jl 0x6096a5 */ if ((fS!=fO)) goto L_006096a5;
L_00609686:; BB(0x00609686);
    /* 00609686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00609688: jne 0x6096a1 */ if (!fZ) goto L_006096a1;
L_0060968a:; BB(0x0060968a);
    /* 0060968a: push 0x382 */ { u32 v = 0x382u; r_esp -= 4; W32(r_esp, v); }
    /* 0060968f: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609694: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609699: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60969eu); f_005e9f20();
    /* 0060969e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006096a1:; BB(0x006096a1);
    /* 006096a1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006096a3: jmp 0x60970c */ goto L_0060970c;
L_006096a5:; BB(0x006096a5);
    /* 006096a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006096a8: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006096ab: cmp dword ptr [edx + 0x796b40], 0 */ {  u32 a = R32((u32)(r_edx+0x796b40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006096b2: jne 0x6096b8 */ if (!fZ) goto L_006096b8;
L_006096b4:; BB(0x006096b4);
    /* 006096b4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006096b6: jmp 0x60970c */ goto L_0060970c;
L_006096b8:; BB(0x006096b8);
    /* 006096b8: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006096bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006096bc: push 0x1010 */ { u32 v = 0x1010u; r_esp -= 4; W32(r_esp, v); }
    /* 006096c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006096c4: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006096c7: mov edx, dword ptr [ecx + 0x796b3c] */ r_edx = R32((u32)(r_ecx+0x796b3cu));
    /* 006096cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006096ce: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x6096d3u); f_006841cc();
    /* 006096d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006096d6: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6096dbu); f_0068419c();
    /* 006096db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006096dd: je 0x6096fa */ if (fZ) goto L_006096fa;
L_006096df:; BB(0x006096df);
    /* 006096df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006096e1: jne 0x6096fa */ if (!fZ) goto L_006096fa;
L_006096e3:; BB(0x006096e3);
    /* 006096e3: push 0x38c */ { u32 v = 0x38cu; r_esp -= 4; W32(r_esp, v); }
    /* 006096e8: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006096ed: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006096f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6096f7u); f_005e9f20();
    /* 006096f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006096fa:; BB(0x006096fa);
    /* 006096fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006096fc: cmp dword ptr [ebp - 4], 0x1014 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1014u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609703: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00609706: jmp 0x60970c */ goto L_0060970c;
L_0060970a:; BB(0x0060970a);
    /* 0060970a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0060970c:; BB(0x0060970c);
    /* 0060970c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060970e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060970f: ret 4 */ FN_RET(0x00609650); r_esp += 8; return;
}

void f_00609720(void) /* VSoundManager::func_00609720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609720);
    /* 00609720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609721: mov ebp, esp */ r_ebp = r_esp;
    /* 00609723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00609727: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060972e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609730: jne 0x609866 */ if (!fZ) goto L_00609866;
L_00609736:; BB(0x00609736);
    /* 00609736: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609739: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060973d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060973f: je 0x609752 */ if (fZ) goto L_00609752;
L_00609741:; BB(0x00609741);
    /* 00609741: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00609743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609745: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609747: call dword ptr [0x6b2498] */ { u32 t = R32((u32)(0x6b2498u)); r_esp -= 4; W32(r_esp, 0x60974du); call_ind(t); }
    /* 0060974d: jmp 0x609866 */ goto L_00609866;
L_00609752:; BB(0x00609752);
    /* 00609752: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609756: jl 0x60975e */ if ((fS!=fO)) goto L_0060975e;
L_00609758:; BB(0x00609758);
    /* 00609758: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060975c: jl 0x60977e */ if ((fS!=fO)) goto L_0060977e;
L_0060975e:; BB(0x0060975e);
    /* 0060975e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00609760: jne 0x609779 */ if (!fZ) goto L_00609779;
L_00609762:; BB(0x00609762);
    /* 00609762: push 0x3a3 */ { u32 v = 0x3a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00609767: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060976c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609771: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609776u); f_005e9f20();
    /* 00609776: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609779:; BB(0x00609779);
    /* 00609779: jmp 0x609866 */ goto L_00609866;
L_0060977e:; BB(0x0060977e);
    /* 0060977e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609781: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609784: mov eax, dword ptr [edx + 0x796b3c] */ r_eax = R32((u32)(r_edx+0x796b3cu));
    /* 0060978a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060978b: call 0x6841d8 */ r_esp -= 4; W32(r_esp, 0x609790u); f_006841d8();
    /* 00609790: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609793: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609798u); f_0068419c();
    /* 00609798: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060979a: je 0x6097b7 */ if (fZ) goto L_006097b7;
L_0060979c:; BB(0x0060979c);
    /* 0060979c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060979e: jne 0x6097b7 */ if (!fZ) goto L_006097b7;
L_006097a0:; BB(0x006097a0);
    /* 006097a0: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006097a5: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006097aa: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006097af: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6097b4u); f_005e9f20();
    /* 006097b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006097b7:; BB(0x006097b7);
    /* 006097b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006097b9: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 006097be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006097c1: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006097c4: mov ecx, dword ptr [eax + 0x796b3c] */ r_ecx = R32((u32)(r_eax+0x796b3cu));
    /* 006097ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006097cb: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x6097d0u); f_006841ae();
    /* 006097d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006097d3: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x6097d8u); f_0068419c();
    /* 006097d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006097da: je 0x6097f7 */ if (fZ) goto L_006097f7;
L_006097dc:; BB(0x006097dc);
    /* 006097dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006097de: jne 0x6097f7 */ if (!fZ) goto L_006097f7;
L_006097e0:; BB(0x006097e0);
    /* 006097e0: push 0x3b0 */ { u32 v = 0x3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006097e5: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006097ea: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006097ef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6097f4u); f_005e9f20();
    /* 006097f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006097f7:; BB(0x006097f7);
    /* 006097f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006097fa: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006097fd: cmp dword ptr [ecx + 0x796b40], 0 */ {  u32 a = R32((u32)(r_ecx+0x796b40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609804: je 0x609829 */ if (fZ) goto L_00609829;
L_00609806:; BB(0x00609806);
    /* 00609806: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0060980a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060980c: je 0x609829 */ if (fZ) goto L_00609829;
L_0060980e:; BB(0x0060980e);
    /* 0060980e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609811: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609814: mov ecx, dword ptr [eax + 0x796b40] */ r_ecx = R32((u32)(r_eax+0x796b40u));
    /* 0060981a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060981b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00609821: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00609824: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x609829u); f_006041d0();
L_00609829:; BB(0x00609829);
    /* 00609829: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060982c: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060982f: mov dword ptr [eax + 0x796b40], 0 */ W32((u32)(r_eax+0x796b40u), 0x0u);
    /* 00609839: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060983c: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060983f: mov byte ptr [ecx + 0x796b44], 0 */ W8((u32)(r_ecx+0x796b44u), 0x0u);
    /* 00609846: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609849: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060984c: mov dword ptr [edx + 0x796b48], 5 */ W32((u32)(r_edx+0x796b48u), 0x5u);
    /* 00609856: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609859: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060985c: mov dword ptr [eax + 0x796b4c], 0 */ W32((u32)(r_eax+0x796b4cu), 0x0u);
L_00609866:; BB(0x00609866);
    /* 00609866: mov esp, ebp */ r_esp = r_ebp;
    /* 00609868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609869: ret 8 */ FN_RET(0x00609720); r_esp += 12; return;
}

void f_00609910(void) /* VSoundManager::func_00609910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609910);
    /* 00609910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609911: mov ebp, esp */ r_ebp = r_esp;
    /* 00609913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00609917: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060991e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609920: jne 0x60996c */ if (!fZ) goto L_0060996c;
L_00609922:; BB(0x00609922);
    /* 00609922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609925: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609929: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060992b: je 0x609931 */ if (fZ) goto L_00609931;
L_0060992d:; BB(0x0060992d);
    /* 0060992d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060992f: jmp 0x60996e */ goto L_0060996e;
L_00609931:; BB(0x00609931);
    /* 00609931: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609935: jl 0x60993d */ if ((fS!=fO)) goto L_0060993d;
L_00609937:; BB(0x00609937);
    /* 00609937: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060993b: jl 0x60995c */ if ((fS!=fO)) goto L_0060995c;
L_0060993d:; BB(0x0060993d);
    /* 0060993d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060993f: jne 0x609958 */ if (!fZ) goto L_00609958;
L_00609941:; BB(0x00609941);
    /* 00609941: push 0x3e4 */ { u32 v = 0x3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00609946: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060994b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609950: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609955u); f_005e9f20();
    /* 00609955: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609958:; BB(0x00609958);
    /* 00609958: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060995a: jmp 0x60996e */ goto L_0060996e;
L_0060995c:; BB(0x0060995c);
    /* 0060995c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060995f: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609962: mov al, byte ptr [edx + 0x796b44] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x796b44u))) & 0xffu);
    /* 00609968: jmp 0x60996e */ goto L_0060996e;
L_0060996c:; BB(0x0060996c);
    /* 0060996c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060996e:; BB(0x0060996e);
    /* 0060996e: mov esp, ebp */ r_esp = r_ebp;
    /* 00609970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609971: ret 4 */ FN_RET(0x00609910); r_esp += 8; return;
}

void f_00609980(void) /* VSoundManager::func_00609980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609980);
    /* 00609980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609981: mov ebp, esp */ r_ebp = r_esp;
    /* 00609983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00609987: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060998e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609990: jne 0x609a39 */ if (!fZ) goto L_00609a39;
L_00609996:; BB(0x00609996);
    /* 00609996: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609999: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060999d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060999f: je 0x6099a6 */ if (fZ) goto L_006099a6;
L_006099a1:; BB(0x006099a1);
    /* 006099a1: jmp 0x609a39 */ goto L_00609a39;
L_006099a6:; BB(0x006099a6);
    /* 006099a6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006099aa: jl 0x6099b2 */ if ((fS!=fO)) goto L_006099b2;
L_006099ac:; BB(0x006099ac);
    /* 006099ac: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006099b0: jl 0x6099cf */ if ((fS!=fO)) goto L_006099cf;
L_006099b2:; BB(0x006099b2);
    /* 006099b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006099b4: jne 0x6099cd */ if (!fZ) goto L_006099cd;
L_006099b6:; BB(0x006099b6);
    /* 006099b6: push 0x3f6 */ { u32 v = 0x3f6u; r_esp -= 4; W32(r_esp, v); }
    /* 006099bb: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006099c0: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006099c5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6099cau); f_005e9f20();
    /* 006099ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006099cd:; BB(0x006099cd);
    /* 006099cd: jmp 0x609a39 */ goto L_00609a39;
L_006099cf:; BB(0x006099cf);
    /* 006099cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006099d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006099d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006099d6: call 0x609b80 */ r_esp -= 4; W32(r_esp, 0x6099dbu); f_00609b80();
    /* 006099db: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006099de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006099e0: je 0x609a39 */ if (fZ) goto L_00609a39;
L_006099e2:; BB(0x006099e2);
    /* 006099e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006099e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006099e6: push 0x6d8008 */ { u32 v = 0x6d8008u; r_esp -= 4; W32(r_esp, v); }
    /* 006099eb: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6099f0u); f_0062fde0();
    /* 006099f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006099f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006099f6: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006099f9: mov eax, dword ptr [edx + 0x796b3c] */ r_eax = R32((u32)(r_edx+0x796b3cu));
    /* 006099ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609a00: call 0x6841f0 */ r_esp -= 4; W32(r_esp, 0x609a05u); f_006841f0();
    /* 00609a05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609a08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00609a0b: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609a0e: mov byte ptr [ecx + 0x796b44], 1 */ W8((u32)(r_ecx+0x796b44u), 0x1u);
    /* 00609a15: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609a1au); f_0068419c();
    /* 00609a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609a1c: je 0x609a39 */ if (fZ) goto L_00609a39;
L_00609a1e:; BB(0x00609a1e);
    /* 00609a1e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00609a20: jne 0x609a39 */ if (!fZ) goto L_00609a39;
L_00609a22:; BB(0x00609a22);
    /* 00609a22: push 0x3fe */ { u32 v = 0x3feu; r_esp -= 4; W32(r_esp, v); }
    /* 00609a27: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609a2c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609a31: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609a36u); f_005e9f20();
    /* 00609a36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609a39:; BB(0x00609a39);
    /* 00609a39: mov esp, ebp */ r_esp = r_ebp;
    /* 00609a3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609a3c: ret 4 */ FN_RET(0x00609980); r_esp += 8; return;
}

void f_00609a80(void) /* VSoundManager::func_00609a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609a80);
    /* 00609a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00609a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00609a87: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609a8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609a90: jne 0x609b39 */ if (!fZ) goto L_00609b39;
L_00609a96:; BB(0x00609a96);
    /* 00609a96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609a99: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609a9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609a9f: je 0x609aa6 */ if (fZ) goto L_00609aa6;
L_00609aa1:; BB(0x00609aa1);
    /* 00609aa1: jmp 0x609b39 */ goto L_00609b39;
L_00609aa6:; BB(0x00609aa6);
    /* 00609aa6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609aaa: jl 0x609ab2 */ if ((fS!=fO)) goto L_00609ab2;
L_00609aac:; BB(0x00609aac);
    /* 00609aac: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609ab0: jl 0x609acf */ if ((fS!=fO)) goto L_00609acf;
L_00609ab2:; BB(0x00609ab2);
    /* 00609ab2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00609ab4: jne 0x609acd */ if (!fZ) goto L_00609acd;
L_00609ab6:; BB(0x00609ab6);
    /* 00609ab6: push 0x413 */ { u32 v = 0x413u; r_esp -= 4; W32(r_esp, v); }
    /* 00609abb: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609ac0: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609ac5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609acau); f_005e9f20();
    /* 00609aca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609acd:; BB(0x00609acd);
    /* 00609acd: jmp 0x609b39 */ goto L_00609b39;
L_00609acf:; BB(0x00609acf);
    /* 00609acf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609ad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609ad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609ad6: call 0x609910 */ r_esp -= 4; W32(r_esp, 0x609adbu); f_00609910();
    /* 00609adb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00609ade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609ae0: je 0x609b39 */ if (fZ) goto L_00609b39;
L_00609ae2:; BB(0x00609ae2);
    /* 00609ae2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00609ae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609ae6: push 0x6d8028 */ { u32 v = 0x6d8028u; r_esp -= 4; W32(r_esp, v); }
    /* 00609aeb: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x609af0u); f_0062fde0();
    /* 00609af0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609af3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609af6: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609af9: mov eax, dword ptr [edx + 0x796b3c] */ r_eax = R32((u32)(r_edx+0x796b3cu));
    /* 00609aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609b00: call 0x6841de */ r_esp -= 4; W32(r_esp, 0x609b05u); f_006841de();
    /* 00609b05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609b08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00609b0b: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609b0e: mov byte ptr [ecx + 0x796b44], 0 */ W8((u32)(r_ecx+0x796b44u), 0x0u);
    /* 00609b15: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609b1au); f_0068419c();
    /* 00609b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609b1c: je 0x609b39 */ if (fZ) goto L_00609b39;
L_00609b1e:; BB(0x00609b1e);
    /* 00609b1e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00609b20: jne 0x609b39 */ if (!fZ) goto L_00609b39;
L_00609b22:; BB(0x00609b22);
    /* 00609b22: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 00609b27: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609b2c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609b31: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609b36u); f_005e9f20();
    /* 00609b36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609b39:; BB(0x00609b39);
    /* 00609b39: mov esp, ebp */ r_esp = r_ebp;
    /* 00609b3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609b3c: ret 4 */ FN_RET(0x00609a80); r_esp += 8; return;
}

void f_00609b80(void) /* VSoundManager::func_00609b80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609b80);
    /* 00609b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00609b83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609b86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609b89: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609b90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609b92: jne 0x609c3a */ if (!fZ) goto L_00609c3a;
L_00609b98:; BB(0x00609b98);
    /* 00609b98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609b9b: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609b9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609ba1: je 0x609baa */ if (fZ) goto L_00609baa;
L_00609ba3:; BB(0x00609ba3);
    /* 00609ba3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00609ba5: jmp 0x609c3c */ goto L_00609c3c;
L_00609baa:; BB(0x00609baa);
    /* 00609baa: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609bae: jl 0x609bb6 */ if ((fS!=fO)) goto L_00609bb6;
L_00609bb0:; BB(0x00609bb0);
    /* 00609bb0: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609bb4: jl 0x609bd5 */ if ((fS!=fO)) goto L_00609bd5;
L_00609bb6:; BB(0x00609bb6);
    /* 00609bb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00609bb8: jne 0x609bd1 */ if (!fZ) goto L_00609bd1;
L_00609bba:; BB(0x00609bba);
    /* 00609bba: push 0x430 */ { u32 v = 0x430u; r_esp -= 4; W32(r_esp, v); }
    /* 00609bbf: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609bc4: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609bc9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609bceu); f_005e9f20();
    /* 00609bce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609bd1:; BB(0x00609bd1);
    /* 00609bd1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00609bd3: jmp 0x609c3c */ goto L_00609c3c;
L_00609bd5:; BB(0x00609bd5);
    /* 00609bd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609bd8: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609bdb: cmp dword ptr [edx + 0x796b3c], 0 */ {  u32 a = R32((u32)(r_edx+0x796b3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609be2: jne 0x609be8 */ if (!fZ) goto L_00609be8;
L_00609be4:; BB(0x00609be4);
    /* 00609be4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00609be6: jmp 0x609c3c */ goto L_00609c3c;
L_00609be8:; BB(0x00609be8);
    /* 00609be8: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00609beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609bec: push 0x1010 */ { u32 v = 0x1010u; r_esp -= 4; W32(r_esp, v); }
    /* 00609bf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00609bf4: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609bf7: mov edx, dword ptr [ecx + 0x796b3c] */ r_edx = R32((u32)(r_ecx+0x796b3cu));
    /* 00609bfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609bfe: call 0x6841cc */ r_esp -= 4; W32(r_esp, 0x609c03u); f_006841cc();
    /* 00609c03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609c06: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609c0bu); f_0068419c();
    /* 00609c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609c0d: je 0x609c2a */ if (fZ) goto L_00609c2a;
L_00609c0f:; BB(0x00609c0f);
    /* 00609c0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00609c11: jne 0x609c2a */ if (!fZ) goto L_00609c2a;
L_00609c13:; BB(0x00609c13);
    /* 00609c13: push 0x439 */ { u32 v = 0x439u; r_esp -= 4; W32(r_esp, v); }
    /* 00609c18: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609c1d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609c22: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609c27u); f_005e9f20();
    /* 00609c27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609c2a:; BB(0x00609c2a);
    /* 00609c2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609c2c: cmp dword ptr [ebp - 4], 0x1012 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1012u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609c33: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00609c36: jmp 0x609c3c */ goto L_00609c3c;
L_00609c3a:; BB(0x00609c3a);
    /* 00609c3a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00609c3c:; BB(0x00609c3c);
    /* 00609c3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00609c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609c3f: ret 4 */ FN_RET(0x00609b80); r_esp += 8; return;
}

void f_00609e60(void) /* VSoundManager::func_00609e60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609e60);
    /* 00609e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00609e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609e69: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e72: jne 0x609ed9 */ if (!fZ) goto L_00609ed9;
L_00609e74:; BB(0x00609e74);
    /* 00609e74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609e77: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609e7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e7d: je 0x609e83 */ if (fZ) goto L_00609e83;
L_00609e7f:; BB(0x00609e7f);
    /* 00609e7f: fldz  */ FPUSH(0.0);
    /* 00609e81: jmp 0x609edb */ goto L_00609edb;
L_00609e83:; BB(0x00609e83);
    /* 00609e83: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609e87: jl 0x609e9e */ if ((fS!=fO)) goto L_00609e9e;
L_00609e89:; BB(0x00609e89);
    /* 00609e89: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609e8d: jge 0x609e9e */ if ((fS==fO)) goto L_00609e9e;
L_00609e8f:; BB(0x00609e8f);
    /* 00609e8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609e92: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609e95: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e9c: jne 0x609ebd */ if (!fZ) goto L_00609ebd;
L_00609e9e:; BB(0x00609e9e);
    /* 00609e9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00609ea0: jne 0x609eb9 */ if (!fZ) goto L_00609eb9;
L_00609ea2:; BB(0x00609ea2);
    /* 00609ea2: push 0x4a7 */ { u32 v = 0x4a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00609ea7: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609eac: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609eb1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609eb6u); f_005e9f20();
    /* 00609eb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609eb9:; BB(0x00609eb9);
    /* 00609eb9: fldz  */ FPUSH(0.0);
    /* 00609ebb: jmp 0x609edb */ goto L_00609edb;
L_00609ebd:; BB(0x00609ebd);
    /* 00609ebd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00609ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609ec1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00609ec4: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609ec7: mov ecx, dword ptr [ecx + 0x796d28] */ r_ecx = R32((u32)(r_ecx+0x796d28u));
    /* 00609ecd: call 0x62d830 */ r_esp -= 4; W32(r_esp, 0x609ed2u); f_0062d830();
    /* 00609ed2: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00609ed5: jmp 0x609edb */ goto L_00609edb;
L_00609ed9:; BB(0x00609ed9);
    /* 00609ed9: fldz  */ FPUSH(0.0);
L_00609edb:; BB(0x00609edb);
    /* 00609edb: mov esp, ebp */ r_esp = r_ebp;
    /* 00609edd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609ede: ret 4 */ FN_RET(0x00609e60); r_esp += 8; return;
}

void f_00609ef0(void) /* VSoundManager::func_00609ef0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609ef0);
    /* 00609ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00609ef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609ef6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00609ef9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609f02: jne 0x609f81 */ if (!fZ) goto L_00609f81;
L_00609f04:; BB(0x00609f04);
    /* 00609f04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609f07: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609f0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609f0d: je 0x609f11 */ if (fZ) goto L_00609f11;
L_00609f0f:; BB(0x00609f0f);
    /* 00609f0f: jmp 0x609f81 */ goto L_00609f81;
L_00609f11:; BB(0x00609f11);
    /* 00609f11: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609f15: jl 0x609f2c */ if ((fS!=fO)) goto L_00609f2c;
L_00609f17:; BB(0x00609f17);
    /* 00609f17: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609f1b: jge 0x609f2c */ if ((fS==fO)) goto L_00609f2c;
L_00609f1d:; BB(0x00609f1d);
    /* 00609f1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609f20: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609f23: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609f2a: jne 0x609f49 */ if (!fZ) goto L_00609f49;
L_00609f2c:; BB(0x00609f2c);
    /* 00609f2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00609f2e: jne 0x609f47 */ if (!fZ) goto L_00609f47;
L_00609f30:; BB(0x00609f30);
    /* 00609f30: push 0x4be */ { u32 v = 0x4beu; r_esp -= 4; W32(r_esp, v); }
    /* 00609f35: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609f3a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00609f3f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x609f44u); f_005e9f20();
    /* 00609f44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00609f47:; BB(0x00609f47);
    /* 00609f47: jmp 0x609f81 */ goto L_00609f81;
L_00609f49:; BB(0x00609f49);
    /* 00609f49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609f4c: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609f4f: movzx ecx, byte ptr [eax + 0x796d3c] */ r_ecx = (u32)R8((u32)(r_eax+0x796d3cu));
    /* 00609f56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609f58: je 0x609f69 */ if (fZ) goto L_00609f69;
L_00609f5a:; BB(0x00609f5a);
    /* 00609f5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609f5d: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609f60: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00609f63: fstp dword ptr [edx + 0x796d94] */ W_F32((u32)(r_edx+0x796d94u), ST(0)); FPOP();
L_00609f69:; BB(0x00609f69);
    /* 00609f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609f6a: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00609f6d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00609f70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609f73: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609f76: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 00609f7c: call 0x62d7e0 */ r_esp -= 4; W32(r_esp, 0x609f81u); f_0062d7e0();
L_00609f81:; BB(0x00609f81);
    /* 00609f81: mov esp, ebp */ r_esp = r_ebp;
    /* 00609f83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609f84: ret 8 */ FN_RET(0x00609ef0); r_esp += 12; return;
}

void f_0060a2b0(void) /* VSoundManager::func_0060a2b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a2b0);
    /* 0060a2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a2b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a2b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a2b9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a2c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a2c2: jne 0x60a326 */ if (!fZ) goto L_0060a326;
L_0060a2c4:; BB(0x0060a2c4);
    /* 0060a2c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a2c7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a2cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a2cd: je 0x60a2d3 */ if (fZ) goto L_0060a2d3;
L_0060a2cf:; BB(0x0060a2cf);
    /* 0060a2cf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060a2d1: jmp 0x60a328 */ goto L_0060a328;
L_0060a2d3:; BB(0x0060a2d3);
    /* 0060a2d3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a2d7: jl 0x60a2df */ if ((fS!=fO)) goto L_0060a2df;
L_0060a2d9:; BB(0x0060a2d9);
    /* 0060a2d9: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a2dd: jl 0x60a2fe */ if ((fS!=fO)) goto L_0060a2fe;
L_0060a2df:; BB(0x0060a2df);
    /* 0060a2df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060a2e1: jne 0x60a2fa */ if (!fZ) goto L_0060a2fa;
L_0060a2e3:; BB(0x0060a2e3);
    /* 0060a2e3: push 0x5f8 */ { u32 v = 0x5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2e8: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2ed: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a2f7u); f_005e9f20();
    /* 0060a2f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a2fa:; BB(0x0060a2fa);
    /* 0060a2fa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060a2fc: jmp 0x60a328 */ goto L_0060a328;
L_0060a2fe:; BB(0x0060a2fe);
    /* 0060a2fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a301: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a304: cmp dword ptr [edx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_edx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a30b: jne 0x60a311 */ if (!fZ) goto L_0060a311;
L_0060a30d:; BB(0x0060a30d);
    /* 0060a30d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060a30f: jmp 0x60a328 */ goto L_0060a328;
L_0060a311:; BB(0x0060a311);
    /* 0060a311: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a314: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a317: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060a31d: call 0x62d3f0 */ r_esp -= 4; W32(r_esp, 0x60a322u); f_0062d3f0();
    /* 0060a322: jmp 0x60a328 */ goto L_0060a328;
L_0060a326:; BB(0x0060a326);
    /* 0060a326: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0060a328:; BB(0x0060a328);
    /* 0060a328: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a32a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a32b: ret 4 */ FN_RET(0x0060a2b0); r_esp += 8; return;
}

void f_0060a330(void) /* VSoundManager::func_0060a330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a330);
    /* 0060a330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a331: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a333: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a336: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060a339: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a340: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a342: jne 0x60a476 */ if (!fZ) goto L_0060a476;
L_0060a348:; BB(0x0060a348);
    /* 0060a348: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a34b: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a34f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a351: je 0x60a358 */ if (fZ) goto L_0060a358;
L_0060a353:; BB(0x0060a353);
    /* 0060a353: jmp 0x60a476 */ goto L_0060a476;
L_0060a358:; BB(0x0060a358);
    /* 0060a358: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a35c: jl 0x60a373 */ if ((fS!=fO)) goto L_0060a373;
L_0060a35e:; BB(0x0060a35e);
    /* 0060a35e: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a362: jge 0x60a373 */ if ((fS==fO)) goto L_0060a373;
L_0060a364:; BB(0x0060a364);
    /* 0060a364: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a367: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a36a: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a371: jne 0x60a393 */ if (!fZ) goto L_0060a393;
L_0060a373:; BB(0x0060a373);
    /* 0060a373: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060a375: jne 0x60a38e */ if (!fZ) goto L_0060a38e;
L_0060a377:; BB(0x0060a377);
    /* 0060a377: push 0x60d */ { u32 v = 0x60du; r_esp -= 4; W32(r_esp, v); }
    /* 0060a37c: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a381: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a386: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a38bu); f_005e9f20();
    /* 0060a38b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a38e:; BB(0x0060a38e);
    /* 0060a38e: jmp 0x60a476 */ goto L_0060a476;
L_0060a393:; BB(0x0060a393);
    /* 0060a393: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a396: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a399: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060a39f: call 0x62d120 */ r_esp -= 4; W32(r_esp, 0x60a3a4u); f_0062d120();
    /* 0060a3a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060a3a7: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a3aa: mov edx, dword ptr [ecx + 0x796d28] */ r_edx = R32((u32)(r_ecx+0x796d28u));
    /* 0060a3b0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060a3b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a3b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060a3b9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a3bd: je 0x60a3e5 */ if (fZ) goto L_0060a3e5;
L_0060a3bf:; BB(0x0060a3bf);
    /* 0060a3bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a3c2: call 0x62d120 */ r_esp -= 4; W32(r_esp, 0x60a3c7u); f_0062d120();
    /* 0060a3c7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0060a3cc: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060a3cf: je 0x60a3dd */ if (fZ) goto L_0060a3dd;
L_0060a3d1:; BB(0x0060a3d1);
    /* 0060a3d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a3d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a3d5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x60a3dau); f_00686cae();
    /* 0060a3da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a3dd:; BB(0x0060a3dd);
    /* 0060a3dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a3e0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060a3e3: jmp 0x60a3ec */ goto L_0060a3ec;
L_0060a3e5:; BB(0x0060a3e5);
    /* 0060a3e5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0060a3ec:; BB(0x0060a3ec);
    /* 0060a3ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060a3ef: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a3f2: mov dword ptr [ecx + 0x796d28], 0 */ W32((u32)(r_ecx+0x796d28u), 0x0u);
    /* 0060a3fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a3ff: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a402: mov byte ptr [edx + 0x796d30], 0 */ W8((u32)(r_edx+0x796d30u), 0x0u);
    /* 0060a409: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a40c: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a40f: mov dword ptr [eax + 0x796d34], 0 */ W32((u32)(r_eax+0x796d34u), 0x0u);
    /* 0060a419: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060a41c: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a41f: mov dword ptr [ecx + 0x796d38], 0 */ W32((u32)(r_ecx+0x796d38u), 0x0u);
    /* 0060a429: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a42c: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a42f: mov byte ptr [edx + 0x796d3c], 0 */ W8((u32)(r_edx+0x796d3cu), 0x0u);
    /* 0060a436: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a439: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a43c: mov dword ptr [eax + 0x796d40], 0xffffffff */ W32((u32)(r_eax+0x796d40u), 0xffffffffu);
    /* 0060a446: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060a449: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a44c: mov dword ptr [ecx + 0x796d44], 0xffffffff */ W32((u32)(r_ecx+0x796d44u), 0xffffffffu);
    /* 0060a456: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a459: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a45c: fld1  */ FPUSH(1.0);
    /* 0060a45e: fstp dword ptr [edx + 0x796d94] */ W_F32((u32)(r_edx+0x796d94u), ST(0)); FPOP();
    /* 0060a464: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a467: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a46a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0060a470: fstp dword ptr [eax + 0x796d98] */ W_F32((u32)(r_eax+0x796d98u), ST(0)); FPOP();
L_0060a476:; BB(0x0060a476);
    /* 0060a476: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a479: ret 8 */ FN_RET(0x0060a330); r_esp += 12; return;
}

void f_0060a540(void) /* VSoundManager::func_0060a540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a540);
    /* 0060a540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a541: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a547: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a54e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a550: jne 0x60a5ab */ if (!fZ) goto L_0060a5ab;
L_0060a552:; BB(0x0060a552);
    /* 0060a552: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a555: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a559: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a55b: je 0x60a561 */ if (fZ) goto L_0060a561;
L_0060a55d:; BB(0x0060a55d);
    /* 0060a55d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a55f: jmp 0x60a5ad */ goto L_0060a5ad;
L_0060a561:; BB(0x0060a561);
    /* 0060a561: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a565: jl 0x60a57c */ if ((fS!=fO)) goto L_0060a57c;
L_0060a567:; BB(0x0060a567);
    /* 0060a567: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a56b: jge 0x60a57c */ if ((fS==fO)) goto L_0060a57c;
L_0060a56d:; BB(0x0060a56d);
    /* 0060a56d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a570: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a573: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a57a: jne 0x60a59b */ if (!fZ) goto L_0060a59b;
L_0060a57c:; BB(0x0060a57c);
    /* 0060a57c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060a57e: jne 0x60a597 */ if (!fZ) goto L_0060a597;
L_0060a580:; BB(0x0060a580);
    /* 0060a580: push 0x650 */ { u32 v = 0x650u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a585: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a58a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a58f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a594u); f_005e9f20();
    /* 0060a594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a597:; BB(0x0060a597);
    /* 0060a597: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a599: jmp 0x60a5ad */ goto L_0060a5ad;
L_0060a59b:; BB(0x0060a59b);
    /* 0060a59b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a59e: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a5a1: mov al, byte ptr [eax + 0x796d30] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x796d30u))) & 0xffu);
    /* 0060a5a7: jmp 0x60a5ad */ goto L_0060a5ad;
L_0060a5ab:; BB(0x0060a5ab);
    /* 0060a5ab: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060a5ad:; BB(0x0060a5ad);
    /* 0060a5ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a5af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a5b0: ret 4 */ FN_RET(0x0060a540); r_esp += 8; return;
}

void f_0060a5c0(void) /* VSoundManager::func_0060a5c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a5c0);
    /* 0060a5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a5c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a5c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a5c7: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a5d0: jne 0x60a64a */ if (!fZ) goto L_0060a64a;
L_0060a5d2:; BB(0x0060a5d2);
    /* 0060a5d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a5d5: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a5d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a5db: je 0x60a5df */ if (fZ) goto L_0060a5df;
L_0060a5dd:; BB(0x0060a5dd);
    /* 0060a5dd: jmp 0x60a64a */ goto L_0060a64a;
L_0060a5df:; BB(0x0060a5df);
    /* 0060a5df: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a5e3: jl 0x60a5fa */ if ((fS!=fO)) goto L_0060a5fa;
L_0060a5e5:; BB(0x0060a5e5);
    /* 0060a5e5: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a5e9: jge 0x60a5fa */ if ((fS==fO)) goto L_0060a5fa;
L_0060a5eb:; BB(0x0060a5eb);
    /* 0060a5eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a5ee: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a5f1: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a5f8: jne 0x60a617 */ if (!fZ) goto L_0060a617;
L_0060a5fa:; BB(0x0060a5fa);
    /* 0060a5fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060a5fc: jne 0x60a615 */ if (!fZ) goto L_0060a615;
L_0060a5fe:; BB(0x0060a5fe);
    /* 0060a5fe: push 0x662 */ { u32 v = 0x662u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a603: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a608: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a60d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a612u); f_005e9f20();
    /* 0060a612: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a615:; BB(0x0060a615);
    /* 0060a615: jmp 0x60a64a */ goto L_0060a64a;
L_0060a617:; BB(0x0060a617);
    /* 0060a617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a61a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a61b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a61e: call 0x60a870 */ r_esp -= 4; W32(r_esp, 0x60a623u); f_0060a870();
    /* 0060a623: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060a626: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a628: je 0x60a64a */ if (fZ) goto L_0060a64a;
L_0060a62a:; BB(0x0060a62a);
    /* 0060a62a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a62c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a62f: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a632: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060a638: call 0x62d890 */ r_esp -= 4; W32(r_esp, 0x60a63du); f_0062d890();
    /* 0060a63d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a640: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a643: mov byte ptr [eax + 0x796d30], 1 */ W8((u32)(r_eax+0x796d30u), 0x1u);
L_0060a64a:; BB(0x0060a64a);
    /* 0060a64a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a64c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a64d: ret 4 */ FN_RET(0x0060a5c0); r_esp += 8; return;
}

void f_0060a720(void) /* VSoundManager::func_0060a720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a720);
    /* 0060a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a727: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a72e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a730: jne 0x60a7aa */ if (!fZ) goto L_0060a7aa;
L_0060a732:; BB(0x0060a732);
    /* 0060a732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a735: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a739: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a73b: je 0x60a73f */ if (fZ) goto L_0060a73f;
L_0060a73d:; BB(0x0060a73d);
    /* 0060a73d: jmp 0x60a7aa */ goto L_0060a7aa;
L_0060a73f:; BB(0x0060a73f);
    /* 0060a73f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a743: jl 0x60a75a */ if ((fS!=fO)) goto L_0060a75a;
L_0060a745:; BB(0x0060a745);
    /* 0060a745: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a749: jge 0x60a75a */ if ((fS==fO)) goto L_0060a75a;
L_0060a74b:; BB(0x0060a74b);
    /* 0060a74b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a74e: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a751: cmp dword ptr [eax + 0x796d28], 0 */ {  u32 a = R32((u32)(r_eax+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a758: jne 0x60a777 */ if (!fZ) goto L_0060a777;
L_0060a75a:; BB(0x0060a75a);
    /* 0060a75a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060a75c: jne 0x60a775 */ if (!fZ) goto L_0060a775;
L_0060a75e:; BB(0x0060a75e);
    /* 0060a75e: push 0x69b */ { u32 v = 0x69bu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a763: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a768: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a76d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a772u); f_005e9f20();
    /* 0060a772: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a775:; BB(0x0060a775);
    /* 0060a775: jmp 0x60a7aa */ goto L_0060a7aa;
L_0060a777:; BB(0x0060a777);
    /* 0060a777: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a77a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a77b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a77e: call 0x60a540 */ r_esp -= 4; W32(r_esp, 0x60a783u); f_0060a540();
    /* 0060a783: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060a786: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a788: je 0x60a7aa */ if (fZ) goto L_0060a7aa;
L_0060a78a:; BB(0x0060a78a);
    /* 0060a78a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a78c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a78f: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a792: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060a798: call 0x62d890 */ r_esp -= 4; W32(r_esp, 0x60a79du); f_0062d890();
    /* 0060a79d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a7a0: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a7a3: mov byte ptr [eax + 0x796d30], 0 */ W8((u32)(r_eax+0x796d30u), 0x0u);
L_0060a7aa:; BB(0x0060a7aa);
    /* 0060a7aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a7ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a7ad: ret 4 */ FN_RET(0x0060a720); r_esp += 8; return;
}

void f_0060a870(void) /* VSoundManager::func_0060a870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a870);
    /* 0060a870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a871: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a877: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a87e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a880: jne 0x60a8e4 */ if (!fZ) goto L_0060a8e4;
L_0060a882:; BB(0x0060a882);
    /* 0060a882: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a885: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a889: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a88b: je 0x60a891 */ if (fZ) goto L_0060a891;
L_0060a88d:; BB(0x0060a88d);
    /* 0060a88d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a88f: jmp 0x60a8e6 */ goto L_0060a8e6;
L_0060a891:; BB(0x0060a891);
    /* 0060a891: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a895: jl 0x60a89d */ if ((fS!=fO)) goto L_0060a89d;
L_0060a897:; BB(0x0060a897);
    /* 0060a897: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a89b: jl 0x60a8bc */ if ((fS!=fO)) goto L_0060a8bc;
L_0060a89d:; BB(0x0060a89d);
    /* 0060a89d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060a89f: jne 0x60a8b8 */ if (!fZ) goto L_0060a8b8;
L_0060a8a1:; BB(0x0060a8a1);
    /* 0060a8a1: push 0x6d1 */ { u32 v = 0x6d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8a6: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8ab: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8b0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60a8b5u); f_005e9f20();
    /* 0060a8b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060a8b8:; BB(0x0060a8b8);
    /* 0060a8b8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a8ba: jmp 0x60a8e6 */ goto L_0060a8e6;
L_0060a8bc:; BB(0x0060a8bc);
    /* 0060a8bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060a8bf: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a8c2: cmp dword ptr [edx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_edx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a8c9: jne 0x60a8cf */ if (!fZ) goto L_0060a8cf;
L_0060a8cb:; BB(0x0060a8cb);
    /* 0060a8cb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a8cd: jmp 0x60a8e6 */ goto L_0060a8e6;
L_0060a8cf:; BB(0x0060a8cf);
    /* 0060a8cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a8d2: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a8d5: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060a8db: call 0x62d3b0 */ r_esp -= 4; W32(r_esp, 0x60a8e0u); f_0062d3b0();
    /* 0060a8e0: jmp 0x60a8e6 */ goto L_0060a8e6;
L_0060a8e4:; BB(0x0060a8e4);
    /* 0060a8e4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060a8e6:; BB(0x0060a8e6);
    /* 0060a8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a8e9: ret 4 */ FN_RET(0x0060a870); r_esp += 8; return;
}

void f_0060acf0(void) /* VSoundManager::func_0060acf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060acf0);
    /* 0060acf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060acf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060acf3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060acf6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060acf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060acfc: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 0060ad00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad02: je 0x60ad0f */ if (fZ) goto L_0060ad0f;
L_0060ad04:; BB(0x0060ad04);
    /* 0060ad04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ad07: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 0060ad0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad0d: jne 0x60ad14 */ if (!fZ) goto L_0060ad14;
L_0060ad0f:; BB(0x0060ad0f);
    /* 0060ad0f: jmp 0x60af47 */ goto L_0060af47;
L_0060ad14:; BB(0x0060ad14);
    /* 0060ad14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ad1b: jmp 0x60ad26 */ goto L_0060ad26;
L_0060ad1d:; BB(0x0060ad1d);
    /* 0060ad1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad20: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ad23: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0060ad26:; BB(0x0060ad26);
    /* 0060ad26: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ad2a: jge 0x60af47 */ if ((fS==fO)) goto L_0060af47;
L_0060ad30:; BB(0x0060ad30);
    /* 0060ad30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad33: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ad36: cmp dword ptr [edx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_edx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad3d: je 0x60ad78 */ if (fZ) goto L_0060ad78;
L_0060ad3f:; BB(0x0060ad3f);
    /* 0060ad3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad42: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ad45: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060ad4b: call 0x62d470 */ r_esp -= 4; W32(r_esp, 0x60ad50u); f_0062d470();
    /* 0060ad50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad54: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ad57: call 0x60a870 */ r_esp -= 4; W32(r_esp, 0x60ad5cu); f_0060a870();
    /* 0060ad5c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060ad5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad61: jne 0x60ad76 */ if (!fZ) goto L_0060ad76;
L_0060ad63:; BB(0x0060ad63);
    /* 0060ad63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad67: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ad6a: call 0x60a540 */ r_esp -= 4; W32(r_esp, 0x60ad6fu); f_0060a540();
    /* 0060ad6f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060ad72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad74: je 0x60ad78 */ if (fZ) goto L_0060ad78;
L_0060ad76:; BB(0x0060ad76);
    /* 0060ad76: jmp 0x60ad1d */ goto L_0060ad1d;
L_0060ad78:; BB(0x0060ad78);
    /* 0060ad78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad7b: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ad7e: movzx eax, byte ptr [edx + 0x796d3c] */ r_eax = (u32)R8((u32)(r_edx+0x796d3cu));
    /* 0060ad85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad87: je 0x60af42 */ if (fZ) goto L_0060af42;
L_0060ad8d:; BB(0x0060ad8d);
    /* 0060ad8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad90: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ad93: cmp dword ptr [ecx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_ecx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ad9a: je 0x60ae05 */ if (fZ) goto L_0060ae05;
L_0060ad9c:; BB(0x0060ad9c);
    /* 0060ad9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ad9f: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ada2: mov ecx, dword ptr [edx + 0x796d28] */ r_ecx = R32((u32)(r_edx+0x796d28u));
    /* 0060ada8: call 0x62d120 */ r_esp -= 4; W32(r_esp, 0x60adadu); f_0062d120();
    /* 0060adad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060adb0: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060adb3: mov ecx, dword ptr [eax + 0x796d28] */ r_ecx = R32((u32)(r_eax+0x796d28u));
    /* 0060adb9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060adbc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060adbf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060adc2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060adc6: je 0x60adee */ if (fZ) goto L_0060adee;
L_0060adc8:; BB(0x0060adc8);
    /* 0060adc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060adcb: call 0x62d120 */ r_esp -= 4; W32(r_esp, 0x60add0u); f_0062d120();
    /* 0060add0: mov eax, 1 */ r_eax = 0x1u;
    /* 0060add5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0060add8: je 0x60ade6 */ if (fZ) goto L_0060ade6;
L_0060adda:; BB(0x0060adda);
    /* 0060adda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060addd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060adde: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x60ade3u); f_00686cae();
    /* 0060ade3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060ade6:; BB(0x0060ade6);
    /* 0060ade6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ade9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0060adec: jmp 0x60adf5 */ goto L_0060adf5;
L_0060adee:; BB(0x0060adee);
    /* 0060adee: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0060adf5:; BB(0x0060adf5);
    /* 0060adf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060adf8: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060adfb: mov dword ptr [eax + 0x796d28], 0 */ W32((u32)(r_eax+0x796d28u), 0x0u);
L_0060ae05:; BB(0x0060ae05);
    /* 0060ae05: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0060ae0c: jmp 0x60ae17 */ goto L_0060ae17;
L_0060ae0e:; BB(0x0060ae0e);
    /* 0060ae0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ae11: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ae14: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0060ae17:; BB(0x0060ae17);
    /* 0060ae17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae1a: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ae1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ae20: cmp dword ptr [edx + eax*4 + 0x796d44], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x796d44u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ae28: je 0x60ae2c */ if (fZ) goto L_0060ae2c;
L_0060ae2a:; BB(0x0060ae2a);
    /* 0060ae2a: jmp 0x60ae0e */ goto L_0060ae0e;
L_0060ae2c:; BB(0x0060ae2c);
    /* 0060ae2c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ae30: jne 0x60ae52 */ if (!fZ) goto L_0060ae52;
L_0060ae32:; BB(0x0060ae32);
    /* 0060ae32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060ae34: jne 0x60ae4d */ if (!fZ) goto L_0060ae4d;
L_0060ae36:; BB(0x0060ae36);
    /* 0060ae36: push 0x795 */ { u32 v = 0x795u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae3b: push 0x6d7e6c */ { u32 v = 0x6d7e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae40: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae45: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60ae4au); f_005e9f20();
    /* 0060ae4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060ae4d:; BB(0x0060ae4d);
    /* 0060ae4d: jmp 0x60ad1d */ goto L_0060ad1d;
L_0060ae52:; BB(0x0060ae52);
    /* 0060ae52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae55: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ae58: cmp dword ptr [eax + 0x796d40], -1 */ {  u32 a = R32((u32)(r_eax+0x796d40u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ae5f: je 0x60ae72 */ if (fZ) goto L_0060ae72;
L_0060ae61:; BB(0x0060ae61);
    /* 0060ae61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae64: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ae67: mov edx, dword ptr [ecx + 0x796d40] */ r_edx = R32((u32)(r_ecx+0x796d40u));
    /* 0060ae6d: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ae70: jl 0x60ae90 */ if ((fS!=fO)) goto L_0060ae90;
L_0060ae72:; BB(0x0060ae72);
    /* 0060ae72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ae7b: call 0x60ab30 */ r_esp -= 4; W32(r_esp, 0x60ae80u); f_0060ab30();
    /* 0060ae80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae83: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ae86: mov dword ptr [ecx + 0x796d40], 0xffffffff */ W32((u32)(r_ecx+0x796d40u), 0xffffffffu);
L_0060ae90:; BB(0x0060ae90);
    /* 0060ae90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ae93: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ae96: mov eax, dword ptr [edx + 0x796d40] */ r_eax = R32((u32)(r_edx+0x796d40u));
    /* 0060ae9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060ae9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aea2: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aea5: mov dword ptr [ecx + 0x796d40], eax */ W32((u32)(r_ecx+0x796d40u), r_eax);
    /* 0060aeab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aeae: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aeb1: mov eax, dword ptr [edx + 0x796d40] */ r_eax = R32((u32)(r_edx+0x796d40u));
    /* 0060aeb7: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060aeba: jl 0x60aec1 */ if ((fS!=fO)) goto L_0060aec1;
L_0060aebc:; BB(0x0060aebc);
    /* 0060aebc: jmp 0x60af47 */ goto L_0060af47;
L_0060aec1:; BB(0x0060aec1);
    /* 0060aec1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aec4: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aec7: fld dword ptr [ecx + 0x796d94] */ FPUSH(R_F32((u32)(r_ecx+0x796d94u)));
    /* 0060aecd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060aed0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0060aed3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aed6: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aed9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aedc: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aedf: mov ecx, dword ptr [eax + 0x796d40] */ r_ecx = R32((u32)(r_eax+0x796d40u));
    /* 0060aee5: mov edx, dword ptr [edx + ecx*4 + 0x796d44] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x796d44u));
    /* 0060aeec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060aeed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aef0: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aef3: mov ecx, dword ptr [eax + 0x796d40] */ r_ecx = R32((u32)(r_eax+0x796d40u));
    /* 0060aef9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060aefa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aefd: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060af00: mov eax, dword ptr [edx + 0x796d38] */ r_eax = R32((u32)(r_edx+0x796d38u));
    /* 0060af06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060af07: push 0x6d80a0 */ { u32 v = 0x6d80a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060af0c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60af11u); f_0062fde0();
    /* 0060af11: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060af14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060af17: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060af1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060af1b: fld dword ptr [ecx + 0x796d98] */ FPUSH(R_F32((u32)(r_ecx+0x796d98u)));
    /* 0060af21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060af24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060af27: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060af2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060af2b: fld dword ptr [edx + 0x796d94] */ FPUSH(R_F32((u32)(r_edx+0x796d94u)));
    /* 0060af31: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060af34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060af36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060af39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060af3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060af3d: call 0x60b0b0 */ r_esp -= 4; W32(r_esp, 0x60af42u); f_0060b0b0();
L_0060af42:; BB(0x0060af42);
    /* 0060af42: jmp 0x60ad1d */ goto L_0060ad1d;
L_0060af47:; BB(0x0060af47);
    /* 0060af47: mov esp, ebp */ r_esp = r_ebp;
    /* 0060af49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060af4a: ret  */ FN_RET(0x0060acf0); r_esp += 4; return;
}

