#include "protos.h"

void f_0065c0c0(void) /* sub_65C0C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c0c0);
    /* 0065c0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c0c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c0c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065c0cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c0cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065c0d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c0d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c0d7: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c0dd: call 0x65d130 */ r_esp -= 4; W32(r_esp, 0x65c0e2u); f_0065d130();
    /* 0065c0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0e3: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0065c0e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0e7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65c0ecu); f_00686d8e();
    /* 0065c0ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c0ef: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0065c0f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0f3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c0f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c0f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c0fb: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0065c101: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c103u); call_ind(t); }
    /* 0065c103: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065c106: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c108: je 0x65c13c */ if (fZ) goto L_0065c13c;
L_0065c10a:; BB(0x0065c10a);
    /* 0065c10a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c10c: push 0x6de824 */ { u32 v = 0x6de824u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c111: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65c116u); f_00630f40();
    /* 0065c116: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c11a: push 0x6de808 */ { u32 v = 0x6de808u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c11f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65c124u); f_00630f40();
    /* 0065c124: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c128: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65c12du); f_0062ff10();
    /* 0065c12d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c130: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c133: je 0x65c13a */ if (fZ) goto L_0065c13a;
L_0065c135:; BB(0x0065c135);
    /* 0065c135: jmp 0x65c1db */ goto L_0065c1db;
L_0065c13a:; BB(0x0065c13a);
    /* 0065c13a: jmp 0x65c169 */ goto L_0065c169;
L_0065c13c:; BB(0x0065c13c);
    /* 0065c13c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c13e: push 0x6de7f0 */ { u32 v = 0x6de7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c143: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65c148u); f_00630f40();
    /* 0065c148: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c14b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c14c: push 0x6de7d4 */ { u32 v = 0x6de7d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c151: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65c156u); f_00630f40();
    /* 0065c156: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c15a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65c15fu); f_0062ff10();
    /* 0065c15f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c162: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c165: je 0x65c169 */ if (fZ) goto L_0065c169;
L_0065c167:; BB(0x0065c167);
    /* 0065c167: jmp 0x65c1db */ goto L_0065c1db;
L_0065c169:; BB(0x0065c169);
    /* 0065c169: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c16c: movsx esi, byte ptr [edx + 0x1c2] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x1c2u));
    /* 0065c173: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c176: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c17c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65c181u); f_00615260();
    /* 0065c181: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c183: jne 0x65c1a2 */ if (!fZ) goto L_0065c1a2;
L_0065c185:; BB(0x0065c185);
    /* 0065c185: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c188: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c18e: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c191: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c196u); f_00663c50();
    /* 0065c196: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065c199: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c19c: mov byte ptr [edx + 0x1c2], al */ W8((u32)(r_edx+0x1c2u), (u8)r_eax);
L_0065c1a2:; BB(0x0065c1a2);
    /* 0065c1a2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c1a5: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c1ab: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65c1b0u); f_00615260();
    /* 0065c1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c1b4: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c1ba: call 0x65cfe0 */ r_esp -= 4; W32(r_esp, 0x65c1bfu); f_0065cfe0();
    /* 0065c1bf: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0065c1c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1c3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c1c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c1c8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c1cb: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0065c1d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c1d3u); call_ind(t); }
    /* 0065c1d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c1d6: call 0x65c300 */ r_esp -= 4; W32(r_esp, 0x65c1dbu); f_0065c300();
L_0065c1db:; BB(0x0065c1db);
    /* 0065c1db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c1dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c1df: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c1e1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65c1e6u); f_00686d72();
    /* 0065c1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c1e9: ret  */ FN_RET(0x0065c0c0); r_esp += 4; return;
}

