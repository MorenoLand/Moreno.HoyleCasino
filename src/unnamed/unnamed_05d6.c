#include "protos.h"

void f_005d6020(void) /* sub_5D6020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6020);
    /* 005d6020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6021: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d602a: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 005d6030: mov edx, dword ptr [eax + 0x4d0] */ r_edx = R32((u32)(r_eax+0x4d0u));
    /* 005d6036: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6039: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d603b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d603e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6041: ret 4 */ FN_RET(0x005d6020); r_esp += 8; return;
}

void f_005d6050(void) /* sub_5D6050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6050);
    /* 005d6050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6051: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6057: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d605a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d605d: mov dword ptr [eax + 0x4cc], ecx */ W32((u32)(r_eax+0x4ccu), r_ecx);
    /* 005d6063: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d6066: mov dword ptr [eax + 0x4d0], edx */ W32((u32)(r_eax+0x4d0u), r_edx);
    /* 005d606c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d606e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d606f: ret 8 */ FN_RET(0x005d6050); r_esp += 12; return;
}

void f_005d6080(void) /* sub_5D6080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6080);
    /* 005d6080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6081: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6083: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6086: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d6089: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d608c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d608d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6090: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6091: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d6094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6095: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6098: add ecx, 0x4cc */ {  u32 a = r_ecx; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d609e: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5d60a3u); f_0064c5c0();
    /* 005d60a3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d60a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d60a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d60a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d60aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d60ad: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5d60b2u); f_005d6050();
    /* 005d60b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d60b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d60b5: ret 8 */ FN_RET(0x005d6080); r_esp += 12; return;
}

