#include "protos.h"

void f_0047a340(void) /* sub_47A340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a340);
    /* 0047a340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a341: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a343: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a346: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0047a347: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0047a34a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047a350: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x47a355u); f_005da830();
    /* 0047a355: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047a358: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a35a: je 0x47a361 */ if (fZ) goto L_0047a361;
L_0047a35c:; BB(0x0047a35c);
    /* 0047a35c: jmp 0x47a433 */ goto L_0047a433;
L_0047a361:; BB(0x0047a361);
    /* 0047a361: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a368: jmp 0x47a373 */ goto L_0047a373;
L_0047a36a:; BB(0x0047a36a);
    /* 0047a36a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a36d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047a370: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0047a373:; BB(0x0047a373);
    /* 0047a373: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047a376: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a37bu); f_0047f950();
    /* 0047a37b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a37e: jge 0x47a433 */ if ((fS==fO)) goto L_0047a433;
L_0047a384:; BB(0x0047a384);
    /* 0047a384: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a388: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a38du); f_005dcb00();
    /* 0047a38d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a390: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047a393: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a396: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a39bu); f_0063aac0();
    /* 0047a39b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047a39d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047a3a0: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a3a4: je 0x47a3c2 */ if (fZ) goto L_0047a3c2;
L_0047a3a6:; BB(0x0047a3a6);
    /* 0047a3a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a3a9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a3aeu); f_0063aac0();
    /* 0047a3ae: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0047a3b0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047a3b3: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a3b7: je 0x47a3c2 */ if (fZ) goto L_0047a3c2;
L_0047a3b9:; BB(0x0047a3b9);
    /* 0047a3b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0047a3c0: jmp 0x47a3c9 */ goto L_0047a3c9;
L_0047a3c2:; BB(0x0047a3c2);
    /* 0047a3c2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0047a3c9:; BB(0x0047a3c9);
    /* 0047a3c9: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0047a3cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a3cf: je 0x47a42e */ if (fZ) goto L_0047a42e;
L_0047a3d1:; BB(0x0047a3d1);
    /* 0047a3d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a3d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a3dau); f_005dcb00();
    /* 0047a3da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a3dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047a3e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047a3e3: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 0047a3e9: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0047a3ec: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0047a3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a3f2: je 0x47a42e */ if (fZ) goto L_0047a42e;
L_0047a3f4:; BB(0x0047a3f4);
    /* 0047a3f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a3f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a3f8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a3fdu); f_005dcb00();
    /* 0047a3fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a400: mov ecx, eax */ r_ecx = r_eax;
    /* 0047a402: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x47a407u); f_005d5a50();
    /* 0047a407: mov esi, eax */ r_esi = r_eax;
    /* 0047a409: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047a40c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x47a411u); f_0047bc20();
    /* 0047a411: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a413: jl 0x47a42e */ if ((fS!=fO)) goto L_0047a42e;
L_0047a415:; BB(0x0047a415);
    /* 0047a415: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a419: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a41eu); f_005dcb00();
    /* 0047a41e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a421: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0047a424: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047a427: mov byte ptr [eax + 0x4a1], 0 */ W8((u32)(r_eax+0x4a1u), 0x0u);
L_0047a42e:; BB(0x0047a42e);
    /* 0047a42e: jmp 0x47a36a */ goto L_0047a36a;
L_0047a433:; BB(0x0047a433);
    /* 0047a433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047a434: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a437: ret  */ FN_RET(0x0047a340); r_esp += 4; return;
}

void f_0047a440(void) /* sub_47A440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a440);
    /* 0047a440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a441: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a443: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a446: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0047a449: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a450: jmp 0x47a45b */ goto L_0047a45b;
L_0047a452:; BB(0x0047a452);
    /* 0047a452: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a455: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a458: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047a45b:; BB(0x0047a45b);
    /* 0047a45b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047a45e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a463u); f_0047f950();
    /* 0047a463: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a466: jge 0x47a503 */ if ((fS==fO)) goto L_0047a503;
