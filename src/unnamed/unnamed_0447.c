#include "protos.h"

void f_004473a0(void) /* sub_4473A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004473a0);
    /* 004473a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004473a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004473a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004473a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004473a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004473b0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004473b7: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 004473bb: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004473c1: call 0x44cee0 */ r_esp -= 4; W32(r_esp, 0x4473c6u); f_0044cee0();
    /* 004473c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004473c8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004473cb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004473ce: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 004473d1: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 004473d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004473d7: je 0x447492 */ if (fZ) goto L_00447492;
L_004473dd:; BB(0x004473dd);
    /* 004473dd: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004473e3: call 0x44cee0 */ r_esp -= 4; W32(r_esp, 0x4473e8u); f_0044cee0();
    /* 004473e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004473eb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004473ef: jl 0x447400 */ if ((fS!=fO)) goto L_00447400;
L_004473f1:; BB(0x004473f1);
    /* 004473f1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004473f5: jg 0x447400 */ if ((!fZ&&fS==fO)) goto L_00447400;
L_004473f7:; BB(0x004473f7);
    /* 004473f7: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004473fe: jmp 0x447407 */ goto L_00447407;
L_00447400:; BB(0x00447400);
    /* 00447400: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00447407:; BB(0x00447407);
    /* 00447407: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0044740a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0044740d: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00447411: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447413: je 0x447492 */ if (fZ) goto L_00447492;
L_00447415:; BB(0x00447415);
    /* 00447415: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447419: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44741eu); f_005dcb00();
    /* 0044741e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447421: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00447424: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447428: je 0x447492 */ if (fZ) goto L_00447492;
L_0044742a:; BB(0x0044742a);
    /* 0044742a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044742d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x447432u); f_0063aac0();
    /* 00447432: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00447434: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00447437: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044743b: je 0x447459 */ if (fZ) goto L_00447459;
L_0044743d:; BB(0x0044743d);
    /* 0044743d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447440: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x447445u); f_0063aac0();
    /* 00447445: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00447447: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044744a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044744e: je 0x447459 */ if (fZ) goto L_00447459;
L_00447450:; BB(0x00447450);
    /* 00447450: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00447457: jmp 0x447460 */ goto L_00447460;
L_00447459:; BB(0x00447459);
    /* 00447459: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00447460:; BB(0x00447460);
    /* 00447460: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00447464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447466: je 0x447492 */ if (fZ) goto L_00447492;
L_00447468:; BB(0x00447468);
    /* 00447468: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044746b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044746c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00447472: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x447477u); f_0044cfc0();
    /* 00447477: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044747a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044747c: je 0x447492 */ if (fZ) goto L_00447492;
L_0044747e:; BB(0x0044747e);
    /* 0044747e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447480: push 0x310ab2 */ { u32 v = 0x310ab2u; r_esp -= 4; W32(r_esp, v); }
    /* 00447485: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044748b: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x447490u); f_005f2b20();
    /* 00447490: jmp 0x4474a2 */ goto L_004474a2;
L_00447492:; BB(0x00447492);
    /* 00447492: push 0x310ab2 */ { u32 v = 0x310ab2u; r_esp -= 4; W32(r_esp, v); }
    /* 00447497: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044749d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x4474a2u); f_005f2ba0();
L_004474a2:; BB(0x004474a2);
    /* 004474a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004474a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004474a5: ret  */ FN_RET(0x004473a0); r_esp += 4; return;
}

void f_004474b0(void) /* sub_4474B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004474b0);
    /* 004474b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004474b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004474b3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004474b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004474bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004474bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004474c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004474c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004474c2: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004474c5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004474cc: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004474d3: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004474da: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004474dd: call 0x4473a0 */ r_esp -= 4; W32(r_esp, 0x4474e2u); f_004473a0();
    /* 004474e2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004474e9: jmp 0x4474f4 */ goto L_004474f4;
L_004474eb:; BB(0x004474eb);
    /* 004474eb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004474ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004474f1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_004474f4:; BB(0x004474f4);
    /* 004474f4: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004474f8: jge 0x44775c */ if ((fS==fO)) goto L_0044775c;
L_004474fe:; BB(0x004474fe);
    /* 004474fe: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447501: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447504: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00447508: call 0x4480e0 */ r_esp -= 4; W32(r_esp, 0x44750du); f_004480e0();
    /* 0044750d: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447511: je 0x4475e1 */ if (fZ) goto L_004475e1;