void f_005d66b0(void) /* sub_5D66B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d66b0);
    /* 005d66b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d66b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d66b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d66b5: push 0x6a906b */ { u32 v = 0x6a906bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d66ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d66c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d66c1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d66c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d66c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d66cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d66cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d66cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d66d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d66d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d66db: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66e2: jne 0x5d672e */ if (!fZ) goto L_005d672e;
L_005d66e4:; BB(0x005d66e4);
    /* 005d66e4: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d66e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d66eeu); f_00686d82();
    /* 005d66ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d66f1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d66f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d66fb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66ff: je 0x5d670e */ if (fZ) goto L_005d670e;
L_005d6701:; BB(0x005d6701);
    /* 005d6701: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6704: call 0x5d7580 */ r_esp -= 4; W32(r_esp, 0x5d6709u); f_005d7580();
    /* 005d6709: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d670c: jmp 0x5d6715 */ goto L_005d6715;
L_005d670e:; BB(0x005d670e);
    /* 005d670e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d6715:; BB(0x005d6715);
    /* 005d6715: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d6718: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d671b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6722: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6725: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6728: mov dword ptr [edx + 0x49c], eax */ W32((u32)(r_edx+0x49cu), r_eax);
L_005d672e:; BB(0x005d672e);
    /* 005d672e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6730: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6733: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005d6736: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d673bu); f_00646f80();
    /* 005d673b: mov ecx, eax */ r_ecx = r_eax;
    /* 005d673d: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d6742u); f_005f53c0();
    /* 005d6742: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6748: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d674a: push 0x4e2 */ { u32 v = 0x4e2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d674f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6752: mov ecx, dword ptr [edx + 0x49c] */ r_ecx = R32((u32)(r_edx+0x49cu));
    /* 005d6758: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d675du); f_005eae80();
    /* 005d675d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6760: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6764: je 0x5d67b7 */ if (fZ) goto L_005d67b7;
L_005d6766:; BB(0x005d6766);
    /* 005d6766: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6769: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005d676c: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d6771u); f_00646f80();
    /* 005d6771: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d6774: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6777: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005d677a: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d677fu); f_00646f80();
    /* 005d677f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d6782: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6785: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6787: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d678a: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005d678d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d678fu); call_ind(t); }
    /* 005d678f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6790: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6793: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d6795: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6798: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d679b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d679du); call_ind(t); }
    /* 005d679d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d679e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d67a1: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 005d67a7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d67aa: mov eax, dword ptr [edx + 0x49c] */ r_eax = R32((u32)(r_edx+0x49cu));
    /* 005d67b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d67b2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005d67b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d67b7u); call_ind(t); }
L_005d67b7:; BB(0x005d67b7);
    /* 005d67b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d67ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d67c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d67c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d67c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d67c5: ret  */ FN_RET(0x005d66b0); r_esp += 4; return;
}

void f_005d6a50(void) /* sub_5D6A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6a50);
    /* 005d6a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6a53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6a56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d6a59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005d6a60:; BB(0x005d6a60);
    /* 005d6a60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a63: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d6a66: movsx ecx, word ptr [eax + 0x75d658] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x75d658u));
    /* 005d6a6d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a70: je 0x5d6aa5 */ if (fZ) goto L_005d6aa5;
L_005d6a72:; BB(0x005d6a72);
    /* 005d6a72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6a75: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d6a78: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d6a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a7e: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005d6a81: movsx edx, word ptr [ecx + 0x75d658] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x75d658u));
    /* 005d6a88: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a8b: jne 0x5d6a9a */ if (!fZ) goto L_005d6a9a;
L_005d6a8d:; BB(0x005d6a8d);
    /* 005d6a8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a90: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d6a93: add eax, 0x75d658 */ {  u32 a = r_eax; u32 b = 0x75d658u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6a98: jmp 0x5d6aa7 */ goto L_005d6aa7;
L_005d6a9a:; BB(0x005d6a9a);
    /* 005d6a9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6a9d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6aa0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d6aa3: jmp 0x5d6a60 */ goto L_005d6a60;
L_005d6aa5:; BB(0x005d6aa5);
    /* 005d6aa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d6aa7:; BB(0x005d6aa7);
    /* 005d6aa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6aa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6aaa: ret  */ FN_RET(0x005d6a50); r_esp += 4; return;
}

void f_005d6b40(void) /* sub_5D6B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6b40);
    /* 005d6b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6b43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6b46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6b49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b4c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d6b4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b50: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005d6b56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6b58: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6b5e: mov edx, dword ptr [eax + 0x2c8] */ r_edx = R32((u32)(r_eax+0x2c8u));
    /* 005d6b64: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d6b66u); call_ind(t); }
    /* 005d6b66: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6b69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b6b: jne 0x5d6b99 */ if (!fZ) goto L_005d6b99;
L_005d6b6d:; BB(0x005d6b6d);
    /* 005d6b6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6b70: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d6b73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b74: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005d6b79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6b7b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6b81: mov eax, dword ptr [edx + 0x2cc] */ r_eax = R32((u32)(r_edx+0x2ccu));
    /* 005d6b87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d6b89u); call_ind(t); }
    /* 005d6b89: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d6b8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b8e: jne 0x5d6b99 */ if (!fZ) goto L_005d6b99;
L_005d6b90:; BB(0x005d6b90);
    /* 005d6b90: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005d6b97: jmp 0x5d6ba0 */ goto L_005d6ba0;
L_005d6b99:; BB(0x005d6b99);
    /* 005d6b99: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005d6ba0:; BB(0x005d6ba0);
    /* 005d6ba0: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005d6ba3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6ba5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6ba6: ret  */ FN_RET(0x005d6b40); r_esp += 4; return;
}

void f_005d6bd0(void) /* sub_5D6BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6bd0);
    /* 005d6bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6bd3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6bd6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d6bd9: mov dword ptr [ebp - 0x1c], 0x1388 */ W32((u32)(r_ebp+0xffffffe4u), 0x1388u);
    /* 005d6be0: mov dword ptr [ebp - 0x18], 0x2710 */ W32((u32)(r_ebp+0xffffffe8u), 0x2710u);
    /* 005d6be7: mov dword ptr [ebp - 0x14], 0xc350 */ W32((u32)(r_ebp+0xffffffecu), 0xc350u);
    /* 005d6bee: mov dword ptr [ebp - 0x10], 0x186a0 */ W32((u32)(r_ebp+0xfffffff0u), 0x186a0u);
    /* 005d6bf5: mov dword ptr [ebp - 0xc], 0xf4240 */ W32((u32)(r_ebp+0xfffffff4u), 0xf4240u);
    /* 005d6bfc: mov dword ptr [ebp - 8], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff8u), 0x5f5e100u);
    /* 005d6c03: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 005d6c0a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6c0d: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6c12u); f_005d52e0();
    /* 005d6c12: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6c15: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 005d6c18: movsx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe3u));
    /* 005d6c1c: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c1f: jne 0x5d6c28 */ if (!fZ) goto L_005d6c28;
