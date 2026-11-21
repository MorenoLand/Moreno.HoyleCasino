#include "protos.h"

void f_005cf470(void) /* LoanDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf470);
    /* 005cf470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf471: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf475: push 0x6a8cba */ { u32 v = 0x6a8cbau; r_esp -= 4; W32(r_esp, v); }
    /* 005cf47a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cf480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf481: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf482: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cf487: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf48a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cf48d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cf493: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cf496: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf498: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf49a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf49d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cf4a2u); f_005f71f0();
    /* 005cf4a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cf4a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf4ac: mov dword ptr [eax], 0x6d2f64 */ W32((u32)(r_eax), 0x6d2f64u);
    /* 005cf4b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4b4: push 0x4df */ { u32 v = 0x4dfu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf4bc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cf4c1u); f_005f83d0();
    /* 005cf4c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf4c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf4cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf4ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf4d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf4d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf4d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf4d9: ret  */ FN_RET(0x005cf470); r_esp += 4; return;
}

void f_005cf500(void) /* LoanDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf500);
    /* 005cf500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf501: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf503: sub esp, 0x328 */ {  u32 a = r_esp; u32 b = 0x328u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf509: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cf50e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf510: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cf513: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cf514: mov dword ptr [ebp - 0x324], ecx */ W32((u32)(r_ebp+0xfffffcdcu), r_ecx);
    /* 005cf51a: mov dword ptr [ebp - 0x284], 0x6d30b0 */ W32((u32)(r_ebp+0xfffffd7cu), 0x6d30b0u);
    /* 005cf524: mov dword ptr [ebp - 0x280], 0x6c2318 */ W32((u32)(r_ebp+0xfffffd80u), 0x6c2318u);
    /* 005cf52e: mov dword ptr [ebp - 0x27c], 0xd7 */ W32((u32)(r_ebp+0xfffffd84u), 0xd7u);
    /* 005cf538: mov dword ptr [ebp - 0x278], 0x168 */ W32((u32)(r_ebp+0xfffffd88u), 0x168u);
    /* 005cf542: mov byte ptr [ebp - 0x205], 0 */ W8((u32)(r_ebp+0xfffffdfbu), 0x0u);
    /* 005cf549: mov dword ptr [ebp - 0x28c], 0 */ W32((u32)(r_ebp+0xfffffd74u), 0x0u);
    /* 005cf553: mov dword ptr [ebp - 0x288], 0 */ W32((u32)(r_ebp+0xfffffd78u), 0x0u);
    /* 005cf55d: mov byte ptr [ebp - 0x2f9], 0 */ W8((u32)(r_ebp+0xfffffd07u), 0x0u);
    /* 005cf564: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf566: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf568: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf56a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf56c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf56e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf570: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf575: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf577: push 0x6d309c */ { u32 v = 0x6d309cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf57c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf581u); f_00630f40();
    /* 005cf581: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf585: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf587: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf589: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf58f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cf594u); f_005fa5b0();
    /* 005cf594: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cf599: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf59b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cf5a1: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005cf5a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cf5a9u); call_ind(t); }
    /* 005cf5a9: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf5af: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 005cf5b5: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf5bb: cmp dword ptr [edx + 0x1c0], 0 */ {  u32 a = R32((u32)(r_edx+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf5c2: je 0x5cf5f6 */ if (fZ) goto L_005cf5f6;
L_005cf5c4:; BB(0x005cf5c4);
    /* 005cf5c4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf5c6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005cf5cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cf5cd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cf5d3: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005cf5d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cf5dbu); call_ind(t); }
    /* 005cf5db: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cf5de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf5e0: je 0x5cf5f6 */ if (fZ) goto L_005cf5f6;
L_005cf5e2:; BB(0x005cf5e2);
    /* 005cf5e2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf5e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cf5ea: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5cf5efu); f_00635cb0();
    /* 005cf5ef: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005cf5f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf5f4: je 0x5cf60d */ if (fZ) goto L_005cf60d;
L_005cf5f6:; BB(0x005cf5f6);
    /* 005cf5f6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cf5fc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5cf601u); f_006375b0();
    /* 005cf601: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf607: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
L_005cf60d:; BB(0x005cf60d);
    /* 005cf60d: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf613: cmp dword ptr [edx + 0x1c0], 0 */ {  u32 a = R32((u32)(r_edx+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf61a: jne 0x5cf633 */ if (!fZ) goto L_005cf633;
L_005cf61c:; BB(0x005cf61c);
    /* 005cf61c: push 0x29c */ { u32 v = 0x29cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf621: push 0x6d2dfc */ { u32 v = 0x6d2dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf626: push 0x6d3090 */ { u32 v = 0x6d3090u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf62b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5cf630u); f_005e9f20();
    /* 005cf630: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cf633:; BB(0x005cf633);
    /* 005cf633: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf639: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 005cf63f: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5cf644u); f_005d6bd0();
    /* 005cf644: mov esi, eax */ r_esi = r_eax;
    /* 005cf646: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf64c: mov ecx, dword ptr [edx + 0x1c0] */ r_ecx = R32((u32)(r_edx+0x1c0u));
    /* 005cf652: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5cf657u); f_005d5a50();
    /* 005cf657: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf659: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf65b: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005cf65e: mov byte ptr [ebp - 0x2f9], cl */ W8((u32)(r_ebp+0xfffffd07u), (u8)r_ecx);
    /* 005cf664: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf66a: mov ecx, dword ptr [edx + 0x1c0] */ r_ecx = R32((u32)(r_edx+0x1c0u));
    /* 005cf670: call 0x5d6cd0 */ r_esp -= 4; W32(r_esp, 0x5cf675u); f_005d6cd0();
    /* 005cf675: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf67b: mov byte ptr [ecx + 0x1bc], al */ W8((u32)(r_ecx+0x1bcu), (u8)r_eax);
    /* 005cf681: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf687: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005cf68d: mov dword ptr [ebp - 0x300], eax */ W32((u32)(r_ebp+0xfffffd00u), r_eax);
    /* 005cf693: mov ecx, dword ptr [ebp - 0x300] */ r_ecx = R32((u32)(r_ebp+0xfffffd00u));
    /* 005cf699: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5cf69eu); f_005d52e0();
    /* 005cf69e: mov cl, byte ptr [eax + 0x29] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005cf6a1: mov byte ptr [ebp - 0x205], cl */ W8((u32)(r_ebp+0xfffffdfbu), (u8)r_ecx);
    /* 005cf6a7: movzx edx, byte ptr [ebp - 0x205] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffdfbu));
    /* 005cf6ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6b0: je 0x5cf6db */ if (fZ) goto L_005cf6db;
L_005cf6b2:; BB(0x005cf6b2);
    /* 005cf6b2: movzx eax, byte ptr [ebp - 0x2f9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffd07u));
    /* 005cf6b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6bb: je 0x5cf6db */ if (fZ) goto L_005cf6db;
L_005cf6bd:; BB(0x005cf6bd);
    /* 005cf6bd: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cf6c3: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5cf6c8u); f_005da830();
    /* 005cf6c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cf6cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf6cd: jne 0x5cf6db */ if (!fZ) goto L_005cf6db;
L_005cf6cf:; BB(0x005cf6cf);
    /* 005cf6cf: mov dword ptr [ebp - 0x328], 1 */ W32((u32)(r_ebp+0xfffffcd8u), 0x1u);
    /* 005cf6d9: jmp 0x5cf6e5 */ goto L_005cf6e5;
L_005cf6db:; BB(0x005cf6db);
    /* 005cf6db: mov dword ptr [ebp - 0x328], 0 */ W32((u32)(r_ebp+0xfffffcd8u), 0x0u);
L_005cf6e5:; BB(0x005cf6e5);
    /* 005cf6e5: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf6eb: mov al, byte ptr [ebp - 0x328] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcd8u))) & 0xffu);
    /* 005cf6f1: mov byte ptr [edx + 0x1bd], al */ W8((u32)(r_edx+0x1bdu), (u8)r_eax);
    /* 005cf6f7: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf6fd: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 005cf703: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5cf708u); f_005d6bd0();
    /* 005cf708: mov dword ptr [ebp - 0x28c], eax */ W32((u32)(r_ebp+0xfffffd74u), r_eax);
    /* 005cf70e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf710: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf712: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf714: lea edx, [ebp - 0x270] */ r_edx = (u32)(r_ebp+0xfffffd90u);
    /* 005cf71a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf71b: mov eax, dword ptr [ebp - 0x288] */ r_eax = R32((u32)(r_ebp+0xfffffd78u));
    /* 005cf721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf722: mov ecx, dword ptr [ebp - 0x28c] */ r_ecx = R32((u32)(r_ebp+0xfffffd74u));
    /* 005cf728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf729: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5cf72eu); f_0064c8d0();
    /* 005cf72e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf731: movzx edx, byte ptr [ebp - 0x205] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffdfbu));
    /* 005cf738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf73a: je 0x5cf831 */ if (fZ) goto L_005cf831;
L_005cf740:; BB(0x005cf740);
    /* 005cf740: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf746: movzx ecx, byte ptr [eax + 0x1bd] */ r_ecx = (u32)R8((u32)(r_eax+0x1bdu));
    /* 005cf74d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf74f: je 0x5cf7bc */ if (fZ) goto L_005cf7bc;
L_005cf751:; BB(0x005cf751);
    /* 005cf751: push 0x6d3078 */ { u32 v = 0x6d3078u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf756: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf75bu); f_00630f40();
    /* 005cf75b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf75e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf75f: lea edx, [ebp - 0x2f8] */ r_edx = (u32)(r_ebp+0xfffffd08u);
    /* 005cf765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf766: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf76cu); call_ind(t); }
    /* 005cf76c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf76f: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf775: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005cf77b: mov dword ptr [ebp - 0x304], ecx */ W32((u32)(r_ebp+0xfffffcfcu), r_ecx);
    /* 005cf781: mov ecx, dword ptr [ebp - 0x304] */ r_ecx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 005cf787: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cf78cu); f_0063aac0();
    /* 005cf78c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf78f: mov dword ptr [ebp - 0x308], eax */ W32((u32)(r_ebp+0xfffffcf8u), r_eax);
    /* 005cf795: mov edx, dword ptr [ebp - 0x308] */ r_edx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 005cf79b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf79c: push 0x6d3054 */ { u32 v = 0x6d3054u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7a1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf7a6u); f_00630f40();
    /* 005cf7a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf7a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7aa: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 005cf7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7b1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf7b7u); call_ind(t); }
    /* 005cf7b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf7ba: jmp 0x5cf82c */ goto L_005cf82c;
L_005cf7bc:; BB(0x005cf7bc);
    /* 005cf7bc: push 0x6d3034 */ { u32 v = 0x6d3034u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf7c6u); f_00630f40();
    /* 005cf7c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf7c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7ca: lea ecx, [ebp - 0x2f8] */ r_ecx = (u32)(r_ebp+0xfffffd08u);
    /* 005cf7d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf7d1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf7d7u); call_ind(t); }
    /* 005cf7d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf7da: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf7e0: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005cf7e6: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 005cf7ec: mov ecx, dword ptr [ebp - 0x30c] */ r_ecx = R32((u32)(r_ebp+0xfffffcf4u));
    /* 005cf7f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cf7f7u); f_0063aac0();
    /* 005cf7f7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf7fa: mov dword ptr [ebp - 0x310], eax */ W32((u32)(r_ebp+0xfffffcf0u), r_eax);
    /* 005cf800: lea ecx, [ebp - 0x270] */ r_ecx = (u32)(r_ebp+0xfffffd90u);
    /* 005cf806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf807: mov edx, dword ptr [ebp - 0x310] */ r_edx = R32((u32)(r_ebp+0xfffffcf0u));
    /* 005cf80d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf80e: push 0x6d3008 */ { u32 v = 0x6d3008u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf813: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf818u); f_00630f40();
    /* 005cf818: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf81b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf81c: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 005cf822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf823: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf829u); call_ind(t); }
    /* 005cf829: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cf82c:; BB(0x005cf82c);
    /* 005cf82c: jmp 0x5cf916 */ goto L_005cf916;
L_005cf831:; BB(0x005cf831);
    /* 005cf831: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf837: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 005cf83e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf840: je 0x5cf8ad */ if (fZ) goto L_005cf8ad;
L_005cf842:; BB(0x005cf842);
    /* 005cf842: push 0x6d2fec */ { u32 v = 0x6d2fecu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf847: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf84cu); f_00630f40();
    /* 005cf84c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf84f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf850: lea eax, [ebp - 0x2f8] */ r_eax = (u32)(r_ebp+0xfffffd08u);
    /* 005cf856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf857: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf85du); call_ind(t); }
    /* 005cf85d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf860: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf866: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005cf86c: mov dword ptr [ebp - 0x314], edx */ W32((u32)(r_ebp+0xfffffcecu), r_edx);
    /* 005cf872: mov ecx, dword ptr [ebp - 0x314] */ r_ecx = R32((u32)(r_ebp+0xfffffcecu));
    /* 005cf878: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cf87du); f_0063aac0();
    /* 005cf87d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf880: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 005cf886: lea eax, [ebp - 0x270] */ r_eax = (u32)(r_ebp+0xfffffd90u);
    /* 005cf88c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf88d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 005cf893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf894: mov edx, dword ptr [0x75d490] */ r_edx = R32((u32)(0x75d490u));
    /* 005cf89a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf89b: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 005cf8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8a2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf8a8u); call_ind(t); }
    /* 005cf8a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf8ab: jmp 0x5cf916 */ goto L_005cf916;
L_005cf8ad:; BB(0x005cf8ad);
    /* 005cf8ad: push 0x6d2fd0 */ { u32 v = 0x6d2fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf8b7u); f_00630f40();
    /* 005cf8b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8bb: lea ecx, [ebp - 0x2f8] */ r_ecx = (u32)(r_ebp+0xfffffd08u);
    /* 005cf8c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8c2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf8c8u); call_ind(t); }
    /* 005cf8c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf8cb: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf8d1: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005cf8d7: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 005cf8dd: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 005cf8e3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cf8e8u); f_0063aac0();
    /* 005cf8e8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf8eb: mov dword ptr [ebp - 0x320], eax */ W32((u32)(r_ebp+0xfffffce0u), r_eax);
    /* 005cf8f1: mov ecx, dword ptr [ebp - 0x320] */ r_ecx = R32((u32)(r_ebp+0xfffffce0u));
    /* 005cf8f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8f8: push 0x6d2fa4 */ { u32 v = 0x6d2fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf8fd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf902u); f_00630f40();
    /* 005cf902: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf906: lea edx, [ebp - 0x200] */ r_edx = (u32)(r_ebp+0xfffffe00u);
    /* 005cf90c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf90d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cf913u); call_ind(t); }
    /* 005cf913: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cf916:; BB(0x005cf916);
    /* 005cf916: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf918: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf91a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf91c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf91e: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf923: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf925: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005cf92a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf92c: lea eax, [ebp - 0x2f8] */ r_eax = (u32)(r_ebp+0xfffffd08u);
    /* 005cf932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf933: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf937: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf93d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cf942u); f_005fa5b0();
    /* 005cf942: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf944: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf946: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf948: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cf94a: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf94f: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf954: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf959: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf95b: lea ecx, [ebp - 0x200] */ r_ecx = (u32)(r_ebp+0xfffffe00u);
    /* 005cf961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf962: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf966: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf96c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cf971u); f_005fa5b0();
    /* 005cf971: mov dword ptr [ebp - 0x204], 0 */ W32((u32)(r_ebp+0xfffffdfcu), 0x0u);
    /* 005cf97b: jmp 0x5cf98c */ goto L_005cf98c;
L_005cf97d:; BB(0x005cf97d);
    /* 005cf97d: mov edx, dword ptr [ebp - 0x204] */ r_edx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005cf983: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cf986: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
L_005cf98c:; BB(0x005cf98c);
    /* 005cf98c: cmp dword ptr [ebp - 0x204], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffdfcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf993: jge 0x5cfa3f */ if ((fS==fO)) goto L_005cfa3f;
L_005cf999:; BB(0x005cf999);
    /* 005cf999: cmp dword ptr [ebp - 0x204], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf9a0: jne 0x5cf9c6 */ if (!fZ) goto L_005cf9c6;
L_005cf9a2:; BB(0x005cf9a2);
    /* 005cf9a2: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf9a8: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005cf9af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf9b1: jne 0x5cf9c6 */ if (!fZ) goto L_005cf9c6;
L_005cf9b3:; BB(0x005cf9b3);
    /* 005cf9b3: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cf9b9: movzx eax, byte ptr [edx + 0x1bd] */ r_eax = (u32)R8((u32)(r_edx+0x1bdu));
    /* 005cf9c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf9c2: jne 0x5cf9c6 */ if (!fZ) goto L_005cf9c6;
L_005cf9c4:; BB(0x005cf9c4);
    /* 005cf9c4: jmp 0x5cf97d */ goto L_005cf97d;
L_005cf9c6:; BB(0x005cf9c6);
    /* 005cf9c6: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005cf9cc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf9cf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005cf9d1: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005cf9d3: and ecx, 0xffffffe5 */ {  u32 a = r_ecx; u32 b = 0xffffffe5u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf9d6: add ecx, 0x1b */ {  u32 a = r_ecx; u32 b = 0x1bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf9d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9dc: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9de: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9e0: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9e2: mov edx, dword ptr [ebp - 0x204] */ r_edx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005cf9e8: mov eax, dword ptr [ebp + edx*4 - 0x284] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffd7cu));
    /* 005cf9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9f0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cf9f5u); f_00630f40();
    /* 005cf9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf9f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf9fb: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa00: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005cfa06: mov edx, dword ptr [ebp + ecx*4 - 0x27c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffd84u));
    /* 005cfa0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfa10: cmp dword ptr [ebp - 0x204], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdfcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa17: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005cfa1a: add eax, 0x30d4de */ {  u32 a = r_eax; u32 b = 0x30d4deu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cfa1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa20: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005cfa26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa29: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 005cfa2f: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5cfa34u); f_005f9de0();
    /* 005cfa34: mov dword ptr [ebp - 0x274], eax */ W32((u32)(r_ebp+0xfffffd8cu), r_eax);
    /* 005cfa3a: jmp 0x5cf97d */ goto L_005cf97d;
L_005cfa3f:; BB(0x005cfa3f);
    /* 005cfa3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cfa40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa43: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfa45: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cfa4au); f_00686d72();
    /* 005cfa4a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfa4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfa4d: ret  */ FN_RET(0x005cf500); r_esp += 4; return;
}

void f_005cfa50(void) /* LoanDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfa50);
    /* 005cfa50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa51: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfa53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfa56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cfa59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cfa5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cfa5f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa63: je 0x5cfa6d */ if (fZ) goto L_005cfa6d;
L_005cfa65:; BB(0x005cfa65);
    /* 005cfa65: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa69: je 0x5cfaa7 */ if (fZ) goto L_005cfaa7;
L_005cfa6b:; BB(0x005cfa6b);
    /* 005cfa6b: jmp 0x5cfab2 */ goto L_005cfab2;
L_005cfa6d:; BB(0x005cfa6d);
    /* 005cfa6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa70: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 005cfa77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa79: je 0x5cfa89 */ if (fZ) goto L_005cfa89;
L_005cfa7b:; BB(0x005cfa7b);
    /* 005cfa7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa7e: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005cfa84: call 0x5d6de0 */ r_esp -= 4; W32(r_esp, 0x5cfa89u); f_005d6de0();
L_005cfa89:; BB(0x005cfa89);
    /* 005cfa89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa8c: movzx edx, byte ptr [ecx + 0x1bd] */ r_edx = (u32)R8((u32)(r_ecx+0x1bdu));
    /* 005cfa93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfa95: je 0x5cfaa7 */ if (fZ) goto L_005cfaa7;
L_005cfa97:; BB(0x005cfa97);
    /* 005cfa97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfa99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfa9c: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005cfaa2: call 0x5d6ee0 */ r_esp -= 4; W32(r_esp, 0x5cfaa7u); f_005d6ee0();
L_005cfaa7:; BB(0x005cfaa7);
    /* 005cfaa7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cfaad: call 0x5dc2b0 */ r_esp -= 4; W32(r_esp, 0x5cfab2u); f_005dc2b0();
L_005cfab2:; BB(0x005cfab2);
    /* 005cfab2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfab4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cfaba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cfabc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cfac2: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005cfac8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cfacau); call_ind(t); }
    /* 005cfaca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cfacd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfacf: je 0x5cfae7 */ if (fZ) goto L_005cfae7;
L_005cfad1:; BB(0x005cfad1);
    /* 005cfad1: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005cfad7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cfad9: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cfadf: mov edx, dword ptr [eax + 0x278] */ r_edx = R32((u32)(r_eax+0x278u));
    /* 005cfae5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cfae7u); call_ind(t); }
L_005cfae7:; BB(0x005cfae7);
    /* 005cfae7: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfaea: ret 4 */ FN_RET(0x005cfa50); r_esp += 8; return;
}