L_00447517:; BB(0x00447517);
    /* 00447517: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044751a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044751b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x447520u); f_005dcb00();
    /* 00447520: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447523: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00447526: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00447529: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0044752f: mov byte ptr [ebp - 0x55], dl */ W8((u32)(r_ebp+0xffffffabu), (u8)r_edx);
    /* 00447532: movzx eax, byte ptr [ebp - 0x55] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 00447536: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447538: je 0x4475e1 */ if (fZ) goto L_004475e1;
L_0044753e:; BB(0x0044753e);
    /* 0044753e: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447544: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x447549u); f_005da7b0();
    /* 00447549: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044754c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044754e: je 0x4475e1 */ if (fZ) goto L_004475e1;
L_00447554:; BB(0x00447554);
    /* 00447554: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447558: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 0044755d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044755f: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447565: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0044756b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44756du); call_ind(t); }
    /* 0044756d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00447570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447572: jne 0x4475e1 */ if (!fZ) goto L_004475e1;
L_00447574:; BB(0x00447574);
    /* 00447574: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447577: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044757a: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0044757d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00447584: jmp 0x44758f */ goto L_0044758f;
L_00447586:; BB(0x00447586);
    /* 00447586: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00447589: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044758c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0044758f:; BB(0x0044758f);
    /* 0044758f: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447593: jge 0x4475e1 */ if ((fS==fO)) goto L_004475e1;
L_00447595:; BB(0x00447595);
    /* 00447595: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00447598: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044759b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044759e: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004475a2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004475a5: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004475ab: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004475b3: jne 0x4475df */ if (!fZ) goto L_004475df;
L_004475b5:; BB(0x004475b5);
    /* 004475b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004475b7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004475ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004475bb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004475be: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004475c1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004475c4: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004475c8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004475cb: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004475ce: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004475d1: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004475d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004475d7: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004475dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4475dfu); call_ind(t); }
L_004475df:; BB(0x004475df);
    /* 004475df: jmp 0x447586 */ goto L_00447586;
L_004475e1:; BB(0x004475e1);
    /* 004475e1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004475e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004475e5: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004475eb: call 0x44ce60 */ r_esp -= 4; W32(r_esp, 0x4475f0u); f_0044ce60();
    /* 004475f0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004475f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004475f5: je 0x44773c */ if (fZ) goto L_0044773c;
L_004475fb:; BB(0x004475fb);
    /* 004475fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004475fd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447601: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00447607: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44760cu); f_0044ce00();
    /* 0044760c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044760d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447610: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00447613: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00447619: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 00447620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447621: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x447626u); f_00462ba0();
    /* 00447626: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447629: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0044762c: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0044762f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447630: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00447633: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447634: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x447639u); f_00462f40();
    /* 00447639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044763c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044763e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447642: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447645: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x44764au); f_00447a70();
    /* 0044764a: mov esi, eax */ r_esi = r_eax;
    /* 0044764c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044764e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447652: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447655: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x44765au); f_00447a70();
    /* 0044765a: mov edi, eax */ r_edi = r_eax;
    /* 0044765c: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044765f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447661: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447664: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447665: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447668: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x44766du); f_00447a70();
    /* 0044766d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044766f: mov eax, edi */ r_eax = r_edi;
    /* 00447671: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00447672: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00447674: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00447676: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447678: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044767b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044767e: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00447682: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x447687u); f_005f5550();
    /* 00447687: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00447688: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044768a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0044768c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044768e: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00447691: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447695: jne 0x4476c0 */ if (!fZ) goto L_004476c0;
L_00447697:; BB(0x00447697);
    /* 00447697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447699: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044769c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044769d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004476a0: call 0x447af0 */ r_esp -= 4; W32(r_esp, 0x4476a5u); f_00447af0();
    /* 004476a5: mov esi, eax */ r_esi = r_eax;
    /* 004476a7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004476aa: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004476ad: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004476b1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004476b4: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x4476b9u); f_005f5590();
    /* 004476b9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004476bb: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 004476be: jmp 0x4476d4 */ goto L_004476d4;