L_005d6c21:; BB(0x005d6c21);
    /* 005d6c21: mov eax, 0x5f5e100 */ r_eax = 0x5f5e100u;
    /* 005d6c26: jmp 0x5d6c5b */ goto L_005d6c5b;
L_005d6c28:; BB(0x005d6c28);
    /* 005d6c28: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6c2b: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6c30u); f_005d52e0();
    /* 005d6c30: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6c33: mov byte ptr [ebp - 0x1e], dl */ W8((u32)(r_ebp+0xffffffe2u), (u8)r_edx);
    /* 005d6c36: movsx eax, byte ptr [ebp - 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe2u));
    /* 005d6c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c3c: jne 0x5d6c45 */ if (!fZ) goto L_005d6c45;
L_005d6c3e:; BB(0x005d6c3e);
    /* 005d6c3e: mov eax, 0x9c4 */ r_eax = 0x9c4u;
    /* 005d6c43: jmp 0x5d6c5b */ goto L_005d6c5b;
L_005d6c45:; BB(0x005d6c45);
    /* 005d6c45: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6c48: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6c4du); f_005d52e0();
    /* 005d6c4d: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6c50: mov byte ptr [ebp - 0x1f], cl */ W8((u32)(r_ebp+0xffffffe1u), (u8)r_ecx);
    /* 005d6c53: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 005d6c57: mov eax, dword ptr [ebp + edx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe0u));
L_005d6c5b:; BB(0x005d6c5b);
    /* 005d6c5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6c5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6c5e: ret  */ FN_RET(0x005d6bd0); r_esp += 4; return;
}

void f_005d6c60(void) /* sub_5D6C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6c60);
    /* 005d6c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6c63: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6c66: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d6c69: mov dword ptr [ebp - 0x1c], 0x1388 */ W32((u32)(r_ebp+0xffffffe4u), 0x1388u);
    /* 005d6c70: mov dword ptr [ebp - 0x18], 0x2710 */ W32((u32)(r_ebp+0xffffffe8u), 0x2710u);
    /* 005d6c77: mov dword ptr [ebp - 0x14], 0xc350 */ W32((u32)(r_ebp+0xffffffecu), 0xc350u);
    /* 005d6c7e: mov dword ptr [ebp - 0x10], 0x186a0 */ W32((u32)(r_ebp+0xfffffff0u), 0x186a0u);
    /* 005d6c85: mov dword ptr [ebp - 0xc], 0xf4240 */ W32((u32)(r_ebp+0xfffffff4u), 0xf4240u);
    /* 005d6c8c: mov dword ptr [ebp - 8], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff8u), 0x5f5e100u);
    /* 005d6c93: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 005d6c9a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6c9d: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6ca2u); f_005d52e0();
    /* 005d6ca2: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6ca5: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 005d6ca8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6cab: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d6cb0u); f_005d5a50();
    /* 005d6cb0: movsx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe3u));
    /* 005d6cb4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d6cb6: cmp eax, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6cba: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005d6cbd: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 005d6cbf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6cc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6cc2: ret  */ FN_RET(0x005d6c60); r_esp += 4; return;
}

void f_005d6cd0(void) /* sub_5D6CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6cd0);
    /* 005d6cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6cd3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6cd6: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005d6cd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cdd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d6ce2u); f_0064c8a0();
    /* 005d6ce2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6ce5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d6ce8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005d6ceb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d6cee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d6cf1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d6cf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d6cf7: mov dword ptr [ebp - 0x24], 0x1388 */ W32((u32)(r_ebp+0xffffffdcu), 0x1388u);
    /* 005d6cfe: mov dword ptr [ebp - 0x20], 0x2710 */ W32((u32)(r_ebp+0xffffffe0u), 0x2710u);
    /* 005d6d05: mov dword ptr [ebp - 0x1c], 0xc350 */ W32((u32)(r_ebp+0xffffffe4u), 0xc350u);
    /* 005d6d0c: mov dword ptr [ebp - 0x18], 0x186a0 */ W32((u32)(r_ebp+0xffffffe8u), 0x186a0u);
    /* 005d6d13: mov dword ptr [ebp - 0x14], 0xf4240 */ W32((u32)(r_ebp+0xffffffecu), 0xf4240u);
    /* 005d6d1a: mov dword ptr [ebp - 0x10], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff0u), 0x5f5e100u);
    /* 005d6d21: mov dword ptr [ebp - 0xc], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff4u), 0x3b9aca00u);
    /* 005d6d28: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d6d2b: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6d30u); f_005d52e0();
    /* 005d6d30: mov dl, byte ptr [eax + 0x29] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005d6d33: mov byte ptr [ebp - 0x3d], dl */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_edx);
    /* 005d6d36: movzx eax, byte ptr [ebp - 0x3d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 005d6d3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d3c: jne 0x5d6d50 */ if (!fZ) goto L_005d6d50;
