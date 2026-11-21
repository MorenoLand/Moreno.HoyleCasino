#include "protos.h"

void f_0060f380(void) /* sciOdometer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f380);
    /* 0060f380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f381: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060f387: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f38a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x60f38fu); f_005f5bf0();
    /* 0060f38f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f392: mov dword ptr [eax], 0x6d8344 */ W32((u32)(r_eax), 0x6d8344u);
    /* 0060f398: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f39b: mov dword ptr [ecx + 0x1d0], 0 */ W32((u32)(r_ecx+0x1d0u), 0x0u);
    /* 0060f3a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3a8: mov word ptr [edx + 0x186], 5 */ W16((u32)(r_edx+0x186u), 0x5u);
    /* 0060f3b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3b4: mov word ptr [eax + 0x184], 0 */ W16((u32)(r_eax+0x184u), 0x0u);
    /* 0060f3bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3c0: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 0060f3ca: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3ce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3d1: add edx, 0x190 */ {  u32 a = r_edx; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060f3d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3d8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60f3ddu); f_00686fa2();
    /* 0060f3dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f3e0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3e7: add eax, 0x1b0 */ {  u32 a = r_eax; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060f3ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3ed: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60f3f2u); f_00686fa2();
    /* 0060f3f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f3f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f3f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f3fb: ret  */ FN_RET(0x0060f380); r_esp += 4; return;
}

void f_0060f400(void) /* sciOdometer::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f400);
    /* 0060f400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f401: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f405: push 0x6aae28 */ { u32 v = 0x6aae28u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f411: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f414: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060f419: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f41b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f41c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060f41f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060f425: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0060f428: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f42b: mov dword ptr [eax], 0x6d8344 */ W32((u32)(r_eax), 0x6d8344u);
    /* 0060f431: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f438: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f43b: cmp dword ptr [ecx + 0x1d0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f442: je 0x60f483 */ if (fZ) goto L_0060f483;
L_0060f444:; BB(0x0060f444);
    /* 0060f444: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f447: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0060f44d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060f450: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060f453: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060f456: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f45a: je 0x60f46f */ if (fZ) goto L_0060f46f;
L_0060f45c:; BB(0x0060f45c);
    /* 0060f45c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f45e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f461: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060f463: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f466: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060f468: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f46au); call_ind(t); }
    /* 0060f46a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f46d: jmp 0x60f476 */ goto L_0060f476;
L_0060f46f:; BB(0x0060f46f);
    /* 0060f46f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0060f476:; BB(0x0060f476);
    /* 0060f476: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f479: mov dword ptr [eax + 0x1d0], 0 */ W32((u32)(r_eax+0x1d0u), 0x0u);
L_0060f483:; BB(0x0060f483);
    /* 0060f483: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f486: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f48d: je 0x60f540 */ if (fZ) goto L_0060f540;
L_0060f493:; BB(0x0060f493);
    /* 0060f493: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060f499: jmp 0x60f4a7 */ goto L_0060f4a7;
L_0060f49b:; BB(0x0060f49b);
    /* 0060f49b: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0060f49f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060f4a3: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0060f4a7:; BB(0x0060f4a7);
    /* 0060f4a7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f4ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f4ae: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0060f4b5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060f4b7: jge 0x60f51b */ if ((fS==fO)) goto L_0060f51b;
L_0060f4b9:; BB(0x0060f4b9);
    /* 0060f4b9: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f4bd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f4c0: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f4c6: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f4ca: je 0x60f519 */ if (fZ) goto L_0060f519;
L_0060f4cc:; BB(0x0060f4cc);
    /* 0060f4cc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f4d0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f4d3: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f4d9: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0060f4dc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060f4df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f4e2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0060f4e5: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f4e9: je 0x60f4fe */ if (fZ) goto L_0060f4fe;
L_0060f4eb:; BB(0x0060f4eb);
    /* 0060f4eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f4ed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060f4f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060f4f2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060f4f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060f4f7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f4f9u); call_ind(t); }
    /* 0060f4f9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060f4fc: jmp 0x60f505 */ goto L_0060f505;
L_0060f4fe:; BB(0x0060f4fe);
    /* 0060f4fe: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0060f505:; BB(0x0060f505);
    /* 0060f505: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f509: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f50c: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f512: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_0060f519:; BB(0x0060f519);
    /* 0060f519: jmp 0x60f49b */ goto L_0060f49b;
L_0060f51b:; BB(0x0060f51b);
    /* 0060f51b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f51e: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0060f524: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060f527: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f52a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f52b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x60f530u); f_00686cae();
    /* 0060f530: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f533: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f536: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_0060f540:; BB(0x0060f540);
    /* 0060f540: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f547: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f54a: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x60f54fu); f_005f5c40();
    /* 0060f54f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f552: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f559: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f55a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f55d: ret  */ FN_RET(0x0060f400); r_esp += 4; return;
}