L_004476c0:; BB(0x004476c0);
    /* 004476c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004476c2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004476c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004476c6: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004476c9: call 0x447af0 */ r_esp -= 4; W32(r_esp, 0x4476ceu); f_00447af0();
    /* 004476ce: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004476d1: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_004476d4:; BB(0x004476d4);
    /* 004476d4: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004476d7: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004476da: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004476dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004476de: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004476e1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004476e4: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004476e8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004476eb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004476ee: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 004476f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004476f4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004476fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4476fcu); call_ind(t); }
    /* 004476fc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004476ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447700: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00447703: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447704: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447707: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044770a: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0044770e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447711: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447714: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00447718: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044771a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0044771d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44771fu); call_ind(t); }
    /* 0044771f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447722: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447725: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 00447729: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044772c: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044772f: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 00447733: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00447735: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00447738: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44773au); call_ind(t); }
    /* 0044773a: jmp 0x447757 */ goto L_00447757;
L_0044773c:; BB(0x0044773c);
    /* 0044773c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044773f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447742: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00447746: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447749: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044774c: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00447750: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00447752: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00447755: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447757u); call_ind(t); }
L_00447757:; BB(0x00447757);
    /* 00447757: jmp 0x4474eb */ goto L_004474eb;
L_0044775c:; BB(0x0044775c);
    /* 0044775c: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447762: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x447767u); f_005da7b0();
    /* 00447767: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044776a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044776c: je 0x44778d */ if (fZ) goto L_0044778d;
L_0044776e:; BB(0x0044776e);
    /* 0044776e: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447775: jne 0x44778d */ if (!fZ) goto L_0044778d;
L_00447777:; BB(0x00447777);
    /* 00447777: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044777d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044777f: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447785: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0044778b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44778du); call_ind(t); }
L_0044778d:; BB(0x0044778d);
    /* 0044778d: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00447792: movzx ecx, word ptr [eax + 0xc0] */ r_ecx = (u32)R16((u32)(r_eax+0xc0u));
    /* 00447799: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044779b: je 0x4477c4 */ if (fZ) goto L_004477c4;
L_0044779d:; BB(0x0044779d);
    /* 0044779d: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 004477a3: mov al, byte ptr [edx + 0xd8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xd8u))) & 0xffu);
    /* 004477a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004477aa: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004477b0: mov dx, word ptr [ecx + 0xc0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xc0u))) & 0xffffu);
    /* 004477b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004477b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004477ba: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004477bd: call 0x447b60 */ r_esp -= 4; W32(r_esp, 0x4477c2u); f_00447b60();
    /* 004477c2: jmp 0x4477d9 */ goto L_004477d9;
L_004477c4:; BB(0x004477c4);
    /* 004477c4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004477c7: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004477ca: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004477cd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004477d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004477d2: mov ecx, eax */ r_ecx = r_eax;
    /* 004477d4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004477d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4477d9u); call_ind(t); }
L_004477d9:; BB(0x004477d9);
    /* 004477d9: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004477df: movzx edx, word ptr [ecx + 0xc2] */ r_edx = (u32)R16((u32)(r_ecx+0xc2u));
    /* 004477e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477e8: je 0x447810 */ if (fZ) goto L_00447810;
L_004477ea:; BB(0x004477ea);
    /* 004477ea: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 004477ef: mov cl, byte ptr [eax + 0xd9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xd9u))) & 0xffu);
    /* 004477f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004477f6: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 004477fc: mov ax, word ptr [edx + 0xc2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0xc2u))) & 0xffffu);
    /* 00447803: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447806: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447809: call 0x447b60 */ r_esp -= 4; W32(r_esp, 0x44780eu); f_00447b60();
    /* 0044780e: jmp 0x447823 */ goto L_00447823;
L_00447810:; BB(0x00447810);
    /* 00447810: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447813: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00447816: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00447819: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0044781c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044781e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00447821: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447823u); call_ind(t); }
L_00447823:; BB(0x00447823);
    /* 00447823: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00447824: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00447825: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447828: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044782a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44782fu); f_00686d72();
    /* 0044782f: mov esp, ebp */ r_esp = r_ebp;
    /* 00447831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447832: ret  */ FN_RET(0x004474b0); r_esp += 4; return;
}

void f_00447840(void) /* sub_447840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447840);
    /* 00447840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447841: mov ebp, esp */ r_ebp = r_esp;
    /* 00447843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447846: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00447849: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044784d: jne 0x447851 */ if (!fZ) goto L_00447851;
