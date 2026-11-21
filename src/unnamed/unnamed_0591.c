#include "protos.h"

void f_00591030(void) /* sub_591030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591030);
    /* 00591030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591031: mov ebp, esp */ r_ebp = r_esp;
    /* 00591033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591036: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00591039: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059103c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059103f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591043: je 0x591057 */ if (fZ) goto L_00591057;
L_00591045:; BB(0x00591045);
    /* 00591045: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591049: je 0x591053 */ if (fZ) goto L_00591053;
L_0059104b:; BB(0x0059104b);
    /* 0059104b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059104f: je 0x59105e */ if (fZ) goto L_0059105e;
L_00591051:; BB(0x00591051);
    /* 00591051: jmp 0x591065 */ goto L_00591065;
L_00591053:; BB(0x00591053);
    /* 00591053: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00591055: jmp 0x591067 */ goto L_00591067;
L_00591057:; BB(0x00591057);
    /* 00591057: mov eax, 1 */ r_eax = 0x1u;
    /* 0059105c: jmp 0x591067 */ goto L_00591067;
L_0059105e:; BB(0x0059105e);
    /* 0059105e: mov eax, 3 */ r_eax = 0x3u;
    /* 00591063: jmp 0x591067 */ goto L_00591067;
L_00591065:; BB(0x00591065);
    /* 00591065: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00591067:; BB(0x00591067);
    /* 00591067: mov esp, ebp */ r_esp = r_ebp;
    /* 00591069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059106a: ret 4 */ FN_RET(0x00591030); r_esp += 8; return;
}

void f_00591070(void) /* sub_591070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591070);
    /* 00591070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591071: mov ebp, esp */ r_ebp = r_esp;
    /* 00591073: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591076: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591077: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059107a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00591081: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00591088: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0059108f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00591096: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059109d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005910a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005910a1: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005910a7: call 0x5997a0 */ r_esp -= 4; W32(r_esp, 0x5910acu); f_005997a0();
    /* 005910ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005910af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910b1: jne 0x5910c6 */ if (!fZ) goto L_005910c6;
L_005910b3:; BB(0x005910b3);
    /* 005910b3: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910b7: jne 0x5910bf */ if (!fZ) goto L_005910bf;
L_005910b9:; BB(0x005910b9);
    /* 005910b9: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910bd: je 0x5910c6 */ if (fZ) goto L_005910c6;
L_005910bf:; BB(0x005910bf);
    /* 005910bf: mov eax, 0x35 */ r_eax = 0x35u;
    /* 005910c4: jmp 0x591113 */ goto L_00591113;
L_005910c6:; BB(0x005910c6);
    /* 005910c6: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005910ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005910cb: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5910d0u); f_00641280();
    /* 005910d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005910d3: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910d6: jne 0x5910ee */ if (!fZ) goto L_005910ee;
L_005910d8:; BB(0x005910d8);
    /* 005910d8: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005910dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005910dd: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5910e2u); f_00641290();
    /* 005910e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005910e5: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005910e9: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005910ec: jmp 0x591113 */ goto L_00591113;
L_005910ee:; BB(0x005910ee);
    /* 005910ee: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005910f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005910f3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5910f8u); f_00641290();
    /* 005910f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005910fb: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005910ff: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591102: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00591106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591107: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59110cu); f_00641280();
    /* 0059110c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059110f: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_00591113:; BB(0x00591113);
    /* 00591113: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591114: mov esp, ebp */ r_esp = r_ebp;
    /* 00591116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591117: ret 0xc */ FN_RET(0x00591070); r_esp += 16; return;
}

void f_00591120(void) /* sub_591120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591120);
    /* 00591120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591121: mov ebp, esp */ r_ebp = r_esp;
    /* 00591123: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591126: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00591129: mov dword ptr [ebp - 0x14], 0x310e9a */ W32((u32)(r_ebp+0xffffffecu), 0x310e9au);
    /* 00591130: mov dword ptr [ebp - 0x10], 0x310e9b */ W32((u32)(r_ebp+0xfffffff0u), 0x310e9bu);
    /* 00591137: mov dword ptr [ebp - 0xc], 0x310e99 */ W32((u32)(r_ebp+0xfffffff4u), 0x310e99u);
    /* 0059113e: mov dword ptr [ebp - 8], 0x310e9c */ W32((u32)(r_ebp+0xfffffff8u), 0x310e9cu);
    /* 00591145: mov dword ptr [ebp - 4], 0x310e9d */ W32((u32)(r_ebp+0xfffffffcu), 0x310e9du);
    /* 0059114c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059114f: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00591153: mov esp, ebp */ r_esp = r_ebp;
    /* 00591155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591156: ret 4 */ FN_RET(0x00591120); r_esp += 8; return;
}