L_0047a46c:; BB(0x0047a46c);
    /* 0047a46c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a46f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a470: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a475u); f_005dcb00();
    /* 0047a475: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a478: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047a47b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a47e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a483u); f_0063aac0();
    /* 0047a483: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a485: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0047a488: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a48c: je 0x47a4aa */ if (fZ) goto L_0047a4aa;
L_0047a48e:; BB(0x0047a48e);
    /* 0047a48e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a491: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a496u); f_0063aac0();
    /* 0047a496: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047a498: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047a49b: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a49f: je 0x47a4aa */ if (fZ) goto L_0047a4aa;
L_0047a4a1:; BB(0x0047a4a1);
    /* 0047a4a1: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0047a4a8: jmp 0x47a4b1 */ goto L_0047a4b1;
L_0047a4aa:; BB(0x0047a4aa);
    /* 0047a4aa: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0047a4b1:; BB(0x0047a4b1);
    /* 0047a4b1: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0047a4b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a4b7: je 0x47a4fe */ if (fZ) goto L_0047a4fe;
L_0047a4b9:; BB(0x0047a4b9);
    /* 0047a4b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a4bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a4bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a4c2u); f_005dcb00();
    /* 0047a4c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a4c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0047a4c7: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x47a4ccu); f_005d52e0();
    /* 0047a4cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047a4cf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0047a4d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a4d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a4dau); f_005dcb00();
    /* 0047a4da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a4dd: mov ecx, eax */ r_ecx = r_eax;
    /* 0047a4df: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x47a4e4u); f_005d52e0();
    /* 0047a4e4: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0047a4eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a4ef: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a4f4u); f_005dcb00();
    /* 0047a4f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a4f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0047a4f9: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x47a4feu); f_0063b0a0();
L_0047a4fe:; BB(0x0047a4fe);
    /* 0047a4fe: jmp 0x47a452 */ goto L_0047a452;
L_0047a503:; BB(0x0047a503);
    /* 0047a503: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a506: ret 4 */ FN_RET(0x0047a440); r_esp += 8; return;
}