void f_0060f8d0(void) /* sciOdometer::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f8d0);
    /* 0060f8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f8d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f8d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060f8d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060f8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060f8e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f8e4: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x60f8e9u); f_005eb260();
    /* 0060f8e9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f8ef: jmp 0x60f8fd */ goto L_0060f8fd;
L_0060f8f1:; BB(0x0060f8f1);
    /* 0060f8f1: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0060f8f5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060f8f9: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0060f8fd:; BB(0x0060f8fd);
    /* 0060f8fd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f901: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f904: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0060f90b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060f90d: jge 0x60f96e */ if ((fS==fO)) goto L_0060f96e;
L_0060f90f:; BB(0x0060f90f);
    /* 0060f90f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f913: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f916: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f91c: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f920: je 0x60f96c */ if (fZ) goto L_0060f96c;
L_0060f922:; BB(0x0060f922);
    /* 0060f922: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060f925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f926: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f929: movsx edx, word ptr [ecx + 0x186] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x186u));
    /* 0060f930: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f934: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060f937: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060f93a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f93d: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0060f940: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060f942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f943: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f947: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f94a: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f950: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060f953: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f957: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f95a: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0060f960: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0060f963: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060f965: mov ecx, edx */ r_ecx = r_edx;
    /* 0060f967: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0060f96a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f96cu); call_ind(t); }
L_0060f96c:; BB(0x0060f96c);
    /* 0060f96c: jmp 0x60f8f1 */ goto L_0060f8f1;
L_0060f96e:; BB(0x0060f96e);
    /* 0060f96e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f971: ret 8 */ FN_RET(0x0060f8d0); r_esp += 12; return;
}

void f_0060f980(void) /* sciOdometer::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f980);
    /* 0060f980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f981: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f983: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f986: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060f989: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060f98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f98d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f990: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x60f995u); f_005f5300();
    /* 0060f995: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f99b: jmp 0x60f9a9 */ goto L_0060f9a9;
L_0060f99d:; BB(0x0060f99d);
    /* 0060f99d: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0060f9a1: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060f9a5: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0060f9a9:; BB(0x0060f9a9);
    /* 0060f9a9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f9ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f9b0: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 0060f9b7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060f9b9: jge 0x60f9fb */ if ((fS==fO)) goto L_0060f9fb;
L_0060f9bb:; BB(0x0060f9bb);
    /* 0060f9bb: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f9bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f9c2: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0060f9c8: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f9cc: je 0x60f9f9 */ if (fZ) goto L_0060f9f9;
L_0060f9ce:; BB(0x0060f9ce);
    /* 0060f9ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060f9d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f9d2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f9d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f9d9: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f9df: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0060f9e2: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060f9e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060f9e9: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 0060f9ef: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0060f9f2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060f9f4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0060f9f7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f9f9u); call_ind(t); }
L_0060f9f9:; BB(0x0060f9f9);
    /* 0060f9f9: jmp 0x60f99d */ goto L_0060f99d;
L_0060f9fb:; BB(0x0060f9fb);
    /* 0060f9fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f9fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f9fe: ret 4 */ FN_RET(0x0060f980); r_esp += 8; return;
}

void f_0060fa10(void) /* sciOdometer::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060fa10);
    /* 0060fa10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fa11: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fa13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fa16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060fa19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa1c: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x60fa21u); f_005eb5a0();
    /* 0060fa21: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fa27: jmp 0x60fa35 */ goto L_0060fa35;
L_0060fa29:; BB(0x0060fa29);
    /* 0060fa29: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0060fa2d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060fa31: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0060fa35:; BB(0x0060fa35);
    /* 0060fa35: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fa39: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa3c: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 0060fa43: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fa45: jge 0x60fa85 */ if ((fS==fO)) goto L_0060fa85;
L_0060fa47:; BB(0x0060fa47);
    /* 0060fa47: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fa4b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa4e: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060fa54: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fa58: je 0x60fa83 */ if (fZ) goto L_0060fa83;