L_0044784f:; BB(0x0044784f);
    /* 0044784f: jmp 0x44789e */ goto L_0044789e;
L_00447851:; BB(0x00447851);
    /* 00447851: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447854: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447857: cmp dword ptr [ecx + eax*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044785c: je 0x44789e */ if (fZ) goto L_0044789e;
L_0044785e:; BB(0x0044785e);
    /* 0044785e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447860: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447863: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447864: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044786a: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0044786e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447871: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447874: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00447878: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044787a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00447880: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447882u); call_ind(t); }
    /* 00447882: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447885: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447886: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44788bu); f_005dcb00();
    /* 0044788b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044788e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00447891: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447894: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00447896: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447899: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0044789c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44789eu); call_ind(t); }
L_0044789e:; BB(0x0044789e);
    /* 0044789e: mov esp, ebp */ r_esp = r_ebp;
    /* 004478a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004478a1: ret 8 */ FN_RET(0x00447840); r_esp += 12; return;
}

void f_004478b0(void) /* sub_4478B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004478b0);
    /* 004478b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004478b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004478b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004478b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004478b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004478bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004478bf: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004478c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004478c6: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 004478ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004478cd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004478d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004478d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004478d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004478d5: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004478db: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x4478e0u); f_0044cd70();
    /* 004478e0: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004478e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004478e6: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004478ea: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 004478ed: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004478f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004478f2: je 0x4478f9 */ if (fZ) goto L_004478f9;
L_004478f4:; BB(0x004478f4);
    /* 004478f4: jmp 0x447980 */ goto L_00447980;
L_004478f9:; BB(0x004478f9);
    /* 004478f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004478fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004478fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447900: call 0x447990 */ r_esp -= 4; W32(r_esp, 0x447905u); f_00447990();
    /* 00447905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447906: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447909: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x44790eu); f_005eaf00();
    /* 0044790e: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00447912: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447913: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447916: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447917: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044791a: call 0x4479d0 */ r_esp -= 4; W32(r_esp, 0x44791fu); f_004479d0();
    /* 0044791f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447920: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447923: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00447925: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447928: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0044792e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447930u); call_ind(t); }
    /* 00447930: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00447933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447934: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447938: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044793b: call 0x447af0 */ r_esp -= 4; W32(r_esp, 0x447940u); f_00447af0();
    /* 00447940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447941: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447945: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447948: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447949: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044794c: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x447951u); f_00447a70();
    /* 00447951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447952: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447955: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00447957: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044795a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0044795d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44795fu); call_ind(t); }
    /* 0044795f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447962: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447969: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044796b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044796e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00447971: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447973u); call_ind(t); }
    /* 00447973: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447976: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447978: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044797b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044797e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447980u); call_ind(t); }
L_00447980:; BB(0x00447980);
    /* 00447980: mov esp, ebp */ r_esp = r_ebp;
    /* 00447982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447983: ret 8 */ FN_RET(0x004478b0); r_esp += 12; return;
}

void f_00447990(void) /* sub_447990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447990);
    /* 00447990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447991: mov ebp, esp */ r_ebp = r_esp;
    /* 00447993: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447996: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00447999: mov dword ptr [ebp - 0x10], 0x310e9a */ W32((u32)(r_ebp+0xfffffff0u), 0x310e9au);
    /* 004479a0: mov dword ptr [ebp - 0xc], 0x310e9b */ W32((u32)(r_ebp+0xfffffff4u), 0x310e9bu);
    /* 004479a7: mov dword ptr [ebp - 8], 0x310e99 */ W32((u32)(r_ebp+0xfffffff8u), 0x310e99u);
    /* 004479ae: mov dword ptr [ebp - 4], 0x310e9c */ W32((u32)(r_ebp+0xfffffffcu), 0x310e9cu);
    /* 004479b5: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004479b9: jne 0x4479c2 */ if (!fZ) goto L_004479c2;
L_004479bb:; BB(0x004479bb);
    /* 004479bb: mov eax, 0x310e9d */ r_eax = 0x310e9du;
    /* 004479c0: jmp 0x4479c9 */ goto L_004479c9;
L_004479c2:; BB(0x004479c2);
    /* 004479c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004479c5: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
L_004479c9:; BB(0x004479c9);
    /* 004479c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004479cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004479cc: ret 4 */ FN_RET(0x00447990); r_esp += 8; return;
}

