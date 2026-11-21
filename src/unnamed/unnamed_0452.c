#include "protos.h"

void f_00452010(void) /* sub_452010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452010);
    /* 00452010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452011: mov ebp, esp */ r_ebp = r_esp;
    /* 00452013: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452016: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00452017: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045201a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452021: jmp 0x45202c */ goto L_0045202c;
L_00452023:; BB(0x00452023);
    /* 00452023: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452026: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452029: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045202c:; BB(0x0045202c);
    /* 0045202c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452030: jge 0x45209b */ if ((fS==fO)) goto L_0045209b;
L_00452032:; BB(0x00452032);
    /* 00452032: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452035: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452038: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045203d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045203e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452041: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452046u); f_0044f680();
    /* 00452046: mov esi, eax */ r_esi = r_eax;
    /* 00452048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045204b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045204e: mov ax, word ptr [edx + ecx*2 + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x6u))) & 0xffffu);
    /* 00452053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452054: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452057: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45205cu); f_0044f680();
    /* 0045205c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045205e: jne 0x452099 */ if (!fZ) goto L_00452099;
L_00452060:; BB(0x00452060);
    /* 00452060: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452064: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00452067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452068: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045206b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045206e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045206f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452072: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452073: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452076: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452079: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045207e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045207f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00452082: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452087u); f_0044f680();
    /* 00452087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452088: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045208b: call 0x451c20 */ r_esp -= 4; W32(r_esp, 0x452090u); f_00451c20();
    /* 00452090: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00452093: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452095: je 0x452099 */ if (fZ) goto L_00452099;
L_00452097:; BB(0x00452097);
    /* 00452097: jmp 0x4520ab */ goto L_004520ab;
L_00452099:; BB(0x00452099);
    /* 00452099: jmp 0x452023 */ goto L_00452023;
L_0045209b:; BB(0x0045209b);
    /* 0045209b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045209e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045209f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004520a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004520a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004520a6: call 0x4516a0 */ r_esp -= 4; W32(r_esp, 0x4520abu); f_004516a0();
L_004520ab:; BB(0x004520ab);
    /* 004520ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004520ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004520ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004520af: ret 8 */ FN_RET(0x00452010); r_esp += 12; return;
}

void f_004520c0(void) /* sub_4520C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004520c0);
    /* 004520c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004520c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004520c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004520c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004520c7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004520c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004520cc: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4520d1u); f_0044f700();
    /* 004520d1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004520d4: jne 0x4520e0 */ if (!fZ) goto L_004520e0;
L_004520d6:; BB(0x004520d6);
    /* 004520d6: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004520db: jmp 0x4524f2 */ goto L_004524f2;
L_004520e0:; BB(0x004520e0);
    /* 004520e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004520e3: movzx ecx, byte ptr [eax + 0x2c9] */ r_ecx = (u32)R8((u32)(r_eax+0x2c9u));
    /* 004520ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004520ec: je 0x452106 */ if (fZ) goto L_00452106;
L_004520ee:; BB(0x004520ee);
    /* 004520ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004520f1: movzx eax, byte ptr [edx + 0x2ca] */ r_eax = (u32)R8((u32)(r_edx+0x2cau));
    /* 004520f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004520fa: je 0x452106 */ if (fZ) goto L_00452106;
L_004520fc:; BB(0x004520fc);
    /* 004520fc: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00452101: jmp 0x4524f2 */ goto L_004524f2;
L_00452106:; BB(0x00452106);
    /* 00452106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452109: movzx edx, byte ptr [ecx + 0x2c9] */ r_edx = (u32)R8((u32)(r_ecx+0x2c9u));
    /* 00452110: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452112: je 0x45212c */ if (fZ) goto L_0045212c;
L_00452114:; BB(0x00452114);
    /* 00452114: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452117: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 0045211e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452120: je 0x45212c */ if (fZ) goto L_0045212c;
L_00452122:; BB(0x00452122);
    /* 00452122: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00452127: jmp 0x4524f2 */ goto L_004524f2;
L_0045212c:; BB(0x0045212c);
    /* 0045212c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045212f: movzx eax, byte ptr [edx + 0x2c9] */ r_eax = (u32)R8((u32)(r_edx+0x2c9u));
    /* 00452136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452138: je 0x452160 */ if (fZ) goto L_00452160;
L_0045213a:; BB(0x0045213a);
    /* 0045213a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045213d: movzx edx, byte ptr [ecx + 0x2c5] */ r_edx = (u32)R8((u32)(r_ecx+0x2c5u));
    /* 00452144: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452146: jne 0x452156 */ if (!fZ) goto L_00452156;
L_00452148:; BB(0x00452148);
    /* 00452148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045214b: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00452152: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452154: je 0x452160 */ if (fZ) goto L_00452160;
L_00452156:; BB(0x00452156);
    /* 00452156: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 0045215b: jmp 0x4524f2 */ goto L_004524f2;
L_00452160:; BB(0x00452160);
    /* 00452160: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452163: movzx eax, byte ptr [edx + 0x2c9] */ r_eax = (u32)R8((u32)(r_edx+0x2c9u));
    /* 0045216a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045216c: je 0x452178 */ if (fZ) goto L_00452178;
L_0045216e:; BB(0x0045216e);
    /* 0045216e: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00452173: jmp 0x4524f2 */ goto L_004524f2;
L_00452178:; BB(0x00452178);
    /* 00452178: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045217b: movzx edx, byte ptr [ecx + 0x2cb] */ r_edx = (u32)R8((u32)(r_ecx+0x2cbu));
    /* 00452182: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452184: je 0x452190 */ if (fZ) goto L_00452190;