void f_0047a5c0(void) /* sub_47A5C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a5c0);
    /* 0047a5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a5c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5c5: push 0x69fecc */ { u32 v = 0x69feccu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0047a5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5d1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a5d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047a5d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047a5db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047a5df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0047a5e5: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0047a5e8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0047a5ef: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 0047a5f6: mov dword ptr [ebp - 0x28], 3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 0047a5fd: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
    /* 0047a604: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 0047a60b: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0047a612: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 0047a619: mov dword ptr [ebp - 0x14], 7 */ W32((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 0047a620: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a625: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a62au); f_00686d82();
    /* 0047a62a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a62d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0047a630: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a637: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a63b: je 0x47a64c */ if (fZ) goto L_0047a64c;
L_0047a63d:; BB(0x0047a63d);
    /* 0047a63d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a63f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0047a642: call 0x4c5750 */ r_esp -= 4; W32(r_esp, 0x47a647u); f_004c5750();
    /* 0047a647: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0047a64a: jmp 0x47a653 */ goto L_0047a653;
L_0047a64c:; BB(0x0047a64c);
    /* 0047a64c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0047a653:; BB(0x0047a653);
    /* 0047a653: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0047a656: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0047a659: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a660: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a663: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047a666: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0047a669: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a66b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a66e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0047a671: call 0x4c70f0 */ r_esp -= 4; W32(r_esp, 0x47a676u); f_004c70f0();
    /* 0047a676: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a678: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a67b: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0047a67e: call 0x4c6d90 */ r_esp -= 4; W32(r_esp, 0x47a683u); f_004c6d90();
    /* 0047a683: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a685: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a688: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0047a68b: call 0x4c62d0 */ r_esp -= 4; W32(r_esp, 0x47a690u); f_004c62d0();
    /* 0047a690: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a695: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a69au); f_00686d82();
    /* 0047a69a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a69d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0047a6a0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0047a6a7: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a6ab: je 0x47a6bc */ if (fZ) goto L_0047a6bc;
L_0047a6ad:; BB(0x0047a6ad);
    /* 0047a6ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a6af: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047a6b2: call 0x4c5750 */ r_esp -= 4; W32(r_esp, 0x47a6b7u); f_004c5750();
    /* 0047a6b7: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0047a6ba: jmp 0x47a6c3 */ goto L_0047a6c3;
L_0047a6bc:; BB(0x0047a6bc);
    /* 0047a6bc: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0047a6c3:; BB(0x0047a6c3);
    /* 0047a6c3: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0047a6c6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0047a6c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a6d0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a6d3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0047a6d6: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0047a6d9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a6db: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a6de: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0047a6e1: call 0x4c70f0 */ r_esp -= 4; W32(r_esp, 0x47a6e6u); f_004c70f0();
    /* 0047a6e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a6e8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a6eb: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0047a6ee: call 0x4c62d0 */ r_esp -= 4; W32(r_esp, 0x47a6f3u); f_004c62d0();
    /* 0047a6f3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0047a6fa: jmp 0x47a705 */ goto L_0047a705;
L_0047a6fc:; BB(0x0047a6fc);
    /* 0047a6fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a6ff: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047a702: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0047a705:; BB(0x0047a705);
    /* 0047a705: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047a70b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a710u); f_0047f950();
    /* 0047a710: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a713: jge 0x47a79d */ if ((fS==fO)) goto L_0047a79d;
L_0047a719:; BB(0x0047a719);
    /* 0047a719: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a71d: jne 0x47a721 */ if (!fZ) goto L_0047a721;
L_0047a71f:; BB(0x0047a71f);
    /* 0047a71f: jmp 0x47a6fc */ goto L_0047a6fc;
L_0047a721:; BB(0x0047a721);
    /* 0047a721: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a726: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a72bu); f_00686d82();
    /* 0047a72b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a72e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0047a731: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0047a738: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a73c: je 0x47a753 */ if (fZ) goto L_0047a753;
L_0047a73e:; BB(0x0047a73e);
    /* 0047a73e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a741: mov ecx, dword ptr [ebp + eax*4 - 0x30] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 0047a745: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a746: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047a749: call 0x4c5750 */ r_esp -= 4; W32(r_esp, 0x47a74eu); f_004c5750();
    /* 0047a74e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0047a751: jmp 0x47a75a */ goto L_0047a75a;
L_0047a753:; BB(0x0047a753);
    /* 0047a753: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0047a75a:; BB(0x0047a75a);
    /* 0047a75a: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0047a75d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0047a760: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a767: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a76a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a76d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0047a770: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 0047a774: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a778: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a77b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a77e: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0047a782: call 0x4c70f0 */ r_esp -= 4; W32(r_esp, 0x47a787u); f_004c70f0();
    /* 0047a787: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a789: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a78c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a78f: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047a793: call 0x4c62d0 */ r_esp -= 4; W32(r_esp, 0x47a798u); f_004c62d0();
    /* 0047a798: jmp 0x47a6fc */ goto L_0047a6fc;
L_0047a79d:; BB(0x0047a79d);
    /* 0047a79d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a79f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47a7a4u); f_00686d82();
    /* 0047a7a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a7a7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0047a7aa: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0047a7b1: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a7b5: je 0x47a7c4 */ if (fZ) goto L_0047a7c4;
L_0047a7b7:; BB(0x0047a7b7);
    /* 0047a7b7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0047a7ba: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x47a7bfu); f_0060c5f0();
    /* 0047a7bf: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0047a7c2: jmp 0x47a7cb */ goto L_0047a7cb;
L_0047a7c4:; BB(0x0047a7c4);
    /* 0047a7c4: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0047a7cb:; BB(0x0047a7cb);
    /* 0047a7cb: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0047a7ce: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0047a7d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047a7d8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a7db: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047a7de: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0047a7e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047a7e7: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a7ecu); f_0047f950();
    /* 0047a7ec: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047a7ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047a7f2: jmp 0x47a7fd */ goto L_0047a7fd;
L_0047a7f4:; BB(0x0047a7f4);
    /* 0047a7f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a7f7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047a7fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0047a7fd:; BB(0x0047a7fd);
    /* 0047a7fd: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a801: jl 0x47a81b */ if ((fS!=fO)) goto L_0047a81b;
L_0047a803:; BB(0x0047a803);
    /* 0047a803: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a806: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a809: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047a80d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a80e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0047a811: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0047a814: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x47a819u); f_0060c7d0();
    /* 0047a819: jmp 0x47a7f4 */ goto L_0047a7f4;
L_0047a81b:; BB(0x0047a81b);
    /* 0047a81b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047a81e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047a825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047a826: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a829: ret 4 */ FN_RET(0x0047a5c0); r_esp += 8; return;
}

void f_0047a830(void) /* sub_47A830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a830);
    /* 0047a830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a831: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a833: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a836: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047a83b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047a83d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047a840: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0047a843: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0047a84a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0047a851: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047a858: jmp 0x47a863 */ goto L_0047a863;
L_0047a85a:; BB(0x0047a85a);
    /* 0047a85a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a85d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a860: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047a863:; BB(0x0047a863);
    /* 0047a863: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a867: jge 0x47a873 */ if ((fS==fO)) goto L_0047a873;
L_0047a869:; BB(0x0047a869);
    /* 0047a869: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a86c: mov byte ptr [ebp + ecx - 0x1c], 0 */ W8((u32)(r_ebp+r_ecx+0xffffffe4u), 0x0u);
    /* 0047a871: jmp 0x47a85a */ goto L_0047a85a;
L_0047a873:; BB(0x0047a873);
    /* 0047a873: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047a87a: jmp 0x47a885 */ goto L_0047a885;
L_0047a87c:; BB(0x0047a87c);
    /* 0047a87c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a87f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047a882: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0047a885:; BB(0x0047a885);
    /* 0047a885: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047a88b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a890u); f_0047f950();
    /* 0047a890: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a893: jge 0x47a955 */ if ((fS==fO)) goto L_0047a955;
L_0047a899:; BB(0x0047a899);
    /* 0047a899: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a89d: jne 0x47a8a1 */ if (!fZ) goto L_0047a8a1;
L_0047a89f:; BB(0x0047a89f);
    /* 0047a89f: jmp 0x47a87c */ goto L_0047a87c;
L_0047a8a1:; BB(0x0047a8a1);
    /* 0047a8a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a8a4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047a8a7: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047a8ab: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0047a8ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a8b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0047a8bc: jmp 0x47a8c7 */ goto L_0047a8c7;
L_0047a8be:; BB(0x0047a8be);
    /* 0047a8be: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a8c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a8c4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0047a8c7:; BB(0x0047a8c7);
    /* 0047a8c7: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a8cb: jge 0x47a8e4 */ if ((fS==fO)) goto L_0047a8e4;
L_0047a8cd:; BB(0x0047a8cd);
    /* 0047a8cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a8d0: movzx edx, byte ptr [ebp + ecx - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffffe4u));
    /* 0047a8d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a8d7: jne 0x47a8e2 */ if (!fZ) goto L_0047a8e2;
L_0047a8d9:; BB(0x0047a8d9);
    /* 0047a8d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a8dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a8df: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047a8e2:; BB(0x0047a8e2);
    /* 0047a8e2: jmp 0x47a8be */ goto L_0047a8be;
L_0047a8e4:; BB(0x0047a8e4);
    /* 0047a8e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a8e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a8e8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47a8edu); f_0062fbf0();
    /* 0047a8ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a8f0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047a8f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a8fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0047a901: jmp 0x47a90c */ goto L_0047a90c;
L_0047a903:; BB(0x0047a903);
    /* 0047a903: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a906: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047a909: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0047a90c:; BB(0x0047a90c);
    /* 0047a90c: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a910: jge 0x47a950 */ if ((fS==fO)) goto L_0047a950;
L_0047a912:; BB(0x0047a912);
    /* 0047a912: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a915: movzx ecx, byte ptr [ebp + eax - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+r_eax+0xffffffe4u));
    /* 0047a91a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a91c: jne 0x47a94e */ if (!fZ) goto L_0047a94e;
L_0047a91e:; BB(0x0047a91e);
    /* 0047a91e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047a921: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a924: jne 0x47a945 */ if (!fZ) goto L_0047a945;
L_0047a926:; BB(0x0047a926);
    /* 0047a926: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a92a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047a92d: call 0x481870 */ r_esp -= 4; W32(r_esp, 0x47a932u); f_00481870();
    /* 0047a932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047a933: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047a936: call 0x4c67d0 */ r_esp -= 4; W32(r_esp, 0x47a93bu); f_004c67d0();
    /* 0047a93b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047a93e: mov byte ptr [ebp + ecx - 0x1c], 1 */ W8((u32)(r_ebp+r_ecx+0xffffffe4u), 0x1u);
    /* 0047a943: jmp 0x47a950 */ goto L_0047a950;
L_0047a945:; BB(0x0047a945);
    /* 0047a945: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a948: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047a94b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0047a94e:; BB(0x0047a94e);
    /* 0047a94e: jmp 0x47a903 */ goto L_0047a903;
L_0047a950:; BB(0x0047a950);
    /* 0047a950: jmp 0x47a87c */ goto L_0047a87c;
L_0047a955:; BB(0x0047a955);
    /* 0047a955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047a958: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0047a95a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x47a95fu); f_00686d72();
    /* 0047a95f: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a962: ret  */ FN_RET(0x0047a830); r_esp += 4; return;
}

