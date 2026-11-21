#include "protos.h"

void f_00461050(void) /* sub_461050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461050);
    /* 00461050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461051: mov ebp, esp */ r_ebp = r_esp;
    /* 00461053: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461056: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00461059: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00461060: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00461067: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046106e: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00461075: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046107c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00461083: jmp 0x46108e */ goto L_0046108e;
L_00461085:; BB(0x00461085);
    /* 00461085: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461088: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046108b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046108e:; BB(0x0046108e);
    /* 0046108e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00461092: jge 0x46114b */ if ((fS==fO)) goto L_0046114b;
L_00461098:; BB(0x00461098);
    /* 00461098: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046109b: cmp dword ptr [ebp + ecx*4 - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004610a0: jne 0x4610ca */ if (!fZ) goto L_004610ca;
L_004610a2:; BB(0x004610a2);
    /* 004610a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004610a5: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004610a9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004610ac: mov dl, byte ptr [ecx + eax + 0xe5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0xe5u))) & 0xffu);
    /* 004610b3: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 004610b6: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004610ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004610bc: jne 0x4610ca */ if (!fZ) goto L_004610ca;
L_004610be:; BB(0x004610be);
    /* 004610be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004610c1: mov eax, dword ptr [ebp + ecx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 004610c5: jmp 0x46114e */ goto L_0046114e;
L_004610ca:; BB(0x004610ca);
    /* 004610ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004610cd: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004610d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004610d2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4610d7u); f_005dcb00();
    /* 004610d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004610da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004610dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004610e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4610e5u); f_0063aac0();
    /* 004610e5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004610e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004610ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004610ec: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004610f0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004610f3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004610f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004610f8: jne 0x461146 */ if (!fZ) goto L_00461146;
L_004610fa:; BB(0x004610fa);
    /* 004610fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004610fd: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00461101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461102: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461107u); f_005dcb00();
    /* 00461107: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046110a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0046110d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00461110: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00461116: mov byte ptr [ebp - 0x29], cl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_ecx);
    /* 00461119: movzx edx, byte ptr [ebp - 0x29] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0046111d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046111f: jne 0x461146 */ if (!fZ) goto L_00461146;
L_00461121:; BB(0x00461121);
    /* 00461121: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461124: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 00461128: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046112b: mov al, byte ptr [edx + ecx + 0xe5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx+0xe5u))) & 0xffu);
    /* 00461132: mov byte ptr [ebp - 0x2a], al */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_eax);
    /* 00461135: movzx ecx, byte ptr [ebp - 0x2a] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd6u));
    /* 00461139: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046113b: jne 0x461146 */ if (!fZ) goto L_00461146;
L_0046113d:; BB(0x0046113d);
    /* 0046113d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461140: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 00461144: jmp 0x46114e */ goto L_0046114e;
L_00461146:; BB(0x00461146);
    /* 00461146: jmp 0x461085 */ goto L_00461085;
L_0046114b:; BB(0x0046114b);
    /* 0046114b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0046114e:; BB(0x0046114e);
    /* 0046114e: mov esp, ebp */ r_esp = r_ebp;
    /* 00461150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461151: ret  */ FN_RET(0x00461050); r_esp += 4; return;
}

void f_00461160(void) /* sub_461160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461160);
    /* 00461160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461161: mov ebp, esp */ r_ebp = r_esp;
    /* 00461163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00461167: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0046116b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046116c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046116f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461170: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461173: call 0x461220 */ r_esp -= 4; W32(r_esp, 0x461178u); f_00461220();
    /* 00461178: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046117b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046117d: je 0x461192 */ if (fZ) goto L_00461192;
L_0046117f:; BB(0x0046117f);
    /* 0046117f: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00461183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461184: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461188: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046118b: call 0x4611c0 */ r_esp -= 4; W32(r_esp, 0x461190u); f_004611c0();
    /* 00461190: jmp 0x4611b6 */ goto L_004611b6;
L_00461192:; BB(0x00461192);
    /* 00461192: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461199: call 0x4612d0 */ r_esp -= 4; W32(r_esp, 0x46119eu); f_004612d0();
    /* 0046119e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004611a1: jne 0x4611a5 */ if (!fZ) goto L_004611a5;
L_004611a3:; BB(0x004611a3);
    /* 004611a3: jmp 0x4611b6 */ goto L_004611b6;
L_004611a5:; BB(0x004611a5);
    /* 004611a5: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004611a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004611aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004611ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004611ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004611b1: call 0x461270 */ r_esp -= 4; W32(r_esp, 0x4611b6u); f_00461270();
L_004611b6:; BB(0x004611b6);
    /* 004611b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004611b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004611b9: ret 8 */ FN_RET(0x00461160); r_esp += 12; return;
}

void f_004611c0(void) /* sub_4611C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004611c0);
    /* 004611c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004611c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004611c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004611c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004611c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004611ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004611cd: movzx edx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xa2u));
    /* 004611d5: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004611d9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004611db: jne 0x4611ef */ if (!fZ) goto L_004611ef;
