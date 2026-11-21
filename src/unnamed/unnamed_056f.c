#include "protos.h"

void f_0056f040(void) /* sub_56F040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f040);
    /* 0056f040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f041: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f043: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f046: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056f049: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f04b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f050u); f_0062fbf0();
    /* 0056f050: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f053: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0056f057: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f05b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f05e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056f061: mov dword ptr [ecx + eax*4 + 0xac], edx */ W32((u32)(r_ecx+r_eax*4+0xacu), r_edx);
    /* 0056f068: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056f06e: jmp 0x56f07c */ goto L_0056f07c;
L_0056f070:; BB(0x0056f070);
    /* 0056f070: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056f074: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056f078: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0056f07c:; BB(0x0056f07c);
    /* 0056f07c: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0056f080: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f083: jge 0x56f0c6 */ if ((fS==fO)) goto L_0056f0c6;
L_0056f085:; BB(0x0056f085);
    /* 0056f085: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0056f089: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f08d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f08f: je 0x56f0c4 */ if (fZ) goto L_0056f0c4;
L_0056f091:; BB(0x0056f091);
    /* 0056f091: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f093: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f098u); f_0062fbf0();
    /* 0056f098: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f09d: jne 0x56f0b3 */ if (!fZ) goto L_0056f0b3;
L_0056f09f:; BB(0x0056f09f);
    /* 0056f09f: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0056f0a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f0a6: mov dword ptr [edx + ecx*4 + 0xac], 1 */ W32((u32)(r_edx+r_ecx*4+0xacu), 0x1u);
    /* 0056f0b1: jmp 0x56f0c4 */ goto L_0056f0c4;
L_0056f0b3:; BB(0x0056f0b3);
    /* 0056f0b3: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0056f0b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f0ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056f0bd: mov dword ptr [ecx + eax*4 + 0xac], edx */ W32((u32)(r_ecx+r_eax*4+0xacu), r_edx);
L_0056f0c4:; BB(0x0056f0c4);
    /* 0056f0c4: jmp 0x56f070 */ goto L_0056f070;
L_0056f0c6:; BB(0x0056f0c6);
    /* 0056f0c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f0c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f0c9: ret 4 */ FN_RET(0x0056f040); r_esp += 8; return;
}

void f_0056f0d0(void) /* sub_56F0D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f0d0);
    /* 0056f0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f0d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f0d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056f0d9: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0056f0e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f0e7: jmp 0x56f0f2 */ goto L_0056f0f2;
L_0056f0e9:; BB(0x0056f0e9);
    /* 0056f0e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f0ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f0ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056f0f2:; BB(0x0056f0f2);
    /* 0056f0f2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f0f6: jge 0x56f11c */ if ((fS==fO)) goto L_0056f11c;
L_0056f0f8:; BB(0x0056f0f8);
    /* 0056f0f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f0fb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f0fe: cmp dword ptr [edx + ecx*4 + 0xac], 1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xacu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f106: je 0x56f11a */ if (fZ) goto L_0056f11a;
L_0056f108:; BB(0x0056f108);
    /* 0056f108: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f10b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f10e: mov edx, dword ptr [ecx + eax*4 + 0xac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xacu));
    /* 0056f115: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0056f118: jmp 0x56f11c */ goto L_0056f11c;
L_0056f11a:; BB(0x0056f11a);
    /* 0056f11a: jmp 0x56f0e9 */ goto L_0056f0e9;
L_0056f11c:; BB(0x0056f11c);
    /* 0056f11c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f11f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f122: ret  */ FN_RET(0x0056f0d0); r_esp += 4; return;
}

void f_0056f130(void) /* sub_56F130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f130);
    /* 0056f130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f131: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f137: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f13b: je 0x56f14b */ if (fZ) goto L_0056f14b;
L_0056f13d:; BB(0x0056f13d);
    /* 0056f13d: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f141: je 0x56f14b */ if (fZ) goto L_0056f14b;
L_0056f143:; BB(0x0056f143);
    /* 0056f143: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056f146: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f149: jne 0x56f14f */ if (!fZ) goto L_0056f14f;
L_0056f14b:; BB(0x0056f14b);
    /* 0056f14b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0056f14d: jmp 0x56f151 */ goto L_0056f151;
L_0056f14f:; BB(0x0056f14f);
    /* 0056f14f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0056f151:; BB(0x0056f151);
    /* 0056f151: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f154: ret 8 */ FN_RET(0x0056f130); r_esp += 12; return;
}

