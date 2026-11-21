#include "protos.h"

void f_00409060(void) /* sub_409060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409060);
    /* 00409060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409061: mov ebp, esp */ r_ebp = r_esp;
    /* 00409063: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409066: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00409069: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00409070: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409074: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00409077: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x40907cu); f_004094b0();
    /* 0040907c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040907f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00409086: jmp 0x409091 */ goto L_00409091;
L_00409088:; BB(0x00409088);
    /* 00409088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040908b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040908e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00409091:; BB(0x00409091);
    /* 00409091: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409094: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409097: jge 0x4090e5 */ if ((fS==fO)) goto L_004090e5;
L_00409099:; BB(0x00409099);
    /* 00409099: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040909c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040909d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004090a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004090a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004090a4: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x4090a9u); f_004093d0();
    /* 004090a9: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004090ad: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004090b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004090b2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4090b7u); f_00641280();
    /* 004090b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004090ba: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004090bd: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004090c1: jl 0x4090d4 */ if ((fS!=fO)) goto L_004090d4;
L_004090c3:; BB(0x004090c3);
    /* 004090c3: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004090c7: jg 0x4090d4 */ if ((!fZ&&fS==fO)) goto L_004090d4;
L_004090c9:; BB(0x004090c9);
    /* 004090c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004090cc: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004090cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004090d2: jmp 0x4090e3 */ goto L_004090e3;
L_004090d4:; BB(0x004090d4);
    /* 004090d4: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004090d8: jne 0x4090e3 */ if (!fZ) goto L_004090e3;
L_004090da:; BB(0x004090da);
    /* 004090da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004090dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004090e0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_004090e3:; BB(0x004090e3);
    /* 004090e3: jmp 0x409088 */ goto L_00409088;
L_004090e5:; BB(0x004090e5);
    /* 004090e5: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004090e9: jl 0x4090f6 */ if ((fS!=fO)) goto L_004090f6;
L_004090eb:; BB(0x004090eb);
    /* 004090eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004090ee: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004090f1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004090f4: jmp 0x4090e5 */ goto L_004090e5;
L_004090f6:; BB(0x004090f6);
    /* 004090f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004090f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004090fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004090fc: ret 4 */ FN_RET(0x00409060); r_esp += 8; return;
}

void f_00409140(void) /* sub_409140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409140);
    /* 00409140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409141: mov ebp, esp */ r_ebp = r_esp;
    /* 00409143: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409146: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00409149: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00409150: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00409157: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040915a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040915b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040915e: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x409163u); f_004094b0();
    /* 00409163: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409166: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040916a: je 0x409170 */ if (fZ) goto L_00409170;
L_0040916c:; BB(0x0040916c);
    /* 0040916c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040916e: jmp 0x40919e */ goto L_0040919e;
L_00409170:; BB(0x00409170);
    /* 00409170: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409177: call 0x409060 */ r_esp -= 4; W32(r_esp, 0x40917cu); f_00409060();
    /* 0040917c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040917f: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409183: je 0x409194 */ if (fZ) goto L_00409194;
L_00409185:; BB(0x00409185);
    /* 00409185: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409189: je 0x409194 */ if (fZ) goto L_00409194;
L_0040918b:; BB(0x0040918b);
    /* 0040918b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00409192: jmp 0x40919b */ goto L_0040919b;
L_00409194:; BB(0x00409194);
    /* 00409194: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0040919b:; BB(0x0040919b);
    /* 0040919b: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
L_0040919e:; BB(0x0040919e);
    /* 0040919e: mov esp, ebp */ r_esp = r_ebp;
    /* 004091a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004091a1: ret 4 */ FN_RET(0x00409140); r_esp += 8; return;
}

void f_004091f0(void) /* sub_4091F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004091f0);
    /* 004091f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004091f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004091f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004091f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004091f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004091fc: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x409201u); f_004091d0();
    /* 00409201: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00409204: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409207: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x40920cu); f_004091b0();
    /* 0040920c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040920f: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409213: jl 0x409219 */ if ((fS!=fO)) goto L_00409219;
L_00409215:; BB(0x00409215);
    /* 00409215: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409217: jmp 0x409225 */ goto L_00409225;
L_00409219:; BB(0x00409219);
    /* 00409219: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040921d: jg 0x409223 */ if ((!fZ&&fS==fO)) goto L_00409223;
L_0040921f:; BB(0x0040921f);
    /* 0040921f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00409221: jmp 0x409225 */ goto L_00409225;
L_00409223:; BB(0x00409223);
    /* 00409223: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00409225:; BB(0x00409225);
    /* 00409225: mov esp, ebp */ r_esp = r_ebp;
    /* 00409227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409228: ret  */ FN_RET(0x004091f0); r_esp += 4; return;
}

void f_00409230(void) /* sub_409230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409230);
    /* 00409230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409231: mov ebp, esp */ r_ebp = r_esp;
    /* 00409233: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409236: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409239: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040923c: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x409241u); f_004091d0();
    /* 00409241: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00409244: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409247: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x40924cu); f_004091b0();
    /* 0040924c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040924f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409251: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409254: call 0x408fd0 */ r_esp -= 4; W32(r_esp, 0x409259u); f_00408fd0();
    /* 00409259: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040925c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040925f: call 0x409120 */ r_esp -= 4; W32(r_esp, 0x409264u); f_00409120();
    /* 00409264: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00409267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409269: je 0x409272 */ if (fZ) goto L_00409272;