L_004611dd:; BB(0x004611dd);
    /* 004611dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004611e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004611e3: mov word ptr [edx + ecx*2 + 0xa2], 0 */ W16((u32)(r_edx+r_ecx*2+0xa2u), 0x0u);
    /* 004611ed: jmp 0x461215 */ goto L_00461215;
L_004611ef:; BB(0x004611ef);
    /* 004611ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004611f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004611f5: movzx edx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xacu));
    /* 004611fd: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00461201: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461203: jne 0x461215 */ if (!fZ) goto L_00461215;
L_00461205:; BB(0x00461205);
    /* 00461205: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461208: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046120b: mov word ptr [edx + ecx*2 + 0xac], 0 */ W16((u32)(r_edx+r_ecx*2+0xacu), 0x0u);
L_00461215:; BB(0x00461215);
    /* 00461215: mov esp, ebp */ r_esp = r_ebp;
    /* 00461217: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461218: ret 8 */ FN_RET(0x004611c0); r_esp += 12; return;
}

void f_00461220(void) /* sub_461220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461220);
    /* 00461220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461221: mov ebp, esp */ r_ebp = r_esp;
    /* 00461223: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461226: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00461229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046122c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046122f: movzx edx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xa2u));
    /* 00461237: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0046123b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046123d: je 0x46125e */ if (fZ) goto L_0046125e;
L_0046123f:; BB(0x0046123f);
    /* 0046123f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461242: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461245: movzx eax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0xacu));
    /* 0046124d: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 00461251: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461253: je 0x46125e */ if (fZ) goto L_0046125e;
L_00461255:; BB(0x00461255);
    /* 00461255: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046125c: jmp 0x461265 */ goto L_00461265;
L_0046125e:; BB(0x0046125e);
    /* 0046125e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00461265:; BB(0x00461265);
    /* 00461265: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00461268: mov esp, ebp */ r_esp = r_ebp;
    /* 0046126a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046126b: ret 8 */ FN_RET(0x00461220); r_esp += 12; return;
}

void f_00461270(void) /* sub_461270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461270);
    /* 00461270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461271: mov ebp, esp */ r_ebp = r_esp;
    /* 00461273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00461277: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046127a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046127d: movzx edx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xa2u));
    /* 00461285: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461287: jne 0x46129d */ if (!fZ) goto L_0046129d;
L_00461289:; BB(0x00461289);
    /* 00461289: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046128c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046128f: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00461293: mov word ptr [ecx + eax*2 + 0xa2], dx */ W16((u32)(r_ecx+r_eax*2+0xa2u), (u16)r_edx);
    /* 0046129b: jmp 0x4612c1 */ goto L_004612c1;
L_0046129d:; BB(0x0046129d);
    /* 0046129d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004612a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004612a3: movzx edx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xacu));
    /* 004612ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004612ad: jne 0x4612c1 */ if (!fZ) goto L_004612c1;
L_004612af:; BB(0x004612af);
    /* 004612af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004612b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004612b5: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004612b9: mov word ptr [ecx + eax*2 + 0xac], dx */ W16((u32)(r_ecx+r_eax*2+0xacu), (u16)r_edx);
L_004612c1:; BB(0x004612c1);
    /* 004612c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004612c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004612c4: ret 8 */ FN_RET(0x00461270); r_esp += 12; return;
}

void f_004612d0(void) /* sub_4612D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004612d0);
    /* 004612d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004612d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004612d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004612d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004612d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004612e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004612e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004612e6: movzx edx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xa2u));
    /* 004612ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004612f0: je 0x4612fb */ if (fZ) goto L_004612fb;
L_004612f2:; BB(0x004612f2);
    /* 004612f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004612f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004612f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004612fb:; BB(0x004612fb);
    /* 004612fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004612fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00461301: movzx eax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0xacu));
    /* 00461309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046130b: je 0x461316 */ if (fZ) goto L_00461316;
L_0046130d:; BB(0x0046130d);
    /* 0046130d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461310: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00461313: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00461316:; BB(0x00461316);
    /* 00461316: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461319: mov esp, ebp */ r_esp = r_ebp;
    /* 0046131b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046131c: ret 4 */ FN_RET(0x004612d0); r_esp += 8; return;
}

void f_00461320(void) /* sub_461320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461320);
    /* 00461320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461321: mov ebp, esp */ r_ebp = r_esp;
    /* 00461323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00461327: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046132a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046132d: mov dx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xacu))) & 0xffffu);
    /* 00461335: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461336: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046133c: mov dx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xa2u))) & 0xffffu);
    /* 00461344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461345: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461349: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0046134f: call 0x452ef0 */ r_esp -= 4; W32(r_esp, 0x461354u); f_00452ef0();
    /* 00461354: mov esp, ebp */ r_esp = r_ebp;
    /* 00461356: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461357: ret 4 */ FN_RET(0x00461320); r_esp += 8; return;
}

void f_00461360(void) /* sub_461360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461360);
    /* 00461360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461361: mov ebp, esp */ r_ebp = r_esp;
    /* 00461363: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461366: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00461369: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00461370: jmp 0x46137b */ goto L_0046137b;