void f_0047a970(void) /* sub_47A970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a970);
    /* 0047a970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a971: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a973: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a976: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047a979: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047a980: jmp 0x47a98b */ goto L_0047a98b;
L_0047a982:; BB(0x0047a982);
    /* 0047a982: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a985: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a988: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047a98b:; BB(0x0047a98b);
    /* 0047a98b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047a991: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a996u); f_0047f950();
    /* 0047a996: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a999: jge 0x47a9b5 */ if ((fS==fO)) goto L_0047a9b5;
L_0047a99b:; BB(0x0047a99b);
    /* 0047a99b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a99d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a99f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a9a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a9a3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a9a8u); f_005dcb00();
    /* 0047a9a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a9ab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0047a9ae: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x47a9b3u); f_006464d0();
    /* 0047a9b3: jmp 0x47a982 */ goto L_0047a982;
L_0047a9b5:; BB(0x0047a9b5);
    /* 0047a9b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a9b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a9b8: ret  */ FN_RET(0x0047a970); r_esp += 4; return;
}

void f_0047aa30(void) /* sub_47AA30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047aa30);
    /* 0047aa30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047aa31: mov ebp, esp */ r_ebp = r_esp;
    /* 0047aa33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047aa36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0047aa37: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0047aa3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047aa3d: mov byte ptr [eax + 0x7d2], 1 */ W8((u32)(r_eax+0x7d2u), 0x1u);
    /* 0047aa44: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047aa4a: jmp 0x47aa58 */ goto L_0047aa58;