void f_0056f160(void) /* sub_56F160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f160);
    /* 0056f160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f161: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f163: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f166: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056f169: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0056f170: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 0056f174: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f17b: jmp 0x56f186 */ goto L_0056f186;
L_0056f17d:; BB(0x0056f17d);
    /* 0056f17d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f180: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f183: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056f186:; BB(0x0056f186);
    /* 0056f186: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f18a: jge 0x56f1d6 */ if ((fS==fO)) goto L_0056f1d6;
L_0056f18c:; BB(0x0056f18c);
    /* 0056f18c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f18f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056f192: jmp 0x56f19d */ goto L_0056f19d;
L_0056f194:; BB(0x0056f194);
    /* 0056f194: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056f197: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056f19a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0056f19d:; BB(0x0056f19d);
    /* 0056f19d: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f1a1: jge 0x56f1d4 */ if ((fS==fO)) goto L_0056f1d4;
L_0056f1a3:; BB(0x0056f1a3);
    /* 0056f1a3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056f1a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f1a9: mov edx, dword ptr [ecx + eax*4 + 0xac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xacu));
    /* 0056f1b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f1b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f1b7: mov edx, dword ptr [ecx + eax*4 + 0xac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xacu));
    /* 0056f1be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f1c2: call 0x56f130 */ r_esp -= 4; W32(r_esp, 0x56f1c7u); f_0056f130();
    /* 0056f1c7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056f1ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f1cc: jne 0x56f1d2 */ if (!fZ) goto L_0056f1d2;
L_0056f1ce:; BB(0x0056f1ce);
    /* 0056f1ce: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
L_0056f1d2:; BB(0x0056f1d2);
    /* 0056f1d2: jmp 0x56f194 */ goto L_0056f194;
L_0056f1d4:; BB(0x0056f1d4);
    /* 0056f1d4: jmp 0x56f17d */ goto L_0056f17d;
L_0056f1d6:; BB(0x0056f1d6);
    /* 0056f1d6: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 0056f1d9: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f1db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f1dc: ret  */ FN_RET(0x0056f160); r_esp += 4; return;
}

void f_0056f1e0(void) /* sub_56F1E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f1e0);
    /* 0056f1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f1e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f1e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f1e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f1ec: call 0x56f160 */ r_esp -= 4; W32(r_esp, 0x56f1f1u); f_0056f160();
    /* 0056f1f1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056f1f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f1f6: je 0x56f3b2 */ if (fZ) goto L_0056f3b2;
L_0056f1fc:; BB(0x0056f1fc);
    /* 0056f1fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f1ff: call 0x56f0d0 */ r_esp -= 4; W32(r_esp, 0x56f204u); f_0056f0d0();
    /* 0056f204: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056f207: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056f20b: ja 0x56f3b2 */ if ((!fC&&!fZ)) goto L_0056f3b2;
L_0056f211:; BB(0x0056f211);
    /* 0056f211: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f214: jmp dword ptr [ecx*4 + 0x56f3b8] */ { u32 t = R32((u32)(r_ecx*4+0x56f3b8u)); switch (t) { case 0x56f302u: goto L_0056f302; case 0x56f2c8u: goto L_0056f2c8; case 0x56f21bu: goto L_0056f21b; case 0x56f3b2u: goto L_0056f3b2; case 0x56f255u: goto L_0056f255; case 0x56f28eu: goto L_0056f28e; case 0x56f339u: goto L_0056f339; case 0x56f37du: goto L_0056f37d; default: UNSUP(0x0056f214, "jump table entry is not a known target"); } }