L_00461372:; BB(0x00461372);
    /* 00461372: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461375: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00461378: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046137b:; BB(0x0046137b);
    /* 0046137b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046137f: jge 0x4613a3 */ if ((fS==fO)) goto L_004613a3;
L_00461381:; BB(0x00461381);
    /* 00461381: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461384: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461385: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461389: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046138c: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x461391u); f_004604d0();
    /* 00461391: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00461394: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 00461398: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046139a: jne 0x4613a1 */ if (!fZ) goto L_004613a1;
L_0046139c:; BB(0x0046139c);
    /* 0046139c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046139f: jmp 0x4613a6 */ goto L_004613a6;
L_004613a1:; BB(0x004613a1);
    /* 004613a1: jmp 0x461372 */ goto L_00461372;
L_004613a3:; BB(0x004613a3);
    /* 004613a3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004613a6:; BB(0x004613a6);
    /* 004613a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004613a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004613a9: ret 8 */ FN_RET(0x00461360); r_esp += 12; return;
}

void f_004613b0(void) /* sub_4613B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004613b0);
    /* 004613b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004613b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004613b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004613b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004613b9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004613bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004613bd: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004613c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004613c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004613c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004613c5: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 004613cb: call 0x452a40 */ r_esp -= 4; W32(r_esp, 0x4613d0u); f_00452a40();
    /* 004613d0: movzx eax, word ptr [ebp - 4] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 004613d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004613d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004613da: movzx ecx, word ptr [edx + ecx*2 + 0xa2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2+0xa2u));
    /* 004613e2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004613e4: je 0x4613fc */ if (fZ) goto L_004613fc;
L_004613e6:; BB(0x004613e6);
    /* 004613e6: movzx edx, word ptr [ebp - 4] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 004613ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004613ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004613f0: movzx eax, word ptr [ecx + eax*2 + 0xac] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2+0xacu));
    /* 004613f8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004613fa: jne 0x46143d */ if (!fZ) goto L_0046143d;
L_004613fc:; BB(0x004613fc);
    /* 004613fc: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 00461400: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461403: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00461406: movzx edx, word ptr [eax + edx*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_eax+r_edx*2+0xa2u));
    /* 0046140e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461410: je 0x461428 */ if (fZ) goto L_00461428;
L_00461412:; BB(0x00461412);
    /* 00461412: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 00461416: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461419: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046141c: movzx ecx, word ptr [edx + ecx*2 + 0xac] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2+0xacu));
    /* 00461424: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461426: jne 0x46143d */ if (!fZ) goto L_0046143d;
L_00461428:; BB(0x00461428);
    /* 00461428: movzx edx, word ptr [ebp - 4] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046142c: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 00461430: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461432: je 0x46143d */ if (fZ) goto L_0046143d;
L_00461434:; BB(0x00461434);
    /* 00461434: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0046143b: jmp 0x461444 */ goto L_00461444;
L_0046143d:; BB(0x0046143d);
    /* 0046143d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00461444:; BB(0x00461444);
    /* 00461444: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 00461447: mov esp, ebp */ r_esp = r_ebp;
    /* 00461449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046144a: ret 4 */ FN_RET(0x004613b0); r_esp += 8; return;
}

void f_00461450(void) /* sub_461450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461450);
    /* 00461450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461451: mov ebp, esp */ r_ebp = r_esp;
    /* 00461453: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461456: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00461459: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00461460: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00461467: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046146e: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00461475: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046147c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00461483: jmp 0x46148e */ goto L_0046148e;
L_00461485:; BB(0x00461485);
    /* 00461485: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461488: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046148b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046148e:; BB(0x0046148e);
    /* 0046148e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00461492: jge 0x461575 */ if ((fS==fO)) goto L_00461575;
L_00461498:; BB(0x00461498);
    /* 00461498: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0046149e: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004614a4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004614a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004614aa: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 004614ae: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004614b1: jne 0x4614b5 */ if (!fZ) goto L_004614b5;
L_004614b3:; BB(0x004614b3);
    /* 004614b3: jmp 0x461485 */ goto L_00461485;
L_004614b5:; BB(0x004614b5);
    /* 004614b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004614b8: cmp dword ptr [ebp + edx*4 - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004614bd: jne 0x4614e9 */ if (!fZ) goto L_004614e9;
L_004614bf:; BB(0x004614bf);
    /* 004614bf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004614c2: movzx ecx, byte ptr [eax + 0x114] */ r_ecx = (u32)R8((u32)(r_eax+0x114u));
    /* 004614c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004614cb: je 0x4614e9 */ if (fZ) goto L_004614e9;
L_004614cd:; BB(0x004614cd);
    /* 004614cd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004614d0: movzx eax, byte ptr [edx + 0x115] */ r_eax = (u32)R8((u32)(r_edx+0x115u));
    /* 004614d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004614d9: jne 0x4614e7 */ if (!fZ) goto L_004614e7;
L_004614db:; BB(0x004614db);
    /* 004614db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004614de: mov eax, dword ptr [ebp + ecx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 004614e2: jmp 0x461578 */ goto L_00461578;
