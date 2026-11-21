#include "protos.h"

void f_005a8f40(void) /* RoyalMatchBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8f40);
    /* 005a8f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8f43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8f46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a8f49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8f4c: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x5a8f51u); f_005cc1d0();
    /* 005a8f51: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8f54: mov dword ptr [eax], 0x6cfa34 */ W32((u32)(r_eax), 0x6cfa34u);
    /* 005a8f5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a8f61: jmp 0x5a8f6c */ goto L_005a8f6c;
L_005a8f63:; BB(0x005a8f63);
    /* 005a8f63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8f66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8f69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a8f6c:; BB(0x005a8f6c);
    /* 005a8f6c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8f70: jge 0x5a8fa8 */ if ((fS==fO)) goto L_005a8fa8;
L_005a8f72:; BB(0x005a8f72);
    /* 005a8f72: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a8f79: jmp 0x5a8f84 */ goto L_005a8f84;
L_005a8f7b:; BB(0x005a8f7b);
    /* 005a8f7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a8f7e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a8f81: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005a8f84:; BB(0x005a8f84);
    /* 005a8f84: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8f88: jge 0x5a8fa6 */ if ((fS==fO)) goto L_005a8fa6;
L_005a8f8a:; BB(0x005a8f8a);
    /* 005a8f8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8f8d: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a8f90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8f93: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a8f9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a8f9d: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005a8fa4: jmp 0x5a8f7b */ goto L_005a8f7b;
L_005a8fa6:; BB(0x005a8fa6);
    /* 005a8fa6: jmp 0x5a8f63 */ goto L_005a8f63;
L_005a8fa8:; BB(0x005a8fa8);
    /* 005a8fa8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8fab: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8fad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8fae: ret  */ FN_RET(0x005a8f40); r_esp += 4; return;
}

void f_005a8fb0(void) /* RoyalMatchBetArea::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8fb0);
    /* 005a8fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8fb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fb5: push 0x6a7a2a */ { u32 v = 0x6a7a2au; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a8fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fc2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a8fc7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a8fcd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a8fd3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a8fd6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8fd9: mov dword ptr [eax], 0x6cfa34 */ W32((u32)(r_eax), 0x6cfa34u);
    /* 005a8fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a8fe6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8fe9: call 0x5a9510 */ r_esp -= 4; W32(r_esp, 0x5a8feeu); f_005a9510();
    /* 005a8fee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a8ff5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8ff8: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x5a8ffdu); f_005cc230();
    /* 005a8ffd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a9000: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a9007: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a9008: mov esp, ebp */ r_esp = r_ebp;
    /* 005a900a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a900b: ret  */ FN_RET(0x005a8fb0); r_esp += 4; return;
}