L_0056f21b:; BB(0x0056f21b);
    /* 0056f21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f21d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f21e: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f224: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f227: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f228: fld1  */ FPUSH(1.0);
    /* 0056f22a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f22d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f22f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f231: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f235: push 0x19267 */ { u32 v = 0x19267u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f23a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0056f240: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056f242: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f248: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0056f24e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f250u); call_ind(t); }
    /* 0056f250: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f255:; BB(0x0056f255);
    /* 0056f255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f257: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f258: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f25e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f262: fld1  */ FPUSH(1.0);
    /* 0056f264: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f267: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f269: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f26b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f26d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f26f: push 0x1925e */ { u32 v = 0x1925eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f274: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056f279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f27b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f281: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f287: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f289u); call_ind(t); }
    /* 0056f289: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f28e:; BB(0x0056f28e);
    /* 0056f28e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f291: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f297: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f29a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f29b: fld1  */ FPUSH(1.0);
    /* 0056f29d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f2a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2a8: push 0x19260 */ { u32 v = 0x19260u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f2b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056f2b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f2bb: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f2c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f2c3u); call_ind(t); }
    /* 0056f2c3: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f2c8:; BB(0x0056f2c8);
    /* 0056f2c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2cb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f2d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f2d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2d5: fld1  */ FPUSH(1.0);
    /* 0056f2d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f2da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2dc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2e2: push 0x19261 */ { u32 v = 0x19261u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f2e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f2ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056f2ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f2f5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f2fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f2fdu); call_ind(t); }
    /* 0056f2fd: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f302:; BB(0x0056f302);
    /* 0056f302: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f305: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f30b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f30e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f30f: fld1  */ FPUSH(1.0);
    /* 0056f311: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f314: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f316: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f31a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f31c: push 0x19269 */ { u32 v = 0x19269u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f321: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f327: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056f329: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f32f: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f335: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f337u); call_ind(t); }
    /* 0056f337: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f339:; BB(0x0056f339);
    /* 0056f339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f33c: movzx edx, byte ptr [ecx + 0x99] */ r_edx = (u32)R8((u32)(r_ecx+0x99u));
    /* 0056f343: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f345: jne 0x56f37b */ if (!fZ) goto L_0056f37b;
L_0056f347:; BB(0x0056f347);
    /* 0056f347: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f34a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f350: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f354: fld1  */ FPUSH(1.0);
    /* 0056f356: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f359: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f35b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f35d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f35f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f361: push 0x19268 */ { u32 v = 0x19268u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f366: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056f36b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f36d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f373: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f37bu); call_ind(t); }
L_0056f37b:; BB(0x0056f37b);
    /* 0056f37b: jmp 0x56f3b2 */ goto L_0056f3b2;
L_0056f37d:; BB(0x0056f37d);
    /* 0056f37d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f37f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f380: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056f386: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f38a: fld1  */ FPUSH(1.0);
    /* 0056f38c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056f38f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f391: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f393: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f395: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f397: push 0x1926c */ { u32 v = 0x1926cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f39c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f3a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056f3a4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056f3aa: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056f3b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f3b2u); call_ind(t); }
L_0056f3b2:; BB(0x0056f3b2);
    /* 0056f3b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f3b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f3b5: ret  */ FN_RET(0x0056f1e0); r_esp += 4; return;
}

void f_0056f3e0(void) /* sub_56F3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f3e0);
    /* 0056f3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3e5: push 0x6a5ed8 */ { u32 v = 0x6a5ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056f3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f3f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056f3f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056f3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056f3ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056f405: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056f408: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f40a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56f40fu); f_00686d82();
    /* 0056f40f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f412: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056f415: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f41c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f420: je 0x56f436 */ if (fZ) goto L_0056f436;
L_0056f422:; BB(0x0056f422);
    /* 0056f422: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f425: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056f428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f429: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f42c: call 0x571200 */ r_esp -= 4; W32(r_esp, 0x56f431u); f_00571200();
    /* 0056f431: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056f434: jmp 0x56f43d */ goto L_0056f43d;
L_0056f436:; BB(0x0056f436);
    /* 0056f436: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0056f43d:; BB(0x0056f43d);
    /* 0056f43d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056f440: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0056f443: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f44a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056f44d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f44e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f451: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0056f454: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x56f459u); f_005f5df0();
    /* 0056f459: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f45c: mov byte ptr [edx + 0x99], 1 */ W8((u32)(r_edx+0x99u), 0x1u);
    /* 0056f463: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f466: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056f46d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f46e: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f470: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f471: ret  */ FN_RET(0x0056f3e0); r_esp += 4; return;
}