void f_004479d0(void) /* sub_4479D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004479d0);
    /* 004479d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004479d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004479d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004479d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004479d7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004479da: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 004479e1: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004479e8: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 004479ef: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 004479f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004479fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447a01: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00447a07: call 0x44ce60 */ r_esp -= 4; W32(r_esp, 0x447a0cu); f_0044ce60();
    /* 00447a0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00447a0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447a11: jne 0x447a1a */ if (!fZ) goto L_00447a1a;
L_00447a13:; BB(0x00447a13);
    /* 00447a13: mov eax, 0x35 */ r_eax = 0x35u;
    /* 00447a18: jmp 0x447a67 */ goto L_00447a67;
L_00447a1a:; BB(0x00447a1a);
    /* 00447a1a: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00447a1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447a1f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x447a24u); f_00641280();
    /* 00447a24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447a27: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447a2a: jne 0x447a42 */ if (!fZ) goto L_00447a42;
L_00447a2c:; BB(0x00447a2c);
    /* 00447a2c: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00447a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447a31: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x447a36u); f_00641290();
    /* 00447a36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447a39: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00447a3d: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00447a40: jmp 0x447a67 */ goto L_00447a67;
L_00447a42:; BB(0x00447a42);
    /* 00447a42: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00447a46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447a47: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x447a4cu); f_00641290();
    /* 00447a4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447a4f: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00447a53: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00447a56: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00447a5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447a5b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x447a60u); f_00641280();
    /* 00447a60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447a63: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_00447a67:; BB(0x00447a67);
    /* 00447a67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00447a68: mov esp, ebp */ r_esp = r_ebp;
    /* 00447a6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447a6b: ret 8 */ FN_RET(0x004479d0); r_esp += 12; return;
}

void f_00447a70(void) /* sub_447A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447a70);
    /* 00447a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00447a73: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447a76: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00447a79: mov dword ptr [ebp - 0x24], 0x154 */ W32((u32)(r_ebp+0xffffffdcu), 0x154u);
    /* 00447a80: mov dword ptr [ebp - 0x20], 0xe2 */ W32((u32)(r_ebp+0xffffffe0u), 0xe2u);
    /* 00447a87: mov dword ptr [ebp - 0x1c], 0x1b5 */ W32((u32)(r_ebp+0xffffffe4u), 0x1b5u);
    /* 00447a8e: mov dword ptr [ebp - 0x18], 0x75 */ W32((u32)(r_ebp+0xffffffe8u), 0x75u);
    /* 00447a95: mov dword ptr [ebp - 0x10], 0x148 */ W32((u32)(r_ebp+0xfffffff0u), 0x148u);
    /* 00447a9c: mov dword ptr [ebp - 0xc], 0x9d */ W32((u32)(r_ebp+0xfffffff4u), 0x9du);
    /* 00447aa3: mov dword ptr [ebp - 8], 0x1de */ W32((u32)(r_ebp+0xfffffff8u), 0x1deu);
    /* 00447aaa: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00447ab1: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447ab5: jne 0x447ac8 */ if (!fZ) goto L_00447ac8;
L_00447ab7:; BB(0x00447ab7);
    /* 00447ab7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447aba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00447abc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00447abe: and eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00447ac1: add eax, 0x114 */ {  u32 a = r_eax; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447ac6: jmp 0x447adf */ goto L_00447adf;
L_00447ac8:; BB(0x00447ac8);
    /* 00447ac8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00447acb: imul eax, eax, 0x11 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x11u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00447ace: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447ad1: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 00447ad5: lea eax, [edx + eax - 4] */ r_eax = (u32)(r_edx+r_eax+0xfffffffcu);
    /* 00447ad9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00447adc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_00447adf:; BB(0x00447adf);
    /* 00447adf: mov esp, ebp */ r_esp = r_ebp;
    /* 00447ae1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447ae2: ret 8 */ FN_RET(0x00447a70); r_esp += 12; return;
}