L_00452186:; BB(0x00452186);
    /* 00452186: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0045218b: jmp 0x4524f2 */ goto L_004524f2;
L_00452190:; BB(0x00452190);
    /* 00452190: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452193: movzx ecx, byte ptr [eax + 0x2ca] */ r_ecx = (u32)R8((u32)(r_eax+0x2cau));
    /* 0045219a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045219c: je 0x4521b6 */ if (fZ) goto L_004521b6;
L_0045219e:; BB(0x0045219e);
    /* 0045219e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521a1: movzx eax, byte ptr [edx + 0x2cd] */ r_eax = (u32)R8((u32)(r_edx+0x2cdu));
    /* 004521a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521aa: je 0x4521b6 */ if (fZ) goto L_004521b6;
L_004521ac:; BB(0x004521ac);
    /* 004521ac: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004521b1: jmp 0x4524f2 */ goto L_004524f2;
L_004521b6:; BB(0x004521b6);
    /* 004521b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521b9: movzx edx, byte ptr [ecx + 0x2be] */ r_edx = (u32)R8((u32)(r_ecx+0x2beu));
    /* 004521c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521c2: je 0x452214 */ if (fZ) goto L_00452214;
L_004521c4:; BB(0x004521c4);
    /* 004521c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521c7: movzx ecx, byte ptr [eax + 0x2bf] */ r_ecx = (u32)R8((u32)(r_eax+0x2bfu));
    /* 004521ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521d0: je 0x452214 */ if (fZ) goto L_00452214;
L_004521d2:; BB(0x004521d2);
    /* 004521d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521d5: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 004521dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521de: jne 0x4521ee */ if (!fZ) goto L_004521ee;
L_004521e0:; BB(0x004521e0);
    /* 004521e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521e3: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 004521ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521ec: je 0x452214 */ if (fZ) goto L_00452214;
L_004521ee:; BB(0x004521ee);
    /* 004521ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521f1: movzx ecx, byte ptr [eax + 0x2ca] */ r_ecx = (u32)R8((u32)(r_eax+0x2cau));
    /* 004521f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004521fa: je 0x452214 */ if (fZ) goto L_00452214;
L_004521fc:; BB(0x004521fc);
    /* 004521fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004521ff: movzx eax, byte ptr [edx + 0x2ce] */ r_eax = (u32)R8((u32)(r_edx+0x2ceu));
    /* 00452206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452208: je 0x452214 */ if (fZ) goto L_00452214;
L_0045220a:; BB(0x0045220a);
    /* 0045220a: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0045220f: jmp 0x4524f2 */ goto L_004524f2;
L_00452214:; BB(0x00452214);
    /* 00452214: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452217: movzx edx, byte ptr [ecx + 0x2ca] */ r_edx = (u32)R8((u32)(r_ecx+0x2cau));
    /* 0045221e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452220: je 0x45223a */ if (fZ) goto L_0045223a;
L_00452222:; BB(0x00452222);
    /* 00452222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452225: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 0045222c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045222e: je 0x45223a */ if (fZ) goto L_0045223a;
L_00452230:; BB(0x00452230);
    /* 00452230: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00452235: jmp 0x4524f2 */ goto L_004524f2;
L_0045223a:; BB(0x0045223a);
    /* 0045223a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045223d: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452244: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452246: jne 0x452256 */ if (!fZ) goto L_00452256;
L_00452248:; BB(0x00452248);
    /* 00452248: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045224b: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 00452252: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452254: je 0x45226e */ if (fZ) goto L_0045226e;
L_00452256:; BB(0x00452256);
    /* 00452256: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452259: movzx ecx, byte ptr [eax + 0x2ca] */ r_ecx = (u32)R8((u32)(r_eax+0x2cau));
    /* 00452260: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452262: je 0x45226e */ if (fZ) goto L_0045226e;
L_00452264:; BB(0x00452264);
    /* 00452264: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00452269: jmp 0x4524f2 */ goto L_004524f2;
L_0045226e:; BB(0x0045226e);
    /* 0045226e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452271: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045227a: jne 0x45228a */ if (!fZ) goto L_0045228a;
L_0045227c:; BB(0x0045227c);
    /* 0045227c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045227f: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 00452286: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452288: je 0x4522a2 */ if (fZ) goto L_004522a2;
L_0045228a:; BB(0x0045228a);
    /* 0045228a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045228d: movzx ecx, byte ptr [eax + 0x2cc] */ r_ecx = (u32)R8((u32)(r_eax+0x2ccu));
    /* 00452294: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452296: je 0x4522a2 */ if (fZ) goto L_004522a2;
L_00452298:; BB(0x00452298);
    /* 00452298: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0045229d: jmp 0x4524f2 */ goto L_004524f2;
L_004522a2:; BB(0x004522a2);
    /* 004522a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522a5: movzx eax, byte ptr [edx + 0x2c8] */ r_eax = (u32)R8((u32)(r_edx+0x2c8u));
    /* 004522ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522ae: je 0x4522c8 */ if (fZ) goto L_004522c8;
L_004522b0:; BB(0x004522b0);
    /* 004522b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522b3: movzx edx, byte ptr [ecx + 0x2cd] */ r_edx = (u32)R8((u32)(r_ecx+0x2cdu));
    /* 004522ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522bc: je 0x4522c8 */ if (fZ) goto L_004522c8;