void f_0065c1f0(void) /* sub_65C1F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c1f0);
    /* 0065c1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065c1f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c1fe: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c204: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c207: call 0x663650 */ r_esp -= 4; W32(r_esp, 0x65c20cu); f_00663650();
    /* 0065c20c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c20e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065c211: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c212: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c214: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c216: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c219: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65c21eu); f_0065c820();
    /* 0065c21e: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c220: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c221: ret 4 */ FN_RET(0x0065c1f0); r_esp += 8; return;
}

void f_0065c230(void) /* sub_65C230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c230);
    /* 0065c230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c231: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c233: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c236: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065c239: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c23d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c240: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c246: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c249: call 0x6639d0 */ r_esp -= 4; W32(r_esp, 0x65c24eu); f_006639d0();
    /* 0065c24e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065c251: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065c254: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c255: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c258: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c25e: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c261: call 0x663d10 */ r_esp -= 4; W32(r_esp, 0x65c266u); f_00663d10();
    /* 0065c266: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c269: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c26f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c272: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c278: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065c27a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065c280: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c282u); call_ind(t); }
    /* 0065c282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c284: jne 0x65c29b */ if (!fZ) goto L_0065c29b;
L_0065c286:; BB(0x0065c286);
    /* 0065c286: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c288: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c28d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c28f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c291: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c294: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65c299u); f_0065c820();
    /* 0065c299: jmp 0x65c2f7 */ goto L_0065c2f7;
L_0065c29b:; BB(0x0065c29b);
    /* 0065c29b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c29e: movsx edx, byte ptr [ecx + 0x1c2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1c2u));
    /* 0065c2a5: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c2a8: jl 0x65c2f7 */ if ((fS!=fO)) goto L_0065c2f7;
L_0065c2aa:; BB(0x0065c2aa);
    /* 0065c2aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2ad: movsx ecx, byte ptr [eax + 0x1c2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1c2u));
    /* 0065c2b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c2b6: je 0x65c2cc */ if (fZ) goto L_0065c2cc;
L_0065c2b8:; BB(0x0065c2b8);
    /* 0065c2b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2bb: mov al, byte ptr [edx + 0x1c2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1c2u))) & 0xffu);
    /* 0065c2c1: sub al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065c2c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2c6: mov byte ptr [ecx + 0x1c2], al */ W8((u32)(r_ecx+0x1c2u), (u8)r_eax);
L_0065c2cc:; BB(0x0065c2cc);
    /* 0065c2cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2d1: movsx eax, byte ptr [edx + 0x1c2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1c2u));
    /* 0065c2d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2dc: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c2e2: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c2e5: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65c2eau); f_006639a0();
    /* 0065c2ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c2f2: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65c2f7u); f_0065c820();
L_0065c2f7:; BB(0x0065c2f7);
    /* 0065c2f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c2fa: ret 4 */ FN_RET(0x0065c230); r_esp += 8; return;
}

void f_0065c300(void) /* sub_65C300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c300);
    /* 0065c300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c301: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c303: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c306: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065c309: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c30b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c30e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65c313u); f_005fb300();
    /* 0065c313: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065c316: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c31a: je 0x65c336 */ if (fZ) goto L_0065c336;
L_0065c31c:; BB(0x0065c31c);
    /* 0065c31c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c31f: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c326: je 0x65c336 */ if (fZ) goto L_0065c336;
L_0065c328:; BB(0x0065c328);
    /* 0065c328: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c32a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c32d: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c332u); f_005fb3a0();
    /* 0065c332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c334: jne 0x65c33b */ if (!fZ) goto L_0065c33b;
L_0065c336:; BB(0x0065c336);
    /* 0065c336: jmp 0x65c4c4 */ goto L_0065c4c4;
L_0065c33b:; BB(0x0065c33b);
    /* 0065c33b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c33d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c340: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c345u); f_005fb3a0();
    /* 0065c345: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c347: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c34cu); f_00606570();
    /* 0065c34c: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c34f: jne 0x65c36f */ if (!fZ) goto L_0065c36f;