L_005d6d3e:; BB(0x005d6d3e);
    /* 005d6d3e: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6d44: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d6d49u); f_005da7b0();
    /* 005d6d49: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d6d4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d4e: je 0x5d6d54 */ if (fZ) goto L_005d6d54;
L_005d6d50:; BB(0x005d6d50);
    /* 005d6d50: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d6d52: jmp 0x5d6dcd */ goto L_005d6dcd;
L_005d6d54:; BB(0x005d6d54);
    /* 005d6d54: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005d6d57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d6d5b: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5d6d60u); f_005d5ac0();
    /* 005d6d60: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d62: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d6d67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6d69: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d6d6f: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d6d75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d6d77u); call_ind(t); }
    /* 005d6d77: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d6d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d7c: je 0x5d6dbe */ if (fZ) goto L_005d6dbe;
L_005d6d7e:; BB(0x005d6d7e);
    /* 005d6d7e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d6d81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d82: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d6d85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d6d88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d89: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005d6d8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6d91: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6d97: mov edx, dword ptr [eax + 0x27c] */ r_edx = R32((u32)(r_eax+0x27cu));
    /* 005d6d9d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d6d9fu); call_ind(t); }
    /* 005d6d9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6da3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6da6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6da7: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 005d6daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dab: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005d6dae: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5d6db3u); f_0064c5c0();
    /* 005d6db3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d6db5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d6db8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d6dbb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_005d6dbe:; BB(0x005d6dbe);
    /* 005d6dbe: cmp dword ptr [ebp - 0x2c], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6dc5: jl 0x5d6dcb */ if ((fS!=fO)) goto L_005d6dcb;
L_005d6dc7:; BB(0x005d6dc7);
    /* 005d6dc7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d6dc9: jmp 0x5d6dcd */ goto L_005d6dcd;
L_005d6dcb:; BB(0x005d6dcb);
    /* 005d6dcb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005d6dcd:; BB(0x005d6dcd);
    /* 005d6dcd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6dcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6dd0: ret  */ FN_RET(0x005d6cd0); r_esp += 4; return;
}

void f_005d6de0(void) /* sub_5D6DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6de0);
    /* 005d6de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6de3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6de6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d6de9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6dec: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6df1u); f_005d52e0();
    /* 005d6df1: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6df4: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005d6df7: movsx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 005d6dfb: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6dfe: je 0x5d6e0c */ if (fZ) goto L_005d6e0c;
L_005d6e00:; BB(0x005d6e00);
    /* 005d6e00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e03: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6e08u); f_005d52e0();
    /* 005d6e08: mov byte ptr [eax + 0x29], 1 */ W8((u32)(r_eax+0x29u), 0x1u);
L_005d6e0c:; BB(0x005d6e0c);
    /* 005d6e0c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e0f: mov byte ptr [edx + 0x4b1], 1 */ W8((u32)(r_edx+0x4b1u), 0x1u);
    /* 005d6e16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e1b: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5d6e20u); f_005d6bd0();
    /* 005d6e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e21: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d6e26u); f_0064c8a0();
    /* 005d6e26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6e29: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d6e2c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d6e2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d6e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6e36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e3a: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5d6e3fu); f_005d5cf0();
    /* 005d6e3f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e42: mov byte ptr [edx + 0x4b1], 0 */ W8((u32)(r_edx+0x4b1u), 0x0u);
    /* 005d6e49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6e4c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d6e4f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d6e55: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005d6e58: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005d6e5b: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d6e60u); f_0063b0a0();
    /* 005d6e60: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6e63: ret  */ FN_RET(0x005d6de0); r_esp += 4; return;
}