void f_0056f480(void) /* sub_56F480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f480);
    /* 0056f480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f481: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f487: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f48c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056f48f: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0056f495: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f498: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056f49b: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0056f4a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f4a3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f4a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f4abu); call_ind(t); }
    /* 0056f4ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f4b0: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0056f4b3: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0056f4b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f4bc: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0056f4bf: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 0056f4c5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056f4c7: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056f4cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f4cfu); call_ind(t); }
    /* 0056f4cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f4d4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056f4d7: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0056f4dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f4e0: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0056f4e3: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0056f4e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f4eb: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f4f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f4f3u); call_ind(t); }
    /* 0056f4f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f4f8: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0056f4fb: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x56f500u); f_005f5df0();
    /* 0056f500: mov edx, dword ptr [0x79344c] */ r_edx = R32((u32)(0x79344cu));
    /* 0056f506: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0056f509: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x56f50eu); f_005fc360();
    /* 0056f50e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f511: jne 0x56f551 */ if (!fZ) goto L_0056f551;
L_0056f513:; BB(0x0056f513);
    /* 0056f513: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f516: mov byte ptr [eax + 0x99], 0 */ W8((u32)(r_eax+0x99u), 0x0u);
    /* 0056f51d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f51f: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056f525: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056f528: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056f52d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056f530: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f532: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056f535: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f537u); call_ind(t); }
    /* 0056f537: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f539: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056f53f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056f542: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056f547: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056f54a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f54c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056f54f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f551u); call_ind(t); }
L_0056f551:; BB(0x0056f551);
    /* 0056f551: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f554: ret  */ FN_RET(0x0056f480); r_esp += 4; return;
}

void f_0056f560(void) /* sub_56F560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f560);
    /* 0056f560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f561: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f563: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f566: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056f567: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056f56a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f570: jmp 0x56f57e */ goto L_0056f57e;
L_0056f572:; BB(0x0056f572);
    /* 0056f572: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056f576: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056f57a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0056f57e:; BB(0x0056f57e);
    /* 0056f57e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f582: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f585: jge 0x56f5b6 */ if ((fS==fO)) goto L_0056f5b6;
L_0056f587:; BB(0x0056f587);
    /* 0056f587: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f58b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f58e: mov ecx, dword ptr [eax + edx*4 + 0xbc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xbcu));
    /* 0056f595: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f598: jne 0x56f5a1 */ if (!fZ) goto L_0056f5a1;
L_0056f59a:; BB(0x0056f59a);
    /* 0056f59a: jmp 0x56f842 */ goto L_0056f842;
L_0056f5a1:; BB(0x0056f5a1);
    /* 0056f5a1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f5a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5a8: cmp dword ptr [eax + edx*4 + 0xbc], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f5b0: jne 0x56f5b4 */ if (!fZ) goto L_0056f5b4;
L_0056f5b2:; BB(0x0056f5b2);
    /* 0056f5b2: jmp 0x56f5b6 */ goto L_0056f5b6;
L_0056f5b4:; BB(0x0056f5b4);
    /* 0056f5b4: jmp 0x56f572 */ goto L_0056f572;
L_0056f5b6:; BB(0x0056f5b6);
    /* 0056f5b6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f5ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056f5c0: mov dword ptr [edx + ecx*4 + 0xbc], eax */ W32((u32)(r_edx+r_ecx*4+0xbcu), r_eax);
    /* 0056f5c7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f5cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f5cd: jne 0x56f5e9 */ if (!fZ) goto L_0056f5e9;
L_0056f5cf:; BB(0x0056f5cf);
    /* 0056f5cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f5d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5d4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056f5d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5da: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056f5dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f5df: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f5e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f5e7u); call_ind(t); }
    /* 0056f5e7: jmp 0x56f650 */ goto L_0056f650;
L_0056f5e9:; BB(0x0056f5e9);
    /* 0056f5e9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f5ed: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f5f0: jne 0x56f60c */ if (!fZ) goto L_0056f60c;
L_0056f5f2:; BB(0x0056f5f2);
    /* 0056f5f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f5f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5f7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056f5fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f5fd: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056f600: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f602: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f608: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f60au); call_ind(t); }
    /* 0056f60a: jmp 0x56f650 */ goto L_0056f650;
L_0056f60c:; BB(0x0056f60c);
    /* 0056f60c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f610: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f613: jne 0x56f62f */ if (!fZ) goto L_0056f62f;
L_0056f615:; BB(0x0056f615);
    /* 0056f615: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f617: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f61a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056f61d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f620: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056f623: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f625: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f62b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f62du); call_ind(t); }
    /* 0056f62d: jmp 0x56f650 */ goto L_0056f650;
L_0056f62f:; BB(0x0056f62f);
    /* 0056f62f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f633: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f636: jne 0x56f650 */ if (!fZ) goto L_0056f650;