L_0047aa4c:; BB(0x0047aa4c);
    /* 0047aa4c: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0047aa50: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047aa54: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_0047aa58:; BB(0x0047aa58);
    /* 0047aa58: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0047aa5c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047aa62: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47aa67u); f_0047f950();
    /* 0047aa67: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047aa69: jge 0x47aa91 */ if ((fS==fO)) goto L_0047aa91;
L_0047aa6b:; BB(0x0047aa6b);
    /* 0047aa6b: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0047aa6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047aa70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047aa73: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47aa78u); f_0047e390();
    /* 0047aa78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047aa7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047aa7e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47aa83u); f_004c6cb0();
    /* 0047aa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aa85: je 0x47aa8f */ if (fZ) goto L_0047aa8f;
L_0047aa87:; BB(0x0047aa87);
    /* 0047aa87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047aa8a: call 0x4c6b30 */ r_esp -= 4; W32(r_esp, 0x47aa8fu); f_004c6b30();
L_0047aa8f:; BB(0x0047aa8f);
    /* 0047aa8f: jmp 0x47aa4c */ goto L_0047aa4c;
L_0047aa91:; BB(0x0047aa91);
    /* 0047aa91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047aa92: mov esp, ebp */ r_esp = r_ebp;
    /* 0047aa94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047aa95: ret  */ FN_RET(0x0047aa30); r_esp += 4; return;
}

void f_0047aab0(void) /* sub_47AAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047aab0);
    /* 0047aab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047aab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047aab3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047aab6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047aab9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047aabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aabf: je 0x47ab77 */ if (fZ) goto L_0047ab77;