void f_005a9010(void) /* RoyalMatchBetArea::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9010);
    /* 005a9010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9011: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9015: push 0x6a7a50 */ { u32 v = 0x6a7a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a901a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a9020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9021: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9024: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9025: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a902a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a902c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a902d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a9030: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a9036: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a9039: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005a903c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a903d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a9040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9041: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9045: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9049: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a904c: call 0x5cca50 */ r_esp -= 4; W32(r_esp, 0x5a9051u); f_005cca50();
    /* 005a9051: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9054: cmp dword ptr [ecx + 0xcc0], 0x65 */ {  u32 a = R32((u32)(r_ecx+0xcc0u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a905b: jne 0x5a9062 */ if (!fZ) goto L_005a9062;
L_005a905d:; BB(0x005a905d);
    /* 005a905d: jmp 0x5a940a */ goto L_005a940a;
L_005a9062:; BB(0x005a9062);
    /* 005a9062: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9065: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a906b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a906e: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005a9075: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9078: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a907b: mov ecx, dword ptr [ecx + edx] */ r_ecx = R32((u32)(r_ecx+r_edx));
    /* 005a907e: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5a9083u); f_005eb220();
    /* 005a9083: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9085: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9088: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005a908b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a908e: and ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9091: add ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9094: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a9097: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a909a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a909b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a909e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a909f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a90a5: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5a90aau); f_005b60a0();
    /* 005a90aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a90ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a90af: je 0x5a940a */ if (fZ) goto L_005a940a;
L_005a90b5:; BB(0x005a90b5);
    /* 005a90b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a90b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a90b9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a90bf: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a90c4u); f_005b4e50();
    /* 005a90c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a90c6: je 0x5a90e0 */ if (fZ) goto L_005a90e0;
L_005a90c8:; BB(0x005a90c8);
    /* 005a90c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a90cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a90cc: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a90d2: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a90d7u); f_005b4e50();
    /* 005a90d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a90da: jne 0x5a918e */ if (!fZ) goto L_005a918e;
L_005a90e0:; BB(0x005a90e0);
    /* 005a90e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a90e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a90e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a90e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a90e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a90eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a90ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a90f0: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005a90f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a90f8u); call_ind(t); }
    /* 005a90f8: mov esi, eax */ r_esi = r_eax;
    /* 005a90fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a90fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a90fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9102: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9105: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a9107: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a910a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005a9110: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a9112u); call_ind(t); }
    /* 005a9112: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9116: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a9118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9119: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a911c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a911d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9121: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9124: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a9126: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9129: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005a912f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a9131u); call_ind(t); }
    /* 005a9131: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9133: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a9136: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a9137: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a9139: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a913b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a913d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a913e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9141: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9147: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a914a: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005a9151: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9154: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9157: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9159: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a915c: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005a915f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9162: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9165: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9168: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a916e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9171: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 005a9178: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a917a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a917d: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a9180: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a9182: mov ecx, eax */ r_ecx = r_eax;
    /* 005a9184: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a9187: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a9189u); call_ind(t); }
    /* 005a9189: jmp 0x5a9229 */ goto L_005a9229;
L_005a918e:; BB(0x005a918e);
    /* 005a918e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9191: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9192: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9196: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9199: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a919b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a919e: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005a91a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a91a6u); call_ind(t); }
    /* 005a91a6: mov esi, eax */ r_esi = r_eax;
    /* 005a91a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a91ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a91ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a91af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a91b0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a91b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a91b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a91b8: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005a91be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a91c0u); call_ind(t); }
    /* 005a91c0: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a91c4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a91c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a91c7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a91ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a91cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a91ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a91cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a91d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a91d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a91d7: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005a91dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a91dfu); call_ind(t); }
    /* 005a91df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a91e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a91e3: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a91e9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a91ec: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005a91f3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a91f6: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a91f9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a91fb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a91fe: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a9201: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9204: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9207: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a920a: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9210: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9213: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 005a921a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a921c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a921f: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005a9222: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a9224: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a9227: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a9229u); call_ind(t); }
L_005a9229:; BB(0x005a9229);
    /* 005a9229: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005a922e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a9233u); f_00686d82();
    /* 005a9233: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9236: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a9239: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a9240: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9244: je 0x5a9253 */ if (fZ) goto L_005a9253;
L_005a9246:; BB(0x005a9246);
    /* 005a9246: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a9249: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5a924eu); f_005f5f50();
    /* 005a924e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a9251: jmp 0x5a925a */ goto L_005a925a;
L_005a9253:; BB(0x005a9253);
    /* 005a9253: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005a925a:; BB(0x005a925a);
    /* 005a925a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a925d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a9260: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a9267: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a926a: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a926d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9270: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 005a9277: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a927a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a927d: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 005a9280: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9282: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9285: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a928b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a928e: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005a9295: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9298: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a929b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a929d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a92a0: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005a92a3: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5a92a8u); f_005f53c0();
    /* 005a92a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a92a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a92ac: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a92b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a92b5: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005a92bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a92bf: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a92c2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a92c4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a92c7: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005a92ca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a92cd: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a92d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a92d3: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a92d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a92dc: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005a92e3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a92e5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a92e8: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005a92eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a92ed: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005a92f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a92f2u); call_ind(t); }
    /* 005a92f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a92f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a92f6: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a92fc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a92ff: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005a9306: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9309: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a930c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a930e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a9311: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a9314: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9317: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a931a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a931d: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9323: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9326: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 005a932d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a932f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a9332: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005a9335: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a9337: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005a933a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a933cu); call_ind(t); }
    /* 005a933c: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a933f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9340: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9343: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a9345: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a9348: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005a934e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a9350u); call_ind(t); }
    /* 005a9350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9351: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9354: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9357: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a935a: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a9361: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a9364: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005a9367: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a936cu); f_005eae80();
    /* 005a936c: mov esi, 0x10 */ r_esi = 0x10u;
    /* 005a9371: sub esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a9374: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9377: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9379: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a937eu); f_0062fbf0();
    /* 005a937e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9381: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a9383: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9384: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9387: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a938a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a938d: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 005a9394: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a9397: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005a939a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a939d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a93a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93a3: lea ecx, [edx + ecx + 0xae0] */ r_ecx = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a93aa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a93ad: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005a93b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a93b2: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a93b8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a93bau); call_ind(t); }
    /* 005a93ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a93bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a93bf: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a93c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93c5: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a93cc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a93cf: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005a93d2: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5a93d7u); f_005eb700();
    /* 005a93d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a93da: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a93dd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93e0: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a93e7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a93ea: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005a93ed: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a93f0: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a93f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a93f6: lea eax, [ecx + eax + 0xae0] */ r_eax = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a93fd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a9400: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005a9403: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a9405: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005a9408: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a940au); call_ind(t); }
