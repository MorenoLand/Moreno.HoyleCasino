#include "protos.h"

void f_0062a810(void) /* ??_G_com_error@@UAEPAXI@Z_338 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a810);
    /* 0062a810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a811: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a81a: call 0x629f50 */ r_esp -= 4; W32(r_esp, 0x62a81fu); f_00629f50();
    /* 0062a81f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062a822: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062a825: je 0x62a833 */ if (fZ) goto L_0062a833;
L_0062a827:; BB(0x0062a827);
    /* 0062a827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a82a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a82b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62a830u); f_00686cae();
    /* 0062a830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a833:; BB(0x0062a833);
    /* 0062a833: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a836: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a839: ret 4 */ FN_RET(0x0062a810); r_esp += 8; return;
}

void f_0062a840(void) /* ??_G_com_error@@UAEPAXI@Z_339 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a840);
    /* 0062a840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a841: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a84a: call 0x62a7a0 */ r_esp -= 4; W32(r_esp, 0x62a84fu); f_0062a7a0();
    /* 0062a84f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062a852: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062a855: je 0x62a863 */ if (fZ) goto L_0062a863;
L_0062a857:; BB(0x0062a857);
    /* 0062a857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a85a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a85b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62a860u); f_00686cae();
    /* 0062a860: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a863:; BB(0x0062a863);
    /* 0062a863: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a866: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a869: ret 4 */ FN_RET(0x0062a840); r_esp += 8; return;
}

void f_0062ae50(void) /* ?GetStatus@COleDateTime@ATL@@QBE?AW4DateTimeStatus@12@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ae50);
    /* 0062ae50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ae53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ae57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ae5a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0062ae5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ae5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ae60: ret  */ FN_RET(0x0062ae50); r_esp += 4; return;
}

void f_0062ae70(void) /* ??_G_com_error@@UAEPAXI@Z_340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ae70);
    /* 0062ae70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ae73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ae77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ae7a: call 0x62a900 */ r_esp -= 4; W32(r_esp, 0x62ae7fu); f_0062a900();
    /* 0062ae7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ae82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ae85: je 0x62ae93 */ if (fZ) goto L_0062ae93;
L_0062ae87:; BB(0x0062ae87);
    /* 0062ae87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ae8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ae90u); f_00686cae();
    /* 0062ae90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ae93:; BB(0x0062ae93);
    /* 0062ae93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ae96: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ae98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ae99: ret 4 */ FN_RET(0x0062ae70); r_esp += 8; return;
}

void f_0062be7e(void) /* _WinMain@16_74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062be7e);
    /* 0062be7e: jmp 0x62bf61 */ f_0062bf61(); return;
}

void f_0062bf61(void) /* _WinMain@16_74_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bf61);
    /* 0062bf61: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bf63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bf64: ret 4 */ FN_RET(0x0062bf61); r_esp += 8; return;
}

void f_0062c012(void) /* _WinMain@16_75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c012);
    /* 0062c012: jmp 0x62c0b0 */ f_0062c0b0(); return;
}

void f_0062c025(void) /* _WinMain@16_76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c025);
    /* 0062c025: jmp 0x62c0b0 */ f_0062c0b0(); return;
}

void f_0062c0b0(void) /* _WinMain@16_75_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c0b0);
    /* 0062c0b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062c0b3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c0b5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62c0bau); f_00686d72();
    /* 0062c0ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c0bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c0bd: ret 0x10 */ FN_RET(0x0062c0b0); r_esp += 20; return;
}

void f_0062c3b0(void) /* _WinMain@16_77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c3b0);
    /* 0062c3b0: jmp 0x62c61e */ f_0062c61e(); return;
}

void f_0062c3c0(void) /* _WinMain@16_78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c3c0);
    /* 0062c3c0: jmp 0x62c61e */ f_0062c61e(); return;
}

void f_0062c61e(void) /* _WinMain@16_77_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062c61e);
    /* 0062c61e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062c61f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c621: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c622: ret 0x14 */ FN_RET(0x0062c61e); r_esp += 24; return;
}

void f_0062caf1(void) /* _WinMain@16_79 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062caf1);
    /* 0062caf1: jmp 0x62ccd6 */ f_0062ccd6(); return;
}

void f_0062caff(void) /* _WinMain@16_80_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062caff);
L_0062caff:; BB(0x0062caff);
    /* 0062caff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062cb02: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb05: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062cb08: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0062cb0e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062cb11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062cb14: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062cb16: jae 0x62ccd6 */ if (!fC) goto L_0062ccd6;
L_0062cb1c:; BB(0x0062cb1c);
    /* 0062cb1c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0062cb22: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062cb25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062cb28: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062cb2b: lea ecx, [edx + eax + 8] */ r_ecx = (u32)(r_edx+r_eax+0x8u);
    /* 0062cb2f: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0062cb35: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0062cb3f:; BB(0x0062cb3f);
    /* 0062cb3f: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062cb45: cmp dword ptr [edx*4 + 0x761f44], 0 */ {  u32 a = R32((u32)(r_edx*4+0x761f44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cb4d: je 0x62cb77 */ if (fZ) goto L_0062cb77;
L_0062cb4f:; BB(0x0062cb4f);
    /* 0062cb4f: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0062cb55: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062cb5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062cb5d: cmp edx, dword ptr [ecx*4 + 0x761f1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*4+0x761f1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cb64: je 0x62cb77 */ if (fZ) goto L_0062cb77;
L_0062cb66:; BB(0x0062cb66);
    /* 0062cb66: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062cb6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb6f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0062cb75: jmp 0x62cb3f */ goto L_0062cb3f;
L_0062cb77:; BB(0x0062cb77);
    /* 0062cb77: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062cb7d: cmp dword ptr [ecx*4 + 0x761f44], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x761f44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cb85: je 0x62ccd1 */ if (fZ) goto L_0062ccd1;
L_0062cb8b:; BB(0x0062cb8b);
    /* 0062cb8b: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062cb91: mov eax, dword ptr [edx*4 + 0x761f44] */ r_eax = R32((u32)(r_edx*4+0x761f44u));
    /* 0062cb98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cb99: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0062cb9f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0062cba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cba3: push 0x6d97b0 */ { u32 v = 0x6d97b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cba8: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 0062cbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbaf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62cbb5u); call_ind(t); }
    /* 0062cbb5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cbb8: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbbd: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 0062cbc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbc4: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x62cbc9u); f_005ea9c0();
    /* 0062cbc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cbcc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062cbcf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cbd3: je 0x62ccd1 */ if (fZ) goto L_0062ccd1;
L_0062cbd9:; BB(0x0062cbd9);
    /* 0062cbd9: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 0062cbdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbe0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62cbe5u); f_0062fde0();
    /* 0062cbe5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cbe8: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbed: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62cbf2u); f_0062fde0();
    /* 0062cbf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cbf5: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 0062cbfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cbfc: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0062cbff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc00: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0062cc06: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062cc09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc0a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0062cc10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062cc12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc13: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0062cc19: call 0x62b220 */ r_esp -= 4; W32(r_esp, 0x62cc1eu); f_0062b220();
    /* 0062cc1e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0062cc24: cmp dword ptr [eax], 0x434e5953 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x434e5953u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cc2a: jne 0x62cc92 */ if (!fZ) goto L_0062cc92;
L_0062cc2c:; BB(0x0062cc2c);
    /* 0062cc2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062cc2f: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0062cc35: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0062cc3f: jmp 0x62cc50 */ goto L_0062cc50;
L_0062cc41:; BB(0x0062cc41);
    /* 0062cc41: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062cc47: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062cc4a: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
L_0062cc50:; BB(0x0062cc50);
    /* 0062cc50: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0062cc56: cmp eax, dword ptr [ebp - 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff60u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062cc5c: jge 0x62cc92 */ if ((fS==fO)) goto L_0062cc92;
L_0062cc5e:; BB(0x0062cc5e);
    /* 0062cc5e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0062cc64: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0062cc67: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062cc6a: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0062cc70: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0062cc73: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062cc76: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062cc78: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0062cc7e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0062cc81: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0062cc87: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062cc8a: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0062cc90: jmp 0x62cc41 */ goto L_0062cc41;
L_0062cc92:; BB(0x0062cc92);
    /* 0062cc92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cc95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc98: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0062cc9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cc9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062cca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cca3: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62cca9u); call_ind(t); }
    /* 0062cca9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ccac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ccaf: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0062ccb5: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 0062ccbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ccbc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ccc1u); f_00686cae();
    /* 0062ccc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ccc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ccc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ccc8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62ccceu); call_ind(t); }
    /* 0062ccce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ccd1:; BB(0x0062ccd1);
    /* 0062ccd1: jmp 0x62caff */ goto L_0062caff;
L_0062ccd6:; BB(0x0062ccd6);
    /* 0062ccd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ccd9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ccdb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62cce0u); f_00686d72();
    /* 0062cce0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062cce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cce3: ret  */ FN_RET(0x0062caff); r_esp += 4; return;
}

void f_0062ccd1(void) /* _WinMain@16_80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ccd1);
    /* 0062ccd1: jmp 0x62caff */ f_0062caff(); return;
}

void f_0062ccd6(void) /* _WinMain@16_79_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ccd6);
    /* 0062ccd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ccd9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ccdb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62cce0u); f_00686d72();
    /* 0062cce0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062cce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cce3: ret  */ FN_RET(0x0062ccd6); r_esp += 4; return;
}

void f_0062cdd0(void) /* ??_G_com_error@@UAEPAXI@Z_341 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062cdd0);
    /* 0062cdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062cdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062cdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062cdd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cdda: call 0x62afa0 */ r_esp -= 4; W32(r_esp, 0x62cddfu); f_0062afa0();
    /* 0062cddf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062cde2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062cde5: je 0x62cdf3 */ if (fZ) goto L_0062cdf3;
L_0062cde7:; BB(0x0062cde7);
    /* 0062cde7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cdea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cdeb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62cdf0u); f_00686cae();
    /* 0062cdf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062cdf3:; BB(0x0062cdf3);
    /* 0062cdf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cdf6: mov esp, ebp */ r_esp = r_ebp;
    /* 0062cdf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cdf9: ret 4 */ FN_RET(0x0062cdd0); r_esp += 8; return;
}

void f_0062d1d5(void) /* _WinMain@16_81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d1d5);
    /* 0062d1d5: jmp 0x62d308 */ f_0062d308(); return;
}

void f_0062d308(void) /* _WinMain@16_81_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d308);
    /* 0062d308: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d30a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d30b: ret  */ FN_RET(0x0062d308); r_esp += 4; return;
}

void f_0062da70(void) /* ?IsAppThemed@_ThemeHelper@@SAHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062da70);
    /* 0062da70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062da71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062da73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062da75: push 0x6ab74e */ { u32 v = 0x6ab74eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062da7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062da80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062da81: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062da86: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062da88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062da89: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062da8c: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062da92: mov eax, dword ptr [0x162ee60] */ r_eax = R32((u32)(0x162ee60u));
    /* 0062da97: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062da9a: jne 0x62dad0 */ if (!fZ) goto L_0062dad0;
L_0062da9c:; BB(0x0062da9c);
    /* 0062da9c: mov ecx, dword ptr [0x162ee60] */ r_ecx = R32((u32)(0x162ee60u));
    /* 0062daa2: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062daa5: mov dword ptr [0x162ee60], ecx */ W32((u32)(0x162ee60u), r_ecx);
    /* 0062daab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062dab2: mov ecx, 0x162ee20 */ r_ecx = 0x162ee20u;
    /* 0062dab7: call 0x62d8f0 */ r_esp -= 4; W32(r_esp, 0x62dabcu); f_0062d8f0();
    /* 0062dabc: push 0x6b1b40 */ { u32 v = 0x6b1b40u; r_esp -= 4; W32(r_esp, v); }
    /* 0062dac1: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x62dac6u); f_00686f8f();
    /* 0062dac6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062dac9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0062dad0:; BB(0x0062dad0);
    /* 0062dad0: mov eax, 0x162ee20 */ r_eax = 0x162ee20u;
    /* 0062dad5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062dad8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062dadf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062dae0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062dae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dae3: ret  */ FN_RET(0x0062da70); r_esp += 4; return;
}

