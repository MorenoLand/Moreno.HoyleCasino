#include "protos.h"

void f_00440020(void) /* sub_440020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440020);
    /* 00440020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440021: mov ebp, esp */ r_ebp = r_esp;
    /* 00440023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00440027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044002a: call 0x4404d0 */ r_esp -= 4; W32(r_esp, 0x44002fu); f_004404d0();
    /* 0044002f: push 0x1d4ca */ { u32 v = 0x1d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00440034: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 0044003a: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x44003fu); f_005f1ad0();
    /* 0044003f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440042: call 0x440700 */ r_esp -= 4; W32(r_esp, 0x440047u); f_00440700();
    /* 00440047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044004a: call 0x4412f0 */ r_esp -= 4; W32(r_esp, 0x44004fu); f_004412f0();
    /* 0044004f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440052: call 0x440070 */ r_esp -= 4; W32(r_esp, 0x440057u); f_00440070();
    /* 00440057: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044005a: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x44005fu); f_00440260();
    /* 0044005f: mov esp, ebp */ r_esp = r_ebp;
    /* 00440061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440062: ret  */ FN_RET(0x00440020); r_esp += 4; return;
}

void f_00440065(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440065);
    /* 00440065: int3  */ UNSUP(0x00440065, "int3");
}

void f_00440070(void) /* sub_440070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440070);
    /* 00440070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440071: mov ebp, esp */ r_ebp = r_esp;
    /* 00440073: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440076: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044007b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044007d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00440080: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00440083: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0044008a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00440091: jmp 0x44009c */ goto L_0044009c;
L_00440093:; BB(0x00440093);
    /* 00440093: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440096: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440099: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0044009c:; BB(0x0044009c);
    /* 0044009c: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004400a0: jge 0x4401f2 */ if ((fS==fO)) goto L_004401f2;
L_004400a6:; BB(0x004400a6);
    /* 004400a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004400ad: jmp 0x4400b8 */ goto L_004400b8;
L_004400af:; BB(0x004400af);
    /* 004400af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004400b2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004400b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004400b8:; BB(0x004400b8);
    /* 004400b8: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004400bc: jge 0x4401ed */ if ((fS==fO)) goto L_004401ed;
L_004400c2:; BB(0x004400c2);
    /* 004400c2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004400c5: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004400c8: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 004400cd: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 004400d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004400d4: mov eax, dword ptr [ecx + edx*8 + 0x50] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x50u));
    /* 004400d8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004400db: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004400de: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004400e1: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 004400e7: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004400eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004400ee: mov edx, dword ptr [eax + ecx*8 + 0x4c] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4cu));
    /* 004400f2: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004400f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004400f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004400f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004400fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004400fd: push 0x6b831c */ { u32 v = 0x6b831cu; r_esp -= 4; W32(r_esp, v); }
    /* 00440102: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00440105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440106: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x44010cu); call_ind(t); }
    /* 0044010c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044010f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440112: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440115: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044011b: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0044011f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440122: mov ecx, dword ptr [edx + eax*8 + 0x50] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x50u));
    /* 00440126: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00440129: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044012b: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044012f: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00440132: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00440135: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00440138: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044013b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044013e: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440141: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440144: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440147: cmp dword ptr [ecx + eax*4 + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044014c: je 0x4401e8 */ if (fZ) goto L_004401e8;
L_00440152:; BB(0x00440152);
    /* 00440152: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00440155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440159: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044015c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044015f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440162: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 00440166: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440169: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044016c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044016f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440172: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 00440176: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440178: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044017e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440180u); call_ind(t); }
    /* 00440180: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440183: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440186: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440189: mov edx, dword ptr [ecx*8 + 0x713818] */ r_edx = R32((u32)(r_ecx*8+0x713818u));
    /* 00440190: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00440193: lea ecx, [edx + eax - 0x11] */ r_ecx = (u32)(r_edx+r_eax+0xffffffefu);
    /* 00440197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440198: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044019b: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044019e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004401a1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004401a4: mov ecx, dword ptr [eax + edx*4 + 0x34] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x34u));
    /* 004401a8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004401ab: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004401ae: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004401b1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004401b4: mov edx, dword ptr [eax + edx*4 + 0x34] */ r_edx = R32((u32)(r_eax+r_edx*4+0x34u));
    /* 004401b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004401ba: mov ecx, edx */ r_ecx = r_edx;
    /* 004401bc: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004401bf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4401c1u); call_ind(t); }
    /* 004401c1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004401c4: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004401c7: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004401ca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004401cd: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 004401d1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004401d4: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004401d7: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004401da: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004401dd: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 004401e1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004401e3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004401e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4401e8u); call_ind(t); }
L_004401e8:; BB(0x004401e8);
    /* 004401e8: jmp 0x4400af */ goto L_004400af;
L_004401ed:; BB(0x004401ed);
    /* 004401ed: jmp 0x440093 */ goto L_00440093;
L_004401f2:; BB(0x004401f2);
    /* 004401f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004401f5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004401f7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4401fcu); f_00686d72();
    /* 004401fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004401fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004401ff: ret  */ FN_RET(0x00440070); r_esp += 4; return;
}

void f_00440200(void) /* sub_440200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440200);
    /* 00440200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440201: mov ebp, esp */ r_ebp = r_esp;
    /* 00440203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440206: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00440209: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440210: jmp 0x44021b */ goto L_0044021b;
L_00440212:; BB(0x00440212);
    /* 00440212: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440215: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440218: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044021b:; BB(0x0044021b);
    /* 0044021b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044021f: jge 0x440256 */ if ((fS==fO)) goto L_00440256;
L_00440221:; BB(0x00440221);
    /* 00440221: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440224: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440227: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440228: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044022e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00440231: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x440236u); f_005fb810();
    /* 00440236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440238: je 0x440254 */ if (fZ) goto L_00440254;
L_0044023a:; BB(0x0044023a);
    /* 0044023a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044023f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440242: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440246: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044024c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044024f: call 0x5fb8f0 */ r_esp -= 4; W32(r_esp, 0x440254u); f_005fb8f0();
L_00440254:; BB(0x00440254);
    /* 00440254: jmp 0x440212 */ goto L_00440212;