L_005a940a:; BB(0x005a940a);
    /* 005a940a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a940d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a9414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a9415: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a9416: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9419: ret 0x10 */ FN_RET(0x005a9010); r_esp += 20; return;
}

void f_005a9420(void) /* RoyalMatchBetArea::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9420);
    /* 005a9420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9421: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9423: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9426: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a9429: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a9430: jmp 0x5a943b */ goto L_005a943b;
L_005a9432:; BB(0x005a9432);
    /* 005a9432: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9435: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9438: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a943b:; BB(0x005a943b);
    /* 005a943b: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a943f: jge 0x5a94f3 */ if ((fS==fO)) goto L_005a94f3;
L_005a9445:; BB(0x005a9445);
    /* 005a9445: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a9448: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a944b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a944e: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a9455: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9458: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a945c: je 0x5a94ee */ if (fZ) goto L_005a94ee;
L_005a9462:; BB(0x005a9462);
    /* 005a9462: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9465: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9468: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a946b: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 005a9472: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9475: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005a9478: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a947b: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a947e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a9481: lea ecx, [edx + ecx + 0xae0] */ r_ecx = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a9488: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a948b: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005a948e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a9490: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005a9493: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a9495u); call_ind(t); }
    /* 005a9495: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9498: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a949b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a949e: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a94a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a94a8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005a94ab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a94ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a94b1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a94b4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a94b8: je 0x5a94cd */ if (fZ) goto L_005a94cd;
L_005a94ba:; BB(0x005a94ba);
    /* 005a94ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a94bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a94bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a94c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a94c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a94c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a94c8u); call_ind(t); }
    /* 005a94c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a94cb: jmp 0x5a94d4 */ goto L_005a94d4;
L_005a94cd:; BB(0x005a94cd);
    /* 005a94cd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005a94d4:; BB(0x005a94d4);
    /* 005a94d4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a94d7: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a94da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a94dd: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a94e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a94e7: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_005a94ee:; BB(0x005a94ee);
    /* 005a94ee: jmp 0x5a9432 */ goto L_005a9432;
L_005a94f3:; BB(0x005a94f3);
    /* 005a94f3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a94f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a94f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a94fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a94fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a94fe: call 0x5ccc70 */ r_esp -= 4; W32(r_esp, 0x5a9503u); f_005ccc70();
    /* 005a9503: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9506: ret 8 */ FN_RET(0x005a9420); r_esp += 12; return;
}