void f_0062db06(void) /* _WinMain@16_82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062db06);
    /* 0062db06: jmp 0x62db9d */ f_0062db9d(); return;
}

void f_0062db9d(void) /* _WinMain@16_82_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062db9d);
    /* 0062db9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062db9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dba0: ret  */ FN_RET(0x0062db9d); r_esp += 4; return;
}

void f_0062dd00(void) /* ?GetImageHorzMargin@CMFCButton@@MBEHXZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062dd00);
    /* 0062dd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0062dd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062dd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062dd07: mov eax, 0xa */ r_eax = 0xau;
    /* 0062dd0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062dd0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062dd0f: ret  */ FN_RET(0x0062dd00); r_esp += 4; return;
}

void f_0062de3d(void) /* _WinMain@16_83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062de3d);
    /* 0062de3d: jmp 0x62df69 */ f_0062df69(); return;
}

void f_0062de66(void) /* _WinMain@16_84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062de66);
    /* 0062de66: jmp 0x62df01 */ f_0062df01(); return;
}

void f_0062df01(void) /* _WinMain@16_84_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062df01);
    /* 0062df01: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062df04: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062df07: mov dword ptr [0x762088], eax */ W32((u32)(0x762088u), r_eax);
    /* 0062df0c: mov ecx, dword ptr [0x762090] */ r_ecx = R32((u32)(0x762090u));
    /* 0062df12: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062df18: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0062df1b: mov dword ptr [0x762098], eax */ W32((u32)(0x762098u), r_eax);
    /* 0062df20: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062df23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062df24: call 0x62dd10 */ r_esp -= 4; W32(r_esp, 0x62df29u); f_0062dd10();
    /* 0062df29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062df2c: cmp dword ptr [0x76208c], 0 */ {  u32 a = R32((u32)(0x76208cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062df33: jne 0x62df45 */ if (!fZ) goto L_0062df45;
L_0062df35:; BB(0x0062df35);
    /* 0062df35: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062df3b: mov eax, dword ptr [0x76208c] */ r_eax = R32((u32)(0x76208cu));
    /* 0062df40: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 0062df43: jmp 0x62df66 */ goto L_0062df66;
L_0062df45:; BB(0x0062df45);
    /* 0062df45: mov ecx, dword ptr [0x762084] */ r_ecx = R32((u32)(0x762084u));
    /* 0062df4b: sub ecx, dword ptr [0x762088] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x762088u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062df51: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062df54: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062df57: add ecx, dword ptr [0x76208c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x76208cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062df5d: mov edx, dword ptr [0x762088] */ r_edx = R32((u32)(0x762088u));
    /* 0062df63: mov dword ptr [edx - 4], ecx */ W32((u32)(r_edx+0xfffffffcu), r_ecx);
L_0062df66:; BB(0x0062df66);
    /* 0062df66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062df69: mov esp, ebp */ r_esp = r_ebp;
    /* 0062df6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062df6c: ret  */ FN_RET(0x0062df01); r_esp += 4; return;
}

void f_0062df69(void) /* _WinMain@16_83_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062df69);
    /* 0062df69: mov esp, ebp */ r_esp = r_ebp;
    /* 0062df6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062df6c: ret  */ FN_RET(0x0062df69); r_esp += 4; return;
}

void f_0062e170(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e170);
    /* 0062e170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e171: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062e175: push 0x6ab778 */ { u32 v = 0x6ab778u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e17a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062e180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e181: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062e184: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062e189: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e18c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062e18f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062e195: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062e198: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e19b: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x62e1a0u); f_0062aea0();
    /* 0062e1a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062e1a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1aa: mov dword ptr [eax], 0x6d9b8c */ W32((u32)(r_eax), 0x6d9b8cu);
    /* 0062e1b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1b3: mov dword ptr [ecx + 0x408], 0 */ W32((u32)(r_ecx+0x408u), 0x0u);
    /* 0062e1bd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1c1: je 0x62e1c9 */ if (fZ) goto L_0062e1c9;
L_0062e1c3:; BB(0x0062e1c3);
    /* 0062e1c3: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062e1c7: jne 0x62e202 */ if (!fZ) goto L_0062e202;
L_0062e1c9:; BB(0x0062e1c9);
    /* 0062e1c9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1cc: mov dword ptr [edx + 0x40c], 0 */ W32((u32)(r_edx+0x40cu), 0x0u);
    /* 0062e1d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1d9: mov dword ptr [eax + 0x410], 0 */ W32((u32)(r_eax+0x410u), 0x0u);
    /* 0062e1e3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1e6: mov dword ptr [ecx + 0x414], 0 */ W32((u32)(r_ecx+0x414u), 0x0u);
    /* 0062e1f0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e1f3: mov dword ptr [edx + 0x418], 0 */ W32((u32)(r_edx+0x418u), 0x0u);
    /* 0062e1fd: jmp 0x62e2b4 */ goto L_0062e2b4;
L_0062e202:; BB(0x0062e202);
    /* 0062e202: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e205: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e208: mov dword ptr [eax + 0x40c], ecx */ W32((u32)(r_eax+0x40cu), r_ecx);
    /* 0062e20e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e211: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062e214: mov dword ptr [edx + 0x410], eax */ W32((u32)(r_edx+0x410u), r_eax);
    /* 0062e21a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e21d: mov dword ptr [ecx + 0x418], 4 */ W32((u32)(r_ecx+0x418u), 0x4u);
    /* 0062e227: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e22a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e22d: mov ecx, dword ptr [edx + 0x40c] */ r_ecx = R32((u32)(r_edx+0x40cu));
    /* 0062e233: imul ecx, dword ptr [eax + 0x418] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x418u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e23a: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e23d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e240: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e243: mov edx, dword ptr [edx + 0x40c] */ r_edx = R32((u32)(r_edx+0x40cu));
    /* 0062e249: imul edx, dword ptr [eax + 0x418] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x418u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e250: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062e253: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0062e259: jns 0x62e260 */ if (!fS) goto L_0062e260;
L_0062e25b:; BB(0x0062e25b);
    /* 0062e25b: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062e25c: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062e25f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0062e260:; BB(0x0062e260);
    /* 0062e260: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e262: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e265: mov dword ptr [eax + 0x414], ecx */ W32((u32)(r_eax+0x414u), r_ecx);
    /* 0062e26b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e26e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e271: mov eax, dword ptr [ecx + 0x414] */ r_eax = R32((u32)(r_ecx+0x414u));
    /* 0062e277: imul eax, dword ptr [edx + 0x410] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x410u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e27e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062e281: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062e284: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e285: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62e28au); f_00686d82();
    /* 0062e28a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e28d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062e290: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e293: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e296: mov dword ptr [edx + 0x408], eax */ W32((u32)(r_edx+0x408u), r_eax);
    /* 0062e29c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062e29f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e2a5: mov eax, dword ptr [edx + 0x408] */ r_eax = R32((u32)(r_edx+0x408u));
    /* 0062e2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e2ac: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62e2b1u); f_00686fa2();
    /* 0062e2b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062e2b4:; BB(0x0062e2b4);
    /* 0062e2b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062e2bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e2be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e2c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062e2c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062e2c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e2cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e2cc: ret 8 */ FN_RET(0x0062e170); r_esp += 12; return;
}

void f_0062e575(void) /* _WinMain@16_85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e575);
    /* 0062e575: jmp 0x62e6a8 */ f_0062e6a8(); return;
}

void f_0062e5e6(void) /* _WinMain@16_86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e5e6);
    /* 0062e5e6: jmp 0x62e6a8 */ f_0062e6a8(); return;
}

void f_0062e609(void) /* _WinMain@16_87_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e609);
L_0062e609:; BB(0x0062e609);
    /* 0062e609: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e60c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e60f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062e612: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e615: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e618: jge 0x62e6a8 */ if ((fS==fO)) goto L_0062e6a8;
L_0062e61e:; BB(0x0062e61e);
    /* 0062e61e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e624: imul eax, dword ptr [edx + 0x414] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x414u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e62b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e62e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062e631: imul edx, dword ptr [ecx + 0x418] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x418u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e638: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e63a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062e63d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e640: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e643: imul ecx, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x414u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e64a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e64d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e650: imul eax, dword ptr [edx + 0x418] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x418u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e657: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e659: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062e65c: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062e65f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e662: imul edx, dword ptr [eax + 0x418] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x418u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e669: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e66b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062e66e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062e671: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062e674: jmp 0x62e685 */ goto L_0062e685;
L_0062e676:; BB(0x0062e676);
    /* 0062e676: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e679: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062e67c: add eax, dword ptr [edx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x418u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062e682: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062e685:; BB(0x0062e685);
    /* 0062e685: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062e688: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e68b: jge 0x62e6a3 */ if ((fS==fO)) goto L_0062e6a3;
L_0062e68d:; BB(0x0062e68d);
    /* 0062e68d: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0062e690: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e691: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x62e696u); f_00617b30();
    /* 0062e696: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e699: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e69c: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e69f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062e6a1: jmp 0x62e676 */ goto L_0062e676;
L_0062e6a3:; BB(0x0062e6a3);
    /* 0062e6a3: jmp 0x62e609 */ goto L_0062e609;
L_0062e6a8:; BB(0x0062e6a8);
    /* 0062e6a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e6aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6ab: ret 0x14 */ FN_RET(0x0062e609); r_esp += 24; return;
}

void f_0062e6a3(void) /* _WinMain@16_87 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e6a3);
    /* 0062e6a3: jmp 0x62e609 */ f_0062e609(); return;
}

void f_0062e6a8(void) /* _WinMain@16_85_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e6a8);
    /* 0062e6a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e6aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e6ab: ret 0x14 */ FN_RET(0x0062e6a8); r_esp += 24; return;
}

void f_0062e710(void) /* ?OnGetFont@CMFCCaptionBar@@IAEPAUHFONT__@@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e710);
    /* 0062e710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e711: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e71a: mov eax, dword ptr [eax + 0x408] */ r_eax = R32((u32)(r_eax+0x408u));
    /* 0062e720: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e723: ret  */ FN_RET(0x0062e710); r_esp += 4; return;
}

void f_0062e752(void) /* _WinMain@16_88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e752);
    /* 0062e752: jmp 0x62e83f */ f_0062e83f(); return;
}

void f_0062e75e(void) /* _WinMain@16_89_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e75e);
L_0062e75e:; BB(0x0062e75e);
    /* 0062e75e: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0062e761: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 0062e767: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0062e76a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e76d: call 0x62e360 */ r_esp -= 4; W32(r_esp, 0x62e772u); f_0062e360();
    /* 0062e772: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0062e775: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0062e778: fmul qword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x14u));
    /* 0062e77b: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 0062e77e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062e780: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e783: jne 0x62e83f */ if (!fZ) goto L_0062e83f;
L_0062e789:; BB(0x0062e789);
    /* 0062e789: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0062e78c: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0062e78f: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0062e792: fdiv qword ptr [ebp + 0x14] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0x14u));
    /* 0062e795: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0062e798: fldz  */ FPUSH(0.0);
    /* 0062e79a: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0062e79d: jmp 0x62e7ab */ goto L_0062e7ab;