L_004522be:; BB(0x004522be);
    /* 004522be: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004522c3: jmp 0x4524f2 */ goto L_004524f2;
L_004522c8:; BB(0x004522c8);
    /* 004522c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522cb: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 004522d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522d4: je 0x4522ee */ if (fZ) goto L_004522ee;
L_004522d6:; BB(0x004522d6);
    /* 004522d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522d9: movzx eax, byte ptr [edx + 0x2cd] */ r_eax = (u32)R8((u32)(r_edx+0x2cdu));
    /* 004522e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522e2: je 0x4522ee */ if (fZ) goto L_004522ee;
L_004522e4:; BB(0x004522e4);
    /* 004522e4: mov eax, 0xf */ r_eax = 0xfu;
    /* 004522e9: jmp 0x4524f2 */ goto L_004524f2;
L_004522ee:; BB(0x004522ee);
    /* 004522ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522f1: movzx edx, byte ptr [ecx + 0x2c5] */ r_edx = (u32)R8((u32)(r_ecx+0x2c5u));
    /* 004522f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004522fa: je 0x452314 */ if (fZ) goto L_00452314;
L_004522fc:; BB(0x004522fc);
    /* 004522fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004522ff: movzx ecx, byte ptr [eax + 0x2cd] */ r_ecx = (u32)R8((u32)(r_eax+0x2cdu));
    /* 00452306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452308: je 0x452314 */ if (fZ) goto L_00452314;
L_0045230a:; BB(0x0045230a);
    /* 0045230a: mov eax, 0xe */ r_eax = 0xeu;
    /* 0045230f: jmp 0x4524f2 */ goto L_004524f2;
L_00452314:; BB(0x00452314);
    /* 00452314: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452317: movzx eax, byte ptr [edx + 0x2be] */ r_eax = (u32)R8((u32)(r_edx+0x2beu));
    /* 0045231e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452320: je 0x452348 */ if (fZ) goto L_00452348;
L_00452322:; BB(0x00452322);
    /* 00452322: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452325: movzx edx, byte ptr [ecx + 0x2c8] */ r_edx = (u32)R8((u32)(r_ecx+0x2c8u));
    /* 0045232c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045232e: je 0x452348 */ if (fZ) goto L_00452348;
L_00452330:; BB(0x00452330);
    /* 00452330: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452333: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 0045233a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045233c: je 0x452348 */ if (fZ) goto L_00452348;
L_0045233e:; BB(0x0045233e);
    /* 0045233e: mov eax, 0xb */ r_eax = 0xbu;
    /* 00452343: jmp 0x4524f2 */ goto L_004524f2;
L_00452348:; BB(0x00452348);
    /* 00452348: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045234b: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452354: je 0x45237c */ if (fZ) goto L_0045237c;
L_00452356:; BB(0x00452356);
    /* 00452356: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452359: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 00452360: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452362: je 0x45237c */ if (fZ) goto L_0045237c;
L_00452364:; BB(0x00452364);
    /* 00452364: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452367: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 0045236e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452370: je 0x45237c */ if (fZ) goto L_0045237c;
L_00452372:; BB(0x00452372);
    /* 00452372: mov eax, 0xd */ r_eax = 0xdu;
    /* 00452377: jmp 0x4524f2 */ goto L_004524f2;
L_0045237c:; BB(0x0045237c);
    /* 0045237c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045237f: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452388: je 0x4523a2 */ if (fZ) goto L_004523a2;
L_0045238a:; BB(0x0045238a);
    /* 0045238a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045238d: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 00452394: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452396: je 0x4523a2 */ if (fZ) goto L_004523a2;
L_00452398:; BB(0x00452398);
    /* 00452398: mov eax, 0xc */ r_eax = 0xcu;
    /* 0045239d: jmp 0x4524f2 */ goto L_004524f2;
L_004523a2:; BB(0x004523a2);
    /* 004523a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523a5: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 004523ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523ae: je 0x4523d6 */ if (fZ) goto L_004523d6;
L_004523b0:; BB(0x004523b0);
    /* 004523b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523b3: movzx eax, byte ptr [edx + 0x2c2] */ r_eax = (u32)R8((u32)(r_edx+0x2c2u));
    /* 004523ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523bc: je 0x4523d6 */ if (fZ) goto L_004523d6;
L_004523be:; BB(0x004523be);
    /* 004523be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523c1: movzx edx, byte ptr [ecx + 0x2ce] */ r_edx = (u32)R8((u32)(r_ecx+0x2ceu));
    /* 004523c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523ca: je 0x4523d6 */ if (fZ) goto L_004523d6;
L_004523cc:; BB(0x004523cc);
    /* 004523cc: mov eax, 0xa */ r_eax = 0xau;
    /* 004523d1: jmp 0x4524f2 */ goto L_004524f2;
L_004523d6:; BB(0x004523d6);
    /* 004523d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523d9: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 004523e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523e2: je 0x45240a */ if (fZ) goto L_0045240a;
L_004523e4:; BB(0x004523e4);
    /* 004523e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523e7: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 004523ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523f0: je 0x45240a */ if (fZ) goto L_0045240a;
L_004523f2:; BB(0x004523f2);
    /* 004523f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004523f5: movzx edx, byte ptr [ecx + 0x2ce] */ r_edx = (u32)R8((u32)(r_ecx+0x2ceu));
    /* 004523fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004523fe: je 0x45240a */ if (fZ) goto L_0045240a;