void f_005a9510(void) /* RoyalMatchBetArea::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9510);
    /* 005a9510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9511: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9513: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9516: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a9519: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a951c: call 0x5ccd90 */ r_esp -= 4; W32(r_esp, 0x5a9521u); f_005ccd90();
    /* 005a9521: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a9528: jmp 0x5a9533 */ goto L_005a9533;
L_005a952a:; BB(0x005a952a);
    /* 005a952a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a952d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9530: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a9533:; BB(0x005a9533);
    /* 005a9533: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9537: jge 0x5a960e */ if ((fS==fO)) goto L_005a960e;
L_005a953d:; BB(0x005a953d);
    /* 005a953d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a9544: jmp 0x5a954f */ goto L_005a954f;
L_005a9546:; BB(0x005a9546);
    /* 005a9546: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9549: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a954c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005a954f:; BB(0x005a954f);
    /* 005a954f: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9553: jge 0x5a9609 */ if ((fS==fO)) goto L_005a9609;
L_005a9559:; BB(0x005a9559);
    /* 005a9559: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a955c: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a955f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9562: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 005a9569: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a956c: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9570: je 0x5a9604 */ if (fZ) goto L_005a9604;
L_005a9576:; BB(0x005a9576);
    /* 005a9576: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9579: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a957c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a957f: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a9586: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9589: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005a958c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a958f: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9595: lea edx, [eax + edx + 0xae0] */ r_edx = (u32)(r_eax+r_edx+0xae0u);
    /* 005a959c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a959f: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005a95a2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a95a4: mov ecx, edx */ r_ecx = r_edx;
    /* 005a95a6: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005a95a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a95abu); call_ind(t); }
    /* 005a95ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a95ae: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a95b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a95b4: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 005a95bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a95be: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005a95c1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a95c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a95c7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005a95ca: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a95ce: je 0x5a95e3 */ if (fZ) goto L_005a95e3;
L_005a95d0:; BB(0x005a95d0);
    /* 005a95d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a95d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a95d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a95d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a95da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a95dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a95deu); call_ind(t); }
    /* 005a95de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a95e1: jmp 0x5a95ea */ goto L_005a95ea;
L_005a95e3:; BB(0x005a95e3);
    /* 005a95e3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005a95ea:; BB(0x005a95ea);
    /* 005a95ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a95ed: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a95f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a95f3: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 005a95fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a95fd: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_005a9604:; BB(0x005a9604);
    /* 005a9604: jmp 0x5a9546 */ goto L_005a9546;
L_005a9609:; BB(0x005a9609);
    /* 005a9609: jmp 0x5a952a */ goto L_005a952a;
L_005a960e:; BB(0x005a960e);
    /* 005a960e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9611: ret  */ FN_RET(0x005a9510); r_esp += 4; return;
}