L_0060fa5a:; BB(0x0060fa5a);
    /* 0060fa5a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fa5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa61: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060fa67: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060fa6a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fa6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa71: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0060fa77: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0060fa7a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060fa7c: mov ecx, edx */ r_ecx = r_edx;
    /* 0060fa7e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0060fa81: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60fa83u); call_ind(t); }
L_0060fa83:; BB(0x0060fa83);
    /* 0060fa83: jmp 0x60fa29 */ goto L_0060fa29;
L_0060fa85:; BB(0x0060fa85);
    /* 0060fa85: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fa87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fa88: ret  */ FN_RET(0x0060fa10); r_esp += 4; return;
}

void f_0060fa90(void) /* sciOdometer::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060fa90);
    /* 0060fa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fa93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fa96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060fa99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fa9c: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x60faa1u); f_005eb570();
    /* 0060faa1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060faa7: jmp 0x60fab5 */ goto L_0060fab5;
L_0060faa9:; BB(0x0060faa9);
    /* 0060faa9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0060faad: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060fab1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0060fab5:; BB(0x0060fab5);
    /* 0060fab5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fab9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fabc: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 0060fac3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fac5: jge 0x60fb05 */ if ((fS==fO)) goto L_0060fb05;
L_0060fac7:; BB(0x0060fac7);
    /* 0060fac7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060facb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060face: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060fad4: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fad8: je 0x60fb03 */ if (fZ) goto L_0060fb03;
L_0060fada:; BB(0x0060fada);
    /* 0060fada: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060fade: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060fae1: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060fae7: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060faea: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0060faee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060faf1: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0060faf7: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0060fafa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060fafc: mov ecx, edx */ r_ecx = r_edx;
    /* 0060fafe: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0060fb01: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60fb03u); call_ind(t); }
L_0060fb03:; BB(0x0060fb03);
    /* 0060fb03: jmp 0x60faa9 */ goto L_0060faa9;
L_0060fb05:; BB(0x0060fb05);
    /* 0060fb05: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fb07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fb08: ret  */ FN_RET(0x0060fa90); r_esp += 4; return;
}

