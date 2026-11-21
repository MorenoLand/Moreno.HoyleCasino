#include "protos.h"

void f_00446120(void) /* sub_446120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446120);
    /* 00446120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446121: mov ebp, esp */ r_ebp = r_esp;
    /* 00446123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00446127: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044612d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x446132u); f_005da7b0();
    /* 00446132: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00446135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446137: je 0x446147 */ if (fZ) goto L_00446147;
L_00446139:; BB(0x00446139);
    /* 00446139: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044613c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044613d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446140: call 0x446300 */ r_esp -= 4; W32(r_esp, 0x446145u); f_00446300();
    /* 00446145: jmp 0x446153 */ goto L_00446153;
L_00446147:; BB(0x00446147);
    /* 00446147: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044614a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044614b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044614e: call 0x446160 */ r_esp -= 4; W32(r_esp, 0x446153u); f_00446160();
L_00446153:; BB(0x00446153);
    /* 00446153: mov esp, ebp */ r_esp = r_ebp;
    /* 00446155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446156: ret 4 */ FN_RET(0x00446120); r_esp += 8; return;
}

void f_00446680(void) /* sub_446680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446680);
    /* 00446680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446681: mov ebp, esp */ r_ebp = r_esp;
    /* 00446683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00446687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044668a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044668b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x446690u); f_005dcb00();
    /* 00446690: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446693: mov ecx, eax */ r_ecx = r_eax;
    /* 00446695: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44669au); f_005d5a50();
    /* 0044669a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044669d: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004466a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004466a2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004466a4: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 004466a7: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004466a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004466ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004466ac: ret 8 */ FN_RET(0x00446680); r_esp += 12; return;
}

void f_004466b0(void) /* sub_4466B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004466b0);
    /* 004466b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004466b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004466b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004466b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004466b7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004466ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004466bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004466be: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004466c4: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x4466c9u); f_0044ce00();
    /* 004466c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004466cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004466ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004466d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004466d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004466d5: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004466d8: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 004466dd: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 004466e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004466e5: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x4466eau); f_00462ba0();
    /* 004466ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004466ed: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004466f0: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004466f4: jne 0x44689d */ if (!fZ) goto L_0044689d;
L_004466fa:; BB(0x004466fa);
    /* 004466fa: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004466fe: je 0x44672d */ if (fZ) goto L_0044672d;
L_00446700:; BB(0x00446700);
    /* 00446700: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446704: jne 0x446734 */ if (!fZ) goto L_00446734;
L_00446706:; BB(0x00446706);
    /* 00446706: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044670a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044670c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044670f: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446712: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00446718: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044671f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446720: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446725u); f_004630c0();
    /* 00446725: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446728: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044672b: jle 0x446734 */ if ((fZ||fS!=fO)) goto L_00446734;
L_0044672d:; BB(0x0044672d);
    /* 0044672d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044672f: jmp 0x44697f */ goto L_0044697f;
L_00446734:; BB(0x00446734);
    /* 00446734: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446738: je 0x446744 */ if (fZ) goto L_00446744;
L_0044673a:; BB(0x0044673a);
    /* 0044673a: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044673e: jne 0x446898 */ if (!fZ) goto L_00446898;
L_00446744:; BB(0x00446744);
    /* 00446744: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446748: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044674a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044674d: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446750: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00446756: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044675d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044675e: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446763u); f_004630c0();
    /* 00446763: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446766: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446769: jle 0x446772 */ if ((fZ||fS!=fO)) goto L_00446772;
L_0044676b:; BB(0x0044676b);
    /* 0044676b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044676d: jmp 0x44697f */ goto L_0044697f;
L_00446772:; BB(0x00446772);
    /* 00446772: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446776: jne 0x4467a4 */ if (!fZ) goto L_004467a4;
L_00446778:; BB(0x00446778);
    /* 00446778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044677b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044677c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044677e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00446781: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446784: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00446789: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 00446790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446791: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x446796u); f_00463a40();
    /* 00446796: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044679b: jne 0x4467a4 */ if (!fZ) goto L_004467a4;
L_0044679d:; BB(0x0044679d);
    /* 0044679d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044679f: jmp 0x44697f */ goto L_0044697f;
L_004467a4:; BB(0x004467a4);
    /* 004467a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004467a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004467aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004467ad: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004467b0: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004467b6: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 004467bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004467be: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x4467c3u); f_004630c0();
    /* 004467c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004467c6: mov esi, eax */ r_esi = r_eax;
    /* 004467c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004467cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004467cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004467ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004467d1: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004467d4: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 004467da: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 004467e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004467e2: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x4467e7u); f_004630c0();
    /* 004467e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004467ea: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004467ec: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004467ef: jne 0x44681e */ if (!fZ) goto L_0044681e;