L_0065c351:; BB(0x0065c351);
    /* 0065c351: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c354: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c35a: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c35d: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c362u); f_00663c50();
    /* 0065c362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c364: je 0x65c36f */ if (fZ) goto L_0065c36f;
L_0065c366:; BB(0x0065c366);
    /* 0065c366: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0065c36d: jmp 0x65c376 */ goto L_0065c376;
L_0065c36f:; BB(0x0065c36f);
    /* 0065c36f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0065c376:; BB(0x0065c376);
    /* 0065c376: mov dl, byte ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0065c379: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 0065c37c: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 0065c383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c385: je 0x65c38b */ if (fZ) goto L_0065c38b;
L_0065c387:; BB(0x0065c387);
    /* 0065c387: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
L_0065c38b:; BB(0x0065c38b);
    /* 0065c38b: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 0065c38e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c38f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c392: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065c394: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c397: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0065c39d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65c39fu); call_ind(t); }
    /* 0065c39f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065c3a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c3a6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065c3ac: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0065c3b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c3b4u); call_ind(t); }
    /* 0065c3b4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065c3b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c3b9: je 0x65c3cc */ if (fZ) goto L_0065c3cc;
L_0065c3bb:; BB(0x0065c3bb);
    /* 0065c3bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c3be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065c3c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c3c3: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0065c3c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65c3c8u); call_ind(t); }
    /* 0065c3c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c3ca: jne 0x65c3d1 */ if (!fZ) goto L_0065c3d1;
L_0065c3cc:; BB(0x0065c3cc);
    /* 0065c3cc: jmp 0x65c4c4 */ goto L_0065c4c4;
L_0065c3d1:; BB(0x0065c3d1);
    /* 0065c3d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c3d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c3d6: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c3dbu); f_005fb3a0();
    /* 0065c3db: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c3dd: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c3e2u); f_00606570();
    /* 0065c3e2: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c3e5: jne 0x65c423 */ if (!fZ) goto L_0065c423;
L_0065c3e7:; BB(0x0065c3e7);
    /* 0065c3e7: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c3e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c3ec: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65c3f1u); f_005fb300();
    /* 0065c3f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065c3f4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065c3f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c3f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065c3fc: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0065c402: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c404u); call_ind(t); }
    /* 0065c404: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c406: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c409: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65c40eu); f_005fb5e0();
    /* 0065c40e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065c411: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065c414: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c416: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065c419: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0065c41f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c421u); call_ind(t); }
    /* 0065c421: jmp 0x65c45d */ goto L_0065c45d;
L_0065c423:; BB(0x0065c423);
    /* 0065c423: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c425: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c428: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65c42du); f_005fb300();
    /* 0065c42d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c430: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c433: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c435: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c438: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065c43e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c440u); call_ind(t); }
    /* 0065c440: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c442: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c445: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65c44au); f_005fb5e0();
    /* 0065c44a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065c44d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c450: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c452: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c455: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065c45b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c45du); call_ind(t); }
L_0065c45d:; BB(0x0065c45d);
    /* 0065c45d: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0065c461: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c463: je 0x65c4a0 */ if (fZ) goto L_0065c4a0;
L_0065c465:; BB(0x0065c465);
    /* 0065c465: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c468: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065c46e: call 0x65d150 */ r_esp -= 4; W32(r_esp, 0x65c473u); f_0065d150();
    /* 0065c473: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065c476: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c478: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c47b: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65c480u); f_005fb5e0();
    /* 0065c480: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065c483: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c485: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c488: add eax, 0x186bf */ {  u32 a = r_eax; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c48d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c48e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065c491: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c493: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065c496: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0065c49c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c49eu); call_ind(t); }
    /* 0065c49e: jmp 0x65c4c4 */ goto L_0065c4c4;
L_0065c4a0:; BB(0x0065c4a0);
    /* 0065c4a0: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c4a5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65c4aau); f_005fb5e0();
    /* 0065c4aa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065c4ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4af: push 0x186e0 */ { u32 v = 0x186e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4b4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065c4b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c4b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065c4bc: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0065c4c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c4c4u); call_ind(t); }