L_00440256:; BB(0x00440256);
    /* 00440256: mov esp, ebp */ r_esp = r_ebp;
    /* 00440258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440259: ret  */ FN_RET(0x00440200); r_esp += 4; return;
}

void f_00440260(void) /* sub_440260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440260);
    /* 00440260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440261: mov ebp, esp */ r_ebp = r_esp;
    /* 00440263: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440266: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044026b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044026d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00440270: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00440273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440275: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044027b: call 0x445a90 */ r_esp -= 4; W32(r_esp, 0x440280u); f_00445a90();
    /* 00440280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440281: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x440286u); f_0064c8a0();
    /* 00440286: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440289: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044028c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044028f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440292: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00440295: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440298: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044029b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044029d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044029f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004402a1: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004402a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004402a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004402a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004402a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004402ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004402ad: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4402b2u); f_0064c8d0();
    /* 004402b2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004402b5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004402b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004402b9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004402bc: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 004402c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004402c5: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 004402cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004402cd: mov ecx, eax */ r_ecx = r_eax;
    /* 004402cf: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004402d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4402d7u); call_ind(t); }
    /* 004402d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004402de: jmp 0x4402e9 */ goto L_004402e9;
L_004402e0:; BB(0x004402e0);
    /* 004402e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004402e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004402e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004402e9:; BB(0x004402e9);
    /* 004402e9: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004402ed: jge 0x4402fd */ if ((fS==fO)) goto L_004402fd;
L_004402ef:; BB(0x004402ef);
    /* 004402ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004402f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004402f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004402f6: call 0x43fc80 */ r_esp -= 4; W32(r_esp, 0x4402fbu); f_0043fc80();
    /* 004402fb: jmp 0x4402e0 */ goto L_004402e0;
L_004402fd:; BB(0x004402fd);
    /* 004402fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440300: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440302: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x440307u); f_00686d72();
    /* 00440307: mov esp, ebp */ r_esp = r_ebp;
    /* 00440309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044030a: ret  */ FN_RET(0x00440260); r_esp += 4; return;
}

void f_00440310(void) /* sub_440310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440310);
    /* 00440310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440311: mov ebp, esp */ r_ebp = r_esp;
    /* 00440313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440315: push 0x69e8fa */ { u32 v = 0x69e8fau; r_esp -= 4; W32(r_esp, v); }
    /* 0044031a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00440320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440321: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440324: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00440329: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044032b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044032c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044032f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00440335: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00440338: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 0044033c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00440343: jmp 0x44034e */ goto L_0044034e;
L_00440345:; BB(0x00440345);
    /* 00440345: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00440348: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044034b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0044034e:; BB(0x0044034e);
    /* 0044034e: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440352: jge 0x4403dc */ if ((fS==fO)) goto L_004403dc;
L_00440358:; BB(0x00440358);
    /* 00440358: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044035d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00440360: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440364: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044036a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044036d: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x440372u); f_005fb8b0();
    /* 00440372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440373: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x440378u); f_00686ec0();
    /* 00440378: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044037b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044037d: je 0x4403d7 */ if (fZ) goto L_004403d7;
L_0044037f:; BB(0x0044037f);
    /* 0044037f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00440386: jmp 0x440391 */ goto L_00440391;
L_00440388:; BB(0x00440388);
    /* 00440388: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044038b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044038e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00440391:; BB(0x00440391);
    /* 00440391: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440395: jge 0x4403c5 */ if ((fS==fO)) goto L_004403c5;
L_00440397:; BB(0x00440397);
    /* 00440397: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044039a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044039b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004403a1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004403a4: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x4403a9u); f_005fb3a0();
    /* 004403a9: mov ecx, eax */ r_ecx = r_eax;
    /* 004403ab: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x4403b0u); f_00606570();
    /* 004403b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004403b3: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004403b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004403b9: lea ecx, [ecx + edx + 5] */ r_ecx = (u32)(r_ecx+r_edx+0x5u);
    /* 004403bd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403bf: jne 0x4403c3 */ if (!fZ) goto L_004403c3;
L_004403c1:; BB(0x004403c1);
    /* 004403c1: jmp 0x4403c5 */ goto L_004403c5;
L_004403c3:; BB(0x004403c3);
    /* 004403c3: jmp 0x440388 */ goto L_00440388;
L_004403c5:; BB(0x004403c5);
    /* 004403c5: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403c9: jne 0x4403d7 */ if (!fZ) goto L_004403d7;
L_004403cb:; BB(0x004403cb);
    /* 004403cb: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004403cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403d1: jne 0x4403d7 */ if (!fZ) goto L_004403d7;
L_004403d3:; BB(0x004403d3);
    /* 004403d3: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_004403d7:; BB(0x004403d7);
    /* 004403d7: jmp 0x440345 */ goto L_00440345;
L_004403dc:; BB(0x004403dc);
    /* 004403dc: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004403e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403e2: je 0x44044f */ if (fZ) goto L_0044044f;