L_0062e7ab:; BB(0x0062e7ab);
    /* 0062e7ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e7ae: call 0x62e340 */ r_esp -= 4; W32(r_esp, 0x62e7b3u); f_0062e340();
    /* 0062e7b3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062e7b6: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0062e7b9: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 0062e7bc: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0062e7bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062e7c1: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e7c4: jne 0x62e83a */ if (!fZ) goto L_0062e83a;
L_0062e7c6:; BB(0x0062e7c6);
    /* 0062e7c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e7c9: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x62e7ceu); f_0062e6f0();
    /* 0062e7ce: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062e7d1: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0062e7d4: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0062e7d7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e7da: fild dword ptr [edx + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x418u)));
    /* 0062e7e0: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0062e7e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e7e5: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e7eau); f_00686cc0();
    /* 0062e7ea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062e7ed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e7f0: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x62e7f5u); f_0062e6f0();
    /* 0062e7f5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0062e7f8: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0062e7fb: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0062e7fe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e801: fild dword ptr [eax + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x418u)));
    /* 0062e807: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0062e80a: fdiv qword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xcu));
    /* 0062e80d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e80f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e814u); f_00686cc0();
    /* 0062e814: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0062e817: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e81a: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 0062e820: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e823: mov ecx, dword ptr [eax + 0x408] */ r_ecx = R32((u32)(r_eax+0x408u));
    /* 0062e829: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062e82c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062e82f: mov edx, dword ptr [edx + esi] */ r_edx = R32((u32)(r_edx+r_esi));
    /* 0062e832: mov dword ptr [ecx + eax], edx */ W32((u32)(r_ecx+r_eax), r_edx);
    /* 0062e835: jmp 0x62e79f */ f_0062e79f(); return;
L_0062e83a:; BB(0x0062e83a);
    /* 0062e83a: jmp 0x62e75e */ goto L_0062e75e;
L_0062e83f:; BB(0x0062e83f);
    /* 0062e83f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e840: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e842: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e843: ret 0x14 */ FN_RET(0x0062e75e); r_esp += 24; return;
}

void f_0062e79f(void) /* _WinMain@16_89_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e79f);
L_0062e79f:; BB(0x0062e79f);
    /* 0062e79f: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0062e7a2: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 0062e7a8: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0062e7ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e7ae: call 0x62e340 */ r_esp -= 4; W32(r_esp, 0x62e7b3u); f_0062e340();
    /* 0062e7b3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062e7b6: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0062e7b9: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 0062e7bc: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0062e7bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062e7c1: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062e7c4: jne 0x62e83a */ if (!fZ) goto L_0062e83a;
L_0062e7c6:; BB(0x0062e7c6);
    /* 0062e7c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062e7c9: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x62e7ceu); f_0062e6f0();
    /* 0062e7ce: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062e7d1: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0062e7d4: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0062e7d7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e7da: fild dword ptr [edx + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x418u)));
    /* 0062e7e0: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0062e7e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e7e5: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e7eau); f_00686cc0();
    /* 0062e7ea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062e7ed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e7f0: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x62e7f5u); f_0062e6f0();
    /* 0062e7f5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0062e7f8: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0062e7fb: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0062e7fe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e801: fild dword ptr [eax + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x418u)));
    /* 0062e807: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0062e80a: fdiv qword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xcu));
    /* 0062e80d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062e80f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e814u); f_00686cc0();
    /* 0062e814: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0062e817: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e81a: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 0062e820: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062e823: mov ecx, dword ptr [eax + 0x408] */ r_ecx = R32((u32)(r_eax+0x408u));
    /* 0062e829: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062e82c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062e82f: mov edx, dword ptr [edx + esi] */ r_edx = R32((u32)(r_edx+r_esi));
    /* 0062e832: mov dword ptr [ecx + eax], edx */ W32((u32)(r_ecx+r_eax), r_edx);
    /* 0062e835: jmp 0x62e79f */ goto L_0062e79f;
L_0062e83a:; BB(0x0062e83a);
    /* 0062e83a: jmp 0x62e75e */ f_0062e75e(); return;
}

void f_0062e83a(void) /* _WinMain@16_89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e83a);
    /* 0062e83a: jmp 0x62e75e */ f_0062e75e(); return;
}

void f_0062e83f(void) /* _WinMain@16_88_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e83f);
    /* 0062e83f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e840: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e842: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e843: ret 0x14 */ FN_RET(0x0062e83f); r_esp += 24; return;
}

void f_0062e870(void) /* unknown_libname_854 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e870);
    /* 0062e870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e871: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e879: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e87b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e87c: ret  */ FN_RET(0x0062e870); r_esp += 4; return;
}

void f_0062e880(void) /* unknown_libname_855 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e880);
    /* 0062e880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062e881: mov ebp, esp */ r_ebp = r_esp;
    /* 0062e883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062e884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062e887: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062e889: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e88b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e88c: ret  */ FN_RET(0x0062e880); r_esp += 4; return;
}

void f_0062e90c(void) /* _WinMain@16_90_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e90c);
L_0062e90c:; BB(0x0062e90c);
    /* 0062e90c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e90f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062e912: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062e915: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e918: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e91b: jge 0x62e992 */ if ((fS==fO)) goto L_0062e992;
L_0062e91d:; BB(0x0062e91d);
    /* 0062e91d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0062e924: jmp 0x62e92f */ goto L_0062e92f;
L_0062e926:; BB(0x0062e926);
    /* 0062e926: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e929: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e92c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0062e92f:; BB(0x0062e92f);
    /* 0062e92f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e932: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062e935: jge 0x62e98d */ if ((fS==fO)) goto L_0062e98d;
L_0062e937:; BB(0x0062e937);
    /* 0062e937: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0062e93a: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0062e93d: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e942u); f_00686cc0();
    /* 0062e942: mov esi, eax */ r_esi = r_eax;
    /* 0062e944: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e947: imul esi, dword ptr [eax + 0x414] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_eax+0x414u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e94e: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 0062e951: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0062e954: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62e959u); f_00686cc0();
    /* 0062e959: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e95c: imul eax, dword ptr [ecx + 0x418] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x418u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e963: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062e965: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e968: mov eax, dword ptr [edx + 0x408] */ r_eax = R32((u32)(r_edx+0x408u));
    /* 0062e96e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062e971: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e975: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062e978: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e97b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062e97e: imul edi, dword ptr [edx + 0x418] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_edx+0x418u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062e985: mov eax, dword ptr [esi + eax] */ r_eax = R32((u32)(r_esi+r_eax));
    /* 0062e988: mov dword ptr [ecx + edi], eax */ W32((u32)(r_ecx+r_edi), r_eax);
    /* 0062e98b: jmp 0x62e926 */ goto L_0062e926;
L_0062e98d:; BB(0x0062e98d);
    /* 0062e98d: jmp 0x62e90c */ goto L_0062e90c;
L_0062e992:; BB(0x0062e992);
    /* 0062e992: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e995: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062e998: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
    /* 0062e99e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e9a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062e9a4: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 0062e9aa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e9ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062e9b0: mov dword ptr [edx + 0x414], eax */ W32((u32)(r_edx+0x414u), r_eax);
    /* 0062e9b6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e9b9: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 0062e9bf: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0062e9c2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062e9c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062e9c6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62e9cbu); f_00686cae();
    /* 0062e9cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062e9ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062e9d1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062e9d4: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 0062e9da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062e9db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062e9dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0062e9de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062e9df: ret 8 */ FN_RET(0x0062e90c); r_esp += 12; return;
}

void f_0062e98d(void) /* _WinMain@16_90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062e98d);
    /* 0062e98d: jmp 0x62e90c */ f_0062e90c(); return;
}

void f_0062ea44(void) /* _WinMain@16_91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ea44);
    /* 0062ea44: jmp 0x62eb4b */ f_0062eb4b(); return;
}

void f_0062eb0c(void) /* _WinMain@16_92_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eb0c);
    goto L_0062eb0c;
L_0062e9fc:; BB(0x0062e9fc);
    /* 0062e9fc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062e9ff: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062ea01: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0062ea04: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062ea07: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062ea0a: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0062ea0d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ea10: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062ea12: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 0062ea15: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062ea18: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062ea1b: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0062ea1e: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0062ea22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ea24: jne 0x62eb0e */ if (!fZ) goto L_0062eb0e;
L_0062ea2a:; BB(0x0062ea2a);
    /* 0062ea2a: mov cl, byte ptr [ebp - 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062ea2d: mov byte ptr [ebp - 0x14], cl */ W8((u32)(r_ebp+0xffffffecu), (u8)r_ecx);
    /* 0062ea30: cmp byte ptr [ebp - 0x14], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062ea34: je 0x62ea49 */ if (fZ) goto L_0062ea49;
L_0062ea36:; BB(0x0062ea36);
    /* 0062ea36: cmp byte ptr [ebp - 0x14], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062ea3a: je 0x62ea44 */ if (fZ) goto L_0062ea44;
L_0062ea3c:; BB(0x0062ea3c);
    /* 0062ea3c: cmp byte ptr [ebp - 0x14], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062ea40: je 0x62ea66 */ if (fZ) goto L_0062ea66;
L_0062ea42:; BB(0x0062ea42);
    /* 0062ea42: jmp 0x62eab7 */ goto L_0062eab7;
L_0062ea44:; BB(0x0062ea44);
    /* 0062ea44: jmp 0x62eb4b */ f_0062eb4b(); return;
L_0062ea49:; BB(0x0062ea49);
    /* 0062ea49: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0062ea4d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062ea4f: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0062ea53: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062ea55: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062ea58: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0062ea5b: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0062ea61: jmp 0x62eb0c */ goto L_0062eb0c;
L_0062ea66:; BB(0x0062ea66);
    /* 0062ea66: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062ea69: movzx dx, byte ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 0062ea6d: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 0062ea71: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ea74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ea77: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0062ea7a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062ea7d: movzx dx, byte ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 0062ea81: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 0062ea85: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ea88: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ea8b: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0062ea8e: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0062ea92: movzx edx, word ptr [ebp - 4] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0062ea96: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062ea99: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ea9b: movzx eax, word ptr [ebp - 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff0u));
    /* 0062ea9f: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eaa2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eaa4: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0062eaa7: movzx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff0u));
    /* 0062eaab: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0062eaaf: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062eab1: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0062eab5: jmp 0x62eb0c */ goto L_0062eb0c;
L_0062eab7:; BB(0x0062eab7);
    /* 0062eab7: mov al, byte ptr [ebp - 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062eaba: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 0062eabd: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0062eac1: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0062eac5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062eac7: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0062eacb:; BB(0x0062eacb);
    /* 0062eacb: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0062eacf: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 0062ead2: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062ead5: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0062ead8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062eada: jle 0x62eafa */ if ((fZ||fS!=fO)) goto L_0062eafa;
L_0062eadc:; BB(0x0062eadc);
    /* 0062eadc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062eadf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062eae2: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0062eae4: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0062eae6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062eae9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062eaec: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0062eaef: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062eaf2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062eaf5: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0062eaf8: jmp 0x62eacb */ goto L_0062eacb;
L_0062eafa:; BB(0x0062eafa);
    /* 0062eafa: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0062eafe: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062eb01: je 0x62eb0c */ if (fZ) goto L_0062eb0c;
L_0062eb03:; BB(0x0062eb03);
    /* 0062eb03: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062eb06: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062eb09: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
L_0062eb0c:; BB(0x0062eb0c);
    /* 0062eb0c: jmp 0x62eb46 */ goto L_0062eb46;