L_0047aac5:; BB(0x0047aac5);
    /* 0047aac5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047aac7: push 0x30e79e */ { u32 v = 0x30e79eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047aacc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047aad2: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x47aad7u); f_005f2b20();
    /* 0047aad7: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0047aadb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aadd: je 0x47aaf1 */ if (fZ) goto L_0047aaf1;
L_0047aadf:; BB(0x0047aadf);
    /* 0047aadf: push 0x6bb580 */ { u32 v = 0x6bb580u; r_esp -= 4; W32(r_esp, v); }
    /* 0047aae4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47aae9u); f_00630f40();
    /* 0047aae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047aaec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047aaef: jmp 0x47ab01 */ goto L_0047ab01;
L_0047aaf1:; BB(0x0047aaf1);
    /* 0047aaf1: push 0x6bb06c */ { u32 v = 0x6bb06cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047aaf6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47aafbu); f_00630f40();
    /* 0047aafb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047aafe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047ab01:; BB(0x0047ab01);
    /* 0047ab01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab03: push 0x30e79e */ { u32 v = 0x30e79eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab08: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab0e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x47ab13u); f_005f2a60();
    /* 0047ab13: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047ab16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ab19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab1a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ab1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047ab1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ab22: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0047ab28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ab2au); call_ind(t); }
    /* 0047ab2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab2c: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab31: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab37: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x47ab3cu); f_005f2b20();
    /* 0047ab3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab3e: push 0x30e7a0 */ { u32 v = 0x30e7a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab43: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab49: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x47ab4eu); f_005f2b20();
    /* 0047ab4e: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab54: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47ab59u); f_005da7b0();
    /* 0047ab59: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047ab5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ab5e: je 0x47ab72 */ if (fZ) goto L_0047ab72;
L_0047ab60:; BB(0x0047ab60);
    /* 0047ab60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab62: push 0x30e7a3 */ { u32 v = 0x30e7a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab67: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab6d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x47ab72u); f_005f2b20();
L_0047ab72:; BB(0x0047ab72);
    /* 0047ab72: jmp 0x47ac2f */ goto L_0047ac2f;
L_0047ab77:; BB(0x0047ab77);
    /* 0047ab77: push 0x30e79e */ { u32 v = 0x30e79eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab7c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab82: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x47ab87u); f_005f2ba0();
    /* 0047ab87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab89: push 0x30e79e */ { u32 v = 0x30e79eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ab8e: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ab94: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x47ab99u); f_005f2a60();
    /* 0047ab99: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047ab9c: push 0x6bc6dc */ { u32 v = 0x6bc6dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047aba1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47aba6u); f_00630f40();
    /* 0047aba6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047aba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047abaa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047abad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047abaf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047abb2: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0047abb8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47abbau); call_ind(t); }
    /* 0047abba: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047abbf: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047abc5: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x47abcau); f_005f2ba0();
    /* 0047abca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047abcc: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047abd1: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047abd7: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x47abdcu); f_005f2a60();
    /* 0047abdc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047abdf: push 0x6bc6c4 */ { u32 v = 0x6bc6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047abe4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47abe9u); f_00630f40();
    /* 0047abe9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047abec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047abed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047abf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047abf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047abf5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0047abfb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47abfdu); call_ind(t); }
    /* 0047abfd: push 0x30e7a0 */ { u32 v = 0x30e7a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac02: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ac08: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x47ac0du); f_005f2ba0();
    /* 0047ac0d: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ac13: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47ac18u); f_005da7b0();
    /* 0047ac18: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047ac1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ac1d: je 0x47ac2f */ if (fZ) goto L_0047ac2f;
L_0047ac1f:; BB(0x0047ac1f);
    /* 0047ac1f: push 0x30e7a3 */ { u32 v = 0x30e7a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac24: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ac2a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x47ac2fu); f_005f2ba0();
L_0047ac2f:; BB(0x0047ac2f);
    /* 0047ac2f: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ac31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ac32: ret 8 */ FN_RET(0x0047aab0); r_esp += 12; return;
}