void f_00591160(void) /* sub_591160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591160);
    /* 00591160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591161: mov ebp, esp */ r_ebp = r_esp;
    /* 00591163: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591166: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00591169: mov dword ptr [ebp - 0x14], 0x145 */ W32((u32)(r_ebp+0xffffffecu), 0x145u);
    /* 00591170: mov dword ptr [ebp - 0x10], 0xd7 */ W32((u32)(r_ebp+0xfffffff0u), 0xd7u);
    /* 00591177: mov dword ptr [ebp - 0xc], 0x1a9 */ W32((u32)(r_ebp+0xfffffff4u), 0x1a9u);
    /* 0059117e: mov dword ptr [ebp - 8], 0x73 */ W32((u32)(r_ebp+0xfffffff8u), 0x73u);
    /* 00591185: mov dword ptr [ebp - 4], 0x113 */ W32((u32)(r_ebp+0xfffffffcu), 0x113u);
    /* 0059118c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059118f: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591192: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00591195: add eax, dword ptr [ebp + ecx*4 - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591199: mov esp, ebp */ r_esp = r_ebp;
    /* 0059119b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059119c: ret 8 */ FN_RET(0x00591160); r_esp += 12; return;
}

void f_005911a0(void) /* sub_5911A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005911a0);
    /* 005911a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005911a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005911a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005911a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005911a9: mov dword ptr [ebp - 0x14], 0xb6 */ W32((u32)(r_ebp+0xffffffecu), 0xb6u);
    /* 005911b0: mov dword ptr [ebp - 0x10], 0xb7 */ W32((u32)(r_ebp+0xfffffff0u), 0xb7u);
    /* 005911b7: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 005911be: mov dword ptr [ebp - 8], 0x8a */ W32((u32)(r_ebp+0xfffffff8u), 0x8au);
    /* 005911c5: mov dword ptr [ebp - 4], 0x52 */ W32((u32)(r_ebp+0xfffffffcu), 0x52u);
    /* 005911cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005911cf: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005911d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005911d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005911d6: ret 8 */ FN_RET(0x005911a0); r_esp += 12; return;
}

void f_00591a70(void) /* sub_591A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591a70);
    /* 00591a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00591a73: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591a76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00591a7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00591a7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00591a80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591a81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591a82: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00591a85: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591a88: call 0x592230 */ r_esp -= 4; W32(r_esp, 0x591a8du); f_00592230();
    /* 00591a8d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00591a94: jmp 0x591a9f */ goto L_00591a9f;
L_00591a96:; BB(0x00591a96);
    /* 00591a96: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00591a99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591a9c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_00591a9f:; BB(0x00591a9f);
    /* 00591a9f: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591aa3: jge 0x591b69 */ if ((fS==fO)) goto L_00591b69;
L_00591aa9:; BB(0x00591aa9);
    /* 00591aa9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00591aac: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591aaf: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00591ab2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00591ab9: jmp 0x591ac4 */ goto L_00591ac4;
L_00591abb:; BB(0x00591abb);
    /* 00591abb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591abe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00591ac1: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_00591ac4:; BB(0x00591ac4);
    /* 00591ac4: cmp dword ptr [ebp - 0x44], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591ac8: jge 0x591b64 */ if ((fS==fO)) goto L_00591b64;
L_00591ace:; BB(0x00591ace);
    /* 00591ace: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591ad1: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591ad4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00591ada: mov edx, dword ptr [ecx + eax*4 + 0x98] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 00591ae1: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00591ae4: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591ae8: je 0x591b3e */ if (fZ) goto L_00591b3e;
L_00591aea:; BB(0x00591aea);
    /* 00591aea: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00591aed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591aee: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591af1: call 0x591030 */ r_esp -= 4; W32(r_esp, 0x591af6u); f_00591030();
    /* 00591af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591af7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591afa: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591afd: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b00: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 00591b04: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591b07: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591b0a: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b0d: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 00591b11: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00591b13: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00591b19: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591b1bu); call_ind(t); }
    /* 00591b1b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591b1e: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591b21: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b24: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 00591b28: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591b2b: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591b2e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b31: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 00591b35: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591b37: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00591b3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591b3cu); call_ind(t); }
    /* 00591b3c: jmp 0x591b5f */ goto L_00591b5f;