L_0040926b:; BB(0x0040926b);
    /* 0040926b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040926d: jmp 0x409332 */ goto L_00409332;
L_00409272:; BB(0x00409272);
    /* 00409272: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409276: jl 0x40927f */ if ((fS!=fO)) goto L_0040927f;
L_00409278:; BB(0x00409278);
    /* 00409278: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040927a: jmp 0x409332 */ goto L_00409332;
L_0040927f:; BB(0x0040927f);
    /* 0040927f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00409281: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00409283: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409286: call 0x409360 */ r_esp -= 4; W32(r_esp, 0x40928bu); f_00409360();
    /* 0040928b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040928e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409290: je 0x4092a0 */ if (fZ) goto L_004092a0;
L_00409292:; BB(0x00409292);
    /* 00409292: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00409294: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409298: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0040929b: jmp 0x409332 */ goto L_00409332;
L_004092a0:; BB(0x004092a0);
    /* 004092a0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004092a3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004092a6: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004092aa: ja 0x409330 */ if ((!fC&&!fZ)) goto L_00409330;
L_004092b0:; BB(0x004092b0);
    /* 004092b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004092b3: jmp dword ptr [eax*4 + 0x409338] */ { u32 t = R32((u32)(r_eax*4+0x409338u)); switch (t) { case 0x4092bau: goto L_004092ba; case 0x4092beu: goto L_004092be; case 0x4092c9u: goto L_004092c9; case 0x4092eau: goto L_004092ea; case 0x40930bu: goto L_0040930b; case 0x40932cu: goto L_0040932c; default: UNSUP(0x004092b3, "jump table entry is not a known target"); } }
L_004092ba:; BB(0x004092ba);
    /* 004092ba: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004092bc: jmp 0x409332 */ goto L_00409332;
L_004092be:; BB(0x004092be);
    /* 004092be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004092c0: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004092c4: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004092c7: jmp 0x409332 */ goto L_00409332;
L_004092c9:; BB(0x004092c9);
    /* 004092c9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004092cd: jl 0x4092de */ if ((fS!=fO)) goto L_004092de;
L_004092cf:; BB(0x004092cf);
    /* 004092cf: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004092d3: jg 0x4092de */ if ((!fZ&&fS==fO)) goto L_004092de;
L_004092d5:; BB(0x004092d5);
    /* 004092d5: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 004092dc: jmp 0x4092e5 */ goto L_004092e5;
L_004092de:; BB(0x004092de);
    /* 004092de: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_004092e5:; BB(0x004092e5);
    /* 004092e5: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 004092e8: jmp 0x409332 */ goto L_00409332;
L_004092ea:; BB(0x004092ea);
    /* 004092ea: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004092ee: jl 0x4092ff */ if ((fS!=fO)) goto L_004092ff;
L_004092f0:; BB(0x004092f0);
    /* 004092f0: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004092f4: jg 0x4092ff */ if ((!fZ&&fS==fO)) goto L_004092ff;
L_004092f6:; BB(0x004092f6);
    /* 004092f6: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004092fd: jmp 0x409306 */ goto L_00409306;
L_004092ff:; BB(0x004092ff);
    /* 004092ff: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00409306:; BB(0x00409306);
    /* 00409306: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 00409309: jmp 0x409332 */ goto L_00409332;
L_0040930b:; BB(0x0040930b);
    /* 0040930b: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040930f: je 0x409320 */ if (fZ) goto L_00409320;
L_00409311:; BB(0x00409311);
    /* 00409311: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409315: je 0x409320 */ if (fZ) goto L_00409320;
L_00409317:; BB(0x00409317);
    /* 00409317: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0040931e: jmp 0x409327 */ goto L_00409327;
L_00409320:; BB(0x00409320);
    /* 00409320: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00409327:; BB(0x00409327);
    /* 00409327: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0040932a: jmp 0x409332 */ goto L_00409332;
L_0040932c:; BB(0x0040932c);
    /* 0040932c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040932e: jmp 0x409332 */ goto L_00409332;
L_00409330:; BB(0x00409330);
    /* 00409330: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00409332:; BB(0x00409332);
    /* 00409332: mov esp, ebp */ r_esp = r_ebp;
    /* 00409334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409335: ret  */ FN_RET(0x00409230); r_esp += 4; return;
}

void f_00409360(void) /* sub_409360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409360);
    /* 00409360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409361: mov ebp, esp */ r_ebp = r_esp;
    /* 00409363: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409366: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00409369: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040936c: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x409371u); f_004091b0();
    /* 00409371: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409374: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409377: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040937a: jg 0x40938d */ if ((!fZ&&fS==fO)) goto L_0040938d;
L_0040937c:; BB(0x0040937c);
    /* 0040937c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040937f: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409382: jg 0x40938d */ if ((!fZ&&fS==fO)) goto L_0040938d;
L_00409384:; BB(0x00409384);
    /* 00409384: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0040938b: jmp 0x409394 */ goto L_00409394;