L_00452400:; BB(0x00452400);
    /* 00452400: mov eax, 9 */ r_eax = 0x9u;
    /* 00452405: jmp 0x4524f2 */ goto L_004524f2;
L_0045240a:; BB(0x0045240a);
    /* 0045240a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045240d: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 00452414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452416: jne 0x45243e */ if (!fZ) goto L_0045243e;
L_00452418:; BB(0x00452418);
    /* 00452418: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045241b: movzx eax, byte ptr [edx + 0x2c2] */ r_eax = (u32)R8((u32)(r_edx+0x2c2u));
    /* 00452422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452424: je 0x45243e */ if (fZ) goto L_0045243e;
L_00452426:; BB(0x00452426);
    /* 00452426: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452429: movzx edx, byte ptr [ecx + 0x2ce] */ r_edx = (u32)R8((u32)(r_ecx+0x2ceu));
    /* 00452430: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452432: je 0x45243e */ if (fZ) goto L_0045243e;
L_00452434:; BB(0x00452434);
    /* 00452434: mov eax, 8 */ r_eax = 0x8u;
    /* 00452439: jmp 0x4524f2 */ goto L_004524f2;
L_0045243e:; BB(0x0045243e);
    /* 0045243e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452441: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 00452448: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045244a: jne 0x452472 */ if (!fZ) goto L_00452472;
L_0045244c:; BB(0x0045244c);
    /* 0045244c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045244f: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452456: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452458: je 0x452472 */ if (fZ) goto L_00452472;
L_0045245a:; BB(0x0045245a);
    /* 0045245a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045245d: movzx edx, byte ptr [ecx + 0x2ce] */ r_edx = (u32)R8((u32)(r_ecx+0x2ceu));
    /* 00452464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452466: je 0x452472 */ if (fZ) goto L_00452472;
L_00452468:; BB(0x00452468);
    /* 00452468: mov eax, 7 */ r_eax = 0x7u;
    /* 0045246d: jmp 0x4524f2 */ goto L_004524f2;
L_00452472:; BB(0x00452472);
    /* 00452472: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452475: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 0045247c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045247e: je 0x452487 */ if (fZ) goto L_00452487;
L_00452480:; BB(0x00452480);
    /* 00452480: mov eax, 6 */ r_eax = 0x6u;
    /* 00452485: jmp 0x4524f2 */ goto L_004524f2;
L_00452487:; BB(0x00452487);
    /* 00452487: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045248a: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00452491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452493: je 0x45249c */ if (fZ) goto L_0045249c;
L_00452495:; BB(0x00452495);
    /* 00452495: mov eax, 5 */ r_eax = 0x5u;
    /* 0045249a: jmp 0x4524f2 */ goto L_004524f2;
L_0045249c:; BB(0x0045249c);
    /* 0045249c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045249f: movzx edx, byte ptr [ecx + 0x2ca] */ r_edx = (u32)R8((u32)(r_ecx+0x2cau));
    /* 004524a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004524a8: je 0x4524b1 */ if (fZ) goto L_004524b1;
L_004524aa:; BB(0x004524aa);
    /* 004524aa: mov eax, 4 */ r_eax = 0x4u;
    /* 004524af: jmp 0x4524f2 */ goto L_004524f2;
L_004524b1:; BB(0x004524b1);
    /* 004524b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004524b4: movzx ecx, byte ptr [eax + 0x2cc] */ r_ecx = (u32)R8((u32)(r_eax+0x2ccu));
    /* 004524bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004524bd: je 0x4524c6 */ if (fZ) goto L_004524c6;
L_004524bf:; BB(0x004524bf);
    /* 004524bf: mov eax, 3 */ r_eax = 0x3u;
    /* 004524c4: jmp 0x4524f2 */ goto L_004524f2;
L_004524c6:; BB(0x004524c6);
    /* 004524c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004524c9: movzx eax, byte ptr [edx + 0x2cd] */ r_eax = (u32)R8((u32)(r_edx+0x2cdu));
    /* 004524d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004524d2: je 0x4524db */ if (fZ) goto L_004524db;
L_004524d4:; BB(0x004524d4);
    /* 004524d4: mov eax, 2 */ r_eax = 0x2u;
    /* 004524d9: jmp 0x4524f2 */ goto L_004524f2;
L_004524db:; BB(0x004524db);
    /* 004524db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004524de: movzx edx, byte ptr [ecx + 0x2ce] */ r_edx = (u32)R8((u32)(r_ecx+0x2ceu));
    /* 004524e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004524e7: je 0x4524f0 */ if (fZ) goto L_004524f0;
L_004524e9:; BB(0x004524e9);
    /* 004524e9: mov eax, 1 */ r_eax = 0x1u;
    /* 004524ee: jmp 0x4524f2 */ goto L_004524f2;
L_004524f0:; BB(0x004524f0);
    /* 004524f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004524f2:; BB(0x004524f2);
    /* 004524f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004524f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004524f5: ret  */ FN_RET(0x004520c0); r_esp += 4; return;
}

void f_00452500(void) /* sub_452500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452500);
    /* 00452500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452501: mov ebp, esp */ r_ebp = r_esp;
    /* 00452503: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452506: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00452507: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0045250a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452510: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00452516: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0045251c: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00452522: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00452528: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0045252e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452532: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452535: call 0x44efd0 */ r_esp -= 4; W32(r_esp, 0x45253au); f_0044efd0();
    /* 0045253a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045253d: call 0x4520c0 */ r_esp -= 4; W32(r_esp, 0x452542u); f_004520c0();
    /* 00452542: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00452546: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0045254c: jmp 0x45255a */ goto L_0045255a;