L_004403e4:; BB(0x004403e4);
    /* 004403e4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004403e7: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004403ed: cmp dword ptr [edx + 0x180], 0 */ {  u32 a = R32((u32)(r_edx+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403f4: jne 0x44044d */ if (!fZ) goto L_0044044d;
L_004403f6:; BB(0x004403f6);
    /* 004403f6: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004403f8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4403fdu); f_00686d82();
    /* 004403fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440400: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00440403: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044040a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044040e: je 0x440427 */ if (fZ) goto L_00440427;
L_00440410:; BB(0x00440410);
    /* 00440410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440414: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440416: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044041a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044041d: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x440422u); f_00601110();
    /* 00440422: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00440425: jmp 0x44042e */ goto L_0044042e;
L_00440427:; BB(0x00440427);
    /* 00440427: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0044042e:; BB(0x0044042e);
    /* 0044042e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00440431: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00440434: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044043b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044043e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044043f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440442: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 00440448: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x44044du); f_005f5d50();
L_0044044d:; BB(0x0044044d);
    /* 0044044d: jmp 0x440478 */ goto L_00440478;
L_0044044f:; BB(0x0044044f);
    /* 0044044f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440451: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440454: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0044045a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x44045fu); f_005f5d50();
    /* 0044045f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440462: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 00440468: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044046b: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00440471: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440473: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00440476: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440478u); call_ind(t); }
L_00440478:; BB(0x00440478);
    /* 00440478: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044047b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440482: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440483: mov esp, ebp */ r_esp = r_ebp;
    /* 00440485: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440486: ret  */ FN_RET(0x00440310); r_esp += 4; return;
}

void f_00440490(void) /* sub_440490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440490);
    /* 00440490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440491: mov ebp, esp */ r_ebp = r_esp;
    /* 00440493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00440499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004404a0: jmp 0x4404ab */ goto L_004404ab;
L_004404a2:; BB(0x004404a2);
    /* 004404a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004404a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004404a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004404ab:; BB(0x004404ab);
    /* 004404ab: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004404af: jge 0x4404bf */ if ((fS==fO)) goto L_004404bf;
L_004404b1:; BB(0x004404b1);
    /* 004404b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004404b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004404b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004404b8: call 0x43fc80 */ r_esp -= 4; W32(r_esp, 0x4404bdu); f_0043fc80();
    /* 004404bd: jmp 0x4404a2 */ goto L_004404a2;
L_004404bf:; BB(0x004404bf);
    /* 004404bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004404c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004404c2: ret  */ FN_RET(0x00440490); r_esp += 4; return;
}

void f_004404d0(void) /* sub_4404D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004404d0);
    /* 004404d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004404d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004404d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004404d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004404d9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004404db: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004404e0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004404e3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4404e8u); f_005fb300();
    /* 004404e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004404ea: je 0x44050c */ if (fZ) goto L_0044050c;
L_004404ec:; BB(0x004404ec);
    /* 004404ec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004404ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004404f4: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004404f7: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4404fcu); f_005fb300();
    /* 004404fc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004404ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440502: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440504: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440507: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0044050a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44050cu); call_ind(t); }
L_0044050c:; BB(0x0044050c);
    /* 0044050c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044050e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00440513: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00440516: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x44051bu); f_005fb300();
    /* 0044051b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044051d: je 0x44053f */ if (fZ) goto L_0044053f;
L_0044051f:; BB(0x0044051f);
    /* 0044051f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440521: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00440527: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044052a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x44052fu); f_005fb300();
    /* 0044052f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00440532: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00440535: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440537: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044053a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0044053d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44053fu); call_ind(t); }
L_0044053f:; BB(0x0044053f);
    /* 0044053f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440542: cmp dword ptr [eax + 0x110], 0 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440549: je 0x440574 */ if (fZ) goto L_00440574;
L_0044054b:; BB(0x0044054b);
    /* 0044054b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044054d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440550: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 00440556: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x44055bu); f_005f5d50();
    /* 0044055b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044055e: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 00440564: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440567: mov ecx, dword ptr [ecx + 0x110] */ r_ecx = R32((u32)(r_ecx+0x110u));
    /* 0044056d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044056f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00440572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440574u); call_ind(t); }
L_00440574:; BB(0x00440574);
    /* 00440574: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044057b: jmp 0x440586 */ goto L_00440586;
L_0044057d:; BB(0x0044057d);
    /* 0044057d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440580: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440583: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00440586:; BB(0x00440586);
    /* 00440586: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044058a: jge 0x4405bf */ if ((fS==fO)) goto L_004405bf;
L_0044058c:; BB(0x0044058c);
    /* 0044058c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044058f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440592: cmp dword ptr [eax + edx*4 + 0x104], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044059a: je 0x4405bd */ if (fZ) goto L_004405bd;
L_0044059c:; BB(0x0044059c);
    /* 0044059c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044059f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004405a2: mov eax, dword ptr [edx + ecx*4 + 0x104] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x104u));
    /* 004405a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004405ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004405af: mov ecx, dword ptr [edx + ecx*4 + 0x104] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x104u));
    /* 004405b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004405b8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004405bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4405bdu); call_ind(t); }
L_004405bd:; BB(0x004405bd);
    /* 004405bd: jmp 0x44057d */ goto L_0044057d;
L_004405bf:; BB(0x004405bf);
    /* 004405bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004405c6: jmp 0x4405d1 */ goto L_004405d1;
L_004405c8:; BB(0x004405c8);
    /* 004405c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004405cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004405ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004405d1:; BB(0x004405d1);
    /* 004405d1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004405d5: jge 0x4406a4 */ if ((fS==fO)) goto L_004406a4;
L_004405db:; BB(0x004405db);
    /* 004405db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004405de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004405e1: cmp dword ptr [edx + ecx*4 + 0xb4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004405e9: je 0x44060c */ if (fZ) goto L_0044060c;
L_004405eb:; BB(0x004405eb);
    /* 004405eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004405ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004405f1: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 004405f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004405fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004405fe: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 00440605: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440607: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044060a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44060cu); call_ind(t); }
L_0044060c:; BB(0x0044060c);
    /* 0044060c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044060f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440612: cmp dword ptr [edx + ecx*4 + 0xc8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044061a: je 0x44063d */ if (fZ) goto L_0044063d;
L_0044061c:; BB(0x0044061c);
    /* 0044061c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044061f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440622: mov edx, dword ptr [ecx + eax*4 + 0xc8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xc8u));
    /* 00440629: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044062c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044062f: mov ecx, dword ptr [ecx + eax*4 + 0xc8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xc8u));
    /* 00440636: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440638: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044063b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44063du); call_ind(t); }
L_0044063d:; BB(0x0044063d);
    /* 0044063d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440640: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440643: cmp dword ptr [edx + ecx*4 + 0xdc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044064b: je 0x44066e */ if (fZ) goto L_0044066e;
L_0044064d:; BB(0x0044064d);
    /* 0044064d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440650: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440653: mov edx, dword ptr [ecx + eax*4 + 0xdc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 0044065a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044065d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440660: mov ecx, dword ptr [ecx + eax*4 + 0xdc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00440667: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440669: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044066c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44066eu); call_ind(t); }
L_0044066e:; BB(0x0044066e);
    /* 0044066e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440671: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440674: cmp dword ptr [edx + ecx*4 + 0xf0], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044067c: je 0x44069f */ if (fZ) goto L_0044069f;
L_0044067e:; BB(0x0044067e);
    /* 0044067e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00440681: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440684: mov edx, dword ptr [ecx + eax*4 + 0xf0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xf0u));
    /* 0044068b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044068e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00440691: mov ecx, dword ptr [ecx + eax*4 + 0xf0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xf0u));
    /* 00440698: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044069a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044069d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44069fu); call_ind(t); }
L_0044069f:; BB(0x0044069f);
    /* 0044069f: jmp 0x4405c8 */ goto L_004405c8;
L_004406a4:; BB(0x004406a4);
    /* 004406a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004406ab: jmp 0x4406b6 */ goto L_004406b6;
L_004406ad:; BB(0x004406ad);
    /* 004406ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004406b0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004406b3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004406b6:; BB(0x004406b6);
    /* 004406b6: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004406ba: jge 0x4406ef */ if ((fS==fO)) goto L_004406ef;
L_004406bc:; BB(0x004406bc);
    /* 004406bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004406bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004406c2: cmp dword ptr [eax + edx*4 + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004406ca: je 0x4406ed */ if (fZ) goto L_004406ed;
L_004406cc:; BB(0x004406cc);
    /* 004406cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004406cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004406d2: mov eax, dword ptr [edx + ecx*4 + 0x114] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x114u));
    /* 004406d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004406dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004406df: mov ecx, dword ptr [edx + ecx*4 + 0x114] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x114u));
    /* 004406e6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004406e8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004406eb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4406edu); call_ind(t); }
L_004406ed:; BB(0x004406ed);
    /* 004406ed: jmp 0x4406ad */ goto L_004406ad;
L_004406ef:; BB(0x004406ef);
    /* 004406ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004406f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004406f2: ret  */ FN_RET(0x004404d0); r_esp += 4; return;
}