L_0040938d:; BB(0x0040938d);
    /* 0040938d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00409394:; BB(0x00409394);
    /* 00409394: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00409397: mov esp, ebp */ r_esp = r_ebp;
    /* 00409399: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040939a: ret 8 */ FN_RET(0x00409360); r_esp += 12; return;
}

void f_004093a0(void) /* sub_4093A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004093a0);
    /* 004093a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004093a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004093a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004093a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004093a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004093aa: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004093ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004093b0: lea edx, [ecx + eax + 0x94] */ r_edx = (u32)(r_ecx+r_eax+0x94u);
    /* 004093b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004093ba: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004093be: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004093c2: mov esp, ebp */ r_esp = r_ebp;
    /* 004093c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004093c5: ret 0xc */ FN_RET(0x004093a0); r_esp += 16; return;
}

void f_004093d0(void) /* sub_4093D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004093d0);
    /* 004093d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004093d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004093d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004093d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004093d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004093da: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004093dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004093e0: lea edx, [ecx + eax + 0x94] */ r_edx = (u32)(r_ecx+r_eax+0x94u);
    /* 004093e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004093ea: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004093ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004093f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004093f1: ret 8 */ FN_RET(0x004093d0); r_esp += 12; return;
}

void f_00409400(void) /* sub_409400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409400);
    /* 00409400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409401: mov ebp, esp */ r_ebp = r_esp;
    /* 00409403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409406: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00409409: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00409410: jmp 0x40941b */ goto L_0040941b;
L_00409412:; BB(0x00409412);
    /* 00409412: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409415: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409418: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040941b:; BB(0x0040941b);
    /* 0040941b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040941f: jge 0x40943c */ if ((fS==fO)) goto L_0040943c;
L_00409421:; BB(0x00409421);
    /* 00409421: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409424: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409425: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409428: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409429: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040942c: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x409431u); f_004093d0();
    /* 00409431: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00409434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409436: jne 0x40943a */ if (!fZ) goto L_0040943a;
L_00409438:; BB(0x00409438);
    /* 00409438: jmp 0x40943c */ goto L_0040943c;
L_0040943a:; BB(0x0040943a);
    /* 0040943a: jmp 0x409412 */ goto L_00409412;
L_0040943c:; BB(0x0040943c);
    /* 0040943c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00409440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409441: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409444: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409445: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409449: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040944c: call 0x4093a0 */ r_esp -= 4; W32(r_esp, 0x409451u); f_004093a0();
    /* 00409451: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409454: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0040945a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040945d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040945e: fld1  */ FPUSH(1.0);
    /* 00409460: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00409463: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00409465: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00409467: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409469: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040946b: push 0x18a8c */ { u32 v = 0x18a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00409470: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00409476: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00409478: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040947e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00409484: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x409486u); call_ind(t); }
    /* 00409486: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409489: mov edx, dword ptr [ecx + 0x10d4] */ r_edx = R32((u32)(r_ecx+0x10d4u));
    /* 0040948f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00409492: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409495: mov dword ptr [eax + 0x10d4], edx */ W32((u32)(r_eax+0x10d4u), r_edx);
    /* 0040949b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040949d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040949e: ret 8 */ FN_RET(0x00409400); r_esp += 12; return;
}

void f_004094b0(void) /* sub_4094B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004094b0);
    /* 004094b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004094b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004094b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004094b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004094b9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004094c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004094c7: jmp 0x4094d2 */ goto L_004094d2;
L_004094c9:; BB(0x004094c9);
    /* 004094c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004094cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004094cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004094d2:; BB(0x004094d2);
    /* 004094d2: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004094d6: jge 0x4094fa */ if ((fS==fO)) goto L_004094fa;
L_004094d8:; BB(0x004094d8);
    /* 004094d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004094db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004094dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004094df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004094e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004094e3: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x4094e8u); f_004093d0();
    /* 004094e8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004094eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004094ed: je 0x4094f8 */ if (fZ) goto L_004094f8;
L_004094ef:; BB(0x004094ef);
    /* 004094ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004094f2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004094f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004094f8:; BB(0x004094f8);
    /* 004094f8: jmp 0x4094c9 */ goto L_004094c9;
L_004094fa:; BB(0x004094fa);
    /* 004094fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004094fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004094ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409500: ret 4 */ FN_RET(0x004094b0); r_esp += 8; return;
}

void f_00409520(void) /* sub_409520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409520);
    /* 00409520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409521: mov ebp, esp */ r_ebp = r_esp;
    /* 00409523: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409526: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00409529: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00409530: jmp 0x40953b */ goto L_0040953b;
L_00409532:; BB(0x00409532);
    /* 00409532: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409535: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409538: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040953b:; BB(0x0040953b);
    /* 0040953b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040953f: jge 0x4095ad */ if ((fS==fO)) goto L_004095ad;
L_00409541:; BB(0x00409541);
    /* 00409541: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409544: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409545: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40954au); f_005dcb00();
    /* 0040954a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040954d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00409550: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409554: je 0x4095ab */ if (fZ) goto L_004095ab;
L_00409556:; BB(0x00409556);
    /* 00409556: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409559: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40955eu); f_0063aac0();
    /* 0040955e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00409560: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00409563: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409567: je 0x409585 */ if (fZ) goto L_00409585;