L_004614e7:; BB(0x004614e7);
    /* 004614e7: jmp 0x461485 */ goto L_00461485;
L_004614e9:; BB(0x004614e9);
    /* 004614e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004614ec: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004614f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004614f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4614f6u); f_005dcb00();
    /* 004614f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004614f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004614fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004614ff: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x461504u); f_0063aac0();
    /* 00461504: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00461506: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00461509: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0046150b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046150f: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00461512: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00461515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461517: jne 0x461570 */ if (!fZ) goto L_00461570;
L_00461519:; BB(0x00461519);
    /* 00461519: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046151c: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00461520: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461521: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461526u); f_005dcb00();
    /* 00461526: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461529: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0046152c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046152f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00461535: mov byte ptr [ebp - 0x29], cl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_ecx);
    /* 00461538: movzx edx, byte ptr [ebp - 0x29] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0046153c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046153e: jne 0x461570 */ if (!fZ) goto L_00461570;
L_00461540:; BB(0x00461540);
    /* 00461540: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461543: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 00461547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461548: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46154du); f_005dcb00();
    /* 0046154d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461550: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00461553: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00461556: mov al, byte ptr [edx + 0x4a2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a2u))) & 0xffu);
    /* 0046155c: mov byte ptr [ebp - 0x31], al */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_eax);
    /* 0046155f: movzx ecx, byte ptr [ebp - 0x31] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00461563: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461565: jne 0x461570 */ if (!fZ) goto L_00461570;
L_00461567:; BB(0x00461567);
    /* 00461567: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046156a: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 0046156e: jmp 0x461578 */ goto L_00461578;
L_00461570:; BB(0x00461570);
    /* 00461570: jmp 0x461485 */ goto L_00461485;
L_00461575:; BB(0x00461575);
    /* 00461575: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00461578:; BB(0x00461578);
    /* 00461578: mov esp, ebp */ r_esp = r_ebp;
    /* 0046157a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046157b: ret  */ FN_RET(0x00461450); r_esp += 4; return;
}

void f_00461580(void) /* sub_461580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461580);
    /* 00461580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461581: mov ebp, esp */ r_ebp = r_esp;
    /* 00461583: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461586: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00461589: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046158c: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046158f: mov cl, byte ptr [eax + 0xea] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xeau))) & 0xffu);
    /* 00461595: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00461598: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0046159c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046159e: je 0x4615be */ if (fZ) goto L_004615be;
L_004615a0:; BB(0x004615a0);
    /* 004615a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004615a3: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004615a6: mov cl, byte ptr [eax + 0xef] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xefu))) & 0xffu);
    /* 004615ac: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 004615af: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 004615b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004615b5: je 0x4615be */ if (fZ) goto L_004615be;
L_004615b7:; BB(0x004615b7);
    /* 004615b7: mov eax, 1 */ r_eax = 0x1u;
    /* 004615bc: jmp 0x4615f5 */ goto L_004615f5;
L_004615be:; BB(0x004615be);
    /* 004615be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004615c1: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004615c4: mov cl, byte ptr [eax + 0xea] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xeau))) & 0xffu);
    /* 004615ca: mov byte ptr [ebp - 3], cl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ecx);
    /* 004615cd: movzx edx, byte ptr [ebp - 3] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 004615d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004615d3: jne 0x4615ec */ if (!fZ) goto L_004615ec;
L_004615d5:; BB(0x004615d5);
    /* 004615d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004615d8: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004615db: mov cl, byte ptr [eax + 0xef] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xefu))) & 0xffu);
    /* 004615e1: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 004615e4: movzx edx, byte ptr [ebp - 4] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 004615e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004615ea: je 0x4615f3 */ if (fZ) goto L_004615f3;
L_004615ec:; BB(0x004615ec);
    /* 004615ec: mov eax, 2 */ r_eax = 0x2u;
    /* 004615f1: jmp 0x4615f5 */ goto L_004615f5;
L_004615f3:; BB(0x004615f3);
    /* 004615f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004615f5:; BB(0x004615f5);
    /* 004615f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004615f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004615f8: ret 4 */ FN_RET(0x00461580); r_esp += 8; return;
}

void f_00461600(void) /* sub_461600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461600);
    /* 00461600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461601: mov ebp, esp */ r_ebp = r_esp;
    /* 00461603: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461606: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00461609: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046160c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046160d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461612u); f_005dcb00();
    /* 00461612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461615: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00461618: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0046161b: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x461620u); f_005d52e0();
    /* 00461620: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00461623: mov byte ptr [ebp - 0x4d], cl */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_ecx);
    /* 00461626: movsx edx, byte ptr [ebp - 0x4d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffb3u));
    /* 0046162a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046162d: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00461634: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461638: jne 0x461814 */ if (!fZ) goto L_00461814;
L_0046163e:; BB(0x0046163e);
    /* 0046163e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461642: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00461645: call 0x461580 */ r_esp -= 4; W32(r_esp, 0x46164au); f_00461580();
    /* 0046164a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046164d: jne 0x461724 */ if (!fZ) goto L_00461724;