void f_0060fb30(void) /* sciOdometer::func_0060fb30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060fb30);
    /* 0060fb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb31: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fb33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb35: push 0x6aae74 */ { u32 v = 0x6aae74u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb41: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fb44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060fb49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fb4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060fb4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060fb55: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0060fb58: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0060fb5f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fb62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060fb65: cmp ecx, dword ptr [eax + 0x188] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x188u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fb6b: jne 0x60fb72 */ if (!fZ) goto L_0060fb72;
L_0060fb6d:; BB(0x0060fb6d);
    /* 0060fb6d: jmp 0x60fd27 */ goto L_0060fd27;
L_0060fb72:; BB(0x0060fb72);
    /* 0060fb72: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0060fb79: jmp 0x60fb84 */ goto L_0060fb84;
L_0060fb7b:; BB(0x0060fb7b);
    /* 0060fb7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fb7e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060fb81: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0060fb84:; BB(0x0060fb84);
    /* 0060fb84: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fb87: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 0060fb8e: cmp dword ptr [ebp - 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fb91: jge 0x60fb9e */ if ((fS==fO)) goto L_0060fb9e;
L_0060fb93:; BB(0x0060fb93);
    /* 0060fb93: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060fb96: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060fb99: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0060fb9c: jmp 0x60fb7b */ goto L_0060fb7b;
L_0060fb9e:; BB(0x0060fb9e);
    /* 0060fb9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060fba1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060fba4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060fba7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fbab: jge 0x60fbcf */ if ((fS==fO)) goto L_0060fbcf;
L_0060fbad:; BB(0x0060fbad);
    /* 0060fbad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060fbaf: jne 0x60fbc8 */ if (!fZ) goto L_0060fbc8;
L_0060fbb1:; BB(0x0060fbb1);
    /* 0060fbb1: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbb6: push 0x6d8404 */ { u32 v = 0x6d8404u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbbb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbc0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60fbc5u); f_005e9f20();
    /* 0060fbc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060fbc8:; BB(0x0060fbc8);
    /* 0060fbc8: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_0060fbcf:; BB(0x0060fbcf);
    /* 0060fbcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060fbd2: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fbd5: jle 0x60fbf8 */ if ((fZ||fS!=fO)) goto L_0060fbf8;
L_0060fbd7:; BB(0x0060fbd7);
    /* 0060fbd7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060fbd9: jne 0x60fbf2 */ if (!fZ) goto L_0060fbf2;
L_0060fbdb:; BB(0x0060fbdb);
    /* 0060fbdb: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbe0: push 0x6d8404 */ { u32 v = 0x6d8404u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbe5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x60fbefu); f_005e9f20();
    /* 0060fbef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060fbf2:; BB(0x0060fbf2);
    /* 0060fbf2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060fbf5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0060fbf8:; BB(0x0060fbf8);
    /* 0060fbf8: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0060fbfc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fbfe: jne 0x60fc54 */ if (!fZ) goto L_0060fc54;
L_0060fc00:; BB(0x0060fc00);
    /* 0060fc00: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc02: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60fc07u); f_00686d82();
    /* 0060fc07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060fc0a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060fc0d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fc14: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fc18: je 0x60fc2f */ if (fZ) goto L_0060fc2f;
L_0060fc1a:; BB(0x0060fc1a);
    /* 0060fc1a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fc1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060fc21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc22: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060fc25: call 0x60fd70 */ r_esp -= 4; W32(r_esp, 0x60fc2au); f_0060fd70();
    /* 0060fc2a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0060fc2d: jmp 0x60fc36 */ goto L_0060fc36;
L_0060fc2f:; BB(0x0060fc2f);
    /* 0060fc2f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0060fc36:; BB(0x0060fc36);
    /* 0060fc36: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060fc39: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060fc3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fc43: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fc46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc47: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fc4a: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60fc4fu); f_005f5df0();
    /* 0060fc4f: jmp 0x60fd1b */ goto L_0060fd1b;
L_0060fc54:; BB(0x0060fc54);
    /* 0060fc54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc56: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fc59: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60fc5eu); f_005f5df0();
    /* 0060fc5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060fc61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060fc64: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0060fc6b:; BB(0x0060fc6b);
    /* 0060fc6b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fc6f: je 0x60fc8a */ if (fZ) goto L_0060fc8a;
L_0060fc71:; BB(0x0060fc71);
    /* 0060fc71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060fc74: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060fc77: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0060fc7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060fc7d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060fc7e: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060fc83: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060fc83, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060fc83, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060fc85: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060fc88: jmp 0x60fc6b */ goto L_0060fc6b;
L_0060fc8a:; BB(0x0060fc8a);
    /* 0060fc8a: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fc8e: jge 0x60fc97 */ if ((fS==fO)) goto L_0060fc97;
L_0060fc90:; BB(0x0060fc90);
    /* 0060fc90: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0060fc97:; BB(0x0060fc97);
    /* 0060fc97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060fc9a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0060fc9d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060fca4: jmp 0x60fcaf */ goto L_0060fcaf;
L_0060fca6:; BB(0x0060fca6);
    /* 0060fca6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fca9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060fcac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0060fcaf:; BB(0x0060fcaf);
    /* 0060fcaf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fcb2: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0060fcb9: cmp dword ptr [ebp - 0x24], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fcbc: jge 0x60fd1b */ if ((fS==fO)) goto L_0060fd1b;
L_0060fcbe:; BB(0x0060fcbe);
    /* 0060fcbe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060fcc1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060fcc2: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060fcc7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060fcc7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060fcc7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060fcc9: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060fccb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0060fcce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fcd1: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fcd4: jl 0x60fcdd */ if ((fS!=fO)) goto L_0060fcdd;
L_0060fcd6:; BB(0x0060fcd6);
    /* 0060fcd6: mov dword ptr [ebp - 0x28], 0x14 */ W32((u32)(r_ebp+0xffffffd8u), 0x14u);
L_0060fcdd:; BB(0x0060fcdd);
    /* 0060fcdd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060fce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fce1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fce4: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060fcea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fced: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0060fcf0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fcf3: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060fcf9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fcfc: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0060fcff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060fd01: mov ecx, eax */ r_ecx = r_eax;
    /* 0060fd03: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0060fd09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60fd0bu); call_ind(t); }
    /* 0060fd0b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060fd0e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060fd0f: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060fd14: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060fd14, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060fd14, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060fd16: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060fd19: jmp 0x60fca6 */ goto L_0060fca6;
L_0060fd1b:; BB(0x0060fd1b);
    /* 0060fd1b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060fd1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060fd21: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
L_0060fd27:; BB(0x0060fd27);
    /* 0060fd27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fd2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fd31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fd32: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fd34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fd35: ret 8 */ FN_RET(0x0060fb30); r_esp += 12; return;
}