L_00409569:; BB(0x00409569);
    /* 00409569: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040956c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x409571u); f_0063aac0();
    /* 00409571: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00409573: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409576: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040957a: je 0x409585 */ if (fZ) goto L_00409585;
L_0040957c:; BB(0x0040957c);
    /* 0040957c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00409583: jmp 0x40958c */ goto L_0040958c;
L_00409585:; BB(0x00409585);
    /* 00409585: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0040958c:; BB(0x0040958c);
    /* 0040958c: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 00409590: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409592: je 0x4095ab */ if (fZ) goto L_004095ab;
L_00409594:; BB(0x00409594);
    /* 00409594: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409597: imul edx, edx, 0x338 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x338u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040959d: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 004095a2: lea eax, [eax + edx + 0xbc] */ r_eax = (u32)(r_eax+r_edx+0xbcu);
    /* 004095a9: jmp 0x4095b7 */ goto L_004095b7;
L_004095ab:; BB(0x004095ab);
    /* 004095ab: jmp 0x409532 */ goto L_00409532;
L_004095ad:; BB(0x004095ad);
    /* 004095ad: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 004095b2: add eax, 0xbc */ {  u32 a = r_eax; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004095b7:; BB(0x004095b7);
    /* 004095b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004095b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004095ba: ret  */ FN_RET(0x00409520); r_esp += 4; return;
}

void f_004095c0(void) /* sub_4095C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004095c0);
    /* 004095c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004095c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004095c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004095c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004095c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004095cc: call 0x409520 */ r_esp -= 4; W32(r_esp, 0x4095d1u); f_00409520();
    /* 004095d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004095d4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004095d8: jl 0x4095e0 */ if ((fS!=fO)) goto L_004095e0;
L_004095da:; BB(0x004095da);
    /* 004095da: cmp dword ptr [ebp + 8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004095de: jl 0x4095e4 */ if ((fS!=fO)) goto L_004095e4;
L_004095e0:; BB(0x004095e0);
    /* 004095e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004095e2: jmp 0x409622 */ goto L_00409622;
L_004095e4:; BB(0x004095e4);
    /* 004095e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004095eb: jmp 0x4095f6 */ goto L_004095f6;
L_004095ed:; BB(0x004095ed);
    /* 004095ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004095f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004095f3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004095f6:; BB(0x004095f6);
    /* 004095f6: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004095fa: jge 0x409620 */ if ((fS==fO)) goto L_00409620;
L_004095fc:; BB(0x004095fc);
    /* 004095fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004095ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409605: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00409609: and ecx, dword ptr [eax*4 + 0x707208] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*4+0x707208u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00409610: je 0x40961e */ if (fZ) goto L_0040961e;
L_00409612:; BB(0x00409612);
    /* 00409612: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409615: mov eax, dword ptr [edx*4 + 0x707208] */ r_eax = R32((u32)(r_edx*4+0x707208u));
    /* 0040961c: jmp 0x409622 */ goto L_00409622;
L_0040961e:; BB(0x0040961e);
    /* 0040961e: jmp 0x4095ed */ goto L_004095ed;
L_00409620:; BB(0x00409620);
    /* 00409620: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00409622:; BB(0x00409622);
    /* 00409622: mov esp, ebp */ r_esp = r_ebp;
    /* 00409624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409625: ret 4 */ FN_RET(0x004095c0); r_esp += 8; return;
}

void f_00409630(void) /* sub_409630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409630);
    /* 00409630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409631: mov ebp, esp */ r_ebp = r_esp;
    /* 00409633: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409636: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409639: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040963c: call 0x408790 */ r_esp -= 4; W32(r_esp, 0x409641u); f_00408790();
    /* 00409641: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00409644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409646: jne 0x40964a */ if (!fZ) goto L_0040964a;
L_00409648:; BB(0x00409648);
    /* 00409648: jmp 0x4096b6 */ goto L_004096b6;
L_0040964a:; BB(0x0040964a);
    /* 0040964a: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00409651: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409654: call 0x4087f0 */ r_esp -= 4; W32(r_esp, 0x409659u); f_004087f0();
    /* 00409659: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040965c: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 00409660: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00409664: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040966a: call 0x4096c0 */ r_esp -= 4; W32(r_esp, 0x40966fu); f_004096c0();
    /* 0040966f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00409672: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409674: je 0x40967f */ if (fZ) goto L_0040967f;
L_00409676:; BB(0x00409676);
    /* 00409676: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
    /* 0040967d: jmp 0x409698 */ goto L_00409698;
L_0040967f:; BB(0x0040967f);
    /* 0040967f: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409685: call 0x409760 */ r_esp -= 4; W32(r_esp, 0x40968au); f_00409760();
    /* 0040968a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040968d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040968f: je 0x409698 */ if (fZ) goto L_00409698;
L_00409691:; BB(0x00409691);
    /* 00409691: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
L_00409698:; BB(0x00409698);
    /* 00409698: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040969c: je 0x4096b6 */ if (fZ) goto L_004096b6;
L_0040969e:; BB(0x0040969e);
    /* 0040969e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004096a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004096a4: mov dword ptr [eax + 0x10e0], ecx */ W32((u32)(r_eax+0x10e0u), r_ecx);
    /* 004096aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004096ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004096b0: mov dword ptr [edx + 0x10e4], eax */ W32((u32)(r_edx+0x10e4u), r_eax);