L_004467f1:; BB(0x004467f1);
    /* 004467f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004467f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004467f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004467f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004467fa: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004467fd: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00446802: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 00446809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044680a: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x44680fu); f_004630c0();
    /* 0044680f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446812: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446815: jle 0x44681e */ if ((fZ||fS!=fO)) goto L_0044681e;
L_00446817:; BB(0x00446817);
    /* 00446817: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00446819: jmp 0x44697f */ goto L_0044697f;
L_0044681e:; BB(0x0044681e);
    /* 0044681e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446821: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446824: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00446827: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044682a: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00446830: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 00446837: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446838: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x44683du); f_004630c0();
    /* 0044683d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446840: mov esi, eax */ r_esi = r_eax;
    /* 00446842: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446846: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00446848: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044684b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044684e: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00446854: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044685b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044685c: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446861u); f_004630c0();
    /* 00446861: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446864: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00446866: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446869: jne 0x446898 */ if (!fZ) goto L_00446898;
L_0044686b:; BB(0x0044686b);
    /* 0044686b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044686e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044686f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446871: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00446874: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446877: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044687c: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 00446883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446884: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446889u); f_004630c0();
    /* 00446889: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044688c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044688f: jle 0x446898 */ if ((fZ||fS!=fO)) goto L_00446898;
L_00446891:; BB(0x00446891);
    /* 00446891: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00446893: jmp 0x44697f */ goto L_0044697f;
L_00446898:; BB(0x00446898);
    /* 00446898: jmp 0x44697d */ goto L_0044697d;
L_0044689d:; BB(0x0044689d);
    /* 0044689d: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468a1: je 0x4468dc */ if (fZ) goto L_004468dc;
L_004468a3:; BB(0x004468a3);
    /* 004468a3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468a7: je 0x4468dc */ if (fZ) goto L_004468dc;
L_004468a9:; BB(0x004468a9);
    /* 004468a9: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468ad: je 0x4468dc */ if (fZ) goto L_004468dc;
L_004468af:; BB(0x004468af);
    /* 004468af: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468b3: jne 0x4468e3 */ if (!fZ) goto L_004468e3;
L_004468b5:; BB(0x004468b5);
    /* 004468b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004468b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004468b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004468bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004468be: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004468c1: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004468c7: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 004468ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004468cf: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x4468d4u); f_004630c0();
    /* 004468d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004468d7: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004468da: jle 0x4468e3 */ if ((fZ||fS!=fO)) goto L_004468e3;
L_004468dc:; BB(0x004468dc);
    /* 004468dc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004468de: jmp 0x44697f */ goto L_0044697f;
L_004468e3:; BB(0x004468e3);
    /* 004468e3: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468e7: je 0x4468ef */ if (fZ) goto L_004468ef;
L_004468e9:; BB(0x004468e9);
    /* 004468e9: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468ed: jne 0x4468f6 */ if (!fZ) goto L_004468f6;
L_004468ef:; BB(0x004468ef);
    /* 004468ef: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004468f1: jmp 0x44697f */ goto L_0044697f;
L_004468f6:; BB(0x004468f6);
    /* 004468f6: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004468fa: jne 0x446900 */ if (!fZ) goto L_00446900;
L_004468fc:; BB(0x004468fc);
    /* 004468fc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004468fe: jmp 0x44697f */ goto L_0044697f;
L_00446900:; BB(0x00446900);
    /* 00446900: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446904: jne 0x44697d */ if (!fZ) goto L_0044697d;
L_00446906:; BB(0x00446906);
    /* 00446906: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446909: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044690a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044690c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044690f: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446912: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00446918: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044691f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446920: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446925u); f_004630c0();
    /* 00446925: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446928: mov esi, eax */ r_esi = r_eax;
    /* 0044692a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044692d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044692e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00446930: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00446933: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446936: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044693b: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 00446942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446943: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446948u); f_004630c0();
    /* 00446948: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044694b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044694d: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446950: jne 0x44697d */ if (!fZ) goto L_0044697d;
L_00446952:; BB(0x00446952);
    /* 00446952: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446956: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00446958: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044695b: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044695e: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00446964: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044696b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044696c: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446971u); f_004630c0();
    /* 00446971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446974: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446977: jle 0x44697d */ if ((fZ||fS!=fO)) goto L_0044697d;
L_00446979:; BB(0x00446979);
    /* 00446979: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044697b: jmp 0x44697f */ goto L_0044697f;