void f_00447af0(void) /* sub_447AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447af0);
    /* 00447af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00447af3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447af6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00447af9: mov dword ptr [ebp - 0x24], 0xf5 */ W32((u32)(r_ebp+0xffffffdcu), 0xf5u);
    /* 00447b00: mov dword ptr [ebp - 0x20], 0xf5 */ W32((u32)(r_ebp+0xffffffe0u), 0xf5u);
    /* 00447b07: mov dword ptr [ebp - 0x1c], 0x9c */ W32((u32)(r_ebp+0xffffffe4u), 0x9cu);
    /* 00447b0e: mov dword ptr [ebp - 0x18], 0x9c */ W32((u32)(r_ebp+0xffffffe8u), 0x9cu);
    /* 00447b15: mov dword ptr [ebp - 0x14], 0x10e */ W32((u32)(r_ebp+0xffffffecu), 0x10eu);
    /* 00447b1c: mov dword ptr [ebp - 0x10], 0x10e */ W32((u32)(r_ebp+0xfffffff0u), 0x10eu);
    /* 00447b23: mov dword ptr [ebp - 0xc], 0x55 */ W32((u32)(r_ebp+0xfffffff4u), 0x55u);
    /* 00447b2a: mov dword ptr [ebp - 8], 0x55 */ W32((u32)(r_ebp+0xfffffff8u), 0x55u);
    /* 00447b31: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447b35: jne 0x447b3e */ if (!fZ) goto L_00447b3e;
L_00447b37:; BB(0x00447b37);
    /* 00447b37: mov eax, 0x4d */ r_eax = 0x4du;
    /* 00447b3c: jmp 0x447b4e */ goto L_00447b4e;
L_00447b3e:; BB(0x00447b3e);
    /* 00447b3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447b41: mov ecx, dword ptr [ebp + eax*4 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 00447b45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00447b48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447b4b: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00447b4e:; BB(0x00447b4e);
    /* 00447b4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b51: ret 8 */ FN_RET(0x00447af0); r_esp += 12; return;
}

void f_00447b60(void) /* sub_447B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447b60);
    /* 00447b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00447b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00447b67: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00447b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447b6d: je 0x447bb9 */ if (fZ) goto L_00447bb9;
L_00447b6f:; BB(0x00447b6f);
    /* 00447b6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447b71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447b74: call 0x447990 */ r_esp -= 4; W32(r_esp, 0x447b79u); f_00447990();
    /* 00447b79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447b7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447b7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447b80: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00447b84: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x447b89u); f_005eaf00();
    /* 00447b89: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00447b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447b8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447b90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447b93: call 0x4479d0 */ r_esp -= 4; W32(r_esp, 0x447b98u); f_004479d0();
    /* 00447b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447b99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447b9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447b9f: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00447ba3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447ba6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447ba9: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00447bad: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00447baf: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00447bb5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x447bb7u); call_ind(t); }
    /* 00447bb7: jmp 0x447bef */ goto L_00447bef;
L_00447bb9:; BB(0x00447bb9);
    /* 00447bb9: push 0x310e9d */ { u32 v = 0x310e9du; r_esp -= 4; W32(r_esp, v); }
    /* 00447bbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447bc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447bc4: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00447bc8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x447bcdu); f_005eaf00();
    /* 00447bcd: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00447bcf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447bd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447bd5: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00447bd9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447bdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447bdf: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00447be3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00447be5: mov ecx, edx */ r_ecx = r_edx;
    /* 00447be7: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00447bed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x447befu); call_ind(t); }
L_00447bef:; BB(0x00447bef);
    /* 00447bef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447bf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447bf8: call 0x447af0 */ r_esp -= 4; W32(r_esp, 0x447bfdu); f_00447af0();
    /* 00447bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447bfe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447c01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447c02: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447c04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c07: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x447c0cu); f_00447a70();
    /* 00447c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447c0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447c10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c13: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00447c17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00447c1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c1d: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00447c21: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00447c23: mov ecx, edx */ r_ecx = r_edx;
    /* 00447c25: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00447c28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x447c2au); call_ind(t); }
    /* 00447c2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447c2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447c31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447c34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c37: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00447c3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447c3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c41: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00447c45: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00447c47: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00447c4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x447c4cu); call_ind(t); }
    /* 00447c4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447c4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c52: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00447c56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00447c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447c5c: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00447c60: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00447c62: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00447c65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447c67u); call_ind(t); }
    /* 00447c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00447c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447c6a: ret 0xc */ FN_RET(0x00447b60); r_esp += 16; return;
}