L_004096b6:; BB(0x004096b6);
    /* 004096b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004096b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004096b9: ret  */ FN_RET(0x00409630); r_esp += 4; return;
}

void f_004096c0(void) /* sub_4096C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004096c0);
    /* 004096c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004096c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004096c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004096c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004096c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004096cc: call 0x409520 */ r_esp -= 4; W32(r_esp, 0x4096d1u); f_00409520();
    /* 004096d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004096d4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004096d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004096da: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004096dd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004096e0: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 004096e4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004096e8: jge 0x4096ee */ if ((fS==fO)) goto L_004096ee;
L_004096ea:; BB(0x004096ea);
    /* 004096ea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004096ec: jmp 0x409753 */ goto L_00409753;
L_004096ee:; BB(0x004096ee);
    /* 004096ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004096f1: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004096f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004096f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004096f8: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x4096fdu); f_004095c0();
    /* 004096fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00409700: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409703: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00409706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409707: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040970a: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x40970fu); f_004095c0();
    /* 0040970f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409715: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409716: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409719: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x40971eu); f_004095c0();
    /* 0040971e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00409721: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00409724: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00409727: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0040972e: jmp 0x409739 */ goto L_00409739;
L_00409730:; BB(0x00409730);
    /* 00409730: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409733: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00409736: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00409739:; BB(0x00409739);
    /* 00409739: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040973d: jge 0x409751 */ if ((fS==fO)) goto L_00409751;
L_0040973f:; BB(0x0040973f);
    /* 0040973f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409742: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00409746: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409749: je 0x40974f */ if (fZ) goto L_0040974f;
L_0040974b:; BB(0x0040974b);
    /* 0040974b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040974d: jmp 0x409753 */ goto L_00409753;
L_0040974f:; BB(0x0040974f);
    /* 0040974f: jmp 0x409730 */ goto L_00409730;
L_00409751:; BB(0x00409751);
    /* 00409751: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00409753:; BB(0x00409753);
    /* 00409753: mov esp, ebp */ r_esp = r_ebp;
    /* 00409755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409756: ret  */ FN_RET(0x004096c0); r_esp += 4; return;
}

void f_00409760(void) /* sub_409760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409760);
    /* 00409760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409761: mov ebp, esp */ r_ebp = r_esp;
    /* 00409763: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409766: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00409769: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040976c: call 0x409520 */ r_esp -= 4; W32(r_esp, 0x409771u); f_00409520();
    /* 00409771: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00409774: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409777: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040977a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040977d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409780: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409784: jge 0x40978d */ if ((fS==fO)) goto L_0040978d;
L_00409786:; BB(0x00409786);
    /* 00409786: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409788: jmp 0x409845 */ goto L_00409845;
L_0040978d:; BB(0x0040978d);
    /* 0040978d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409790: call 0x4096c0 */ r_esp -= 4; W32(r_esp, 0x409795u); f_004096c0();
    /* 00409795: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00409798: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040979a: je 0x4097a3 */ if (fZ) goto L_004097a3;
L_0040979c:; BB(0x0040979c);
    /* 0040979c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040979e: jmp 0x409845 */ goto L_00409845;
L_004097a3:; BB(0x004097a3);
    /* 004097a3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004097aa: jmp 0x4097b5 */ goto L_004097b5;
L_004097ac:; BB(0x004097ac);
    /* 004097ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004097af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004097b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004097b5:; BB(0x004097b5);
    /* 004097b5: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004097b9: jge 0x4097c8 */ if ((fS==fO)) goto L_004097c8;
L_004097bb:; BB(0x004097bb);
    /* 004097bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004097be: mov dword ptr [ebp + ecx*4 - 0x1c], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), 0x0u);
    /* 004097c6: jmp 0x4097ac */ goto L_004097ac;
L_004097c8:; BB(0x004097c8);
    /* 004097c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004097cb: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004097ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004097cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004097d2: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x4097d7u); f_004095c0();
    /* 004097d7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004097da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004097dd: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004097e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004097e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004097e4: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x4097e9u); f_004095c0();
    /* 004097e9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004097ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004097ef: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004097f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004097f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004097f6: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x4097fbu); f_004095c0();
    /* 004097fb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004097fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409801: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00409804: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409805: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409808: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x40980du); f_004095c0();
    /* 0040980d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409810: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409814: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409817: call 0x4095c0 */ r_esp -= 4; W32(r_esp, 0x40981cu); f_004095c0();
    /* 0040981c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040981f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00409822: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409825: je 0x40982b */ if (fZ) goto L_0040982b;
L_00409827:; BB(0x00409827);
    /* 00409827: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409829: jmp 0x409845 */ goto L_00409845;
L_0040982b:; BB(0x0040982b);
    /* 0040982b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040982e: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409831: je 0x409837 */ if (fZ) goto L_00409837;
L_00409833:; BB(0x00409833);
    /* 00409833: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409835: jmp 0x409845 */ goto L_00409845;
L_00409837:; BB(0x00409837);
    /* 00409837: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040983a: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040983d: je 0x409843 */ if (fZ) goto L_00409843;