L_0044697d:; BB(0x0044697d);
    /* 0044697d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044697f:; BB(0x0044697f);
    /* 0044697f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446980: mov esp, ebp */ r_esp = r_ebp;
    /* 00446982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446983: ret 4 */ FN_RET(0x004466b0); r_esp += 8; return;
}

void f_00446990(void) /* sub_446990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446990);
    /* 00446990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446991: mov ebp, esp */ r_ebp = r_esp;
    /* 00446993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00446997: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 0044699b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044699d: je 0x446a94 */ if (fZ) goto L_00446a94;
L_004469a3:; BB(0x004469a3);
    /* 004469a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004469a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004469a7: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004469ad: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x4469b2u); f_0044ce00();
    /* 004469b2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004469b5: jne 0x446a1f */ if (!fZ) goto L_00446a1f;
L_004469b7:; BB(0x004469b7);
    /* 004469b7: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004469bb: je 0x4469e7 */ if (fZ) goto L_004469e7;
L_004469bd:; BB(0x004469bd);
    /* 004469bd: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004469c1: jne 0x446a03 */ if (!fZ) goto L_00446a03;
L_004469c3:; BB(0x004469c3);
    /* 004469c3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004469c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004469c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004469ca: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004469cd: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 004469d2: lea ecx, [eax + edx + 0x98] */ r_ecx = (u32)(r_eax+r_edx+0x98u);
    /* 004469d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004469da: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x4469dfu); f_004630c0();
    /* 004469df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004469e2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004469e5: jle 0x446a03 */ if ((fZ||fS!=fO)) goto L_00446a03;
L_004469e7:; BB(0x004469e7);
    /* 004469e7: push 0x6b8a3c */ { u32 v = 0x6b8a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004469ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4469f1u); f_00630f40();
    /* 004469f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004469f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004469f5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004469f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004469f9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4469feu); f_00686d8e();
    /* 004469fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a01: jmp 0x446a1d */ goto L_00446a1d;
L_00446a03:; BB(0x00446a03);
    /* 00446a03: push 0x6b8a0c */ { u32 v = 0x6b8a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00446a08: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x446a0du); f_00630f40();
    /* 00446a0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a11: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00446a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a15: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x446a1au); f_00686d8e();
    /* 00446a1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00446a1d:; BB(0x00446a1d);
    /* 00446a1d: jmp 0x446a92 */ goto L_00446a92;
L_00446a1f:; BB(0x00446a1f);
    /* 00446a1f: cmp dword ptr [ebp + 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446a23: je 0x446a5c */ if (fZ) goto L_00446a5c;
L_00446a25:; BB(0x00446a25);
    /* 00446a25: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446a29: je 0x446a5c */ if (fZ) goto L_00446a5c;
L_00446a2b:; BB(0x00446a2b);
    /* 00446a2b: cmp dword ptr [ebp + 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446a2f: je 0x446a5c */ if (fZ) goto L_00446a5c;
L_00446a31:; BB(0x00446a31);
    /* 00446a31: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446a35: jne 0x446a78 */ if (!fZ) goto L_00446a78;
L_00446a37:; BB(0x00446a37);
    /* 00446a37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00446a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446a3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00446a3e: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446a41: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00446a47: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 00446a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a4f: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x446a54u); f_004630c0();
    /* 00446a54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a57: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446a5a: jle 0x446a78 */ if ((fZ||fS!=fO)) goto L_00446a78;
L_00446a5c:; BB(0x00446a5c);
    /* 00446a5c: push 0x6b8a3c */ { u32 v = 0x6b8a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00446a61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x446a66u); f_00630f40();
    /* 00446a66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a6a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00446a6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446a6e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x446a73u); f_00686d8e();
    /* 00446a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a76: jmp 0x446a92 */ goto L_00446a92;
L_00446a78:; BB(0x00446a78);
    /* 00446a78: push 0x6b89d8 */ { u32 v = 0x6b89d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446a7d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x446a82u); f_00630f40();
    /* 00446a82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446a86: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00446a89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446a8a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x446a8fu); f_00686d8e();
    /* 00446a8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00446a92:; BB(0x00446a92);
    /* 00446a92: jmp 0x446aae */ goto L_00446aae;
L_00446a94:; BB(0x00446a94);
    /* 00446a94: push 0x6b89b8 */ { u32 v = 0x6b89b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446a99: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x446a9eu); f_00630f40();
    /* 00446a9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446aa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446aa2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00446aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446aa6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x446aabu); f_00686d8e();
    /* 00446aab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00446aae:; BB(0x00446aae);
    /* 00446aae: mov esp, ebp */ r_esp = r_ebp;
    /* 00446ab0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446ab1: ret 0x10 */ FN_RET(0x00446990); r_esp += 20; return;
}