L_0062eb0e:; BB(0x0062eb0e);
    /* 0062eb0e: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0062eb12: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0062eb16: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb18: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0062eb1c: mov dl, byte ptr [ebp - 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062eb1f: mov byte ptr [ebp - 0xb], dl */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_edx);
L_0062eb22:; BB(0x0062eb22);
    /* 0062eb22: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0062eb26: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 0062eb29: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062eb2c: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0062eb2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062eb31: jle 0x62eb46 */ if ((fZ||fS!=fO)) goto L_0062eb46;
L_0062eb33:; BB(0x0062eb33);
    /* 0062eb33: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062eb36: mov al, byte ptr [ebp - 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff5u))) & 0xffu);
    /* 0062eb39: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0062eb3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062eb3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb41: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0062eb44: jmp 0x62eb22 */ goto L_0062eb22;
L_0062eb46:; BB(0x0062eb46);
    /* 0062eb46: jmp 0x62e9fc */ goto L_0062e9fc;
}

void f_0062eb4b(void) /* _WinMain@16_91_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eb4b);
    /* 0062eb4b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062eb4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062eb4e: ret  */ FN_RET(0x0062eb4b); r_esp += 4; return;
}

void f_0062eb6d(void) /* _WinMain@16_92_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eb6d);
L_0062eb6d:; BB(0x0062eb6d);
    /* 0062eb6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062eb70: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062eb73: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0062eb76: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0062eb7a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062eb7d: jge 0x62ec05 */ if ((fS==fO)) goto L_0062ec05;
L_0062eb83:; BB(0x0062eb83);
    /* 0062eb83: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0062eb8a: jmp 0x62eb95 */ goto L_0062eb95;
L_0062eb8c:; BB(0x0062eb8c);
    /* 0062eb8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062eb8f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062eb92: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0062eb95:; BB(0x0062eb95);
    /* 0062eb95: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0062eb99: cmp dword ptr [ebp - 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062eb9c: jge 0x62ebf1 */ if ((fS==fO)) goto L_0062ebf1;
L_0062eb9e:; BB(0x0062eb9e);
    /* 0062eb9e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062eba1: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0062eba4: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0062eba8: mov dl, byte ptr [eax + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0062ebab: mov byte ptr [ebp - 0xa], dl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_edx);
    /* 0062ebae: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062ebb1: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ebb4: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0062ebb7: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0062ebba: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0062ebbd: mov dl, byte ptr [ebp - 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062ebc0: mov byte ptr [ebp - 0xc], dl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_edx);
    /* 0062ebc3: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0062ebc6: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0062ebc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ebca: mov ecx, esp */ r_ecx = r_esp;
    /* 0062ebcc: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0062ebd0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0062ebd3: mov al, byte ptr [ebp - 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062ebd6: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0062ebd9: call 0x617af0 */ r_esp -= 4; W32(r_esp, 0x62ebdeu); f_00617af0();
    /* 0062ebde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ebe1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062ebe4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062ebe6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0062ebe9: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062ebec: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0062ebef: jmp 0x62eb8c */ goto L_0062eb8c;
L_0062ebf1:; BB(0x0062ebf1);
    /* 0062ebf1: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0062ebf5: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062ebf8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062ebfb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ebfd: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0062ec00: jmp 0x62eb6d */ goto L_0062eb6d;
L_0062ec05:; BB(0x0062ec05);
    /* 0062ec05: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ec07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ec08: ret  */ FN_RET(0x0062eb6d); r_esp += 4; return;
}

void f_0062ec10(void) /* ??_G_com_error@@UAEPAXI@Z_342 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ec10);
    /* 0062ec10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec11: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ec13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ec17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ec1a: call 0x62e2d0 */ r_esp -= 4; W32(r_esp, 0x62ec1fu); f_0062e2d0();
    /* 0062ec1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ec22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062ec25: je 0x62ec33 */ if (fZ) goto L_0062ec33;
L_0062ec27:; BB(0x0062ec27);
    /* 0062ec27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ec2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ec30u); f_00686cae();
    /* 0062ec30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ec33:; BB(0x0062ec33);
    /* 0062ec33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ec36: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ec38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ec39: ret 4 */ FN_RET(0x0062ec10); r_esp += 8; return;
}

void f_0062f8b0(void) /* ??_G_com_error@@UAEPAXI@Z_343 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f8b0);
    /* 0062f8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062f8b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f8ba: call 0x62ecf0 */ r_esp -= 4; W32(r_esp, 0x62f8bfu); f_0062ecf0();
    /* 0062f8bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f8c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062f8c5: je 0x62f8d3 */ if (fZ) goto L_0062f8d3;
L_0062f8c7:; BB(0x0062f8c7);
    /* 0062f8c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f8ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62f8d0u); f_00686cae();
    /* 0062f8d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f8d3:; BB(0x0062f8d3);
    /* 0062f8d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f8d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f8d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f8d9: ret 4 */ FN_RET(0x0062f8b0); r_esp += 8; return;
}

void f_0062f900(void) /* ??3@YAXPAXABU_DebugHeapTag_t@std@@PADH@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f900);
    /* 0062f900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f901: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f903: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f906: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062f908: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f909: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062f90c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f90d: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x62f912u); f_00686ec0();
    /* 0062f912: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f916: ret  */ FN_RET(0x0062f900); r_esp += 4; return;
}

void f_0062fd1a(void) /* _WinMain@16_92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fd1a);
    /* 0062fd1a: jmp 0x62fdd3 */ f_0062fdd3(); return;
}

void f_0062fdd3(void) /* _WinMain@16_92_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fdd3);
    /* 0062fdd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fdd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fdd6: ret  */ FN_RET(0x0062fdd3); r_esp += 4; return;
}

void f_00630d5c(void) /* _WinMain@16_93 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630d5c);
    /* 00630d5c: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630d7a(void) /* _WinMain@16_94 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630d7a);
    /* 00630d7a: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630d99(void) /* _WinMain@16_95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630d99);
    /* 00630d99: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630db7(void) /* _WinMain@16_96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630db7);
    /* 00630db7: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630dd5(void) /* _WinMain@16_97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630dd5);
    /* 00630dd5: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630df4(void) /* _WinMain@16_98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630df4);
    /* 00630df4: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e12(void) /* _WinMain@16_99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e12);
    /* 00630e12: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e30(void) /* _WinMain@16_100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e30);
    /* 00630e30: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e4f(void) /* _WinMain@16_101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e4f);
    /* 00630e4f: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e6d(void) /* _WinMain@16_102 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e6d);
    /* 00630e6d: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e80(void) /* _WinMain@16_103 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e80);
    /* 00630e80: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630e92(void) /* _WinMain@16_104 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630e92);
    /* 00630e92: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630ea5(void) /* _WinMain@16_105 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630ea5);
    /* 00630ea5: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630eb8(void) /* _WinMain@16_106 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630eb8);
    /* 00630eb8: jmp 0x630f3d */ f_00630f3d(); return;
}

void f_00630f3d(void) /* _WinMain@16_93_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630f3d);
    /* 00630f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630f3e: ret  */ FN_RET(0x00630f3d); r_esp += 4; return;
}

void f_0063151f(void) /* _WinMain@16_108_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063151f);
L_0063151f:; BB(0x0063151f);
    /* 0063151f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631522: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631525: jg 0x63152f */ if ((!fZ&&fS==fO)) goto L_0063152f;
L_00631527:; BB(0x00631527);
    /* 00631527: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063152a: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063152d: jle 0x63153f */ if ((fZ||fS!=fO)) goto L_0063153f;
L_0063152f:; BB(0x0063152f);
    /* 0063152f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00631532: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631535: jg 0x63159f */ if ((!fZ&&fS==fO)) goto L_0063159f;
L_00631537:; BB(0x00631537);
    /* 00631537: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063153a: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063153d: jg 0x63159f */ if ((!fZ&&fS==fO)) goto L_0063159f;
L_0063153f:; BB(0x0063153f);
    /* 0063153f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631542: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631545: jg 0x63154f */ if ((!fZ&&fS==fO)) goto L_0063154f;
L_00631547:; BB(0x00631547);
    /* 00631547: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063154a: cmp ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063154d: jle 0x63155f */ if ((fZ||fS!=fO)) goto L_0063155f;
L_0063154f:; BB(0x0063154f);
    /* 0063154f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00631552: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631555: jg 0x63159f */ if ((!fZ&&fS==fO)) goto L_0063159f;
L_00631557:; BB(0x00631557);
    /* 00631557: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063155a: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063155d: jg 0x63159f */ if ((!fZ&&fS==fO)) goto L_0063159f;
L_0063155f:; BB(0x0063155f);
    /* 0063155f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00631562: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00631565: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00631568: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063156b: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063156e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00631571: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631574: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631577: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063157a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063157d: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00631580: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00631583: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00631586: imul edx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063158a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063158d: imul eax, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00631591: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00631593: jne 0x63159f */ if (!fZ) goto L_0063159f;
L_00631595:; BB(0x00631595);
    /* 00631595: mov eax, 1 */ r_eax = 0x1u;
    /* 0063159a: jmp 0x6316cd */ f_006316cd(); return;
L_0063159f:; BB(0x0063159f);
    /* 0063159f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006315a2: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006315a5: jge 0x6315af */ if ((fS==fO)) goto L_006315af;
L_006315a7:; BB(0x006315a7);
    /* 006315a7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006315aa: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006315ad: jl 0x6315bf */ if ((fS!=fO)) goto L_006315bf;
L_006315af:; BB(0x006315af);
    /* 006315af: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006315b2: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006315b5: jge 0x631614 */ if ((fS==fO)) goto L_00631614;
L_006315b7:; BB(0x006315b7);
    /* 006315b7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006315ba: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006315bd: jge 0x631614 */ if ((fS==fO)) goto L_00631614;
L_006315bf:; BB(0x006315bf);
    /* 006315bf: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006315c2: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006315c5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006315c8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006315cb: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 006315ce: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006315d1: jns 0x6315e3 */ if (!fS) goto L_006315e3;
L_006315d3:; BB(0x006315d3);
    /* 006315d3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006315d6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006315d8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006315db: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006315de: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006315e0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_006315e3:; BB(0x006315e3);
    /* 006315e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006315e6: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006315e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006315ec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006315ef: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006315f2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006315f5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006315f8: imul edx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006315fc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006315ff: imul eax, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00631603: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00631605: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00631607: jle 0x631612 */ if ((fZ||fS!=fO)) goto L_00631612;
L_00631609:; BB(0x00631609);
    /* 00631609: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0063160c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063160f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00631612:; BB(0x00631612);
    /* 00631612: jmp 0x631666 */ goto L_00631666;
L_00631614:; BB(0x00631614);
    /* 00631614: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00631617: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063161a: jne 0x631666 */ if (!fZ) goto L_00631666;
L_0063161c:; BB(0x0063161c);
    /* 0063161c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063161f: cmp eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631622: jge 0x631666 */ if ((fS==fO)) goto L_00631666;
L_00631624:; BB(0x00631624);
    /* 00631624: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00631627: cmp ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063162a: je 0x63164a */ if (fZ) goto L_0063164a;
L_0063162c:; BB(0x0063162c);
    /* 0063162c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063162f: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00631632: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00631635: sub eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631638: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063163b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063163d: jle 0x631648 */ if ((fZ||fS!=fO)) goto L_00631648;
L_0063163f:; BB(0x0063163f);
    /* 0063163f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00631642: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00631645: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00631648:; BB(0x00631648);
    /* 00631648: jmp 0x631666 */ goto L_00631666;