L_0040983f:; BB(0x0040983f);
    /* 0040983f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409841: jmp 0x409845 */ goto L_00409845;
L_00409843:; BB(0x00409843);
    /* 00409843: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00409845:; BB(0x00409845);
    /* 00409845: mov esp, ebp */ r_esp = r_ebp;
    /* 00409847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409848: ret  */ FN_RET(0x00409760); r_esp += 4; return;
}

void f_004098c0(void) /* sub_4098C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004098c0);
    /* 004098c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004098c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004098c3: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004098c6: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004098c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004098cc: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004098cf: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004098d2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 004098d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004098d8: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004098db: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004098de: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 004098e2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004098e5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004098e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004098ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004098ec: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4098f1u); f_0064c8a0();
    /* 004098f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004098f4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004098f7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004098fa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004098fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00409900: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00409903: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00409906: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409908: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040990a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x40990fu); f_0064c8a0();
    /* 0040990f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409912: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00409915: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00409918: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040991b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040991e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00409921: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00409924: fld1  */ FPUSH(1.0);
    /* 00409926: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00409929: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0040992c: mov dword ptr [ecx + 0xf0], 0xffffffff */ W32((u32)(r_ecx+0xf0u), 0xffffffffu);
    /* 00409936: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040993a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40993fu); f_005dcb00();
    /* 0040993f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409942: mov ecx, eax */ r_ecx = r_eax;
    /* 00409944: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x409949u); f_005d5a50();
    /* 00409949: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040994e: jl 0x409955 */ if ((fS!=fO)) goto L_00409955;
L_00409950:; BB(0x00409950);
    /* 00409950: jmp 0x409e70 */ goto L_00409e70;
L_00409955:; BB(0x00409955);
    /* 00409955: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409959: jne 0x409966 */ if (!fZ) goto L_00409966;
L_0040995b:; BB(0x0040995b);
    /* 0040995b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040995f: jne 0x409966 */ if (!fZ) goto L_00409966;
L_00409961:; BB(0x00409961);
    /* 00409961: jmp 0x409e70 */ goto L_00409e70;
L_00409966:; BB(0x00409966);
    /* 00409966: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00409969: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0040996c: cmp dword ptr [ebp - 0x78], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00409970: ja 0x409e38 */ if ((!fC&&!fZ)) goto L_00409e38;
L_00409976:; BB(0x00409976);
    /* 00409976: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00409979: jmp dword ptr [ecx*4 + 0x409e78] */ { u32 t = R32((u32)(r_ecx*4+0x409e78u)); switch (t) { case 0x409980u: goto L_00409980; case 0x409a00u: goto L_00409a00; case 0x409d55u: goto L_00409d55; case 0x409e38u: goto L_00409e38; case 0x409b1au: goto L_00409b1a; case 0x409c3eu: goto L_00409c3e; default: UNSUP(0x00409979, "jump table entry is not a known target"); } }
L_00409980:; BB(0x00409980);
    /* 00409980: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409983: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409984: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409989u); f_005dcb00();
    /* 00409989: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040998c: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409993: jle 0x4099ab */ if ((fZ||fS!=fO)) goto L_004099ab;
L_00409995:; BB(0x00409995);
    /* 00409995: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409999: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40999eu); f_005dcb00();
    /* 0040999e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004099a1: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_004099ab:; BB(0x004099ab);
    /* 004099ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004099ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004099af: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4099b4u); f_005dcb00();
    /* 004099b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004099b7: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
    /* 004099c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004099c4: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004099c7: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004099ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004099cd: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004099d0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004099d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004099d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004099d7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004099da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004099db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004099de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004099df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4099e4u); f_005dcb00();
    /* 004099e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004099e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004099e9: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4099eeu); f_005d5fb0();
    /* 004099ee: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004099f1: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 004099fb: jmp 0x409e38 */ goto L_00409e38;
L_00409a00:; BB(0x00409a00);
    /* 00409a00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409a03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a04: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409a09u); f_005dcb00();
    /* 00409a09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409a0c: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409a13: jge 0x409a2b */ if ((fS==fO)) goto L_00409a2b;
L_00409a15:; BB(0x00409a15);
    /* 00409a15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409a19: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409a1eu); f_005dcb00();
    /* 00409a1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409a21: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00409a2b:; BB(0x00409a2b);
    /* 00409a2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409a2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a2f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409a34u); f_005dcb00();
    /* 00409a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409a37: mov ecx, eax */ r_ecx = r_eax;
    /* 00409a39: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x409a3eu); f_005d7540();
    /* 00409a3e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409a41: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00409a44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409a47: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00409a4a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409a4d: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00409a50: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00409a53: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409a56: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x409a5bu); f_0064c560();
    /* 00409a5b: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409a62: jle 0x409a6b */ if ((fZ||fS!=fO)) goto L_00409a6b;
L_00409a64:; BB(0x00409a64);
    /* 00409a64: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
L_00409a6b:; BB(0x00409a6b);
    /* 00409a6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409a6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a6f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409a72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409a73: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00409a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409a77: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409a7a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x409a7fu); f_0064c5c0();
    /* 00409a7f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00409a81: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00409a84: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409a87: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00409a8a: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409a91: jl 0x409ab4 */ if ((fS!=fO)) goto L_00409ab4;