L_00461653:; BB(0x00461653);
    /* 00461653: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461655: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0046165b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046165d: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00461663: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00461669: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46166bu); call_ind(t); }
    /* 0046166b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046166d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046166e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461673u); f_0064c8a0();
    /* 00461673: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461676: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00461679: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0046167c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046167e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461682: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00461685: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461686: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00461689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046168a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0046168d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00461690: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00461693: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00461696: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00461698: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0046169e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4616a0u); call_ind(t); }
    /* 004616a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004616a2: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004616a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004616aa: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 004616b0: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 004616b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4616b8u); call_ind(t); }
    /* 004616b8: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004616bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004616bc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4616c1u); f_0064c8a0();
    /* 004616c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004616c4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004616c7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004616ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004616cd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004616d0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004616d3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004616d6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004616d9: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004616df: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004616e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004616e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004616e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004616e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004616ea: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004616ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004616ee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4616f3u); f_005dcb00();
    /* 004616f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004616f6: mov ecx, eax */ r_ecx = r_eax;
    /* 004616f8: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4616fdu); f_005d5fb0();
    /* 004616fd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00461700: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00461706: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00461709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046170c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046170d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00461710: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461711: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00461714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461715: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46171au); f_005dcb00();
    /* 0046171a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046171d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046171f: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x461724u); f_005d5cf0();
L_00461724:; BB(0x00461724);
    /* 00461724: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461728: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0046172b: call 0x461580 */ r_esp -= 4; W32(r_esp, 0x461730u); f_00461580();
    /* 00461730: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461732: jne 0x46180f */ if (!fZ) goto L_0046180f;
L_00461738:; BB(0x00461738);
    /* 00461738: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046173a: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 00461740: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00461742: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00461748: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0046174e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x461750u); call_ind(t); }
    /* 00461750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461751: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461756u); f_0064c8a0();
    /* 00461756: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461759: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0046175c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0046175f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00461762: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00461765: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00461768: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0046176b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046176e: fld qword ptr [0x6b3730] */ FPUSH(R_F64((u32)(0x6b3730u)));
    /* 00461774: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00461777: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046177a: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x46177fu); f_0064c560();
    /* 0046177f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00461782: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00461785: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00461788: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046178b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046178d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046178f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461794u); f_0064c8a0();
    /* 00461794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461797: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0046179a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0046179d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046179f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004617a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004617a3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004617a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004617a7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004617aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004617ab: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004617ae: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004617b1: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004617b4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004617b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004617b9: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004617bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4617c1u); call_ind(t); }
    /* 004617c1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004617c4: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004617ca: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004617cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004617d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004617d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004617d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004617d5: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004617d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004617d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4617deu); f_005dcb00();
    /* 004617de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004617e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004617e3: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4617e8u); f_005d5fb0();
    /* 004617e8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004617eb: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004617f1: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 004617f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004617f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004617f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004617fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004617fc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004617ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461800: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461805u); f_005dcb00();
    /* 00461805: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461808: mov ecx, eax */ r_ecx = r_eax;
    /* 0046180a: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x46180fu); f_005d5cf0();
L_0046180f:; BB(0x0046180f);
    /* 0046180f: jmp 0x4618da */ goto L_004618da;
L_00461814:; BB(0x00461814);
    /* 00461814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461816: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461818: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46181du); f_0064c8a0();
    /* 0046181d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461820: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00461823: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00461826: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00461829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046182a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046182d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046182e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461831: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461832: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461837u); f_005dcb00();
    /* 00461837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046183a: mov ecx, eax */ r_ecx = r_eax;
    /* 0046183c: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x461841u); f_005d6050();
    /* 00461841: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461845: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00461848: call 0x461580 */ r_esp -= 4; W32(r_esp, 0x46184du); f_00461580();
    /* 0046184d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046184e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461852: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00461855: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00461858: call 0x462370 */ r_esp -= 4; W32(r_esp, 0x46185du); f_00462370();
    /* 0046185d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461861: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461866u); f_005dcb00();
    /* 00461866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461869: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0046186c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046186f: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x461874u); f_005d52e0();
    /* 00461874: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00461877: mov byte ptr [ebp - 0x65], al */ W8((u32)(r_ebp+0xffffff9bu), (u8)r_eax);
    /* 0046187a: movsx ecx, byte ptr [ebp - 0x65] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff9bu));
    /* 0046187e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00461881: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00461884: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461887: je 0x4618da */ if (fZ) goto L_004618da;
L_00461889:; BB(0x00461889);
    /* 00461889: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046188d: jne 0x4618da */ if (!fZ) goto L_004618da;
L_0046188f:; BB(0x0046188f);
    /* 0046188f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461893: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461898u); f_005dcb00();
    /* 00461898: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046189b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0046189e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004618a0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004618a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004618a5: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004618a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004618ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4618adu); call_ind(t); }
    /* 004618ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004618af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004618b1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4618b6u); f_0064c8a0();
    /* 004618b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004618b9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004618bc: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004618bf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004618c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004618c3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004618c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004618c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004618ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004618cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4618d0u); f_005dcb00();
    /* 004618d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004618d3: mov ecx, eax */ r_ecx = r_eax;
    /* 004618d5: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x4618dau); f_005d6050();
L_004618da:; BB(0x004618da);
    /* 004618da: mov esp, ebp */ r_esp = r_ebp;
    /* 004618dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004618dd: ret 4 */ FN_RET(0x00461600); r_esp += 8; return;
}