L_00591b3e:; BB(0x00591b3e);
    /* 00591b3e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591b41: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591b44: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b47: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 00591b4b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00591b4e: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591b51: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b54: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 00591b58: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00591b5a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00591b5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591b5fu); call_ind(t); }
L_00591b5f:; BB(0x00591b5f);
    /* 00591b5f: jmp 0x591abb */ goto L_00591abb;
L_00591b64:; BB(0x00591b64);
    /* 00591b64: jmp 0x591a96 */ goto L_00591a96;
L_00591b69:; BB(0x00591b69);
    /* 00591b69: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00591b70: jmp 0x591b7b */ goto L_00591b7b;
L_00591b72:; BB(0x00591b72);
    /* 00591b72: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591b75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591b78: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_00591b7b:; BB(0x00591b7b);
    /* 00591b7b: cmp dword ptr [ebp - 0x4c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591b7f: jge 0x591f57 */ if ((fS==fO)) goto L_00591f57;
L_00591b85:; BB(0x00591b85);
    /* 00591b85: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591b88: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591b8b: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00591b8f: call 0x594260 */ r_esp -= 4; W32(r_esp, 0x591b94u); f_00594260();
    /* 00591b94: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591b98: je 0x591c68 */ if (fZ) goto L_00591c68;
L_00591b9e:; BB(0x00591b9e);
    /* 00591b9e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ba2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x591ba7u); f_005dcb00();
    /* 00591ba7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591baa: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00591bad: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00591bb0: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00591bb6: mov byte ptr [ebp - 0x71], dl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_edx);
    /* 00591bb9: movzx eax, byte ptr [ebp - 0x71] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff8fu));
    /* 00591bbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591bbf: je 0x591c68 */ if (fZ) goto L_00591c68;
L_00591bc5:; BB(0x00591bc5);
    /* 00591bc5: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00591bcb: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x591bd0u); f_005da7b0();
    /* 00591bd0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00591bd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591bd5: je 0x591c68 */ if (fZ) goto L_00591c68;
L_00591bdb:; BB(0x00591bdb);
    /* 00591bdb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591bde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591bdf: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00591be4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00591be6: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00591bec: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00591bf2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591bf4u); call_ind(t); }
    /* 00591bf4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00591bf7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591bf9: jne 0x591c68 */ if (!fZ) goto L_00591c68;
L_00591bfb:; BB(0x00591bfb);
    /* 00591bfb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591bfe: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591c01: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00591c04: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00591c0b: jmp 0x591c16 */ goto L_00591c16;
L_00591c0d:; BB(0x00591c0d);
    /* 00591c0d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00591c10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591c13: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_00591c16:; BB(0x00591c16);
    /* 00591c16: cmp dword ptr [ebp - 0x54], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591c1a: jge 0x591c68 */ if ((fS==fO)) goto L_00591c68;
L_00591c1c:; BB(0x00591c1c);
    /* 00591c1c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00591c1f: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591c22: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591c25: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00591c29: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591c2c: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591c32: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591c3a: jne 0x591c66 */ if (!fZ) goto L_00591c66;
L_00591c3c:; BB(0x00591c3c);
    /* 00591c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591c3e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591c42: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00591c45: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591c48: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591c4b: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00591c4f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00591c52: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591c55: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591c58: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00591c5c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591c5e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00591c64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591c66u); call_ind(t); }
L_00591c66:; BB(0x00591c66);
    /* 00591c66: jmp 0x591c0d */ goto L_00591c0d;
L_00591c68:; BB(0x00591c68);
    /* 00591c68: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591c6c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00591c72: call 0x5997a0 */ r_esp -= 4; W32(r_esp, 0x591c77u); f_005997a0();
    /* 00591c77: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00591c7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591c7c: je 0x591e09 */ if (fZ) goto L_00591e09;
L_00591c82:; BB(0x00591c82);
    /* 00591c82: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00591c89: jmp 0x591c94 */ goto L_00591c94;
L_00591c8b:; BB(0x00591c8b);
    /* 00591c8b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00591c8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591c91: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_00591c94:; BB(0x00591c94);
    /* 00591c94: cmp dword ptr [ebp - 0x68], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591c98: jge 0x591ca6 */ if ((fS==fO)) goto L_00591ca6;
L_00591c9a:; BB(0x00591c9a);
    /* 00591c9a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00591c9d: mov word ptr [ebp + ecx*2 - 0x60], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffa0u), 0x0u);
    /* 00591ca4: jmp 0x591c8b */ goto L_00591c8b;