L_00409a93:; BB(0x00409a93);
    /* 00409a93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409a95: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00409a9a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x409a9fu); f_0064c8a0();
    /* 00409a9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409aa2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00409aa5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00409aa8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00409aab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409aae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00409ab1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00409ab4:; BB(0x00409ab4);
    /* 00409ab4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409ab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ab8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409abc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409abf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ac0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409ac5u); f_005dcb00();
    /* 00409ac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409ac8: mov ecx, eax */ r_ecx = r_eax;
    /* 00409aca: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x409acfu); f_005d5cf0();
    /* 00409acf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409ad1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409ad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ad5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409ad9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409add: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409ae0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00409ae2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409ae5: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00409aeb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x409aedu); call_ind(t); }
    /* 00409aed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00409af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409af1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409af5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409af9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409afeu); f_005dcb00();
    /* 00409afe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409b01: mov ecx, eax */ r_ecx = r_eax;
    /* 00409b03: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x409b08u); f_005d5fb0();
    /* 00409b08: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409b0b: mov dword ptr [eax + 0xf0], 1 */ W32((u32)(r_eax+0xf0u), 0x1u);
    /* 00409b15: jmp 0x409e38 */ goto L_00409e38;
L_00409b1a:; BB(0x00409b1a);
    /* 00409b1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409b1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409b1e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409b23u); f_005dcb00();
    /* 00409b23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409b26: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409b2d: jge 0x409b45 */ if ((fS==fO)) goto L_00409b45;
L_00409b2f:; BB(0x00409b2f);
    /* 00409b2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409b32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409b33: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409b38u); f_005dcb00();
    /* 00409b38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409b3b: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00409b45:; BB(0x00409b45);
    /* 00409b45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409b49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409b4eu); f_005dcb00();
    /* 00409b4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409b51: mov ecx, eax */ r_ecx = r_eax;
    /* 00409b53: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x409b58u); f_005d7540();
    /* 00409b58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409b5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00409b5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409b61: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00409b64: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409b67: fld qword ptr [0x6b3730] */ FPUSH(R_F64((u32)(0x6b3730u)));
    /* 00409b6d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00409b70: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409b73: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x409b78u); f_0064c560();
    /* 00409b78: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409b7f: jle 0x409b8f */ if ((fZ||fS!=fO)) goto L_00409b8f;
L_00409b81:; BB(0x00409b81);
    /* 00409b81: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 00409b88: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00409b8f:; BB(0x00409b8f);
    /* 00409b8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409b93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409b96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409b97: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00409b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409b9b: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409b9e: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x409ba3u); f_0064c5c0();
    /* 00409ba3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00409ba5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00409ba8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409bab: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00409bae: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409bb5: jl 0x409bd8 */ if ((fS!=fO)) goto L_00409bd8;
L_00409bb7:; BB(0x00409bb7);
    /* 00409bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409bb9: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00409bbe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x409bc3u); f_0064c8a0();
    /* 00409bc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409bc6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00409bc9: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00409bcc: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00409bcf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409bd2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00409bd5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00409bd8:; BB(0x00409bd8);
    /* 00409bd8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409bdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409bdc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409be0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409be4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409be9u); f_005dcb00();
    /* 00409be9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409bec: mov ecx, eax */ r_ecx = r_eax;
    /* 00409bee: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x409bf3u); f_005d5cf0();
    /* 00409bf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409bf5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409bf9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409bfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409c00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409c01: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409c04: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00409c06: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409c09: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00409c0f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x409c11u); call_ind(t); }
    /* 00409c11: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00409c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409c15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409c18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409c19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409c1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409c1d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409c22u); f_005dcb00();
    /* 00409c22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409c25: mov ecx, eax */ r_ecx = r_eax;
    /* 00409c27: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x409c2cu); f_005d5fb0();
    /* 00409c2c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409c2f: mov dword ptr [eax + 0xf0], 1 */ W32((u32)(r_eax+0xf0u), 0x1u);
    /* 00409c39: jmp 0x409e38 */ goto L_00409e38;
L_00409c3e:; BB(0x00409c3e);
    /* 00409c3e: fld qword ptr [0x6b3728] */ FPUSH(R_F64((u32)(0x6b3728u)));
    /* 00409c44: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00409c47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409c4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409c4b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409c50u); f_005dcb00();
    /* 00409c50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409c53: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409c5a: jge 0x409c72 */ if ((fS==fO)) goto L_00409c72;
L_00409c5c:; BB(0x00409c5c);
    /* 00409c5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409c5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409c60: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409c65u); f_005dcb00();
    /* 00409c65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409c68: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00409c72:; BB(0x00409c72);
    /* 00409c72: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409c75: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00409c78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409c7b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00409c7e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409c81: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00409c84: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00409c87: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409c8a: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x409c8fu); f_0064c560();
    /* 00409c8f: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409c96: jle 0x409ca6 */ if ((fZ||fS!=fO)) goto L_00409ca6;
L_00409c98:; BB(0x00409c98);
    /* 00409c98: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 00409c9f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00409ca6:; BB(0x00409ca6);
    /* 00409ca6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409caa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409cad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409cae: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00409cb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409cb2: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409cb5: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x409cbau); f_0064c5c0();
    /* 00409cba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00409cbc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00409cbf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00409cc2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00409cc5: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409ccc: jl 0x409cef */ if ((fS!=fO)) goto L_00409cef;