void f_00447c70(void) /* sub_447C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447c70);
    /* 00447c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00447c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447c75: push 0x69ec44 */ { u32 v = 0x69ec44u; r_esp -= 4; W32(r_esp, v); }
    /* 00447c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00447c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447c81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447c84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00447c89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447c8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00447c8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00447c95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00447c98: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447c9b: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x447ca0u); f_004474b0();
    /* 00447ca0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447ca3: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447ca7: jne 0x447d15 */ if (!fZ) goto L_00447d15;
L_00447ca9:; BB(0x00447ca9);
    /* 00447ca9: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00447cae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x447cb3u); f_00686d82();
    /* 00447cb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447cb6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00447cb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00447cc0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447cc4: je 0x447cd3 */ if (fZ) goto L_00447cd3;
L_00447cc6:; BB(0x00447cc6);
    /* 00447cc6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cc9: call 0x4490c0 */ r_esp -= 4; W32(r_esp, 0x447cceu); f_004490c0();
    /* 00447cce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447cd1: jmp 0x447cda */ goto L_00447cda;
L_00447cd3:; BB(0x00447cd3);
    /* 00447cd3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00447cda:; BB(0x00447cda);
    /* 00447cda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447cdd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00447ce0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447ce7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447cea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447ced: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00447cf0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447cf3: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00447cf6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447cf9: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00447cfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00447cfe: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00447d01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447d03u); call_ind(t); }
    /* 00447d03: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00447d08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d0a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447d0d: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00447d10: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x447d15u); f_005f7340();
L_00447d15:; BB(0x00447d15);
    /* 00447d15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447d18: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00447d1b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x447d20u); f_005f85d0();
    /* 00447d20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d22: push 0x310ab3 */ { u32 v = 0x310ab3u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d27: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00447d2d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x447d32u); f_005f2b20();
    /* 00447d32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d34: push 0x310ab4 */ { u32 v = 0x310ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d39: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00447d3f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x447d44u); f_005f2b20();
    /* 00447d44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447d47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447d4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447d4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00447d51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447d52: ret  */ FN_RET(0x00447c70); r_esp += 4; return;
}

void f_00447d60(void) /* sub_447D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447d60);
    /* 00447d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00447d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00447d67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447d6a: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447d6e: je 0x447d85 */ if (fZ) goto L_00447d85;
L_00447d70:; BB(0x00447d70);
    /* 00447d70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447d73: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00447d76: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x447d7bu); f_005f8990();
    /* 00447d7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447d7e: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
L_00447d85:; BB(0x00447d85);
    /* 00447d85: push 0x310ab3 */ { u32 v = 0x310ab3u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d8a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00447d90: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x447d95u); f_005f2ba0();
    /* 00447d95: push 0x310ab4 */ { u32 v = 0x310ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00447d9a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00447da0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x447da5u); f_005f2ba0();
    /* 00447da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00447da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447da8: ret  */ FN_RET(0x00447d60); r_esp += 4; return;
}

void f_00447db0(void) /* sub_447DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447db0);
    /* 00447db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00447db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00447db7: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447dbd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x447dc2u); f_005da7b0();
    /* 00447dc2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00447dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447dc7: je 0x447de8 */ if (fZ) goto L_00447de8;
L_00447dc9:; BB(0x00447dc9);
    /* 00447dc9: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447dd1: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447dd7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 00447ddd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447ddfu); call_ind(t); }
    /* 00447ddf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00447de2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447de4: jne 0x447de8 */ if (!fZ) goto L_00447de8;
L_00447de6:; BB(0x00447de6);
    /* 00447de6: jmp 0x447e25 */ goto L_00447e25;
L_00447de8:; BB(0x00447de8);
    /* 00447de8: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00447dee: call 0x44c830 */ r_esp -= 4; W32(r_esp, 0x447df3u); f_0044c830();
    /* 00447df3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00447df6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447df8: jne 0x447e13 */ if (!fZ) goto L_00447e13;
L_00447dfa:; BB(0x00447dfa);
    /* 00447dfa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00447e00: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x447e05u); f_005df650();
    /* 00447e05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447e06: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 00447e0c: call 0x449710 */ r_esp -= 4; W32(r_esp, 0x447e11u); f_00449710();
    /* 00447e11: jmp 0x447e25 */ goto L_00447e25;