L_00591ca6:; BB(0x00591ca6);
    /* 00591ca6: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00591ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591caa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00591cac: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591cb0: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00591cb3: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591cb7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591cba: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00591cbd: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00591cc3: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00591cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ccb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591ccd: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x591cd2u); f_00462a40();
    /* 00591cd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591cd5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00591cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591cd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cdb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cdd: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00591ce0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591ce1: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x591ce6u); f_00462ba0();
    /* 00591ce6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591ce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591cea: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x591cefu); f_00462f40();
    /* 00591cef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cf4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591cf8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591cfb: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591d00u); f_00591160();
    /* 00591d00: mov esi, eax */ r_esi = r_eax;
    /* 00591d02: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d04: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591d08: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d0b: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591d10u); f_00591160();
    /* 00591d10: mov edi, eax */ r_edi = r_eax;
    /* 00591d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d14: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591d18: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d1b: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591d20u); f_00591160();
    /* 00591d20: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00591d22: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d25: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d28: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591d2f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x591d34u); f_005f5550();
    /* 00591d34: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00591d36: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00591d39: mov eax, edi */ r_eax = r_edi;
    /* 00591d3b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00591d3c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00591d3e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00591d40: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00591d42: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 00591d45: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591d49: jne 0x591d76 */ if (!fZ) goto L_00591d76;
L_00591d4b:; BB(0x00591d4b);
    /* 00591d4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d4d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591d51: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d54: call 0x5911a0 */ r_esp -= 4; W32(r_esp, 0x591d59u); f_005911a0();
    /* 00591d59: mov esi, eax */ r_esi = r_eax;
    /* 00591d5b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d5e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d61: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00591d65: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00591d68: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x591d6du); f_005f5590();
    /* 00591d6d: lea eax, [esi + eax - 0x44] */ r_eax = (u32)(r_esi+r_eax+0xffffffbcu);
    /* 00591d71: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00591d74: jmp 0x591d8a */ goto L_00591d8a;
L_00591d76:; BB(0x00591d76);
    /* 00591d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d78: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591d7c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d7f: call 0x5911a0 */ r_esp -= 4; W32(r_esp, 0x591d84u); f_005911a0();
    /* 00591d84: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00591d87: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_00591d8a:; BB(0x00591d8a);
    /* 00591d8a: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00591d8d: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00591d90: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00591d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591d94: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591d97: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591d9a: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00591da1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591da4: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591da7: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00591dae: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00591db0: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00591db6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591db8u); call_ind(t); }
    /* 00591db8: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00591dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591dbc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00591dbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591dc0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591dc3: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591dc6: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591dcd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591dd0: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591dd3: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591dda: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00591ddc: mov ecx, edx */ r_ecx = r_edx;
    /* 00591dde: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00591de1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591de3u); call_ind(t); }
    /* 00591de3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591de6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591de9: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591df0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591df3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591df6: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591dfd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591dff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00591e02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591e04u); call_ind(t); }
    /* 00591e04: jmp 0x591f52 */ goto L_00591f52;
L_00591e09:; BB(0x00591e09);
    /* 00591e09: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e0d: je 0x591f31 */ if (fZ) goto L_00591f31;
L_00591e13:; BB(0x00591e13);
    /* 00591e13: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00591e19: add ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591e1c: movzx edx, byte ptr [ecx + 0x112] */ r_edx = (u32)R8((u32)(r_ecx+0x112u));
    /* 00591e23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e25: je 0x591f0e */ if (fZ) goto L_00591f0e;
L_00591e2b:; BB(0x00591e2b);
    /* 00591e2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591e2d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591e31: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e34: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591e39u); f_00591160();
    /* 00591e39: mov esi, eax */ r_esi = r_eax;
    /* 00591e3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591e3d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591e41: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e44: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591e49u); f_00591160();
    /* 00591e49: mov edi, eax */ r_edi = r_eax;
    /* 00591e4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591e4d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591e51: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e54: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x591e59u); f_00591160();
    /* 00591e59: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00591e5b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e5e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e61: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591e68: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x591e6du); f_005f5550();
    /* 00591e6d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00591e6f: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00591e72: mov eax, edi */ r_eax = r_edi;
    /* 00591e74: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00591e75: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00591e77: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00591e79: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00591e7b: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00591e7e: push 0x6ce1cc */ { u32 v = 0x6ce1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00591e83: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x591e88u); f_00630f40();
    /* 00591e88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591e8c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e8f: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e92: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591e99: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591e9c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591e9f: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591ea6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00591ea8: mov ecx, edx */ r_ecx = r_edx;
    /* 00591eaa: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00591eb0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591eb2u); call_ind(t); }
    /* 00591eb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591eb4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591eb8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591ebb: call 0x5911a0 */ r_esp -= 4; W32(r_esp, 0x591ec0u); f_005911a0();
    /* 00591ec0: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00591ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ec4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00591ec7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00591ec8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591ecb: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591ece: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591ed5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591ed8: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00591edb: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00591ee2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00591ee4: mov ecx, edx */ r_ecx = r_edx;
    /* 00591ee6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00591ee9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591eebu); call_ind(t); }
    /* 00591eeb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591eee: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591ef1: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591ef8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591efb: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591efe: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591f05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591f07: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00591f0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591f0cu); call_ind(t); }
    /* 00591f0c: jmp 0x591f2f */ goto L_00591f2f;