L_00409cce:; BB(0x00409cce);
    /* 00409cce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409cd0: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00409cd5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x409cdau); f_0064c8a0();
    /* 00409cda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409cdd: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00409ce0: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00409ce3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00409ce6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409ce9: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00409cec: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00409cef:; BB(0x00409cef);
    /* 00409cef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409cf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409cf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409cf7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409cfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409cfb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409d00u); f_005dcb00();
    /* 00409d00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409d03: mov ecx, eax */ r_ecx = r_eax;
    /* 00409d05: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x409d0au); f_005d5cf0();
    /* 00409d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409d0c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d14: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409d17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d18: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409d1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00409d1d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409d20: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00409d26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x409d28u); call_ind(t); }
    /* 00409d28: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00409d2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d2c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409d2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409d33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d34: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409d39u); f_005dcb00();
    /* 00409d39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409d3c: mov ecx, eax */ r_ecx = r_eax;
    /* 00409d3e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x409d43u); f_005d5fb0();
    /* 00409d43: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409d46: mov dword ptr [ecx + 0xf0], 9 */ W32((u32)(r_ecx+0xf0u), 0x9u);
    /* 00409d50: jmp 0x409e38 */ goto L_00409e38;
L_00409d55:; BB(0x00409d55);
    /* 00409d55: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409d58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d59: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409d5eu); f_005dcb00();
    /* 00409d5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409d61: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409d68: jge 0x409d80 */ if ((fS==fO)) goto L_00409d80;
L_00409d6a:; BB(0x00409d6a);
    /* 00409d6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d6e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409d73u); f_005dcb00();
    /* 00409d73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409d76: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00409d80:; BB(0x00409d80);
    /* 00409d80: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00409d87: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00409d8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409d91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00409d95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409d96: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00409d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409d9a: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00409d9d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x409da2u); f_0064c5c0();
    /* 00409da2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00409da4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00409da7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409daa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00409dad: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409db4: jl 0x409dd7 */ if ((fS!=fO)) goto L_00409dd7;
L_00409db6:; BB(0x00409db6);
    /* 00409db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409db8: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00409dbd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x409dc2u); f_0064c8a0();
    /* 00409dc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409dc5: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00409dc8: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00409dcb: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00409dce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00409dd1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00409dd4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00409dd7:; BB(0x00409dd7);
    /* 00409dd7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ddb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409ddf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00409de2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409de3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409de8u); f_005dcb00();
    /* 00409de8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409deb: mov ecx, eax */ r_ecx = r_eax;
    /* 00409ded: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x409df2u); f_005d5cf0();
    /* 00409df2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409df4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409df7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409df8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00409dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409dfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00409dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e00: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409e03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00409e05: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409e08: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00409e0e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x409e10u); call_ind(t); }
    /* 00409e10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00409e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409e14: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e18: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409e1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e1c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x409e21u); f_005dcb00();
    /* 00409e21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409e24: mov ecx, eax */ r_ecx = r_eax;
    /* 00409e26: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x409e2bu); f_005d5fb0();
    /* 00409e2b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409e2e: mov dword ptr [eax + 0xf0], 2 */ W32((u32)(r_eax+0xf0u), 0x2u);
L_00409e38:; BB(0x00409e38);
    /* 00409e38: cmp dword ptr [0x7902f8], 0 */ {  u32 a = R32((u32)(0x7902f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409e3f: je 0x409e70 */ if (fZ) goto L_00409e70;
L_00409e41:; BB(0x00409e41);
    /* 00409e41: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00409e44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e45: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409e48: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x409e4du); f_005f5400();
    /* 00409e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409e4e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00409e51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409e52: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00409e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409e56: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409e5c: call 0x408de0 */ r_esp -= 4; W32(r_esp, 0x409e61u); f_00408de0();
    /* 00409e61: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00409e67: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00409e6b: call 0x402da0 */ r_esp -= 4; W32(r_esp, 0x409e70u); f_00402da0();
L_00409e70:; BB(0x00409e70);
    /* 00409e70: mov esp, ebp */ r_esp = r_ebp;
    /* 00409e72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409e73: ret 8 */ FN_RET(0x004098c0); r_esp += 12; return;
}

void f_00409ea0(void) /* sub_409EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409ea0);
    /* 00409ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00409ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409ea7: cmp dword ptr [0x7902f8], 0 */ {  u32 a = R32((u32)(0x7902f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409eae: je 0x409ece */ if (fZ) goto L_00409ece;
L_00409eb0:; BB(0x00409eb0);
    /* 00409eb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409eb4: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409eba: call 0x408de0 */ r_esp -= 4; W32(r_esp, 0x409ebfu); f_00408de0();
    /* 00409ebf: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00409ec5: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00409ec9: call 0x402ea0 */ r_esp -= 4; W32(r_esp, 0x409eceu); f_00402ea0();
L_00409ece:; BB(0x00409ece);
    /* 00409ece: mov esp, ebp */ r_esp = r_ebp;
    /* 00409ed0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409ed1: ret  */ FN_RET(0x00409ea0); r_esp += 4; return;
}