void f_005d6e70(void) /* sub_5D6E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6e70);
    /* 005d6e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6e73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6e76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e77: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d6e7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6e7d: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6e82u); f_005d52e0();
    /* 005d6e82: mov al, byte ptr [eax + 0x29] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005d6e85: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005d6e88: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005d6e8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6e8e: je 0x5d6eb1 */ if (fZ) goto L_005d6eb1;
L_005d6e90:; BB(0x005d6e90);
    /* 005d6e90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6e93: call 0x5d6c60 */ r_esp -= 4; W32(r_esp, 0x5d6e98u); f_005d6c60();
    /* 005d6e98: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d6e9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6e9d: je 0x5d6eb1 */ if (fZ) goto L_005d6eb1;
L_005d6e9f:; BB(0x005d6e9f);
    /* 005d6e9f: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d6ea5: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d6eaau); f_005da7b0();
    /* 005d6eaa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6eaf: je 0x5d6eb5 */ if (fZ) goto L_005d6eb5;
L_005d6eb1:; BB(0x005d6eb1);
    /* 005d6eb1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d6eb3: jmp 0x5d6ed0 */ goto L_005d6ed0;
L_005d6eb5:; BB(0x005d6eb5);
    /* 005d6eb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6eb8: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d6ebdu); f_005d5a50();
    /* 005d6ebd: mov esi, eax */ r_esi = r_eax;
    /* 005d6ebf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d6ec2: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5d6ec7u); f_005d6bd0();
    /* 005d6ec7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6ec9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6ecb: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005d6ece: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_005d6ed0:; BB(0x005d6ed0);
    /* 005d6ed0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d6ed1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6ed4: ret  */ FN_RET(0x005d6e70); r_esp += 4; return;
}

void f_005d6ee0(void) /* sub_5D6EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6ee0);
    /* 005d6ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6ee3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6ee6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6ee9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005d6eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6eef: jne 0x5d6f16 */ if (!fZ) goto L_005d6f16;
L_005d6ef1:; BB(0x005d6ef1);
    /* 005d6ef1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6ef4: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6ef9u); f_005d52e0();
    /* 005d6ef9: mov cl, byte ptr [eax + 0x29] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005d6efc: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 005d6eff: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005d6f03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6f05: je 0x5d6f83 */ if (fZ) goto L_005d6f83;
L_005d6f07:; BB(0x005d6f07);
    /* 005d6f07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f0a: call 0x5d6c60 */ r_esp -= 4; W32(r_esp, 0x5d6f0fu); f_005d6c60();
    /* 005d6f0f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6f12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6f14: je 0x5d6f83 */ if (fZ) goto L_005d6f83;
L_005d6f16:; BB(0x005d6f16);
    /* 005d6f16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f19: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6f1eu); f_005d52e0();
    /* 005d6f1e: mov byte ptr [eax + 0x29], 0 */ W8((u32)(r_eax+0x29u), 0x0u);
    /* 005d6f22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f27: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5d6f2cu); f_005d6bd0();
    /* 005d6f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f2d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d6f32u); f_0064c8a0();
    /* 005d6f32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6f35: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d6f38: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d6f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6f3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f3f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f43: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005d6f46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f47: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d6f4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f4b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f4e: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d6f53u); f_005d5a90();
    /* 005d6f53: mov ecx, eax */ r_ecx = r_eax;
    /* 005d6f55: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5d6f5au); f_0064c630();
    /* 005d6f5a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d6f5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f5e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f64: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d6f69u); f_005d5af0();
    /* 005d6f69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f6c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d6f6f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d6f74: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d6f77: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005d6f7a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d6f7fu); f_0063b0a0();
    /* 005d6f7f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d6f81: jmp 0x5d6f85 */ goto L_005d6f85;
L_005d6f83:; BB(0x005d6f83);
    /* 005d6f83: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005d6f85:; BB(0x005d6f85);
    /* 005d6f85: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6f87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6f88: ret 4 */ FN_RET(0x005d6ee0); r_esp += 8; return;
}