L_00591f0e:; BB(0x00591f0e);
    /* 00591f0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591f11: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591f14: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00591f1b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591f1e: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591f21: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00591f28: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00591f2a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00591f2d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591f2fu); call_ind(t); }
L_00591f2f:; BB(0x00591f2f);
    /* 00591f2f: jmp 0x591f52 */ goto L_00591f52;
L_00591f31:; BB(0x00591f31);
    /* 00591f31: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591f34: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591f37: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591f3e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00591f41: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00591f44: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00591f4b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591f4d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00591f50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591f52u); call_ind(t); }
L_00591f52:; BB(0x00591f52);
    /* 00591f52: jmp 0x591b72 */ goto L_00591b72;
L_00591f57:; BB(0x00591f57);
    /* 00591f57: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00591f5d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x591f62u); f_005da7b0();
    /* 00591f62: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00591f65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591f67: je 0x591f88 */ if (fZ) goto L_00591f88;
L_00591f69:; BB(0x00591f69);
    /* 00591f69: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591f70: jne 0x591f88 */ if (!fZ) goto L_00591f88;
L_00591f72:; BB(0x00591f72);
    /* 00591f72: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00591f78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00591f7a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00591f80: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 00591f86: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x591f88u); call_ind(t); }
L_00591f88:; BB(0x00591f88);
    /* 00591f88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591f89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591f8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00591f8d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591f8f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x591f94u); f_00686d72();
    /* 00591f94: mov esp, ebp */ r_esp = r_ebp;
    /* 00591f96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591f97: ret  */ FN_RET(0x00591a70); r_esp += 4; return;
}

void f_00591fa0(void) /* sub_591FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00591fa0);
    /* 00591fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00591fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00591fa5: push 0x6a70ec */ { u32 v = 0x6a70ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00591faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00591fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591fb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00591fb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00591fbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00591fbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00591fc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00591fc8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00591fcb: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x591fd0u); f_00591a70();
    /* 00591fd0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00591fd3: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591fd7: jne 0x592045 */ if (!fZ) goto L_00592045;
L_00591fd9:; BB(0x00591fd9);
    /* 00591fd9: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00591fde: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x591fe3u); f_00686d82();
    /* 00591fe3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591fe6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00591fe9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00591ff0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591ff4: je 0x592003 */ if (fZ) goto L_00592003;
L_00591ff6:; BB(0x00591ff6);
    /* 00591ff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00591ff9: call 0x592300 */ r_esp -= 4; W32(r_esp, 0x591ffeu); f_00592300();
    /* 00591ffe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00592001: jmp 0x59200a */ goto L_0059200a;
L_00592003:; BB(0x00592003);
    /* 00592003: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0059200a:; BB(0x0059200a);
    /* 0059200a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059200d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00592010: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592017: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059201a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059201d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00592020: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592023: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00592026: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592029: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0059202c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059202e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00592031: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592033u); call_ind(t); }
    /* 00592033: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00592038: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059203a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059203d: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00592040: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x592045u); f_005f7340();
L_00592045:; BB(0x00592045);
    /* 00592045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592048: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0059204b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x592050u); f_005f85d0();
    /* 00592050: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592052: push 0x314d1b */ { u32 v = 0x314d1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00592057: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059205d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x592062u); f_005f2b20();
    /* 00592062: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592064: push 0x314d1c */ { u32 v = 0x314d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00592069: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059206f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x592074u); f_005f2b20();
    /* 00592074: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592077: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059207e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059207f: mov esp, ebp */ r_esp = r_ebp;
    /* 00592081: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592082: ret  */ FN_RET(0x00591fa0); r_esp += 4; return;
}