L_0056f638:; BB(0x0056f638);
    /* 0056f638: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f63a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f63d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056f640: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f643: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056f646: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f648: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f64e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f650u); call_ind(t); }
L_0056f650:; BB(0x0056f650);
    /* 0056f650: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f653: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0056f656: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f659: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056f65c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f65e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056f661: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f663u); call_ind(t); }
    /* 0056f663: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056f666: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056f669: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056f66d: ja 0x56f7d4 */ if ((!fC&&!fZ)) goto L_0056f7d4;
L_0056f673:; BB(0x0056f673);
    /* 0056f673: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f676: jmp dword ptr [edx*4 + 0x56f84c] */ { u32 t = R32((u32)(r_edx*4+0x56f84cu)); switch (t) { case 0x56f7a9u: goto L_0056f7a9; case 0x56f7d4u: goto L_0056f7d4; case 0x56f779u: goto L_0056f779; case 0x56f749u: goto L_0056f749; case 0x56f716u: goto L_0056f716; case 0x56f6e3u: goto L_0056f6e3; case 0x56f6b0u: goto L_0056f6b0; case 0x56f67du: goto L_0056f67d; default: UNSUP(0x0056f676, "jump table entry is not a known target"); } }
L_0056f67d:; BB(0x0056f67d);
    /* 0056f67d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f67f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f684u); f_0062fbf0();
    /* 0056f684: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f687: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f68a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f68b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f68f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f692: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f696: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f69a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f69d: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f6a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f6a3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f6a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f6abu); call_ind(t); }
    /* 0056f6ab: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f6b0:; BB(0x0056f6b0);
    /* 0056f6b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f6b2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f6b7u); f_0062fbf0();
    /* 0056f6b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f6ba: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f6bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f6be: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f6c2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f6c5: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f6c9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f6cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f6d0: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f6d4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056f6d6: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056f6dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f6deu); call_ind(t); }
    /* 0056f6de: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f6e3:; BB(0x0056f6e3);
    /* 0056f6e3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f6e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f6eau); f_0062fbf0();
    /* 0056f6ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f6ed: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f6f1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f6f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f6f8: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f6fc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f700: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f703: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f707: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f709: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f70f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f711u); call_ind(t); }
    /* 0056f711: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f716:; BB(0x0056f716);
    /* 0056f716: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f718: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f71du); f_0062fbf0();
    /* 0056f71d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f720: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f723: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f724: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f728: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f72b: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f72f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f733: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f736: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f73a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056f73c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056f742: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f744u); call_ind(t); }
    /* 0056f744: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f749:; BB(0x0056f749);
    /* 0056f749: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f74b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f750u); f_0062fbf0();
    /* 0056f750: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f753: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f757: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f75b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f75e: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f762: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f766: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f769: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f76d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f76f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f775: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f777u); call_ind(t); }
    /* 0056f777: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f779:; BB(0x0056f779);
    /* 0056f779: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f77b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f780u); f_0062fbf0();
    /* 0056f780: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f783: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f787: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f78b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f78e: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f792: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f796: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f799: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f79d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056f79f: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056f7a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f7a7u); call_ind(t); }
    /* 0056f7a7: jmp 0x56f7d4 */ goto L_0056f7d4;
L_0056f7a9:; BB(0x0056f7a9);
    /* 0056f7a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7ab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f7b0u); f_0062fbf0();
    /* 0056f7b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f7b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7b4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f7b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f7bb: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f7bf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f7c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f7c6: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f7ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f7cc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056f7d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f7d4u); call_ind(t); }
L_0056f7d4:; BB(0x0056f7d4);
    /* 0056f7d4: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f7d8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7da: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f7dfu); f_0062fbf0();
    /* 0056f7df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f7e2: mov ecx, dword ptr [esi*8 + 0x7488bc] */ r_ecx = R32((u32)(r_esi*8+0x7488bcu));
    /* 0056f7e9: lea edx, [ecx + eax - 2] */ r_edx = (u32)(r_ecx+r_eax+0xfffffffeu);
    /* 0056f7ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7ee: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f7f2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7f4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f7f9u); f_0062fbf0();
    /* 0056f7f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f7fc: mov ecx, dword ptr [esi*8 + 0x7488b8] */ r_ecx = R32((u32)(r_esi*8+0x7488b8u));
    /* 0056f803: lea edx, [ecx + eax - 2] */ r_edx = (u32)(r_ecx+r_eax+0xfffffffeu);
    /* 0056f807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f808: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f80c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f80f: mov edx, dword ptr [ecx + eax*4 + 0x7c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f813: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f817: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f81a: mov ecx, dword ptr [ecx + eax*4 + 0x7c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x7cu));
    /* 0056f81e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056f820: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0056f823: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f825u); call_ind(t); }
    /* 0056f825: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f829: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f82c: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f830: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f834: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f837: mov ecx, dword ptr [edx + ecx*4 + 0x7c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 0056f83b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056f83d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0056f840: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f842u); call_ind(t); }
L_0056f842:; BB(0x0056f842);
    /* 0056f842: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f843: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f846: ret 4 */ FN_RET(0x0056f560); r_esp += 8; return;
}