void f_004618e0(void) /* sub_4618E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004618e0);
    /* 004618e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004618e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004618e3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004618e6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004618e9: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 004618f0: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 004618f7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004618fe: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00461905: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0046190c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00461913: jmp 0x46191e */ goto L_0046191e;
L_00461915:; BB(0x00461915);
    /* 00461915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461918: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046191b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046191e:; BB(0x0046191e);
    /* 0046191e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00461922: jge 0x4619e5 */ if ((fS==fO)) goto L_004619e5;
L_00461928:; BB(0x00461928);
    /* 00461928: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046192b: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0046192f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461930: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461935u); f_005dcb00();
    /* 00461935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461938: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046193b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046193e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x461943u); f_0063aac0();
    /* 00461943: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00461945: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00461948: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046194a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046194e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00461951: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00461954: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461956: jne 0x4619e0 */ if (!fZ) goto L_004619e0;
L_0046195c:; BB(0x0046195c);
    /* 0046195c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046195f: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 00461963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461964: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461969u); f_005dcb00();
    /* 00461969: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046196c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0046196f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00461972: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00461978: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 0046197b: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0046197f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461981: jne 0x4619e0 */ if (!fZ) goto L_004619e0;
L_00461983:; BB(0x00461983);
    /* 00461983: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461986: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 0046198a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046198b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461990u); f_005dcb00();
    /* 00461990: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461993: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00461996: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00461999: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 0046199f: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 004619a2: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 004619a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004619a8: je 0x4619e0 */ if (fZ) goto L_004619e0;
L_004619aa:; BB(0x004619aa);
    /* 004619aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004619ad: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 004619b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004619b2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004619b5: call 0x4619f0 */ r_esp -= 4; W32(r_esp, 0x4619bau); f_004619f0();
    /* 004619ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004619bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004619bf: je 0x4619e0 */ if (fZ) goto L_004619e0;
L_004619c1:; BB(0x004619c1);
    /* 004619c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004619c4: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 004619c8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004619cb: movzx ecx, byte ptr [eax + edx + 0xfe] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0xfeu));
    /* 004619d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004619d5: jne 0x4619e0 */ if (!fZ) goto L_004619e0;
L_004619d7:; BB(0x004619d7);
    /* 004619d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004619da: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 004619de: jmp 0x4619e8 */ goto L_004619e8;
L_004619e0:; BB(0x004619e0);
    /* 004619e0: jmp 0x461915 */ goto L_00461915;
L_004619e5:; BB(0x004619e5);
    /* 004619e5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004619e8:; BB(0x004619e8);
    /* 004619e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004619ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004619eb: ret  */ FN_RET(0x004618e0); r_esp += 4; return;
}

void f_004619f0(void) /* sub_4619F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004619f0);
    /* 004619f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004619f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004619f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004619f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004619f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004619fa: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004619fd: mov al, byte ptr [eax + 0xf4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xf4u))) & 0xffu);
    /* 00461a03: mov esp, ebp */ r_esp = r_ebp;
    /* 00461a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461a06: ret 4 */ FN_RET(0x004619f0); r_esp += 8; return;
}

void f_00461a10(void) /* sub_461A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461a10);
    /* 00461a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00461a13: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461a19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00461a1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00461a20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00461a23: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 00461a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461a2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461a2d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461a32u); f_0064c8a0();
    /* 00461a32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461a35: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00461a3b: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 00461a41: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00461a47: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00461a4d: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00461a53: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00461a59: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461a5f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461a62: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 00461a68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461a6b: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00461a6e: mov edx, dword ptr [ebp - 0x188] */ r_edx = R32((u32)(r_ebp+0xfffffe78u));
    /* 00461a74: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00461a78: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00461a7d: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00461a80: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00461a83: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00461a87: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 00461a8d: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00461a93: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00461a9d: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00461aa7: mov byte ptr [ebp - 0x10d], 1 */ W8((u32)(r_ebp+0xfffffef3u), 0x1u);
    /* 00461aae: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461ab2: jne 0x461ac4 */ if (!fZ) goto L_00461ac4;
L_00461ab4:; BB(0x00461ab4);
    /* 00461ab4: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461aba: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00461abd: mov byte ptr [ecx + 0xfe], 1 */ W8((u32)(r_ecx+0xfeu), 0x1u);
L_00461ac4:; BB(0x00461ac4);
    /* 00461ac4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ac8: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461ace: call 0x4619f0 */ r_esp -= 4; W32(r_esp, 0x461ad3u); f_004619f0();
    /* 00461ad3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00461ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461ad8: jne 0x461adf */ if (!fZ) goto L_00461adf;
L_00461ada:; BB(0x00461ada);
    /* 00461ada: jmp 0x461ef3 */ goto L_00461ef3;