void f_00440700(void) /* sub_440700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00440700);
    /* 00440700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440701: mov ebp, esp */ r_ebp = r_esp;
    /* 00440703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440705: push 0x69e9a1 */ { u32 v = 0x69e9a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044070a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00440710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440711: sub esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440717: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044071c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044071e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044071f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00440722: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00440728: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 0044072e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00440735: mov dword ptr [ebp - 0x40], 0x7c */ W32((u32)(r_ebp+0xffffffc0u), 0x7cu);
    /* 0044073c: mov dword ptr [ebp - 0x3c], 0xb1 */ W32((u32)(r_ebp+0xffffffc4u), 0xb1u);
    /* 00440743: mov dword ptr [ebp - 0x38], 0xe9 */ W32((u32)(r_ebp+0xffffffc8u), 0xe9u);
    /* 0044074a: mov dword ptr [ebp - 0x18], 0x1d4c9 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4c9u);
    /* 00440751: mov dword ptr [ebp - 0x14], 0x1d4c7 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4c7u);
    /* 00440758: mov dword ptr [ebp - 0x10], 0x1d4d5 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4d5u);
    /* 0044075f: mov dword ptr [ebp - 0x68], 0x165 */ W32((u32)(r_ebp+0xffffff98u), 0x165u);
    /* 00440766: mov dword ptr [ebp - 0x64], 0x143 */ W32((u32)(r_ebp+0xffffff9cu), 0x143u);
    /* 0044076d: mov dword ptr [ebp - 0x60], 0x122 */ W32((u32)(r_ebp+0xffffffa0u), 0x122u);
    /* 00440774: mov dword ptr [ebp - 0x5c], 0x100 */ W32((u32)(r_ebp+0xffffffa4u), 0x100u);
    /* 0044077b: mov dword ptr [ebp - 0x58], 0xe0 */ W32((u32)(r_ebp+0xffffffa8u), 0xe0u);
    /* 00440782: mov dword ptr [ebp - 0xe4], 0x12e */ W32((u32)(r_ebp+0xffffff1cu), 0x12eu);
    /* 0044078c: mov dword ptr [ebp - 0xe0], 0xa1 */ W32((u32)(r_ebp+0xffffff20u), 0xa1u);
    /* 00440796: mov dword ptr [ebp - 0xdc], 0x193 */ W32((u32)(r_ebp+0xffffff24u), 0x193u);
    /* 004407a0: mov dword ptr [ebp - 0xd8], 0xa1 */ W32((u32)(r_ebp+0xffffff28u), 0xa1u);
    /* 004407aa: mov dword ptr [ebp - 0xd4], 0x1ea */ W32((u32)(r_ebp+0xffffff2cu), 0x1eau);
    /* 004407b4: mov dword ptr [ebp - 0xd0], 0xa1 */ W32((u32)(r_ebp+0xffffff30u), 0xa1u);
    /* 004407be: mov dword ptr [ebp - 0xcc], 0x12e */ W32((u32)(r_ebp+0xffffff34u), 0x12eu);
    /* 004407c8: mov dword ptr [ebp - 0xc8], 0x91 */ W32((u32)(r_ebp+0xffffff38u), 0x91u);
    /* 004407d2: mov dword ptr [ebp - 0xc4], 0x193 */ W32((u32)(r_ebp+0xffffff3cu), 0x193u);
    /* 004407dc: mov dword ptr [ebp - 0xc0], 0x91 */ W32((u32)(r_ebp+0xffffff40u), 0x91u);
    /* 004407e6: mov dword ptr [ebp - 0xbc], 0x1ea */ W32((u32)(r_ebp+0xffffff44u), 0x1eau);
    /* 004407f0: mov dword ptr [ebp - 0xb8], 0x91 */ W32((u32)(r_ebp+0xffffff48u), 0x91u);
    /* 004407fa: mov dword ptr [ebp - 0xb4], 0x12e */ W32((u32)(r_ebp+0xffffff4cu), 0x12eu);
    /* 00440804: mov dword ptr [ebp - 0xb0], 0x81 */ W32((u32)(r_ebp+0xffffff50u), 0x81u);
    /* 0044080e: mov dword ptr [ebp - 0xac], 0x193 */ W32((u32)(r_ebp+0xffffff54u), 0x193u);
    /* 00440818: mov dword ptr [ebp - 0xa8], 0x81 */ W32((u32)(r_ebp+0xffffff58u), 0x81u);
    /* 00440822: mov dword ptr [ebp - 0xa4], 0x1ea */ W32((u32)(r_ebp+0xffffff5cu), 0x1eau);
    /* 0044082c: mov dword ptr [ebp - 0xa0], 0x81 */ W32((u32)(r_ebp+0xffffff60u), 0x81u);
    /* 00440836: mov dword ptr [ebp - 0x9c], 0x12e */ W32((u32)(r_ebp+0xffffff64u), 0x12eu);
    /* 00440840: mov dword ptr [ebp - 0x98], 0x71 */ W32((u32)(r_ebp+0xffffff68u), 0x71u);
    /* 0044084a: mov dword ptr [ebp - 0x94], 0x193 */ W32((u32)(r_ebp+0xffffff6cu), 0x193u);
    /* 00440854: mov dword ptr [ebp - 0x90], 0x71 */ W32((u32)(r_ebp+0xffffff70u), 0x71u);
    /* 0044085e: mov dword ptr [ebp - 0x8c], 0x1ea */ W32((u32)(r_ebp+0xffffff74u), 0x1eau);
    /* 00440868: mov dword ptr [ebp - 0x88], 0x71 */ W32((u32)(r_ebp+0xffffff78u), 0x71u);
    /* 00440872: mov dword ptr [ebp - 0x84], 0x12e */ W32((u32)(r_ebp+0xffffff7cu), 0x12eu);
    /* 0044087c: mov dword ptr [ebp - 0x80], 0x61 */ W32((u32)(r_ebp+0xffffff80u), 0x61u);
    /* 00440883: mov dword ptr [ebp - 0x7c], 0x193 */ W32((u32)(r_ebp+0xffffff84u), 0x193u);
    /* 0044088a: mov dword ptr [ebp - 0x78], 0x61 */ W32((u32)(r_ebp+0xffffff88u), 0x61u);
    /* 00440891: mov dword ptr [ebp - 0x74], 0x1ea */ W32((u32)(r_ebp+0xffffff8cu), 0x1eau);
    /* 00440898: mov dword ptr [ebp - 0x70], 0x61 */ W32((u32)(r_ebp+0xffffff90u), 0x61u);
    /* 0044089f: mov dword ptr [ebp - 0x54], 0x174 */ W32((u32)(r_ebp+0xffffffacu), 0x174u);
    /* 004408a6: mov dword ptr [ebp - 0x50], 0x153 */ W32((u32)(r_ebp+0xffffffb0u), 0x153u);
    /* 004408ad: mov dword ptr [ebp - 0x4c], 0x131 */ W32((u32)(r_ebp+0xffffffb4u), 0x131u);
    /* 004408b4: mov dword ptr [ebp - 0x48], 0x10f */ W32((u32)(r_ebp+0xffffffb8u), 0x10fu);
    /* 004408bb: mov dword ptr [ebp - 0x44], 0xee */ W32((u32)(r_ebp+0xffffffbcu), 0xeeu);
    /* 004408c2: mov dword ptr [ebp - 0x34], 0x9a */ W32((u32)(r_ebp+0xffffffccu), 0x9au);
    /* 004408c9: mov dword ptr [ebp - 0x30], 0x8a */ W32((u32)(r_ebp+0xffffffd0u), 0x8au);
    /* 004408d0: mov dword ptr [ebp - 0x2c], 0x7a */ W32((u32)(r_ebp+0xffffffd4u), 0x7au);
    /* 004408d7: mov dword ptr [ebp - 0x28], 0x6a */ W32((u32)(r_ebp+0xffffffd8u), 0x6au);
    /* 004408de: mov dword ptr [ebp - 0x24], 0x5a */ W32((u32)(r_ebp+0xffffffdcu), 0x5au);
    /* 004408e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004408e7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004408ec: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004408ef: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4408f4u); f_005fb300();
    /* 004408f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408f6: jne 0x44092a */ if (!fZ) goto L_0044092a;
L_004408f8:; BB(0x004408f8);
    /* 004408f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004408fa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004408fc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004408fe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440900: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440902: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440907: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440909: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044090e: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440913: push 0x1d4cc */ { u32 v = 0x1d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00440918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044091a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044091c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00440922: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00440925: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x44092au); f_005f9de0();
L_0044092a:; BB(0x0044092a);
    /* 0044092a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044092c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00440932: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00440935: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x44093au); f_005fb300();
    /* 0044093a: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 00440940: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00440946: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00440948: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0044094e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00440951: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440953u); call_ind(t); }
    /* 00440953: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440955: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044095b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044095e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x440963u); f_005fb300();
    /* 00440963: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440965: jne 0x440999 */ if (!fZ) goto L_00440999;
L_00440967:; BB(0x00440967);
    /* 00440967: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440969: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044096b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044096d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044096f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440971: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440976: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440978: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044097d: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 00440982: push 0x1d4cb */ { u32 v = 0x1d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00440987: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440989: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044098b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00440991: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00440994: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x440999u); f_005f9de0();
L_00440999:; BB(0x00440999);
    /* 00440999: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044099b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004409a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004409a3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4409a8u); f_005fb300();
    /* 004409a8: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 004409ae: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 004409b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004409b6: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 004409bc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004409bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4409c1u); call_ind(t); }
    /* 004409c1: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004409c8: jmp 0x4409d3 */ goto L_004409d3;
L_004409ca:; BB(0x004409ca);
    /* 004409ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004409cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004409d0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_004409d3:; BB(0x004409d3);
    /* 004409d3: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004409d7: jge 0x440b08 */ if ((fS==fO)) goto L_00440b08;
L_004409dd:; BB(0x004409dd);
    /* 004409dd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004409e0: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004409e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004409e4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004409e9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004409ec: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4409f1u); f_005fb810();
    /* 004409f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004409f3: jne 0x440a8b */ if (!fZ) goto L_00440a8b;
L_004409f9:; BB(0x004409f9);
    /* 004409f9: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004409fe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440a03u); f_00686d82();
    /* 00440a03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440a06: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00440a0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440a13: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440a1a: je 0x440a2f */ if (fZ) goto L_00440a2f;
L_00440a1c:; BB(0x00440a1c);
    /* 00440a1c: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00440a22: call 0x443420 */ r_esp -= 4; W32(r_esp, 0x440a27u); f_00443420();
    /* 00440a27: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 00440a2d: jmp 0x440a39 */ goto L_00440a39;
L_00440a2f:; BB(0x00440a2f);
    /* 00440a2f: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_00440a39:; BB(0x00440a39);
    /* 00440a39: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00440a3f: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 00440a45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440a4c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a4e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a52: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a54: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a56: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a58: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00440a5a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a5c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a61: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440a64: mov eax, dword ptr [ebp + edx*4 - 0x68] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff98u));
    /* 00440a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440a69: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a6b: push 0x1d4d8 */ { u32 v = 0x1d4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440a73: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440a76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a77: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 00440a7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a7e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00440a83: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00440a86: call 0x5fa6a0 */ r_esp -= 4; W32(r_esp, 0x440a8bu); f_005fa6a0();
L_00440a8b:; BB(0x00440a8b);
    /* 00440a8b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440a8e: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440a91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a92: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00440a98: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00440a9b: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x440aa0u); f_005fb810();
    /* 00440aa0: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00440aa6: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 00440aac: mov byte ptr [eax + 0x9d], 1 */ W8((u32)(r_eax+0x9du), 0x1u);
    /* 00440ab3: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440ab7: je 0x440ad5 */ if (fZ) goto L_00440ad5;
L_00440ab9:; BB(0x00440ab9);
    /* 00440ab9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440abc: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440abf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440ac0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00440ac6: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00440ac9: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x440aceu); f_005fb810();
    /* 00440ace: mov ecx, eax */ r_ecx = r_eax;
    /* 00440ad0: call 0x60c330 */ r_esp -= 4; W32(r_esp, 0x440ad5u); f_0060c330();
L_00440ad5:; BB(0x00440ad5);
    /* 00440ad5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440ad8: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440adc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00440ae2: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00440ae5: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x440aeau); f_005fb810();
    /* 00440aea: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 00440af0: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00440af6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440af8: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00440afe: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00440b01: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x440b03u); call_ind(t); }
    /* 00440b03: jmp 0x4409ca */ goto L_004409ca;
L_00440b08:; BB(0x00440b08);
    /* 00440b08: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440b0f: jmp 0x440b1a */ goto L_00440b1a;
L_00440b11:; BB(0x00440b11);
    /* 00440b11: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440b14: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440b17: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00440b1a:; BB(0x00440b1a);
    /* 00440b1a: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440b1e: jge 0x440c33 */ if ((fS==fO)) goto L_00440c33;
L_00440b24:; BB(0x00440b24);
    /* 00440b24: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 00440b2e: jmp 0x440b3f */ goto L_00440b3f;
L_00440b30:; BB(0x00440b30);
    /* 00440b30: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00440b36: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440b39: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
L_00440b3f:; BB(0x00440b3f);
    /* 00440b3f: cmp dword ptr [ebp - 0xe8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440b46: jge 0x440c2e */ if ((fS==fO)) goto L_00440c2e;
L_00440b4c:; BB(0x00440b4c);
    /* 00440b4c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440b4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b50: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440b53: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440b57: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00440b5d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00440b60: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x440b65u); f_005fb3f0();
    /* 00440b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440b67: jne 0x440bc0 */ if (!fZ) goto L_00440bc0;
L_00440b69:; BB(0x00440b69);
    /* 00440b69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b6b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b6d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440b6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440b71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440b73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b75: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440b7c: mov edx, 4 */ r_edx = 0x4u;
    /* 00440b81: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00440b84: imul edx, edx, 0x21 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x21u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00440b87: add edx, 0xd8 */ {  u32 a = r_edx; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b8e: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00440b94: mov ecx, dword ptr [ebp + eax*4 - 0x40] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffc0u));
    /* 00440b98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b99: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00440b9f: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 00440ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440ba4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440ba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440ba8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440bab: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440bae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440baf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bb3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00440bb8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00440bbb: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x440bc0u); f_005f9ff0();
L_00440bc0:; BB(0x00440bc0);
    /* 00440bc0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bc2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bc4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bc6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440bd4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440bd7: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440bda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440bdb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00440be0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00440be3: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x440be8u); f_005fb3f0();
    /* 00440be8: mov ecx, eax */ r_ecx = r_eax;
    /* 00440bea: call 0x5fff90 */ r_esp -= 4; W32(r_esp, 0x440befu); f_005fff90();
    /* 00440bef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440bf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440bf3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440bf6: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440bf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440bfa: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00440bff: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00440c02: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x440c07u); f_005fb3f0();
    /* 00440c07: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 00440c0d: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00440c13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00440c15: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00440c1b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00440c1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440c20u); call_ind(t); }
    /* 00440c20: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440c23: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440c26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00440c29: jmp 0x440b30 */ goto L_00440b30;
L_00440c2e:; BB(0x00440c2e);
    /* 00440c2e: jmp 0x440b11 */ goto L_00440b11;
L_00440c33:; BB(0x00440c33);
    /* 00440c33: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440c3a: jmp 0x440c45 */ goto L_00440c45;
L_00440c3c:; BB(0x00440c3c);
    /* 00440c3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440c3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440c42: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00440c45:; BB(0x00440c45);
    /* 00440c45: cmp dword ptr [ebp - 0x20], 0xf */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440c49: jge 0x440d0a */ if ((fS==fO)) goto L_00440d0a;
L_00440c4f:; BB(0x00440c4f);
    /* 00440c4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440c52: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440c58: cmp dword ptr [ecx + eax*4 + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c5d: jne 0x440d05 */ if (!fZ) goto L_00440d05;
L_00440c63:; BB(0x00440c63);
    /* 00440c63: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c68: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440c6du); f_00686d82();
    /* 00440c6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440c70: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00440c76: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00440c7d: cmp dword ptr [ebp - 0xf8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c84: je 0x440c99 */ if (fZ) goto L_00440c99;
L_00440c86:; BB(0x00440c86);
    /* 00440c86: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00440c8c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x440c91u); f_005ec5a0();
    /* 00440c91: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 00440c97: jmp 0x440ca3 */ goto L_00440ca3;
L_00440c99:; BB(0x00440c99);
    /* 00440c99: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_00440ca3:; BB(0x00440ca3);
    /* 00440ca3: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00440ca9: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00440caf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440cb6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440cb9: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440cbf: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00440cc5: mov dword ptr [ecx + eax*4 + 0x34], edx */ W32((u32)(r_ecx+r_eax*4+0x34u), r_edx);
    /* 00440cc9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440ccb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00440ccd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440ccf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440cd2: mov ecx, dword ptr [ebp + eax*8 - 0xe0] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff20u));
    /* 00440cd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440cda: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440cdd: mov eax, dword ptr [ebp + edx*8 - 0xe4] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff1cu));
    /* 00440ce4: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00440ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440ce8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00440cea: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cec: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00440cee: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cf3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440cf6: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440cfc: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 00440d00: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x440d05u); f_005ec8f0();
L_00440d05:; BB(0x00440d05);
    /* 00440d05: jmp 0x440c3c */ goto L_00440c3c;
L_00440d0a:; BB(0x00440d0a);
    /* 00440d0a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440d11: jmp 0x440d1c */ goto L_00440d1c;
L_00440d13:; BB(0x00440d13);
    /* 00440d13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440d16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440d19: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00440d1c:; BB(0x00440d1c);
    /* 00440d1c: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440d20: jge 0x440dd5 */ if ((fS==fO)) goto L_00440dd5;
L_00440d26:; BB(0x00440d26);
    /* 00440d26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440d29: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440d2f: cmp dword ptr [edx + ecx*4 + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440d34: jne 0x440dd0 */ if (!fZ) goto L_00440dd0;
L_00440d3a:; BB(0x00440d3a);
    /* 00440d3a: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440d3f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440d44u); f_00686d82();
    /* 00440d44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440d47: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00440d4d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00440d54: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440d5b: je 0x440d70 */ if (fZ) goto L_00440d70;
L_00440d5d:; BB(0x00440d5d);
    /* 00440d5d: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00440d63: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x440d68u); f_005ec5a0();
    /* 00440d68: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 00440d6e: jmp 0x440d7a */ goto L_00440d7a;
L_00440d70:; BB(0x00440d70);
    /* 00440d70: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_00440d7a:; BB(0x00440d7a);
    /* 00440d7a: mov eax, dword ptr [ebp - 0x15c] */ r_eax = R32((u32)(r_ebp+0xfffffea4u));
    /* 00440d80: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00440d86: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440d8d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440d90: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440d96: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00440d9c: mov dword ptr [edx + ecx*4 + 0x70], eax */ W32((u32)(r_edx+r_ecx*4+0x70u), r_eax);
    /* 00440da0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440da2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00440da4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440da6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440da9: mov edx, dword ptr [ebp + ecx*4 - 0x54] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffacu));
    /* 00440dad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440dae: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440db3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00440db5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00440db7: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00440db9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440dbe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440dc1: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440dc7: mov ecx, dword ptr [ecx + eax*4 + 0x70] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 00440dcb: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x440dd0u); f_005ec8f0();
L_00440dd0:; BB(0x00440dd0);
    /* 00440dd0: jmp 0x440d13 */ goto L_00440d13;
L_00440dd5:; BB(0x00440dd5);
    /* 00440dd5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440ddc: jmp 0x440de7 */ goto L_00440de7;
L_00440dde:; BB(0x00440dde);
    /* 00440dde: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440de1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00440de4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00440de7:; BB(0x00440de7);
    /* 00440de7: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440deb: jge 0x440ea9 */ if ((fS==fO)) goto L_00440ea9;
L_00440df1:; BB(0x00440df1);
    /* 00440df1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440df4: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440dfa: cmp dword ptr [ecx + eax*4 + 0x84], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e02: jne 0x440ea4 */ if (!fZ) goto L_00440ea4;
L_00440e08:; BB(0x00440e08);
    /* 00440e08: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e0d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440e12u); f_00686d82();
    /* 00440e12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440e15: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00440e1b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00440e22: cmp dword ptr [ebp - 0x108], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e29: je 0x440e3e */ if (fZ) goto L_00440e3e;
L_00440e2b:; BB(0x00440e2b);
    /* 00440e2b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00440e31: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x440e36u); f_005ec5a0();
    /* 00440e36: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00440e3c: jmp 0x440e48 */ goto L_00440e48;
L_00440e3e:; BB(0x00440e3e);
    /* 00440e3e: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_00440e48:; BB(0x00440e48);
    /* 00440e48: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00440e4e: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 00440e54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440e5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440e5e: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440e64: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00440e6a: mov dword ptr [ecx + eax*4 + 0x84], edx */ W32((u32)(r_ecx+r_eax*4+0x84u), r_edx);
    /* 00440e71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440e73: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e75: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e77: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440e7a: mov ecx, dword ptr [ebp + eax*4 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffacu));
    /* 00440e7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00440e7f: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e84: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00440e86: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e88: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e8a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e8f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440e92: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440e98: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 00440e9f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x440ea4u); f_005ec8f0();
L_00440ea4:; BB(0x00440ea4);
    /* 00440ea4: jmp 0x440dde */ goto L_00440dde;
L_00440ea9:; BB(0x00440ea9);
    /* 00440ea9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00440eb0: jmp 0x440ebb */ goto L_00440ebb;
L_00440eb2:; BB(0x00440eb2);
    /* 00440eb2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440eb5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00440eb8: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00440ebb:; BB(0x00440ebb);
    /* 00440ebb: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440ebf: jge 0x440f96 */ if ((fS==fO)) goto L_00440f96;
L_00440ec5:; BB(0x00440ec5);
    /* 00440ec5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440ec8: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440ece: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440ed3: jne 0x440f91 */ if (!fZ) goto L_00440f91;
L_00440ed9:; BB(0x00440ed9);
    /* 00440ed9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00440ede: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440ee3u); f_00686d82();
    /* 00440ee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440ee6: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00440eec: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00440ef3: cmp dword ptr [ebp - 0x110], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440efa: je 0x440f0f */ if (fZ) goto L_00440f0f;
L_00440efc:; BB(0x00440efc);
    /* 00440efc: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00440f02: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x440f07u); f_005eaaf0();
    /* 00440f07: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00440f0d: jmp 0x440f19 */ goto L_00440f19;
L_00440f0f:; BB(0x00440f0f);
    /* 00440f0f: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_00440f19:; BB(0x00440f19);
    /* 00440f19: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00440f1f: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00440f25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440f2c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440f2f: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440f35: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00440f3b: mov dword ptr [eax + edx*4 + 0x20], ecx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ecx);
    /* 00440f3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440f41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440f43: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440f46: mov eax, dword ptr [ebp + edx*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffccu));
    /* 00440f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f4b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00440f4d: push 0x1d4f4 */ { u32 v = 0x1d4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00440f52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440f55: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440f5b: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440f5f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x440f64u); f_005eae80();
    /* 00440f64: mov eax, 4 */ r_eax = 0x4u;
    /* 00440f69: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00440f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f6d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440f70: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440f76: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440f7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440f7d: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440f83: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00440f87: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00440f89: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00440f8f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x440f91u); call_ind(t); }
L_00440f91:; BB(0x00440f91);
    /* 00440f91: jmp 0x440eb2 */ goto L_00440eb2;
L_00440f96:; BB(0x00440f96);
    /* 00440f96: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00440f9c: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fa3: jne 0x441037 */ if (!fZ) goto L_00441037;
L_00440fa9:; BB(0x00440fa9);
    /* 00440fa9: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440fae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x440fb3u); f_00686d82();
    /* 00440fb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440fb6: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00440fbc: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00440fc3: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fca: je 0x440fdf */ if (fZ) goto L_00440fdf;
L_00440fcc:; BB(0x00440fcc);
    /* 00440fcc: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00440fd2: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x440fd7u); f_005ec5a0();
    /* 00440fd7: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 00440fdd: jmp 0x440fe9 */ goto L_00440fe9;
L_00440fdf:; BB(0x00440fdf);
    /* 00440fdf: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_00440fe9:; BB(0x00440fe9);
    /* 00440fe9: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 00440fef: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00440ff5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440ffc: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441002: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00441008: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 0044100e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441010: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00441012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441014: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 00441019: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0044101b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044101d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0044101f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00441021: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00441026: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044102c: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00441032: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x441037u); f_005ec8f0();
L_00441037:; BB(0x00441037);
    /* 00441037: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044103d: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00441043: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441049: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0044104f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441051: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00441054: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441056u); call_ind(t); }
    /* 00441056: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044105c: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441063: jne 0x4410fa */ if (!fZ) goto L_004410fa;
L_00441069:; BB(0x00441069);
    /* 00441069: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044106e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x441073u); f_00686d82();
    /* 00441073: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441076: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0044107c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00441083: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044108a: je 0x44109f */ if (fZ) goto L_0044109f;
L_0044108c:; BB(0x0044108c);
    /* 0044108c: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00441092: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x441097u); f_005ec5a0();
    /* 00441097: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0044109d: jmp 0x4410a9 */ goto L_004410a9;
L_0044109f:; BB(0x0044109f);
    /* 0044109f: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_004410a9:; BB(0x004410a9);
    /* 004410a9: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 004410af: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 004410b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004410bc: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 004410c2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 004410c8: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 004410ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004410d0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004410d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004410d4: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 004410d9: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 004410de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004410e0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004410e2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004410e4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004410e9: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 004410ef: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004410f5: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x4410fau); f_005ec8f0();
L_004410fa:; BB(0x004410fa);
    /* 004410fa: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441100: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441107: jne 0x4411ac */ if (!fZ) goto L_004411ac;
L_0044110d:; BB(0x0044110d);
    /* 0044110d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00441112: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x441117u); f_00686d82();
    /* 00441117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044111a: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00441120: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00441127: cmp dword ptr [ebp - 0x128], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044112e: je 0x441143 */ if (fZ) goto L_00441143;
L_00441130:; BB(0x00441130);
    /* 00441130: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00441136: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x44113bu); f_005f5bf0();
    /* 0044113b: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 00441141: jmp 0x44114d */ goto L_0044114d;
L_00441143:; BB(0x00441143);
    /* 00441143: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
L_0044114d:; BB(0x0044114d);
    /* 0044114d: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00441153: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 00441159: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441160: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441166: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0044116c: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00441172: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441174: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00441176: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044117b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00441180: push 0x1d4f0 */ { u32 v = 0x1d4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441185: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044118b: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00441191: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x441196u); f_005eae80();
    /* 00441196: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044119c: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004411a2: mov dword ptr [eax + 0x178], 0x14 */ W32((u32)(r_eax+0x178u), 0x14u);
L_004411ac:; BB(0x004411ac);
    /* 004411ac: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 004411b2: cmp dword ptr [ecx + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004411b9: jne 0x441242 */ if (!fZ) goto L_00441242;
L_004411bf:; BB(0x004411bf);
    /* 004411bf: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 004411c4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4411c9u); f_00686d82();
    /* 004411c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004411cc: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 004411d2: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004411d9: cmp dword ptr [ebp - 0x130], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004411e0: je 0x4411f5 */ if (fZ) goto L_004411f5;
L_004411e2:; BB(0x004411e2);
    /* 004411e2: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 004411e8: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4411edu); f_005f5bf0();
    /* 004411ed: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 004411f3: jmp 0x4411ff */ goto L_004411ff;
L_004411f5:; BB(0x004411f5);
    /* 004411f5: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
L_004411ff:; BB(0x004411ff);
    /* 004411ff: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00441205: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0044120b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441212: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441218: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0044121e: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00441224: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441226: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00441228: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044122a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044122c: push 0x1d4fa */ { u32 v = 0x1d4fau; r_esp -= 4; W32(r_esp, v); }
    /* 00441231: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441237: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0044123d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x441242u); f_005eae80();
L_00441242:; BB(0x00441242);
    /* 00441242: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00441248: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0044124e: mov dword ptr [ecx + 0x178], 0 */ W32((u32)(r_ecx+0x178u), 0x0u);
    /* 00441258: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044125e: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00441264: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0044126a: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 00441270: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441272: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00441275: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x441277u); call_ind(t); }
    /* 00441277: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00441279: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44127eu); f_00686d82();
    /* 0044127e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441281: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 00441287: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0044128e: cmp dword ptr [ebp - 0x138], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441295: je 0x4412ac */ if (fZ) goto L_004412ac;
L_00441297:; BB(0x00441297);
    /* 00441297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441299: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0044129f: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x4412a4u); f_00600a70();
    /* 004412a4: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 004412aa: jmp 0x4412b6 */ goto L_004412b6;
L_004412ac:; BB(0x004412ac);
    /* 004412ac: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
L_004412b6:; BB(0x004412b6);
    /* 004412b6: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 004412bc: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 004412c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004412c9: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 004412cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004412d0: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 004412d6: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004412dc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4412e1u); f_005f5d50();
    /* 004412e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004412e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004412eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004412ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004412ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004412ef: ret  */ FN_RET(0x00440700); r_esp += 4; return;
}