L_0045254e:; BB(0x0045254e);
    /* 0045254e: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00452552: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00452556: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_0045255a:; BB(0x0045255a);
    /* 0045255a: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0045255e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452561: jge 0x452985 */ if ((fS==fO)) goto L_00452985;
L_00452567:; BB(0x00452567);
    /* 00452567: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0045256b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045256e: cmp dword ptr [ebp - 0x2c], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00452572: ja 0x4528d1 */ if ((!fC&&!fZ)) goto L_004528d1;
L_00452578:; BB(0x00452578);
    /* 00452578: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045257b: jmp dword ptr [ecx*4 + 0x4529c8] */ { u32 t = R32((u32)(r_ecx*4+0x4529c8u)); switch (t) { case 0x452582u: goto L_00452582; case 0x45259bu: goto L_0045259b; case 0x4525bau: goto L_004525ba; case 0x4525d9u: goto L_004525d9; case 0x4525f8u: goto L_004525f8; case 0x452617u: goto L_00452617; case 0x452636u: goto L_00452636; case 0x452655u: goto L_00452655; case 0x452674u: goto L_00452674; case 0x452693u: goto L_00452693; case 0x4526b2u: goto L_004526b2; case 0x4526d1u: goto L_004526d1; case 0x4526f0u: goto L_004526f0; case 0x45270fu: goto L_0045270f; case 0x45272eu: goto L_0045272e; case 0x45274du: goto L_0045274d; case 0x45276cu: goto L_0045276c; case 0x45278bu: goto L_0045278b; case 0x4527aau: goto L_004527aa; case 0x4527c9u: goto L_004527c9; case 0x4527e8u: goto L_004527e8; case 0x452807u: goto L_00452807; case 0x452826u: goto L_00452826; case 0x452845u: goto L_00452845; case 0x452861u: goto L_00452861; case 0x45287du: goto L_0045287d; case 0x452899u: goto L_00452899; case 0x4528b5u: goto L_004528b5; default: UNSUP(0x0045257b, "jump table entry is not a known target"); } }
L_00452582:; BB(0x00452582);
    /* 00452582: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00452585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452586: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00452589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045258a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045258d: call 0x453d30 */ r_esp -= 4; W32(r_esp, 0x452592u); f_00453d30();
    /* 00452592: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452596: jmp 0x4528d7 */ goto L_004528d7;
L_0045259b:; BB(0x0045259b);
    /* 0045259b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045259e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045259f: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004525a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004525a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004525a6: call 0x453d70 */ r_esp -= 4; W32(r_esp, 0x4525abu); f_00453d70();
    /* 004525ab: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004525ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004525b1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004525b5: jmp 0x4528d7 */ goto L_004528d7;
L_004525ba:; BB(0x004525ba);
    /* 004525ba: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004525bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004525be: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004525c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004525c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004525c5: call 0x453e00 */ r_esp -= 4; W32(r_esp, 0x4525cau); f_00453e00();
    /* 004525ca: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004525cd: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004525d0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004525d4: jmp 0x4528d7 */ goto L_004528d7;
L_004525d9:; BB(0x004525d9);
    /* 004525d9: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004525dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004525dd: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004525e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004525e1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004525e4: call 0x454200 */ r_esp -= 4; W32(r_esp, 0x4525e9u); f_00454200();
    /* 004525e9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004525ec: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004525ef: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004525f3: jmp 0x4528d7 */ goto L_004528d7;
L_004525f8:; BB(0x004525f8);
    /* 004525f8: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004525fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004525fc: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004525ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452600: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452603: call 0x454250 */ r_esp -= 4; W32(r_esp, 0x452608u); f_00454250();
    /* 00452608: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0045260b: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045260e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452612: jmp 0x4528d7 */ goto L_004528d7;
L_00452617:; BB(0x00452617);
    /* 00452617: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045261a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045261b: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045261e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045261f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452622: call 0x4543a0 */ r_esp -= 4; W32(r_esp, 0x452627u); f_004543a0();
    /* 00452627: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0045262a: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045262d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452631: jmp 0x4528d7 */ goto L_004528d7;
L_00452636:; BB(0x00452636);
    /* 00452636: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045263a: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045263d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045263e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452641: call 0x4543f0 */ r_esp -= 4; W32(r_esp, 0x452646u); f_004543f0();
    /* 00452646: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452649: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045264c: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452650: jmp 0x4528d7 */ goto L_004528d7;
L_00452655:; BB(0x00452655);
    /* 00452655: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452659: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045265c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045265d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452660: call 0x454440 */ r_esp -= 4; W32(r_esp, 0x452665u); f_00454440();
    /* 00452665: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452668: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045266b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0045266f: jmp 0x4528d7 */ goto L_004528d7;
L_00452674:; BB(0x00452674);
    /* 00452674: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452678: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045267b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045267c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045267f: call 0x454560 */ r_esp -= 4; W32(r_esp, 0x452684u); f_00454560();
    /* 00452684: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452687: add eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045268a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0045268e: jmp 0x4528d7 */ goto L_004528d7;
L_00452693:; BB(0x00452693);
    /* 00452693: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452696: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452697: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045269a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045269b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045269e: call 0x454960 */ r_esp -= 4; W32(r_esp, 0x4526a3u); f_00454960();
    /* 004526a3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004526a6: add eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004526a9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004526ad: jmp 0x4528d7 */ goto L_004528d7;