L_0063164a:; BB(0x0063164a);
    /* 0063164a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063164d: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00631650: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631653: sub eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00631656: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00631659: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063165b: jle 0x631666 */ if ((fZ||fS!=fO)) goto L_00631666;
L_0063165d:; BB(0x0063165d);
    /* 0063165d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00631660: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00631663: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_00631666:; BB(0x00631666);
    /* 00631666: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00631669: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0063166c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063166f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631672: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00631675: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00631678: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063167b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0063167e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631681: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00631684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631687: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0063168a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063168d: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631690: jne 0x63169c */ if (!fZ) goto L_0063169c;
L_00631692:; BB(0x00631692);
    /* 00631692: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00631695: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631698: jne 0x63169c */ if (!fZ) goto L_0063169c;
L_0063169a:; BB(0x0063169a);
    /* 0063169a: jmp 0x6316c1 */ goto L_006316c1;
L_0063169c:; BB(0x0063169c);
    /* 0063169c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063169f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006316a2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006316a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006316a8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006316a9: idiv dword ptr [ebp + 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0x14u)); if (!d) UNSUP(0x006316a9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006316a9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006316ac: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006316af: mov ecx, dword ptr [eax + edx*8] */ r_ecx = R32((u32)(r_eax+r_edx*8));
    /* 006316b2: mov edx, dword ptr [eax + edx*8 + 4] */ r_edx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 006316b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006316b9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006316bc: jmp 0x63151f */ goto L_0063151f;
L_006316c1:; BB(0x006316c1);
    /* 006316c1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006316c4: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006316c7: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006316ca: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 006316cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006316cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006316d0: ret  */ FN_RET(0x0063151f); r_esp += 4; return;
}

void f_006316cd(void) /* _WinMain@16_107_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006316cd);
    /* 006316cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006316cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006316d0: ret  */ FN_RET(0x006316cd); r_esp += 4; return;
}

void f_00631fa0(void) /* unknown_libname_856 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631fa0);
    /* 00631fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00631fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00631fa7: mov esp, ebp */ r_esp = r_ebp;
    /* 00631fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631faa: ret 4 */ FN_RET(0x00631fa0); r_esp += 8; return;
}

void f_006326a0(void) /* ??1_Mtx_guard@@QAE@XZ_36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006326a0);
    /* 006326a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006326a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006326a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006326a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006326a7: push 0x6bcd54 */ { u32 v = 0x6bcd54u; r_esp -= 4; W32(r_esp, v); }
    /* 006326ac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6326b1u); f_00630f40();
    /* 006326b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006326b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006326b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006326b7: ret  */ FN_RET(0x006326a0); r_esp += 4; return;
}

void f_006326c0(void) /* ??1_Mtx_guard@@QAE@XZ_37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006326c0);
    /* 006326c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006326c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006326c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006326c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006326c7: push 0x6bcd40 */ { u32 v = 0x6bcd40u; r_esp -= 4; W32(r_esp, v); }
    /* 006326cc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6326d1u); f_00630f40();
    /* 006326d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006326d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006326d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006326d7: ret  */ FN_RET(0x006326c0); r_esp += 4; return;
}

void f_00632ca0(void) /* ??1_Mtx_guard@@QAE@XZ_38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632ca0);
    /* 00632ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00632ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632ca7: push 0x6da454 */ { u32 v = 0x6da454u; r_esp -= 4; W32(r_esp, v); }
    /* 00632cac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x632cb1u); f_00630f40();
    /* 00632cb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632cb4: mov esp, ebp */ r_esp = r_ebp;
    /* 00632cb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632cb7: ret  */ FN_RET(0x00632ca0); r_esp += 4; return;
}

void f_00632ff0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632ff0);
    /* 00632ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00632ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632ff7: mov esp, ebp */ r_esp = r_ebp;
    /* 00632ff9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632ffa: ret  */ FN_RET(0x00632ff0); r_esp += 4; return;
}

void f_00634622(void) /* _WinMain@16_107 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634622);
    /* 00634622: jmp 0x6347a9 */ f_006347a9(); return;
}

void f_00634644(void) /* _WinMain@16_108 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634644);
    /* 00634644: jmp 0x6347a9 */ f_006347a9(); return;
}

void f_00634683(void) /* _WinMain@16_109 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634683);
    /* 00634683: jmp 0x6347a9 */ f_006347a9(); return;
}

void f_006346d9(void) /* _WinMain@16_110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006346d9);
    /* 006346d9: jmp 0x6347a9 */ f_006347a9(); return;
}

void f_006347a9(void) /* _WinMain@16_107_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006347a9);
    /* 006347a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006347ac: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006347ae: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6347b3u); f_00686d72();
    /* 006347b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006347b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006347b6: ret 8 */ FN_RET(0x006347a9); r_esp += 12; return;
}

void f_00639930(void) /* ??1CExpandoObject@@UAE@XZ_120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639930);
    /* 00639930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639931: mov ebp, esp */ r_ebp = r_esp;
    /* 00639933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063993a: mov dword ptr [eax], 0x6db6ec */ W32((u32)(r_eax), 0x6db6ecu);
    /* 00639940: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639943: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x639948u); f_005f7260();
    /* 00639948: mov esp, ebp */ r_esp = r_ebp;
    /* 0063994a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063994b: ret  */ FN_RET(0x00639930); r_esp += 4; return;
}

void f_00639de0(void) /* unknown_libname_857 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639de0);
    /* 00639de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639de7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639de9: mov esp, ebp */ r_esp = r_ebp;
    /* 00639deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639dec: ret  */ FN_RET(0x00639de0); r_esp += 4; return;
}

void f_00639e30(void) /* ?GetContextKind@UMSThreadInternalContext@details@Concurrency@@UBE?AW4ContextKind@ContextBase@23@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e30);
    /* 00639e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e37: mov eax, 2 */ r_eax = 0x2u;
    /* 00639e3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e3f: ret  */ FN_RET(0x00639e30); r_esp += 4; return;
}

void f_00639e70(void) /* ??_G_com_error@@UAEPAXI@Z_344 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e70);
    /* 00639e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639e7a: call 0x631800 */ r_esp -= 4; W32(r_esp, 0x639e7fu); f_00631800();
    /* 00639e7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00639e82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00639e85: je 0x639e93 */ if (fZ) goto L_00639e93;
L_00639e87:; BB(0x00639e87);
    /* 00639e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639e8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x639e90u); f_00686cae();
    /* 00639e90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639e93:; BB(0x00639e93);
    /* 00639e93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639e96: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e99: ret 4 */ FN_RET(0x00639e70); r_esp += 8; return;
}

void f_0063a090(void) /* ??_G_com_error@@UAEPAXI@Z_345 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a090);
    /* 0063a090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a091: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063a097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a09a: call 0x639930 */ r_esp -= 4; W32(r_esp, 0x63a09fu); f_00639930();
    /* 0063a09f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063a0a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0063a0a5: je 0x63a0b3 */ if (fZ) goto L_0063a0b3;
L_0063a0a7:; BB(0x0063a0a7);
    /* 0063a0a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a0b0u); f_00686cae();
    /* 0063a0b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a0b3:; BB(0x0063a0b3);
    /* 0063a0b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0b6: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a0b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a0b9: ret 4 */ FN_RET(0x0063a090); r_esp += 8; return;
}

void f_0063aac0(void) /* ?GetDisplayFormat@CImageDisplay@@QAEPBUtagVIDEOINFO@@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063aac0);
    /* 0063aac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063aac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063aac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063aac7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063aaca: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063aacd: mov esp, ebp */ r_esp = r_ebp;
    /* 0063aacf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063aad0: ret  */ FN_RET(0x0063aac0); r_esp += 4; return;
}

void f_0063b5d0(void) /* ??_G_com_error@@UAEPAXI@Z_346 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b5d0);
    /* 0063b5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063b5d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b5da: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x63b5dfu); f_0063a120();
    /* 0063b5df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063b5e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0063b5e5: je 0x63b5f3 */ if (fZ) goto L_0063b5f3;
L_0063b5e7:; BB(0x0063b5e7);
    /* 0063b5e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b5ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63b5f0u); f_00686cae();
    /* 0063b5f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b5f3:; BB(0x0063b5f3);
    /* 0063b5f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b5f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b5f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b5f9: ret 4 */ FN_RET(0x0063b5d0); r_esp += 8; return;
}

void f_0063ef75(void) /* _WinMain@16_111 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063ef75);
    /* 0063ef75: jmp 0x63f1b7 */ f_0063f1b7(); return;
}

void f_0063ef83(void) /* _WinMain@16_112_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063ef83);
L_0063ef83:; BB(0x0063ef83);
    /* 0063ef83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063ef86: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063ef89: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063ef8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063ef8f: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063ef92: jge 0x63f196 */ if ((fS==fO)) goto L_0063f196;
L_0063ef98:; BB(0x0063ef98);
    /* 0063ef98: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0063ef9f: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063efa3: je 0x63efb6 */ if (fZ) goto L_0063efb6;
L_0063efa5:; BB(0x0063efa5);
    /* 0063efa5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063efa8: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0063efab: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0063efae: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 0063efb1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063efb4: jmp 0x63efc5 */ goto L_0063efc5;
L_0063efb6:; BB(0x0063efb6);
    /* 0063efb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063efb9: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0063efbc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0063efbf: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 0063efc2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0063efc5:; BB(0x0063efc5);
    /* 0063efc5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063efc8: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063efcb: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063efce: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063efd1: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063efd5: je 0x63efe9 */ if (fZ) goto L_0063efe9;
L_0063efd7:; BB(0x0063efd7);
    /* 0063efd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063efda: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0063efdd: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0063efe0: mov dl, byte ptr [ecx + eax + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x8u))) & 0xffu);
    /* 0063efe4: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
    /* 0063efe7: jmp 0x63eff9 */ goto L_0063eff9;
L_0063efe9:; BB(0x0063efe9);
    /* 0063efe9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063efec: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0063efef: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0063eff2: mov dl, byte ptr [ecx + eax + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x8u))) & 0xffu);
    /* 0063eff6: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
L_0063eff9:; BB(0x0063eff9);
    /* 0063eff9: mov al, byte ptr [ebp - 0x1d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe3u))) & 0xffu);
    /* 0063effc: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0063efff: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f003: je 0x63f017 */ if (fZ) goto L_0063f017;
L_0063f005:; BB(0x0063f005);
    /* 0063f005: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f008: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0063f00b: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0063f00e: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 0063f012: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063f015: jmp 0x63f027 */ goto L_0063f027;