L_00447e13:; BB(0x00447e13);
    /* 00447e13: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00447e18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447e1a: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00447e20: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x447e25u); f_005db8c0();
L_00447e25:; BB(0x00447e25);
    /* 00447e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00447e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447e28: ret  */ FN_RET(0x00447db0); r_esp += 4; return;
}

void f_00447f70(void) /* sub_447F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447f70);
    /* 00447f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00447f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447f75: push 0x69ec98 */ { u32 v = 0x69ec98u; r_esp -= 4; W32(r_esp, v); }
    /* 00447f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00447f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447f81: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447f84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00447f89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447f8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00447f8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00447f95: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00447f98: mov dword ptr [ebp - 0x30], 0x134 */ W32((u32)(r_ebp+0xffffffd0u), 0x134u);
    /* 00447f9f: mov dword ptr [ebp - 0x2c], 0x11b */ W32((u32)(r_ebp+0xffffffd4u), 0x11bu);
    /* 00447fa6: mov dword ptr [ebp - 0x28], 0x10a */ W32((u32)(r_ebp+0xffffffd8u), 0x10au);
    /* 00447fad: mov dword ptr [ebp - 0x24], 0x11e */ W32((u32)(r_ebp+0xffffffdcu), 0x11eu);
    /* 00447fb4: mov dword ptr [ebp - 0x20], 0x19e */ W32((u32)(r_ebp+0xffffffe0u), 0x19eu);
    /* 00447fbb: mov dword ptr [ebp - 0x1c], 0xf2 */ W32((u32)(r_ebp+0xffffffe4u), 0xf2u);
    /* 00447fc2: mov dword ptr [ebp - 0x18], 0x84 */ W32((u32)(r_ebp+0xffffffe8u), 0x84u);
    /* 00447fc9: mov dword ptr [ebp - 0x14], 0xe7 */ W32((u32)(r_ebp+0xffffffecu), 0xe7u);
    /* 00447fd0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00447fd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00447fd6: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00447fd9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00447fe0: jmp 0x447feb */ goto L_00447feb;
L_00447fe2:; BB(0x00447fe2);
    /* 00447fe2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447fe5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447fe8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00447feb:; BB(0x00447feb);
    /* 00447feb: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447fef: jge 0x448059 */ if ((fS==fO)) goto L_00448059;
L_00447ff1:; BB(0x00447ff1);
    /* 00447ff1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00447ff6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x447ffbu); f_00686d82();
    /* 00447ffb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447ffe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00448001: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448008: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044800c: je 0x44801b */ if (fZ) goto L_0044801b;
L_0044800e:; BB(0x0044800e);
    /* 0044800e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00448011: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x448016u); f_005eaaf0();
    /* 00448016: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00448019: jmp 0x448022 */ goto L_00448022;
L_0044801b:; BB(0x0044801b);
    /* 0044801b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00448022:; BB(0x00448022);
    /* 00448022: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00448025: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00448028: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044802f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448032: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00448035: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00448038: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 0044803c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044803f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00448042: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00448046: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448049: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044804c: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00448050: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00448052: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00448055: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x448057u); call_ind(t); }
    /* 00448057: jmp 0x447fe2 */ goto L_00447fe2;
L_00448059:; BB(0x00448059);
    /* 00448059: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0044805e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x448063u); f_00686d82();
    /* 00448063: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448066: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00448069: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448070: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448074: je 0x448083 */ if (fZ) goto L_00448083;
L_00448076:; BB(0x00448076);
    /* 00448076: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00448079: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x44807eu); f_005eaaf0();
    /* 0044807e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00448081: jmp 0x44808a */ goto L_0044808a;
L_00448083:; BB(0x00448083);
    /* 00448083: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0044808a:; BB(0x0044808a);
    /* 0044808a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044808d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00448090: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448097: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044809a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044809d: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004480a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004480a2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004480a4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004480a7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004480aa: mov edx, dword ptr [ebp + ecx*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 004480ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004480af: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004480b2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004480b5: mov edx, dword ptr [ebp + ecx*8 - 0x30] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd0u));
    /* 004480b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004480ba: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 004480bf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004480c2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004480c5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4480cau); f_005eae80();
    /* 004480ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004480cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004480d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004480d5: mov esp, ebp */ r_esp = r_ebp;
    /* 004480d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004480d8: ret 4 */ FN_RET(0x00447f70); r_esp += 8; return;
}