L_00461adf:; BB(0x00461adf);
    /* 00461adf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00461ae2: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 00461ae8: cmp dword ptr [ebp - 0x198], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461aef: je 0x461b03 */ if (fZ) goto L_00461b03;
L_00461af1:; BB(0x00461af1);
    /* 00461af1: cmp dword ptr [ebp - 0x198], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461af8: je 0x461c11 */ if (fZ) goto L_00461c11;
L_00461afe:; BB(0x00461afe);
    /* 00461afe: jmp 0x461d35 */ goto L_00461d35;
L_00461b03:; BB(0x00461b03);
    /* 00461b03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461b06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461b07: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 00461b0d: call 0x4574a0 */ r_esp -= 4; W32(r_esp, 0x461b12u); f_004574a0();
    /* 00461b12: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00461b18: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461b1e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00461b21: mov dword ptr [ebp - 0x18c], ecx */ W32((u32)(r_ebp+0xfffffe74u), r_ecx);
    /* 00461b27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461b2a: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00461b2d: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00461b33: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00461b37: mov edx, 1 */ r_edx = 0x1u;
    /* 00461b3c: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00461b3f: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00461b42: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00461b46: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00461b4c: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 00461b52: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00461b54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461b57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461b58: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00461b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461b5f: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00461b65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461b66: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461b6c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461b6f: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461b75: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00461b78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00461b7a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00461b80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x461b82u); call_ind(t); }
    /* 00461b82: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00461b89: jge 0x461b9c */ if ((fS==fO)) goto L_00461b9c;
L_00461b8b:; BB(0x00461b8b);
    /* 00461b8b: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00461b95: mov byte ptr [ebp - 0x10d], 0 */ W8((u32)(r_ebp+0xfffffef3u), 0x0u);
L_00461b9c:; BB(0x00461b9c);
    /* 00461b9c: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 00461ba2: imul eax, dword ptr [ebp - 0x11c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffee4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00461ba9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00461baa: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00461baf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00461baf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00461baf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00461bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461bb2: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00461bb8: imul edx, dword ptr [ebp - 0x120] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffee0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00461bbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461bc0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461bc5u); f_0064c8a0();
    /* 00461bc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461bc8: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 00461bce: mov dword ptr [ebp - 0x140], edx */ W32((u32)(r_ebp+0xfffffec0u), r_edx);
    /* 00461bd4: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00461bda: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00461be0: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00461be6: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00461bec: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00461bf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461bf3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461bf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461bf7: push 0x6ba568 */ { u32 v = 0x6ba568u; r_esp -= 4; W32(r_esp, v); }
    /* 00461bfc: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00461c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461c03: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x461c09u); call_ind(t); }
    /* 00461c09: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461c0c: jmp 0x461d35 */ goto L_00461d35;
L_00461c11:; BB(0x00461c11);
    /* 00461c11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461c13: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00461c15: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461c1au); f_0064c8a0();
    /* 00461c1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461c1d: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 00461c23: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
    /* 00461c29: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461c2f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461c32: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 00461c38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461c3b: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00461c3e: mov edx, dword ptr [ebp - 0x190] */ r_edx = R32((u32)(r_ebp+0xfffffe70u));
    /* 00461c44: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00461c48: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00461c4d: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00461c50: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00461c53: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00461c57: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 00461c5d: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 00461c63: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00461c69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461c6a: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00461c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461c71: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 00461c77: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x461c7cu); f_0064c7a0();
    /* 00461c7c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00461c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461c81: je 0x461c98 */ if (fZ) goto L_00461c98;
L_00461c83:; BB(0x00461c83);
    /* 00461c83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461c86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461c87: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 00461c8d: call 0x457600 */ r_esp -= 4; W32(r_esp, 0x461c92u); f_00457600();
    /* 00461c92: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00461c98:; BB(0x00461c98);
    /* 00461c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461c9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461c9c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461ca1u); f_0064c8a0();
    /* 00461ca1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461ca4: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 00461caa: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
    /* 00461cb0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00461cb2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461cb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461cb6: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 00461cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461cbd: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 00461cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461cc4: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461cca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461ccd: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461cd3: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00461cd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00461cd8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00461cde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x461ce0u); call_ind(t); }
    /* 00461ce0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461ce2: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00461ce8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ce9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461ceeu); f_0064c8a0();
    /* 00461cee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461cf1: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00461cf7: mov dword ptr [ebp - 0x160], edx */ W32((u32)(r_ebp+0xfffffea0u), r_edx);
    /* 00461cfd: mov edx, dword ptr [ebp - 0x164] */ r_edx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00461d03: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 00461d09: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 00461d0f: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00461d15: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00461d1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d1c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d20: push 0x6ba548 */ { u32 v = 0x6ba548u; r_esp -= 4; W32(r_esp, v); }
    /* 00461d25: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00461d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461d2c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x461d32u); call_ind(t); }
    /* 00461d32: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00461d35:; BB(0x00461d35);
    /* 00461d35: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00461d3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d3c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x461d41u); f_0062fde0();
    /* 00461d41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461d44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461d46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461d48: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461d4du); f_0064c8a0();
    /* 00461d4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461d50: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 00461d56: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
    /* 00461d5c: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 00461d62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d63: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00461d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461d6a: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 00461d70: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x461d75u); f_0064c6e0();
    /* 00461d75: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00461d78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461d7a: je 0x461e0d */ if (fZ) goto L_00461e0d;