L_0063f017:; BB(0x0063f017);
    /* 0063f017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f01a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0063f01d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063f020: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 0063f024: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0063f027:; BB(0x0063f027);
    /* 0063f027: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063f02a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063f02d: movsx edx, byte ptr [ebp - 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f031: cmp edx, 0x43 */ {  u32 a = r_edx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f034: jne 0x63f045 */ if (!fZ) goto L_0063f045;
L_0063f036:; BB(0x0063f036);
    /* 0063f036: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f03a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f03d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63f042u); f_005fb350();
    /* 0063f042: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f045:; BB(0x0063f045);
    /* 0063f045: movsx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f049: cmp ecx, 0x52 */ {  u32 a = r_ecx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f04c: jne 0x63f07e */ if (!fZ) goto L_0063f07e;
L_0063f04e:; BB(0x0063f04e);
    /* 0063f04e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f051: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f055: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f058: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x63f05du); f_005fb3a0();
    /* 0063f05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f05f: je 0x63f07e */ if (fZ) goto L_0063f07e;
L_0063f061:; BB(0x0063f061);
    /* 0063f061: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f065: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f068: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f06b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f06c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f06f: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x63f074u); f_005fb3a0();
    /* 0063f074: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f076: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x63f07bu); f_00606350();
    /* 0063f07b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f07e:; BB(0x0063f07e);
    /* 0063f07e: movsx edx, byte ptr [ebp - 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f082: cmp edx, 0x53 */ {  u32 a = r_edx; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f085: jne 0x63f0a9 */ if (!fZ) goto L_0063f0a9;
L_0063f087:; BB(0x0063f087);
    /* 0063f087: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f08a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f08b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f08e: call 0x5fb7c0 */ r_esp -= 4; W32(r_esp, 0x63f093u); f_005fb7c0();
    /* 0063f093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f095: je 0x63f0a9 */ if (fZ) goto L_0063f0a9;
L_0063f097:; BB(0x0063f097);
    /* 0063f097: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f09a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f09b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f09e: call 0x5fb7c0 */ r_esp -= 4; W32(r_esp, 0x63f0a3u); f_005fb7c0();
    /* 0063f0a3: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0063f0a6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0063f0a9:; BB(0x0063f0a9);
    /* 0063f0a9: movsx eax, byte ptr [ebp - 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f0ad: cmp eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f0b0: jne 0x63f0d1 */ if (!fZ) goto L_0063f0d1;
L_0063f0b2:; BB(0x0063f0b2);
    /* 0063f0b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f0b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f0b9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f0beu); f_005fb300();
    /* 0063f0be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f0c0: je 0x63f0d1 */ if (fZ) goto L_0063f0d1;
L_0063f0c2:; BB(0x0063f0c2);
    /* 0063f0c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f0c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f0c9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f0ceu); f_005fb300();
    /* 0063f0ce: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f0d1:; BB(0x0063f0d1);
    /* 0063f0d1: movsx eax, byte ptr [ebp - 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f0d5: cmp eax, 0x56 */ {  u32 a = r_eax; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f0d8: jne 0x63f0f9 */ if (!fZ) goto L_0063f0f9;
L_0063f0da:; BB(0x0063f0da);
    /* 0063f0da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f0e1: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x63f0e6u); f_005fb2b0();
    /* 0063f0e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f0e8: je 0x63f0f9 */ if (fZ) goto L_0063f0f9;
L_0063f0ea:; BB(0x0063f0ea);
    /* 0063f0ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f0ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f0f1: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x63f0f6u); f_005fb2b0();
    /* 0063f0f6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f0f9:; BB(0x0063f0f9);
    /* 0063f0f9: movsx eax, byte ptr [ebp - 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 0063f0fd: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f100: jne 0x63f121 */ if (!fZ) goto L_0063f121;
L_0063f102:; BB(0x0063f102);
    /* 0063f102: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f105: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f106: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f109: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f10eu); f_005fb5e0();
    /* 0063f10e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f110: je 0x63f121 */ if (fZ) goto L_0063f121;
L_0063f112:; BB(0x0063f112);
    /* 0063f112: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063f115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f116: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063f119: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f11eu); f_005fb5e0();
    /* 0063f11e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f121:; BB(0x0063f121);
    /* 0063f121: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f125: jne 0x63f12c */ if (!fZ) goto L_0063f12c;
L_0063f127:; BB(0x0063f127);
    /* 0063f127: jmp 0x63ef83 */ goto L_0063ef83;
L_0063f12c:; BB(0x0063f12c);
    /* 0063f12c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063f12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f130: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f133: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f138: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0063f13e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f140u); call_ind(t); }
    /* 0063f140: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063f143: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f145: je 0x63f191 */ if (fZ) goto L_0063f191;
L_0063f147:; BB(0x0063f147);
    /* 0063f147: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f14b: je 0x63f168 */ if (fZ) goto L_0063f168;
L_0063f14d:; BB(0x0063f14d);
    /* 0063f14d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f150: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0063f153: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0063f156: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 0063f15a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f15b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63f160u); f_00630f40();
    /* 0063f160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f163: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063f166: jmp 0x63f178 */ goto L_0063f178;
L_0063f168:; BB(0x0063f168);
    /* 0063f168: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f16b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0063f16e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0063f171: mov ecx, dword ptr [eax + edx + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx+0xcu));
    /* 0063f175: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0063f178:; BB(0x0063f178);
    /* 0063f178: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063f17b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f17c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f17f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063f181: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063f184: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063f18a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f18cu); call_ind(t); }
    /* 0063f18c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f18f: jmp 0x63f1b7 */ f_0063f1b7(); return;
L_0063f191:; BB(0x0063f191);
    /* 0063f191: jmp 0x63ef83 */ goto L_0063ef83;
L_0063f196:; BB(0x0063f196);
    /* 0063f196: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063f199: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f19d: jne 0x63f1b4 */ if (!fZ) goto L_0063f1b4;
L_0063f19f:; BB(0x0063f19f);
    /* 0063f19f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063f1a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f1a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063f1ac: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0063f1b2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f1b4u); call_ind(t); }
L_0063f1b4:; BB(0x0063f1b4);
    /* 0063f1b4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063f1b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f1b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f1ba: ret 0x14 */ FN_RET(0x0063ef83); r_esp += 24; return;
}

void f_0063f1b7(void) /* _WinMain@16_111_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f1b7);
    /* 0063f1b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f1b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f1ba: ret 0x14 */ FN_RET(0x0063f1b7); r_esp += 24; return;
}

void f_00640db0(void) /* ??1CExpandoObject@@UAE@XZ_121 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640db0);
    /* 00640db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00640dba: mov dword ptr [eax], 0x6dc2cc */ W32((u32)(r_eax), 0x6dc2ccu);
    /* 00640dc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00640dc3: call 0x65bae0 */ r_esp -= 4; W32(r_esp, 0x640dc8u); f_0065bae0();
    /* 00640dc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00640dca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640dcb: ret  */ FN_RET(0x00640db0); r_esp += 4; return;
}

void f_00640dd0(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640dd0);
    /* 00640dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640dd7: mov eax, 0x30d4df */ r_eax = 0x30d4dfu;
    /* 00640ddc: mov esp, ebp */ r_esp = r_ebp;
    /* 00640dde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640ddf: ret  */ FN_RET(0x00640dd0); r_esp += 4; return;
}

void f_00640de0(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640de0);
    /* 00640de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640de7: mov eax, 0xba */ r_eax = 0xbau;
    /* 00640dec: mov esp, ebp */ r_esp = r_ebp;
    /* 00640dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640def: ret  */ FN_RET(0x00640de0); r_esp += 4; return;
}

void f_00640df0(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640df0);
    /* 00640df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640df7: mov eax, 0xad */ r_eax = 0xadu;
    /* 00640dfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00640dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640dff: ret  */ FN_RET(0x00640df0); r_esp += 4; return;
}

void f_00640e00(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e00);
    /* 00640e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e07: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00640e0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e0d: ret  */ FN_RET(0x00640e00); r_esp += 4; return;
}

void f_00640e10(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e10);
    /* 00640e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e17: mov eax, 0x8f */ r_eax = 0x8fu;
    /* 00640e1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e1f: ret  */ FN_RET(0x00640e10); r_esp += 4; return;
}

void f_00640e20(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e20);
    /* 00640e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e27: mov eax, 0x46 */ r_eax = 0x46u;
    /* 00640e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e2f: ret  */ FN_RET(0x00640e20); r_esp += 4; return;
}

void f_00640e30(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e30);
    /* 00640e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e37: mov eax, 0xb6 */ r_eax = 0xb6u;
    /* 00640e3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e3f: ret  */ FN_RET(0x00640e30); r_esp += 4; return;
}

void f_00640e40(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e40);
    /* 00640e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e47: mov eax, 0x87 */ r_eax = 0x87u;
    /* 00640e4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e4f: ret  */ FN_RET(0x00640e40); r_esp += 4; return;
}

void f_00640e50(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e50);
    /* 00640e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e57: mov eax, 0xd2 */ r_eax = 0xd2u;
    /* 00640e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e5f: ret  */ FN_RET(0x00640e50); r_esp += 4; return;
}

void f_00640e60(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e60);
    /* 00640e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e67: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 00640e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e6f: ret  */ FN_RET(0x00640e60); r_esp += 4; return;
}

void f_00640e70(void) /* sub_640E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e70);
    /* 00640e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e77: mov eax, 0xd0 */ r_eax = 0xd0u;
    /* 00640e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e7f: ret  */ FN_RET(0x00640e70); r_esp += 4; return;
}

void f_00640e80(void) /* sub_640E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e80);
    /* 00640e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e87: mov eax, 0x53 */ r_eax = 0x53u;
    /* 00640e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e8f: ret  */ FN_RET(0x00640e80); r_esp += 4; return;
}

void f_00640e90(void) /* sub_640E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640e90);
    /* 00640e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00640e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640e97: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00640e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640e9f: ret  */ FN_RET(0x00640e90); r_esp += 4; return;
}

void f_00640ea0(void) /* sub_640EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640ea0);
    /* 00640ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640ea7: mov eax, 0xf */ r_eax = 0xfu;
    /* 00640eac: mov esp, ebp */ r_esp = r_ebp;
    /* 00640eae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640eaf: ret  */ FN_RET(0x00640ea0); r_esp += 4; return;
}

void f_006411a0(void) /* ??_G_com_error@@UAEPAXI@Z_347 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006411a0);
    /* 006411a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006411a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006411a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006411a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006411a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411aa: call 0x63b7e0 */ r_esp -= 4; W32(r_esp, 0x6411afu); f_0063b7e0();
    /* 006411af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006411b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006411b5: je 0x6411c3 */ if (fZ) goto L_006411c3;
L_006411b7:; BB(0x006411b7);
    /* 006411b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006411bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6411c0u); f_00686cae();
    /* 006411c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006411c3:; BB(0x006411c3);
    /* 006411c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411c6: mov esp, ebp */ r_esp = r_ebp;
    /* 006411c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006411c9: ret 4 */ FN_RET(0x006411a0); r_esp += 8; return;
}

void f_006411d0(void) /* ??_G_com_error@@UAEPAXI@Z_348 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006411d0);
    /* 006411d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006411d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006411d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006411d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006411d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411da: call 0x63ff00 */ r_esp -= 4; W32(r_esp, 0x6411dfu); f_0063ff00();
    /* 006411df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006411e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006411e5: je 0x6411f3 */ if (fZ) goto L_006411f3;
L_006411e7:; BB(0x006411e7);
    /* 006411e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006411eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6411f0u); f_00686cae();
    /* 006411f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006411f3:; BB(0x006411f3);
    /* 006411f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006411f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006411f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006411f9: ret 4 */ FN_RET(0x006411d0); r_esp += 8; return;
}

void f_00641200(void) /* ??_G_com_error@@UAEPAXI@Z_349 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641200);
    /* 00641200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641201: mov ebp, esp */ r_ebp = r_esp;
    /* 00641203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00641207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064120a: call 0x640db0 */ r_esp -= 4; W32(r_esp, 0x64120fu); f_00640db0();
    /* 0064120f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00641215: je 0x641223 */ if (fZ) goto L_00641223;
L_00641217:; BB(0x00641217);
    /* 00641217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064121a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064121b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x641220u); f_00686cae();
    /* 00641220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00641223:; BB(0x00641223);
    /* 00641223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641226: mov esp, ebp */ r_esp = r_ebp;
    /* 00641228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641229: ret 4 */ FN_RET(0x00641200); r_esp += 8; return;
}