L_0065c4c4:; BB(0x0065c4c4);
    /* 0065c4c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c4c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c4c7: ret  */ FN_RET(0x0065c300); r_esp += 4; return;
}

void f_0065c4d0(void) /* sub_65C4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c4d0);
    /* 0065c4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c4d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c4d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065c4d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c4dc: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x65c4e1u); f_005f85d0();
    /* 0065c4e1: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c4e6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65c4ebu); f_005fb300();
    /* 0065c4eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065c4ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c4f1: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c4f8: je 0x65c559 */ if (fZ) goto L_0065c559;
L_0065c4fa:; BB(0x0065c4fa);
    /* 0065c4fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c4fd: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c503: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c506: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c50c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065c50e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065c511: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c513u); call_ind(t); }
    /* 0065c513: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c516: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c51c: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c51f: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c524u); f_00663c50();
    /* 0065c524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c526: jne 0x65c551 */ if (!fZ) goto L_0065c551;
L_0065c528:; BB(0x0065c528);
    /* 0065c528: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c52a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c52d: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c532u); f_005fb3a0();
    /* 0065c532: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c534: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c539u); f_00606570();
    /* 0065c539: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c53c: jne 0x65c551 */ if (!fZ) goto L_0065c551;
L_0065c53e:; BB(0x0065c53e);
    /* 0065c53e: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c542: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c545: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c54au); f_005fb3a0();
    /* 0065c54a: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c54c: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x65c551u); f_006065d0();
L_0065c551:; BB(0x0065c551);
    /* 0065c551: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c554: call 0x65c300 */ r_esp -= 4; W32(r_esp, 0x65c559u); f_0065c300();
L_0065c559:; BB(0x0065c559);
    /* 0065c559: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c55b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c55c: ret  */ FN_RET(0x0065c4d0); r_esp += 4; return;
}

void f_0065c7f0(void) /* sub_65C7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c7f0);
    /* 0065c7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c7f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065c7f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c7fc: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c801u); f_005fb3a0();
    /* 0065c801: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c803: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c808u); f_00606570();
    /* 0065c808: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c80a: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c80d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0065c810: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0065c812: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c815: ret  */ FN_RET(0x0065c7f0); r_esp += 4; return;
}

void f_0065c820(void) /* sub_65C820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c820);
    /* 0065c820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c821: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065c827: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0065c82b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c82e: jne 0x65c881 */ if (!fZ) goto L_0065c881;
L_0065c830:; BB(0x0065c830);
    /* 0065c830: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c833: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c839: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c83c: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c841u); f_00663c50();
    /* 0065c841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c843: jne 0x65c84f */ if (!fZ) goto L_0065c84f;
L_0065c845:; BB(0x0065c845);
    /* 0065c845: mov byte ptr [ebp + 8], 2 */ W8((u32)(r_ebp+0x8u), 0x2u);
    /* 0065c849: mov byte ptr [ebp + 0xc], 0 */ W8((u32)(r_ebp+0xcu), 0x0u);
    /* 0065c84d: jmp 0x65c881 */ goto L_0065c881;
L_0065c84f:; BB(0x0065c84f);
    /* 0065c84f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0065c852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c853: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c856: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c85c: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c85f: call 0x663b50 */ r_esp -= 4; W32(r_esp, 0x65c864u); f_00663b50();
    /* 0065c864: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065c867: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c869: jne 0x65c881 */ if (!fZ) goto L_0065c881;
L_0065c86b:; BB(0x0065c86b);
    /* 0065c86b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c86d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c870: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065c876: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c879: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65c87eu); f_006639a0();
    /* 0065c87e: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0065c881:; BB(0x0065c881);
    /* 0065c881: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0065c884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c885: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0065c888: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c889: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0065c88c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c88d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c890: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c895: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0065c89b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c89du); call_ind(t); }
    /* 0065c89d: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0065c8a1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c8a4: jne 0x65c904 */ if (!fZ) goto L_0065c904;