L_00461d80:; BB(0x00461d80);
    /* 00461d80: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00461d86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d87: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00461d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461d8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461d91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461d92: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461d97u); f_005dcb00();
    /* 00461d97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461d9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00461d9c: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x461da1u); f_005d5fb0();
    /* 00461da1: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00461da7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461da8: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00461dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461daf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461db3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461db8u); f_005dcb00();
    /* 00461db8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461dbb: mov ecx, eax */ r_ecx = r_eax;
    /* 00461dbd: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x461dc2u); f_005d5cf0();
    /* 00461dc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00461dc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461dc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461dc8: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00461dce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461dcf: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00461dd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461dd6: lea edx, [ebp - 0x174] */ r_edx = (u32)(r_ebp+0xfffffe8cu);
    /* 00461ddc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ddd: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 00461de3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x461de8u); f_0064c5c0();
    /* 00461de8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00461deb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461dec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00461dee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461def: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461df5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00461df8: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461dfe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461e01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00461e03: mov ecx, eax */ r_ecx = r_eax;
    /* 00461e05: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00461e0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x461e0du); call_ind(t); }
L_00461e0d:; BB(0x00461e0d);
    /* 00461e0d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461e11: jne 0x461ef3 */ if (!fZ) goto L_00461ef3;
L_00461e17:; BB(0x00461e17);
    /* 00461e17: movzx ecx, byte ptr [ebp - 0x10d] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef3u));
    /* 00461e1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461e20: je 0x461e48 */ if (fZ) goto L_00461e48;
L_00461e22:; BB(0x00461e22);
    /* 00461e22: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00461e28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461e29: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 00461e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461e30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461e34: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461e39u); f_005dcb00();
    /* 00461e39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461e3c: mov ecx, eax */ r_ecx = r_eax;
    /* 00461e3e: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x461e43u); f_005d5cf0();
    /* 00461e43: jmp 0x461ef3 */ goto L_00461ef3;
L_00461e48:; BB(0x00461e48);
    /* 00461e48: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00461e4e: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00461e51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461e52: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 00461e58: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00461e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461e5c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461e61u); f_0064c8a0();
    /* 00461e61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461e64: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 00461e6a: mov dword ptr [ebp - 0x178], edx */ W32((u32)(r_ebp+0xfffffe88u), r_edx);
    /* 00461e70: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00461e76: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 00461e7c: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00461e82: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 00461e88: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00461e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461e8f: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00461e95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461e96: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00461e99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461e9a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461e9fu); f_005dcb00();
    /* 00461e9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461ea2: mov ecx, eax */ r_ecx = r_eax;
    /* 00461ea4: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x461ea9u); f_005d5fb0();
    /* 00461ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461eab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461ead: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x461eb2u); f_0064c8a0();
    /* 00461eb2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461eb5: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 00461ebb: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 00461ec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00461ec3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461ec7: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 00461ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ece: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 00461ed4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ed5: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461edb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00461ede: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00461ee4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00461ee7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00461ee9: mov ecx, eax */ r_ecx = r_eax;
    /* 00461eeb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00461ef1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x461ef3u); call_ind(t); }
L_00461ef3:; BB(0x00461ef3);
    /* 00461ef3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00461ef6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00461ef8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x461efdu); f_00686d72();
    /* 00461efd: mov esp, ebp */ r_esp = r_ebp;
    /* 00461eff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461f00: ret 8 */ FN_RET(0x00461a10); r_esp += 12; return;
}

void f_00461f10(void) /* sub_461F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461f10);
    /* 00461f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00461f13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461f16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00461f19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461f1d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461f22u); f_005dcb00();
    /* 00461f22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461f25: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00461f28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00461f2b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x461f30u); f_0063aac0();
    /* 00461f30: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00461f32: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00461f35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00461f37: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461f3b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00461f3e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00461f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461f43: je 0x461f49 */ if (fZ) goto L_00461f49;
L_00461f45:; BB(0x00461f45);
    /* 00461f45: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00461f47: jmp 0x461f72 */ goto L_00461f72;
L_00461f49:; BB(0x00461f49);
    /* 00461f49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00461f4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461f4d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x461f52u); f_005dcb00();
    /* 00461f52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461f55: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00461f58: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00461f5b: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00461f61: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00461f64: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00461f68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461f6a: je 0x461f70 */ if (fZ) goto L_00461f70;
L_00461f6c:; BB(0x00461f6c);
    /* 00461f6c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00461f6e: jmp 0x461f72 */ goto L_00461f72;
L_00461f70:; BB(0x00461f70);
    /* 00461f70: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00461f72:; BB(0x00461f72);
    /* 00461f72: mov esp, ebp */ r_esp = r_ebp;
    /* 00461f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461f75: ret 4 */ FN_RET(0x00461f10); r_esp += 8; return;
}