void f_005a9620(void) /* RoyalMatchBetArea::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9620);
    /* 005a9620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9621: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9623: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9626: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a9629: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a962c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005a9632: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a9635: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a9638: lea eax, [ecx + edx + 0x48] */ r_eax = (u32)(r_ecx+r_edx+0x48u);
    /* 005a963c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a963f: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 005a9642: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 005a9646: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a9649: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a964c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a964f: cmp dword ptr [ecx + 0xcc0], 0x65 */ {  u32 a = R32((u32)(r_ecx+0xcc0u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9656: jne 0x5a966b */ if (!fZ) goto L_005a966b;
L_005a9658:; BB(0x005a9658);
    /* 005a9658: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a965b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a965e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a9660: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9663: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005a9666: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9669: jmp 0x5a96a7 */ goto L_005a96a7;
L_005a966b:; BB(0x005a966b);
    /* 005a966b: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a966f: jge 0x5a9696 */ if ((fS==fO)) goto L_005a9696;
L_005a9671:; BB(0x005a9671);
    /* 005a9671: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a9674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9675: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9679: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a967f: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5a9684u); f_005b60a0();
    /* 005a9684: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a9687: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9689: je 0x5a9696 */ if (fZ) goto L_005a9696;
L_005a968b:; BB(0x005a968b);
    /* 005a968b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a968e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a968f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a9691: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a9693: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a9696:; BB(0x005a9696);
    /* 005a9696: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9699: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a969c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a969e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a96a1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005a96a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005a96a7:; BB(0x005a96a7);
    /* 005a96a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005a96a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a96aa: ret 0xc */ FN_RET(0x005a9620); r_esp += 16; return;
}

void f_005a96d0(void) /* RoyalMatchBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a96d0);
    /* 005a96d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a96d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a96d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a96d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a96d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a96da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a96db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a96de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a96df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a96e2: call 0x5a9b10 */ r_esp -= 4; W32(r_esp, 0x5a96e7u); f_005a9b10();
    /* 005a96e7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a96ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005a96ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a96ed: ret 8 */ FN_RET(0x005a96d0); r_esp += 12; return;
}

void f_005a96f0(void) /* RoyalMatchBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a96f0);
    /* 005a96f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a96f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a96f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a96f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a96f9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a96fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a96fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9701: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9704: call 0x5a9750 */ r_esp -= 4; W32(r_esp, 0x5a9709u); f_005a9750();
    /* 005a9709: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a970c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a970e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9713u); f_0062fbf0();
    /* 005a9713: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9716: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9719: jne 0x5a972f */ if (!fZ) goto L_005a972f;
L_005a971b:; BB(0x005a971b);
    /* 005a971b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a971d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9722u); f_0062fbf0();
    /* 005a9722: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9725: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9728: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a972a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005a972d: jmp 0x5a973f */ goto L_005a973f;
L_005a972f:; BB(0x005a972f);
    /* 005a972f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9731: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9736u); f_0062fbf0();
    /* 005a9736: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9739: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a973c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a973f:; BB(0x005a973f);
    /* 005a973f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9742: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9745: ret 8 */ FN_RET(0x005a96f0); r_esp += 12; return;
}

void f_005a9ab0(void) /* RoyalMatchBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9ab0);
    /* 005a9ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9ab6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a9ab9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a9abd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9ac0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ac1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a9ac4: call 0x5a9b10 */ r_esp -= 4; W32(r_esp, 0x5a9ac9u); f_005a9b10();
    /* 005a9ac9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a9acc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ace: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9ad3u); f_0062fbf0();
    /* 005a9ad3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9ad6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9ad9: jne 0x5a9aef */ if (!fZ) goto L_005a9aef;
L_005a9adb:; BB(0x005a9adb);
    /* 005a9adb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9add: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9ae2u); f_0062fbf0();
    /* 005a9ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9ae5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9ae8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a9aea: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005a9aed: jmp 0x5a9aff */ goto L_005a9aff;
L_005a9aef:; BB(0x005a9aef);
    /* 005a9aef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9af1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a9af6u); f_0062fbf0();
    /* 005a9af6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a9af9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9afc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a9aff:; BB(0x005a9aff);
    /* 005a9aff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9b02: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9b04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9b05: ret 8 */ FN_RET(0x005a9ab0); r_esp += 12; return;
}

void f_005a9e70(void) /* RoyalMatchBetArea::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9e70);
    /* 005a9e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a9e77: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 005a9e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9e7f: ret  */ FN_RET(0x005a9e70); r_esp += 4; return;
}

void f_005a9e80(void) /* RoyalMatchBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9e80);
    /* 005a9e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9e83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9e86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a9e89: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005a9e90: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005a9e97: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a9e9e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a9ea5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a9ea8: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005a9eae: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5a9eb3u); f_005f5400();
    /* 005a9eb3: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a9eb7: add eax, 0x1391 */ {  u32 a = r_eax; u32 b = 0x1391u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a9ebc: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9ebf: ret  */ FN_RET(0x005a9e80); r_esp += 4; return;
}