L_0065c8a6:; BB(0x0065c8a6);
    /* 0065c8a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8a9: mov byte ptr [edx + 0x1c1], 1 */ W8((u32)(r_edx+0x1c1u), 0x1u);
    /* 0065c8b0: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0065c8b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c8b6: je 0x65c8ef */ if (fZ) goto L_0065c8ef;
L_0065c8b8:; BB(0x0065c8b8);
    /* 0065c8b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8bb: mov byte ptr [ecx + 0x1c0], 1 */ W8((u32)(r_ecx+0x1c0u), 0x1u);
    /* 0065c8c2: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8c9: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c8ceu); f_005fb3a0();
    /* 0065c8ce: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c8d0: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x65c8d5u); f_006065d0();
    /* 0065c8d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8d8: mov byte ptr [edx + 0x1c0], 0 */ W8((u32)(r_edx+0x1c0u), 0x0u);
    /* 0065c8df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8e4: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c8ea: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65c8efu); f_0065cde0();
L_0065c8ef:; BB(0x0065c8ef);
    /* 0065c8ef: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0065c8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c8f7: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065c8fd: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65c902u); f_0065cde0();
    /* 0065c902: jmp 0x65c971 */ goto L_0065c971;
L_0065c904:; BB(0x0065c904);
    /* 0065c904: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c907: mov byte ptr [eax + 0x1c1], 0 */ W8((u32)(r_eax+0x1c1u), 0x0u);
    /* 0065c90e: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0065c912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c914: je 0x65c94d */ if (fZ) goto L_0065c94d;
L_0065c916:; BB(0x0065c916);
    /* 0065c916: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c919: mov byte ptr [edx + 0x1c0], 1 */ W8((u32)(r_edx+0x1c0u), 0x1u);
    /* 0065c920: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c922: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c924: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c927: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c92cu); f_005fb3a0();
    /* 0065c92c: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c92e: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x65c933u); f_006065d0();
    /* 0065c933: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c936: mov byte ptr [eax + 0x1c0], 0 */ W8((u32)(r_eax+0x1c0u), 0x0u);
    /* 0065c93d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c93f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c942: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c948: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65c94du); f_0065cde0();
L_0065c94d:; BB(0x0065c94d);
    /* 0065c94d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0065c950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c951: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c954: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c95a: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c95d: call 0x6639d0 */ r_esp -= 4; W32(r_esp, 0x65c962u); f_006639d0();
    /* 0065c962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c963: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c966: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c96c: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65c971u); f_0065cde0();
L_0065c971:; BB(0x0065c971);
    /* 0065c971: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c974: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065c97a: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c97d: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c982u); f_00663c50();
    /* 0065c982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c984: jne 0x65c9ae */ if (!fZ) goto L_0065c9ae;
L_0065c986:; BB(0x0065c986);
    /* 0065c986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c989: movzx ecx, byte ptr [eax + 0x1c4] */ r_ecx = (u32)R8((u32)(r_eax+0x1c4u));
    /* 0065c990: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c992: jne 0x65c9ae */ if (!fZ) goto L_0065c9ae;
L_0065c994:; BB(0x0065c994);
    /* 0065c994: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c997: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065c999: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c99c: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 0065c9a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65c9a4u); call_ind(t); }
    /* 0065c9a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c9a7: mov byte ptr [eax + 0x1c4], 1 */ W8((u32)(r_eax+0x1c4u), 0x1u);
L_0065c9ae:; BB(0x0065c9ae);
    /* 0065c9ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c9b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c9b1: ret 0x10 */ FN_RET(0x0065c820); r_esp += 20; return;
}