void f_00641a7a(void) /* _WinMain@16_112 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641a7a);
    /* 00641a7a: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641a84(void) /* _WinMain@16_113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641a84);
    /* 00641a84: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641a94(void) /* _WinMain@16_114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641a94);
    /* 00641a94: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641aa6(void) /* _WinMain@16_115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641aa6);
    /* 00641aa6: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641acf(void) /* _WinMain@16_116 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641acf);
    /* 00641acf: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641ad9(void) /* _WinMain@16_117 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641ad9);
    /* 00641ad9: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641ae9(void) /* _WinMain@16_118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641ae9);
    /* 00641ae9: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641afb(void) /* _WinMain@16_119 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641afb);
    /* 00641afb: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641b24(void) /* _WinMain@16_120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641b24);
    /* 00641b24: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641b2e(void) /* _WinMain@16_121 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641b2e);
    /* 00641b2e: jmp 0x641bb5 */ f_00641bb5(); return;
}

void f_00641bb5(void) /* _WinMain@16_112_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641bb5);
    /* 00641bb5: mov esp, ebp */ r_esp = r_ebp;
    /* 00641bb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641bb8: ret  */ FN_RET(0x00641bb5); r_esp += 4; return;
}

void f_00641c10(void) /* _WinMain@16_122_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641c10);
L_00641c10:; BB(0x00641c10);
    /* 00641c10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641c13: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641c16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00641c19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641c1c: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641c1f: jge 0x641c9d */ if ((fS==fO)) goto L_00641c9d;
L_00641c21:; BB(0x00641c21);
    /* 00641c21: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00641c28: jmp 0x641c33 */ goto L_00641c33;
L_00641c2a:; BB(0x00641c2a);
    /* 00641c2a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c2d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641c30: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00641c33:; BB(0x00641c33);
    /* 00641c33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641c36: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641c39: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641c3c: jge 0x641c98 */ if ((fS==fO)) goto L_00641c98;
L_00641c3e:; BB(0x00641c3e);
    /* 00641c3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641c44: mov ax, word ptr [edx + ecx*2 + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641c4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641c50: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00641c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641c55: call 0x642950 */ r_esp -= 4; W32(r_esp, 0x641c5au); f_00642950();
    /* 00641c5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641c5d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00641c60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641c62: je 0x641c96 */ if (fZ) goto L_00641c96;
L_00641c64:; BB(0x00641c64);
    /* 00641c64: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641c6a: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00641c6e: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 00641c72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641c78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c7b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00641c7e: mov cx, word ptr [esi + ecx*2 + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641c83: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 00641c87: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641c8d: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00641c91: mov word ptr [eax + edx*2 + 2], cx */ W16((u32)(r_eax+r_edx*2+0x2u), (u16)r_ecx);
L_00641c96:; BB(0x00641c96);
    /* 00641c96: jmp 0x641c2a */ goto L_00641c2a;
L_00641c98:; BB(0x00641c98);
    /* 00641c98: jmp 0x641c10 */ goto L_00641c10;
L_00641c9d:; BB(0x00641c9d);
    /* 00641c9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00641ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641ca1: ret  */ FN_RET(0x00641c10); r_esp += 4; return;
}

void f_00641c98(void) /* _WinMain@16_122 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641c98);
    /* 00641c98: jmp 0x641c10 */ f_00641c10(); return;
}

void f_00641cc0(void) /* _WinMain@16_123_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641cc0);
L_00641cc0:; BB(0x00641cc0);
    /* 00641cc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641cc3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641cc6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00641cc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641ccc: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641ccf: jge 0x641d55 */ if ((fS==fO)) goto L_00641d55;
L_00641cd5:; BB(0x00641cd5);
    /* 00641cd5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00641cdc: jmp 0x641ce7 */ goto L_00641ce7;
L_00641cde:; BB(0x00641cde);
    /* 00641cde: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641ce1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641ce4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00641ce7:; BB(0x00641ce7);
    /* 00641ce7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641cea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641ced: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641cf0: jge 0x641d50 */ if ((fS==fO)) goto L_00641d50;
L_00641cf2:; BB(0x00641cf2);
    /* 00641cf2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00641cf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641cf6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641cf9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641cfc: mov cx, word ptr [eax + edx*2 + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x2u))) & 0xffffu);
    /* 00641d01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641d08: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00641d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d0d: call 0x6429e0 */ r_esp -= 4; W32(r_esp, 0x641d12u); f_006429e0();
    /* 00641d12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641d15: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00641d18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641d1a: je 0x641d4e */ if (fZ) goto L_00641d4e;
L_00641d1c:; BB(0x00641d1c);
    /* 00641d1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641d22: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00641d26: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 00641d2a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641d30: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d33: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00641d36: mov dx, word ptr [esi + edx*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x2u))) & 0xffffu);
    /* 00641d3b: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 00641d3f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641d45: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00641d49: mov word ptr [ecx + eax*2 + 2], dx */ W16((u32)(r_ecx+r_eax*2+0x2u), (u16)r_edx);
L_00641d4e:; BB(0x00641d4e);
    /* 00641d4e: jmp 0x641cde */ goto L_00641cde;
L_00641d50:; BB(0x00641d50);
    /* 00641d50: jmp 0x641cc0 */ goto L_00641cc0;
L_00641d55:; BB(0x00641d55);
    /* 00641d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641d56: mov esp, ebp */ r_esp = r_ebp;
    /* 00641d58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641d59: ret  */ FN_RET(0x00641cc0); r_esp += 4; return;
}

void f_00641d50(void) /* _WinMain@16_123 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641d50);
    /* 00641d50: jmp 0x641cc0 */ f_00641cc0(); return;
}

void f_00641d70(void) /* _WinMain@16_124_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641d70);
L_00641d70:; BB(0x00641d70);
    /* 00641d70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641d73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641d76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00641d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641d7c: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641d7f: jge 0x641e11 */ if ((fS==fO)) goto L_00641e11;
L_00641d85:; BB(0x00641d85);
    /* 00641d85: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00641d8c: jmp 0x641d97 */ goto L_00641d97;
L_00641d8e:; BB(0x00641d8e);
    /* 00641d8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641d94: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00641d97:; BB(0x00641d97);
    /* 00641d97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641d9a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641d9d: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641da0: jge 0x641e0c */ if ((fS==fO)) goto L_00641e0c;
L_00641da2:; BB(0x00641da2);
    /* 00641da2: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00641da5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641da6: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00641da9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641daa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00641dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641dae: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00641db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641db2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641db5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641db8: mov cx, word ptr [eax + edx*2 + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x2u))) & 0xffffu);
    /* 00641dbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641dbe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641dc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641dc4: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00641dc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641dc9: call 0x642aa0 */ r_esp -= 4; W32(r_esp, 0x641dceu); f_00642aa0();
    /* 00641dce: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641dd1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00641dd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641dd6: je 0x641e0a */ if (fZ) goto L_00641e0a;
L_00641dd8:; BB(0x00641dd8);
    /* 00641dd8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641ddb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641dde: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00641de2: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 00641de6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641de9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641dec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641def: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00641df2: mov dx, word ptr [esi + edx*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x2u))) & 0xffffu);
    /* 00641df7: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 00641dfb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641dfe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641e01: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00641e05: mov word ptr [ecx + eax*2 + 2], dx */ W16((u32)(r_ecx+r_eax*2+0x2u), (u16)r_edx);
L_00641e0a:; BB(0x00641e0a);
    /* 00641e0a: jmp 0x641d8e */ goto L_00641d8e;
L_00641e0c:; BB(0x00641e0c);
    /* 00641e0c: jmp 0x641d70 */ goto L_00641d70;
L_00641e11:; BB(0x00641e11);
    /* 00641e11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641e12: mov esp, ebp */ r_esp = r_ebp;
    /* 00641e14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641e15: ret  */ FN_RET(0x00641d70); r_esp += 4; return;
}

void f_00641e0c(void) /* _WinMain@16_124 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641e0c);
    /* 00641e0c: jmp 0x641d70 */ f_00641d70(); return;
}

void f_00642e50(void) /* ??1CExpandoObject@@UAE@XZ_122 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642e50);
    /* 00642e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00642e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00642e57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e5a: mov dword ptr [eax], 0x6dc400 */ W32((u32)(r_eax), 0x6dc400u);
    /* 00642e60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e63: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x642e68u); f_005e9e40();
    /* 00642e68: mov esp, ebp */ r_esp = r_ebp;
    /* 00642e6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642e6b: ret  */ FN_RET(0x00642e50); r_esp += 4; return;
}

void f_00643ce0(void) /* ??0_TaskCollection@details@Concurrency@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643ce0);
    /* 00643ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00643ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00643ce5: push 0x6abd28 */ { u32 v = 0x6abd28u; r_esp -= 4; W32(r_esp, v); }
    /* 00643cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00643cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643cf1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00643cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00643cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00643d05: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00643d08: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d0b: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x643d10u); f_005f5f50();
    /* 00643d10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00643d17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d1a: mov dword ptr [eax], 0x6dc45c */ W32((u32)(r_eax), 0x6dc45cu);
    /* 00643d20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d23: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00643d26: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 00643d2c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d2f: mov word ptr [eax + 0x190], 0xffff */ W16((u32)(r_eax+0x190u), 0xffffu);
    /* 00643d38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d3b: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 00643d45: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d48: mov byte ptr [edx + 0x198], 0 */ W8((u32)(r_edx+0x198u), 0x0u);
    /* 00643d4f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d52: mov byte ptr [eax + 0xa], 1 */ W8((u32)(r_eax+0xau), 0x1u);
    /* 00643d56: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643d5a: jne 0x643d6a */ if (!fZ) goto L_00643d6a;
L_00643d5c:; BB(0x00643d5c);
    /* 00643d5c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00643d62: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00643d65: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00643d68: jmp 0x643d70 */ goto L_00643d70;
L_00643d6a:; BB(0x00643d6a);
    /* 00643d6a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00643d6d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00643d70:; BB(0x00643d70);
    /* 00643d70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643d76: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00643d79: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d7c: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x643d81u); f_005f5cc0();
    /* 00643d81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00643d88: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643d8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643d8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00643d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643d96: mov esp, ebp */ r_esp = r_ebp;
    /* 00643d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643d99: ret 8 */ FN_RET(0x00643ce0); r_esp += 12; return;
}

void f_00643da0(void) /* ??1CExpandoObject@@UAE@XZ_123 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643da0);
    /* 00643da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00643da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00643da7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643daa: mov dword ptr [eax], 0x6dc45c */ W32((u32)(r_eax), 0x6dc45cu);
    /* 00643db0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643db3: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x643db8u); f_005f5fa0();
    /* 00643db8: mov esp, ebp */ r_esp = r_ebp;
    /* 00643dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643dbb: ret  */ FN_RET(0x00643da0); r_esp += 4; return;
}

void f_00644840(void) /* unknown_libname_858 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644840);
    /* 00644840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644841: mov ebp, esp */ r_ebp = r_esp;
    /* 00644843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644847: mov esp, ebp */ r_esp = r_ebp;
    /* 00644849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064484a: ret 4 */ FN_RET(0x00644840); r_esp += 8; return;
}

void f_006453e0(void) /* ??_G_com_error@@UAEPAXI@Z_350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006453e0);
    /* 006453e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006453e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006453e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006453e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006453e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006453ea: call 0x642e50 */ r_esp -= 4; W32(r_esp, 0x6453efu); f_00642e50();
    /* 006453ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006453f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006453f5: je 0x645403 */ if (fZ) goto L_00645403;
L_006453f7:; BB(0x006453f7);
    /* 006453f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006453fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006453fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x645400u); f_00686cae();
    /* 00645400: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00645403:; BB(0x00645403);
    /* 00645403: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645406: mov esp, ebp */ r_esp = r_ebp;
    /* 00645408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645409: ret 4 */ FN_RET(0x006453e0); r_esp += 8; return;
}