void f_0056f870(void) /* sub_56F870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f870);
    /* 0056f870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f871: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f876: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056f879: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f87f: jmp 0x56f88d */ goto L_0056f88d;
L_0056f881:; BB(0x0056f881);
    /* 0056f881: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056f885: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056f889: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0056f88d:; BB(0x0056f88d);
    /* 0056f88d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f891: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f894: jge 0x56f8c9 */ if ((fS==fO)) goto L_0056f8c9;
L_0056f896:; BB(0x0056f896);
    /* 0056f896: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f89a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f89d: mov ecx, dword ptr [eax + edx*4 + 0x7c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x7cu));
    /* 0056f8a1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f8a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f8a8: mov edx, dword ptr [eax + edx*4 + 0x7c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x7cu));
    /* 0056f8ac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056f8ae: mov ecx, edx */ r_ecx = r_edx;
    /* 0056f8b0: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056f8b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56f8b5u); call_ind(t); }
    /* 0056f8b5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056f8b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f8bc: mov dword ptr [ecx + eax*4 + 0xbc], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0xbcu), 0xffffffffu);
    /* 0056f8c7: jmp 0x56f881 */ goto L_0056f881;
L_0056f8c9:; BB(0x0056f8c9);
    /* 0056f8c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f8cc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056f8cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056f8d2: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0056f8d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f8d7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056f8da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f8dcu); call_ind(t); }
    /* 0056f8dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f8de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f8df: ret  */ FN_RET(0x0056f870); r_esp += 4; return;
}

void f_0056f8e0(void) /* sub_56F8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f8e0);
    /* 0056f8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8e5: push 0x6a5efe */ { u32 v = 0x6a5efeu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056f8f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8f1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f8f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056f8f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056f8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056f8ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056f905: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056f908: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f90b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f90f: je 0x56f94a */ if (fZ) goto L_0056f94a;
L_0056f911:; BB(0x0056f911);
    /* 0056f911: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f914: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056f917: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0056f91a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f91d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056f920: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f924: je 0x56f939 */ if (fZ) goto L_0056f939;
L_0056f926:; BB(0x0056f926);
    /* 0056f926: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f928: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056f92b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056f92d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056f930: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056f932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56f934u); call_ind(t); }
    /* 0056f934: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0056f937: jmp 0x56f940 */ goto L_0056f940;
L_0056f939:; BB(0x0056f939);
    /* 0056f939: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056f940:; BB(0x0056f940);
    /* 0056f940: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f943: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_0056f94a:; BB(0x0056f94a);
    /* 0056f94a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f94d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f951: jne 0x56f99a */ if (!fZ) goto L_0056f99a;
L_0056f953:; BB(0x0056f953);
    /* 0056f953: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f958: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56f95du); f_00686d82();
    /* 0056f95d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f960: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056f963: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f96a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f96e: je 0x56f97d */ if (fZ) goto L_0056f97d;
L_0056f970:; BB(0x0056f970);
    /* 0056f970: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056f973: call 0x571660 */ r_esp -= 4; W32(r_esp, 0x56f978u); f_00571660();
    /* 0056f978: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f97b: jmp 0x56f984 */ goto L_0056f984;
L_0056f97d:; BB(0x0056f97d);
    /* 0056f97d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0056f984:; BB(0x0056f984);
    /* 0056f984: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056f987: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056f98a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f991: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f994: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f997: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0056f99a:; BB(0x0056f99a);
    /* 0056f99a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f99d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056f9a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f9a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f9a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f9a8: ret  */ FN_RET(0x0056f8e0); r_esp += 4; return;
}