L_004526b2:; BB(0x004526b2);
    /* 004526b2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004526b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004526b6: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004526b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004526ba: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004526bd: call 0x454d60 */ r_esp -= 4; W32(r_esp, 0x4526c2u); f_00454d60();
    /* 004526c2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004526c5: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004526c8: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004526cc: jmp 0x4528d7 */ goto L_004528d7;
L_004526d1:; BB(0x004526d1);
    /* 004526d1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004526d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004526d5: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004526d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004526d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004526dc: call 0x455060 */ r_esp -= 4; W32(r_esp, 0x4526e1u); f_00455060();
    /* 004526e1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004526e4: add eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004526e7: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004526eb: jmp 0x4528d7 */ goto L_004528d7;
L_004526f0:; BB(0x004526f0);
    /* 004526f0: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004526f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004526f4: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004526f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004526f8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004526fb: call 0x455740 */ r_esp -= 4; W32(r_esp, 0x452700u); f_00455740();
    /* 00452700: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452703: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452706: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0045270a: jmp 0x4528d7 */ goto L_004528d7;
L_0045270f:; BB(0x0045270f);
    /* 0045270f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452712: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452713: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452716: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452717: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045271a: call 0x4558f0 */ r_esp -= 4; W32(r_esp, 0x45271fu); f_004558f0();
    /* 0045271f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452722: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452725: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452729: jmp 0x4528d7 */ goto L_004528d7;
L_0045272e:; BB(0x0045272e);
    /* 0045272e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452731: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452732: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452736: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452739: call 0x4559c0 */ r_esp -= 4; W32(r_esp, 0x45273eu); f_004559c0();
    /* 0045273e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452741: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452744: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452748: jmp 0x4528d7 */ goto L_004528d7;