void f_0065c9c0(void) /* sub_65C9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c9c0);
    /* 0065c9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c9c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c9c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065c9c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c9d0: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c9d6: call 0x65d190 */ r_esp -= 4; W32(r_esp, 0x65c9dbu); f_0065d190();
    /* 0065c9db: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065c9e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065c9e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065c9e9: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0065c9ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65c9f1u); call_ind(t); }
    /* 0065c9f1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065c9f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c9f6: je 0x65ca32 */ if (fZ) goto L_0065ca32;
L_0065c9f8:; BB(0x0065c9f8);
    /* 0065c9f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c9fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c9fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ca00: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0065ca03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ca05u); call_ind(t); }
    /* 0065ca05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ca07: je 0x65ca32 */ if (fZ) goto L_0065ca32;
L_0065ca09:; BB(0x0065ca09);
    /* 0065ca09: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ca0e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65ca13u); f_005fb5e0();
    /* 0065ca13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065ca16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065ca1b: add ecx, 0x186bf */ {  u32 a = r_ecx; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ca21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca22: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ca25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065ca27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ca2a: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 0065ca30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65ca32u); call_ind(t); }
L_0065ca32:; BB(0x0065ca32);
    /* 0065ca32: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ca34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ca35: ret 4 */ FN_RET(0x0065c9c0); r_esp += 8; return;
}

void f_0065ca40(void) /* sub_65CA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ca40);
    /* 0065ca40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca41: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ca43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ca47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ca4c: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65ca51u); f_005fb3a0();
    /* 0065ca51: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ca53: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65ca58u); f_00606570();
    /* 0065ca58: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ca5b: je 0x65ca5f */ if (fZ) goto L_0065ca5f;
L_0065ca5d:; BB(0x0065ca5d);
    /* 0065ca5d: jmp 0x65ca79 */ goto L_0065ca79;
L_0065ca5f:; BB(0x0065ca5f);
    /* 0065ca5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ca62: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ca69: je 0x65ca79 */ if (fZ) goto L_0065ca79;
L_0065ca6b:; BB(0x0065ca6b);
    /* 0065ca6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ca6e: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065ca74: call 0x65d080 */ r_esp -= 4; W32(r_esp, 0x65ca79u); f_0065d080();
L_0065ca79:; BB(0x0065ca79);
    /* 0065ca79: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ca7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ca7c: ret  */ FN_RET(0x0065ca40); r_esp += 4; return;
}

void f_0065cfe0(void) /* sub_65CFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cfe0);
    /* 0065cfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cfe7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cfea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cfee: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cff1: call 0x663d40 */ r_esp -= 4; W32(r_esp, 0x65cff6u); f_00663d40();
    /* 0065cff6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cff9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065cffb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cffe: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065d004: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65d006u); call_ind(t); }
    /* 0065d006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d008: jne 0x65d025 */ if (!fZ) goto L_0065d025;
L_0065d00a:; BB(0x0065d00a);
    /* 0065d00a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d00c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d013: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d015: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d018: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065d01e: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65d023u); f_0065c820();
    /* 0065d023: jmp 0x65d076 */ goto L_0065d076;
L_0065d025:; BB(0x0065d025);
    /* 0065d025: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d029: jne 0x65d04f */ if (!fZ) goto L_0065d04f;
L_0065d02b:; BB(0x0065d02b);
    /* 0065d02b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d02d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d02f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d032: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d035: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65d03au); f_006639a0();
    /* 0065d03a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d03b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d03d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d03f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d042: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0065d048: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65d04du); f_0065c820();
    /* 0065d04d: jmp 0x65d076 */ goto L_0065d076;
L_0065d04f:; BB(0x0065d04f);
    /* 0065d04f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d051: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d054: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065d057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d058: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d05b: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d05e: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65d063u); f_006639a0();
    /* 0065d063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d066: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d068: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d06b: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065d071: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65d076u); f_0065c820();
L_0065d076:; BB(0x0065d076);
    /* 0065d076: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d079: ret 4 */ FN_RET(0x0065cfe0); r_esp += 8; return;
}