void f_005d6f90(void) /* sub_5D6F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6f90);
    /* 005d6f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6f93: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6f96: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d6f99: mov dword ptr [ebp - 0x20], 0x1388 */ W32((u32)(r_ebp+0xffffffe0u), 0x1388u);
    /* 005d6fa0: mov dword ptr [ebp - 0x1c], 0x2710 */ W32((u32)(r_ebp+0xffffffe4u), 0x2710u);
    /* 005d6fa7: mov dword ptr [ebp - 0x18], 0xc350 */ W32((u32)(r_ebp+0xffffffe8u), 0xc350u);
    /* 005d6fae: mov dword ptr [ebp - 0x14], 0x186a0 */ W32((u32)(r_ebp+0xffffffecu), 0x186a0u);
    /* 005d6fb5: mov dword ptr [ebp - 0x10], 0xf4240 */ W32((u32)(r_ebp+0xfffffff0u), 0xf4240u);
    /* 005d6fbc: mov dword ptr [ebp - 0xc], 0x5f5e100 */ W32((u32)(r_ebp+0xfffffff4u), 0x5f5e100u);
    /* 005d6fc3: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 005d6fca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d6fcd: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6fd2u); f_005d52e0();
    /* 005d6fd2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d6fd5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d6fd8: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d6fddu); f_005d52e0();
    /* 005d6fdd: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d6fe0: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 005d6fe3: movsx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 005d6fe7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6fea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d6fed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d6ff0: call 0x5d6c60 */ r_esp -= 4; W32(r_esp, 0x5d6ff5u); f_005d6c60();
    /* 005d6ff5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d6ff8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6ffa: je 0x5d7029 */ if (fZ) goto L_005d7029;
L_005d6ffc:; BB(0x005d6ffc);
    /* 005d6ffc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d6fff: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d7004u); f_005d52e0();
    /* 005d7004: mov al, byte ptr [eax + 0x29] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005d7007: mov byte ptr [ebp - 0x26], al */ W8((u32)(r_ebp+0xffffffdau), (u8)r_eax);
    /* 005d700a: movzx ecx, byte ptr [ebp - 0x26] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdau));
    /* 005d700e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7010: jne 0x5d7029 */ if (!fZ) goto L_005d7029;
L_005d7012:; BB(0x005d7012);
    /* 005d7012: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7015: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d701au); f_005d52e0();
    /* 005d701a: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d701d: mov byte ptr [ebp - 0x27], dl */ W8((u32)(r_ebp+0xffffffd9u), (u8)r_edx);
    /* 005d7020: movsx eax, byte ptr [ebp - 0x27] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd9u));
    /* 005d7024: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7027: jne 0x5d702d */ if (!fZ) goto L_005d702d;
L_005d7029:; BB(0x005d7029);
    /* 005d7029: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d702b: jmp 0x5d707d */ goto L_005d707d;
L_005d702d:; BB(0x005d702d);
    /* 005d702d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7030: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d7035u); f_005d5a50();
    /* 005d7035: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7038: cmp eax, dword ptr [ebp + ecx*4 - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d703c: jl 0x5d7057 */ if ((fS!=fO)) goto L_005d7057;
L_005d703e:; BB(0x005d703e);
    /* 005d703e: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7042: jg 0x5d7057 */ if ((!fZ&&fS==fO)) goto L_005d7057;
L_005d7044:; BB(0x005d7044);
    /* 005d7044: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7047: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d704a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d704d: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7051: jne 0x5d7055 */ if (!fZ) goto L_005d7055;
L_005d7053:; BB(0x005d7053);
    /* 005d7053: jmp 0x5d7057 */ goto L_005d7057;
L_005d7055:; BB(0x005d7055);
    /* 005d7055: jmp 0x5d702d */ goto L_005d702d;
L_005d7057:; BB(0x005d7057);
    /* 005d7057: cmp dword ptr [ebp - 0x24], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d705b: jle 0x5d7064 */ if ((fZ||fS!=fO)) goto L_005d7064;
L_005d705d:; BB(0x005d705d);
    /* 005d705d: mov dword ptr [ebp - 0x24], 7 */ W32((u32)(r_ebp+0xffffffdcu), 0x7u);
L_005d7064:; BB(0x005d7064);
    /* 005d7064: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7067: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d706a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d706b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d706e: call 0x5d7090 */ r_esp -= 4; W32(r_esp, 0x5d7073u); f_005d7090();
    /* 005d7073: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7076: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d707bu); f_0063b0a0();
    /* 005d707b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005d707d:; BB(0x005d707d);
    /* 005d707d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d707f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7080: ret  */ FN_RET(0x005d6f90); r_esp += 4; return;
}