L_0045274d:; BB(0x0045274d);
    /* 0045274d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452750: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452751: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452755: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452758: call 0x455ac0 */ r_esp -= 4; W32(r_esp, 0x45275du); f_00455ac0();
    /* 0045275d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452760: add eax, 0x2a */ {  u32 a = r_eax; u32 b = 0x2au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452763: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452767: jmp 0x4528d7 */ goto L_004528d7;
L_0045276c:; BB(0x0045276c);
    /* 0045276c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045276f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452770: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452774: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452777: call 0x455cb0 */ r_esp -= 4; W32(r_esp, 0x45277cu); f_00455cb0();
    /* 0045277c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0045277f: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452782: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452786: jmp 0x4528d7 */ goto L_004528d7;
L_0045278b:; BB(0x0045278b);
    /* 0045278b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045278e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045278f: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452793: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452796: call 0x456000 */ r_esp -= 4; W32(r_esp, 0x45279bu); f_00456000();
    /* 0045279b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0045279e: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004527a1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004527a5: jmp 0x4528d7 */ goto L_004528d7;
L_004527aa:; BB(0x004527aa);
    /* 004527aa: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004527ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004527ae: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004527b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004527b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004527b5: call 0x456020 */ r_esp -= 4; W32(r_esp, 0x4527bau); f_00456020();
    /* 004527ba: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004527bd: add eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004527c0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004527c4: jmp 0x4528d7 */ goto L_004528d7;
L_004527c9:; BB(0x004527c9);
    /* 004527c9: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004527cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004527cd: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004527d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004527d1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004527d4: call 0x4560e0 */ r_esp -= 4; W32(r_esp, 0x4527d9u); f_004560e0();
    /* 004527d9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004527dc: add eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004527df: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004527e3: jmp 0x4528d7 */ goto L_004528d7;
L_004527e8:; BB(0x004527e8);
    /* 004527e8: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004527eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004527ec: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004527ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004527f0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004527f3: call 0x456420 */ r_esp -= 4; W32(r_esp, 0x4527f8u); f_00456420();
    /* 004527f8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004527fb: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004527fe: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452802: jmp 0x4528d7 */ goto L_004528d7;
L_00452807:; BB(0x00452807);
    /* 00452807: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045280a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045280b: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045280e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045280f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452812: call 0x4567c0 */ r_esp -= 4; W32(r_esp, 0x452817u); f_004567c0();
    /* 00452817: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0045281a: add eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045281d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452821: jmp 0x4528d7 */ goto L_004528d7;
L_00452826:; BB(0x00452826);
    /* 00452826: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452829: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045282a: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045282d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045282e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452831: call 0x456890 */ r_esp -= 4; W32(r_esp, 0x452836u); f_00456890();
    /* 00452836: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452839: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045283c: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452840: jmp 0x4528d7 */ goto L_004528d7;
L_00452845:; BB(0x00452845);
    /* 00452845: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452848: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452849: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0045284c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045284d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452850: call 0x456920 */ r_esp -= 4; W32(r_esp, 0x452855u); f_00456920();
    /* 00452855: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452858: add eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045285b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0045285f: jmp 0x4528d7 */ goto L_004528d7;
L_00452861:; BB(0x00452861);
    /* 00452861: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452865: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452869: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045286c: call 0x456b30 */ r_esp -= 4; W32(r_esp, 0x452871u); f_00456b30();
    /* 00452871: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452874: add eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452877: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0045287b: jmp 0x4528d7 */ goto L_004528d7;
L_0045287d:; BB(0x0045287d);
    /* 0045287d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00452880: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452881: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00452884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452885: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452888: call 0x456ca0 */ r_esp -= 4; W32(r_esp, 0x45288du); f_00456ca0();
    /* 0045288d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00452890: add eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452893: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00452897: jmp 0x4528d7 */ goto L_004528d7;
L_00452899:; BB(0x00452899);
    /* 00452899: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045289c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045289d: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004528a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004528a1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004528a4: call 0x456e10 */ r_esp -= 4; W32(r_esp, 0x4528a9u); f_00456e10();
    /* 004528a9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004528ac: add eax, 0x47 */ {  u32 a = r_eax; u32 b = 0x47u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004528af: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004528b3: jmp 0x4528d7 */ goto L_004528d7;
L_004528b5:; BB(0x004528b5);
    /* 004528b5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 004528b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004528b9: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 004528bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004528bd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004528c0: call 0x456e50 */ r_esp -= 4; W32(r_esp, 0x4528c5u); f_00456e50();
    /* 004528c5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004528c8: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004528cb: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004528cf: jmp 0x4528d7 */ goto L_004528d7;
L_004528d1:; BB(0x004528d1);
    /* 004528d1: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
L_004528d7:; BB(0x004528d7);
    /* 004528d7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004528da: cmp dword ptr [ecx + 0x31c], 5 */ {  u32 a = R32((u32)(r_ecx+0x31cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004528e1: jl 0x45297e */ if ((fS!=fO)) goto L_0045297e;
L_004528e7:; BB(0x004528e7);
    /* 004528e7: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004528eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004528ed: jne 0x45297e */ if (!fZ) goto L_0045297e;
L_004528f3:; BB(0x004528f3);
    /* 004528f3: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004528f7: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004528fb: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00452901: jmp 0x45290f */ goto L_0045290f;
L_00452903:; BB(0x00452903);
    /* 00452903: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 00452907: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045290b: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_0045290f:; BB(0x0045290f);
    /* 0045290f: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00452913: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452916: jge 0x452936 */ if ((fS==fO)) goto L_00452936;
L_00452918:; BB(0x00452918);
    /* 00452918: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0045291c: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00452920: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452923: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452926: mov eax, dword ptr [esi + eax*4 + 0x300] */ r_eax = R32((u32)(r_esi+r_eax*4+0x300u));
    /* 0045292d: mov dword ptr [edx + ecx*4 + 0x2d8], eax */ W32((u32)(r_edx+r_ecx*4+0x2d8u), r_eax);
    /* 00452934: jmp 0x452903 */ goto L_00452903;
L_00452936:; BB(0x00452936);
    /* 00452936: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452939: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045293c: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00452942: mov dword ptr [ecx + 0x2f4], eax */ W32((u32)(r_ecx+0x2f4u), r_eax);
    /* 00452948: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045294b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045294e: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 00452954: mov dword ptr [ecx + 0x2f8], eax */ W32((u32)(r_ecx+0x2f8u), r_eax);
    /* 0045295a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045295d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452960: mov eax, dword ptr [edx + 0x324] */ r_eax = R32((u32)(r_edx+0x324u));
    /* 00452966: mov dword ptr [ecx + 0x2fc], eax */ W32((u32)(r_ecx+0x2fcu), r_eax);
    /* 0045296c: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00452970: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
    /* 00452974: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00452978: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
    /* 0045297c: jmp 0x452980 */ goto L_00452980;
L_0045297e:; BB(0x0045297e);
    /* 0045297e: jmp 0x452985 */ goto L_00452985;
L_00452980:; BB(0x00452980);
    /* 00452980: jmp 0x45254e */ goto L_0045254e;
L_00452985:; BB(0x00452985);
    /* 00452985: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00452988: cmp dword ptr [eax + 0x31c], 5 */ {  u32 a = R32((u32)(r_eax+0x31cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045298f: jl 0x4529bc */ if ((fS!=fO)) goto L_004529bc;
L_00452991:; BB(0x00452991);
    /* 00452991: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00452995: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452996: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0045299a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045299b: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0045299f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004529a0: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004529a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004529a5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004529a8: call 0x456f70 */ r_esp -= 4; W32(r_esp, 0x4529adu); f_00456f70();
    /* 004529ad: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004529b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004529b2: jne 0x4529bc */ if (!fZ) goto L_004529bc;
L_004529b4:; BB(0x004529b4);
    /* 004529b4: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 004529b8: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004529bc:; BB(0x004529bc);
    /* 004529bc: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004529c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004529c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004529c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004529c4: ret 4 */ FN_RET(0x00452500); r_esp += 8; return;
}

void f_00452ef0(void) /* sub_452EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452ef0);
    /* 00452ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00452ef3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452ef6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00452efb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00452efd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00452f00: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00452f03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452f06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452f07: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452f0a: call 0x44efd0 */ r_esp -= 4; W32(r_esp, 0x452f0fu); f_0044efd0();
    /* 00452f0f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00452f12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452f13: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00452f17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452f18: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00452f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452f1d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452f20: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x452f25u); f_00452fd0();
    /* 00452f25: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00452f28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452f29: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00452f2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452f2e: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00452f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452f33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00452f36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452f37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452f3a: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x452f3fu); f_004530b0();
    /* 00452f3f: movsx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00452f43: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452f46: jg 0x452f54 */ if ((!fZ&&fS==fO)) goto L_00452f54;
L_00452f48:; BB(0x00452f48);
    /* 00452f48: movsx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00452f4c: movsx ecx, byte ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffecu));
    /* 00452f50: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452f52: jle 0x452f58 */ if ((fZ||fS!=fO)) goto L_00452f58;
L_00452f54:; BB(0x00452f54);
    /* 00452f54: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00452f56: jmp 0x452fb9 */ goto L_00452fb9;
L_00452f58:; BB(0x00452f58);
    /* 00452f58: movsx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00452f5c: movsx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffecu));
    /* 00452f60: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452f62: jge 0x452f68 */ if ((fS==fO)) goto L_00452f68;
L_00452f64:; BB(0x00452f64);
    /* 00452f64: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00452f66: jmp 0x452fb9 */ goto L_00452fb9;
L_00452f68:; BB(0x00452f68);
    /* 00452f68: movsx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00452f6c: movsx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffecu));
    /* 00452f70: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452f72: jne 0x452fb7 */ if (!fZ) goto L_00452fb7;
L_00452f74:; BB(0x00452f74);
    /* 00452f74: movsx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00452f78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452f7b: jne 0x452fa7 */ if (!fZ) goto L_00452fa7;
L_00452f7d:; BB(0x00452f7d);
    /* 00452f7d: movsx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 00452f81: movsx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffefu));
    /* 00452f85: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452f87: jg 0x452fa1 */ if ((!fZ&&fS==fO)) goto L_00452fa1;
L_00452f89:; BB(0x00452f89);
    /* 00452f89: movsx eax, byte ptr [ebp - 9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 00452f8d: movsx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffefu));
    /* 00452f91: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452f93: jne 0x452fa5 */ if (!fZ) goto L_00452fa5;
L_00452f95:; BB(0x00452f95);
    /* 00452f95: movsx edx, byte ptr [ebp - 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff8u));
    /* 00452f99: movsx eax, byte ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff0u));
    /* 00452f9d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452f9f: jl 0x452fa5 */ if ((fS!=fO)) goto L_00452fa5;
L_00452fa1:; BB(0x00452fa1);
    /* 00452fa1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00452fa3: jmp 0x452fb9 */ goto L_00452fb9;
L_00452fa5:; BB(0x00452fa5);
    /* 00452fa5: jmp 0x452fb7 */ goto L_00452fb7;
L_00452fa7:; BB(0x00452fa7);
    /* 00452fa7: movsx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff5u));
    /* 00452fab: movsx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffefu));
    /* 00452faf: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452fb1: jl 0x452fb7 */ if ((fS!=fO)) goto L_00452fb7;
L_00452fb3:; BB(0x00452fb3);
    /* 00452fb3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00452fb5: jmp 0x452fb9 */ goto L_00452fb9;
L_00452fb7:; BB(0x00452fb7);
    /* 00452fb7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00452fb9:; BB(0x00452fb9);
    /* 00452fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452fbc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00452fbe: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x452fc3u); f_00686d72();
    /* 00452fc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00452fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452fc6: ret 0xc */ FN_RET(0x00452ef0); r_esp += 16; return;
}

void f_00452fd0(void) /* sub_452FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452fd0);
    /* 00452fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00452fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452fd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00452fd7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00452fda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452fe1: jmp 0x452fec */ goto L_00452fec;
L_00452fe3:; BB(0x00452fe3);
    /* 00452fe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00452fe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00452fe9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00452fec:; BB(0x00452fec);
    /* 00452fec: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452ff0: jge 0x452ffe */ if ((fS==fO)) goto L_00452ffe;
L_00452ff2:; BB(0x00452ff2);
    /* 00452ff2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452ff5: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00452ff8: mov byte ptr [ecx + 3], 0xff */ W8((u32)(r_ecx+0x3u), 0xffu);
    /* 00452ffc: jmp 0x452fe3 */ goto L_00452fe3;
L_00452ffe:; BB(0x00452ffe);
    /* 00452ffe: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00453002: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453003: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453006: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45300bu); f_0044f680();
    /* 0045300b: mov esi, eax */ r_esi = r_eax;
    /* 0045300d: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00453011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453012: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453015: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45301au); f_0044f680();
    /* 0045301a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045301c: jne 0x453026 */ if (!fZ) goto L_00453026;
L_0045301e:; BB(0x0045301e);
    /* 0045301e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00453021: mov byte ptr [ecx], 2 */ W8((u32)(r_ecx), 0x2u);
    /* 00453024: jmp 0x45302c */ goto L_0045302c;
L_00453026:; BB(0x00453026);
    /* 00453026: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00453029: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
L_0045302c:; BB(0x0045302c);
    /* 0045302c: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00453030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453031: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453034: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453039u); f_0044f680();
    /* 00453039: mov esi, eax */ r_esi = r_eax;
    /* 0045303b: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0045303f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453040: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453043: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453048u); f_0044f680();
    /* 00453048: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045304a: jge 0x453074 */ if ((fS==fO)) goto L_00453074;
L_0045304c:; BB(0x0045304c);
    /* 0045304c: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00453050: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453051: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453054: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453059u); f_0044f680();
    /* 00453059: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045305c: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 0045305f: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00453063: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453064: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453067: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45306cu); f_0044f680();
    /* 0045306c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045306f: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00453072: jmp 0x45309a */ goto L_0045309a;
L_00453074:; BB(0x00453074);
    /* 00453074: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00453078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453079: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045307c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453081u); f_0044f680();
    /* 00453081: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00453084: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 00453087: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0045308b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045308c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045308f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453094u); f_0044f680();
    /* 00453094: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00453097: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
L_0045309a:; BB(0x0045309a);
    /* 0045309a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045309b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045309d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045309e: ret 0xc */ FN_RET(0x00452fd0); r_esp += 16; return;
}