void f_00645410(void) /* ??_G_com_error@@UAEPAXI@Z_351 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00645410);
    /* 00645410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645411: mov ebp, esp */ r_ebp = r_esp;
    /* 00645413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00645417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064541a: call 0x643da0 */ r_esp -= 4; W32(r_esp, 0x64541fu); f_00643da0();
    /* 0064541f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00645422: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00645425: je 0x645433 */ if (fZ) goto L_00645433;
L_00645427:; BB(0x00645427);
    /* 00645427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064542a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064542b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x645430u); f_00686cae();
    /* 00645430: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00645433:; BB(0x00645433);
    /* 00645433: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00645436: mov esp, ebp */ r_esp = r_ebp;
    /* 00645438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645439: ret 4 */ FN_RET(0x00645410); r_esp += 8; return;
}

void f_006454c0(void) /* ??_G_com_error@@UAEPAXI@Z_352 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006454c0);
    /* 006454c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006454c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006454c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006454c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006454c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006454ca: call 0x6448c0 */ r_esp -= 4; W32(r_esp, 0x6454cfu); f_006448c0();
    /* 006454cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006454d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006454d5: je 0x6454e3 */ if (fZ) goto L_006454e3;
L_006454d7:; BB(0x006454d7);
    /* 006454d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006454da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006454db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6454e0u); f_00686cae();
    /* 006454e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006454e3:; BB(0x006454e3);
    /* 006454e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006454e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006454e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006454e9: ret 4 */ FN_RET(0x006454c0); r_esp += 8; return;
}

void f_00646f80(void) /* unknown_libname_732 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646f80);
    /* 00646f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00646f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646f8a: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00646f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00646f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646f90: ret  */ FN_RET(0x00646f80); r_esp += 4; return;
}

void f_00648bb0(void) /* ?GetArgumentsMenuID@CUserToolsManager@@QBEIXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648bb0);
    /* 00648bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648bba: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00648bbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00648bbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648bc0: ret  */ FN_RET(0x00648bb0); r_esp += 4; return;
}

void f_00648cb0(void) /* ??1CExpandoObject@@UAE@XZ_124 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648cb0);
    /* 00648cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648cb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648cba: mov dword ptr [eax], 0x6dc8dc */ W32((u32)(r_eax), 0x6dc8dcu);
    /* 00648cc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648cc3: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x648cc8u); f_005f5c40();
    /* 00648cc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00648cca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648ccb: ret  */ FN_RET(0x00648cb0); r_esp += 4; return;
}

void f_0064a910(void) /* ??1CExpandoObject@@UAE@XZ_125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064a910);
    /* 0064a910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a911: mov ebp, esp */ r_ebp = r_esp;
    /* 0064a913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064a917: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a91a: mov dword ptr [eax], 0x6dc9c4 */ W32((u32)(r_eax), 0x6dc9c4u);
    /* 0064a920: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064a923: call 0x6004c0 */ r_esp -= 4; W32(r_esp, 0x64a928u); f_006004c0();
    /* 0064a928: mov esp, ebp */ r_esp = r_ebp;
    /* 0064a92a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a92b: ret  */ FN_RET(0x0064a910); r_esp += 4; return;
}

void f_0064bf40(void) /* ??1CExpandoObject@@UAE@XZ_126 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bf40);
    /* 0064bf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf41: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bf43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bf47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf4a: mov dword ptr [eax], 0x6dcb74 */ W32((u32)(r_eax), 0x6dcb74u);
    /* 0064bf50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf53: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x64bf58u); f_00601ba0();
    /* 0064bf58: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bf5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bf5b: ret  */ FN_RET(0x0064bf40); r_esp += 4; return;
}

void f_0064c0c0(void) /* ??1CExpandoObject@@UAE@XZ_127 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c0c0);
    /* 0064c0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c0c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c0ca: mov dword ptr [eax], 0x6dcc6c */ W32((u32)(r_eax), 0x6dcc6cu);
    /* 0064c0d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c0d3: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x64c0d8u); f_00601ba0();
    /* 0064c0d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c0db: ret  */ FN_RET(0x0064c0c0); r_esp += 4; return;
}

void f_0064c300(void) /* ??_G_com_error@@UAEPAXI@Z_353 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c300);
    /* 0064c300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c301: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c30a: call 0x6455f0 */ r_esp -= 4; W32(r_esp, 0x64c30fu); f_006455f0();
    /* 0064c30f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c312: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c315: je 0x64c323 */ if (fZ) goto L_0064c323;
L_0064c317:; BB(0x0064c317);
    /* 0064c317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c31a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c31b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c320u); f_00686cae();
    /* 0064c320: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c323:; BB(0x0064c323);
    /* 0064c323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c326: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c328: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c329: ret 4 */ FN_RET(0x0064c300); r_esp += 8; return;
}

void f_0064c330(void) /* ??_G_com_error@@UAEPAXI@Z_354 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c330);
    /* 0064c330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c331: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c33a: call 0x648cb0 */ r_esp -= 4; W32(r_esp, 0x64c33fu); f_00648cb0();
    /* 0064c33f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c342: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c345: je 0x64c353 */ if (fZ) goto L_0064c353;
L_0064c347:; BB(0x0064c347);
    /* 0064c347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c34a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c34b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c350u); f_00686cae();
    /* 0064c350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c353:; BB(0x0064c353);
    /* 0064c353: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c356: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c359: ret 4 */ FN_RET(0x0064c330); r_esp += 8; return;
}

void f_0064c360(void) /* ??_G_com_error@@UAEPAXI@Z_355 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c360);
    /* 0064c360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c361: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c36a: call 0x64a910 */ r_esp -= 4; W32(r_esp, 0x64c36fu); f_0064a910();
    /* 0064c36f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c372: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c375: je 0x64c383 */ if (fZ) goto L_0064c383;
L_0064c377:; BB(0x0064c377);
    /* 0064c377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c37a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c37b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c380u); f_00686cae();
    /* 0064c380: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c383:; BB(0x0064c383);
    /* 0064c383: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c386: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c389: ret 4 */ FN_RET(0x0064c360); r_esp += 8; return;
}

void f_0064c390(void) /* ??_G_com_error@@UAEPAXI@Z_356 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c390);
    /* 0064c390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c391: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c39a: call 0x64ab90 */ r_esp -= 4; W32(r_esp, 0x64c39fu); f_0064ab90();
    /* 0064c39f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c3a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c3a5: je 0x64c3b3 */ if (fZ) goto L_0064c3b3;
L_0064c3a7:; BB(0x0064c3a7);
    /* 0064c3a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c3b0u); f_00686cae();
    /* 0064c3b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c3b3:; BB(0x0064c3b3);
    /* 0064c3b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3b6: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c3b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c3b9: ret 4 */ FN_RET(0x0064c390); r_esp += 8; return;
}

void f_0064c3c0(void) /* ??_G_com_error@@UAEPAXI@Z_357 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c3c0);
    /* 0064c3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3ca: call 0x64b970 */ r_esp -= 4; W32(r_esp, 0x64c3cfu); f_0064b970();
    /* 0064c3cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c3d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c3d5: je 0x64c3e3 */ if (fZ) goto L_0064c3e3;
L_0064c3d7:; BB(0x0064c3d7);
    /* 0064c3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c3e0u); f_00686cae();
    /* 0064c3e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c3e3:; BB(0x0064c3e3);
    /* 0064c3e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c3e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c3e9: ret 4 */ FN_RET(0x0064c3c0); r_esp += 8; return;
}

void f_0064c3f0(void) /* ??_G_com_error@@UAEPAXI@Z_358 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c3f0);
    /* 0064c3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c3fa: call 0x64bf40 */ r_esp -= 4; W32(r_esp, 0x64c3ffu); f_0064bf40();
    /* 0064c3ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c402: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c405: je 0x64c413 */ if (fZ) goto L_0064c413;
L_0064c407:; BB(0x0064c407);
    /* 0064c407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c40a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c40b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c410u); f_00686cae();
    /* 0064c410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c413:; BB(0x0064c413);
    /* 0064c413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c416: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c419: ret 4 */ FN_RET(0x0064c3f0); r_esp += 8; return;
}

void f_0064c420(void) /* ??_G_com_error@@UAEPAXI@Z_359 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c420);
    /* 0064c420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c421: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c42a: call 0x64c0c0 */ r_esp -= 4; W32(r_esp, 0x64c42fu); f_0064c0c0();
    /* 0064c42f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c432: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064c435: je 0x64c443 */ if (fZ) goto L_0064c443;
L_0064c437:; BB(0x0064c437);
    /* 0064c437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c43a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c43b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64c440u); f_00686cae();
    /* 0064c440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c443:; BB(0x0064c443);
    /* 0064c443: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c446: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c449: ret 4 */ FN_RET(0x0064c420); r_esp += 8; return;
}

void f_00650080(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650080);
    /* 00650080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650081: mov ebp, esp */ r_ebp = r_esp;
    /* 00650083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650087: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00650089: mov esp, ebp */ r_esp = r_ebp;
    /* 0065008b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065008c: ret  */ FN_RET(0x00650080); r_esp += 4; return;
}

void f_00650090(void) /* unknown_libname_859 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650090);
    /* 00650090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650091: mov ebp, esp */ r_ebp = r_esp;
    /* 00650093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650097: mov eax, 1 */ r_eax = 0x1u;
    /* 0065009c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065009e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065009f: ret  */ FN_RET(0x00650090); r_esp += 4; return;
}

void f_00650350(void) /* unknown_libname_860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650350);
    /* 00650350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650351: mov ebp, esp */ r_ebp = r_esp;
    /* 00650353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650357: mov esp, ebp */ r_esp = r_ebp;
    /* 00650359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065035a: ret 4 */ FN_RET(0x00650350); r_esp += 8; return;
}

void f_00650860(void) /* ??1CExpandoObject@@UAE@XZ_128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650860);
    /* 00650860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650861: mov ebp, esp */ r_ebp = r_esp;
    /* 00650863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065086a: mov dword ptr [eax], 0x6dd13c */ W32((u32)(r_eax), 0x6dd13cu);
    /* 00650870: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650873: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x650878u); f_005f7260();
    /* 00650878: mov esp, ebp */ r_esp = r_ebp;
    /* 0065087a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065087b: ret  */ FN_RET(0x00650860); r_esp += 4; return;
}

void f_00650b50(void) /* ??_G_com_error@@UAEPAXI@Z_360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650b50);
    /* 00650b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00650b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650b5a: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x650b5fu); f_0064cc80();
    /* 00650b5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00650b62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00650b65: je 0x650b73 */ if (fZ) goto L_00650b73;
L_00650b67:; BB(0x00650b67);
    /* 00650b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650b6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x650b70u); f_00686cae();
    /* 00650b70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00650b73:; BB(0x00650b73);
    /* 00650b73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650b76: mov esp, ebp */ r_esp = r_ebp;
    /* 00650b78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650b79: ret 4 */ FN_RET(0x00650b50); r_esp += 8; return;
}

void f_00650b80(void) /* ??_G_com_error@@UAEPAXI@Z_361 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650b80);
    /* 00650b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00650b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650b8a: call 0x650860 */ r_esp -= 4; W32(r_esp, 0x650b8fu); f_00650860();
    /* 00650b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00650b92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00650b95: je 0x650ba3 */ if (fZ) goto L_00650ba3;
L_00650b97:; BB(0x00650b97);
    /* 00650b97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650b9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x650ba0u); f_00686cae();
    /* 00650ba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00650ba3:; BB(0x00650ba3);
    /* 00650ba3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00650ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650ba9: ret 4 */ FN_RET(0x00650b80); r_esp += 8; return;
}

