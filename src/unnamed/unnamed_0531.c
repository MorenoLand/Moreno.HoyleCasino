#include "protos.h"

void f_00531a10(void) /* sub_531A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531a10);
    /* 00531a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00531a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531a17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a1a: movzx ecx, byte ptr [eax + 0x184] */ r_ecx = (u32)R8((u32)(r_eax+0x184u));
    /* 00531a21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531a23: je 0x531ad1 */ if (fZ) goto L_00531ad1;
L_00531a29:; BB(0x00531a29);
    /* 00531a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00531a2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00531a2d: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x531a32u); f_0062fc30();
    /* 00531a32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531a37: je 0x531a86 */ if (fZ) goto L_00531a86;
L_00531a39:; BB(0x00531a39);
    /* 00531a39: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00531a3b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x531a40u); f_0062fbf0();
    /* 00531a40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531a43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a46: mov dword ptr [edx + 0x198], eax */ W32((u32)(r_edx+0x198u), r_eax);
    /* 00531a4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a4f: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 00531a55: mov edx, dword ptr [ecx*4 + 0x724d24] */ r_edx = R32((u32)(r_ecx*4+0x724d24u));
    /* 00531a5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531a5d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531a62u); f_00630f40();
    /* 00531a62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531a66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a69: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531a6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a72: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531a78: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00531a7a: mov ecx, eax */ r_ecx = r_eax;
    /* 00531a7c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00531a82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531a84u); call_ind(t); }
    /* 00531a84: jmp 0x531acf */ goto L_00531acf;
L_00531a86:; BB(0x00531a86);
    /* 00531a86: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00531a88: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x531a8du); f_0062fbf0();
    /* 00531a8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531a90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a93: mov dword ptr [ecx + 0x198], eax */ W32((u32)(r_ecx+0x198u), r_eax);
    /* 00531a99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531a9c: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00531aa2: mov ecx, dword ptr [eax*4 + 0x724d0c] */ r_ecx = R32((u32)(r_eax*4+0x724d0cu));
    /* 00531aa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531aaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531aafu); f_00630f40();
    /* 00531aaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531ab3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ab6: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531abc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531abf: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00531ac5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531ac7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00531acd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531acfu); call_ind(t); }
L_00531acf:; BB(0x00531acf);
    /* 00531acf: jmp 0x531b1a */ goto L_00531b1a;
L_00531ad1:; BB(0x00531ad1);
    /* 00531ad1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00531ad3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x531ad8u); f_0062fbf0();
    /* 00531ad8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531adb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ade: mov dword ptr [ecx + 0x198], eax */ W32((u32)(r_ecx+0x198u), r_eax);
    /* 00531ae4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ae7: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00531aed: mov ecx, dword ptr [eax*4 + 0x724d0c] */ r_ecx = R32((u32)(r_eax*4+0x724d0cu));
    /* 00531af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531af5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531afau); f_00630f40();
    /* 00531afa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531afe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b01: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b0a: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00531b10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531b12: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00531b18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531b1au); call_ind(t); }
L_00531b1a:; BB(0x00531b1a);
    /* 00531b1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b1d: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00531b23: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x531b28u); f_005ef050();
    /* 00531b28: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531b2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b2e: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 00531b34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b37: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00531b3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531b3e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531b41: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00531b47: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x531b4cu); f_005ecc60();
    /* 00531b4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00531b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531b4f: ret  */ FN_RET(0x00531a10); r_esp += 4; return;
}

void f_00531b50(void) /* sub_531B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531b50);
    /* 00531b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00531b53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531b56: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00531b5b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531b5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00531b60: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00531b63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00531b66: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00531b69: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531b6d: je 0x531b80 */ if (fZ) goto L_00531b80;
L_00531b6f:; BB(0x00531b6f);
    /* 00531b6f: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531b73: je 0x531bbe */ if (fZ) goto L_00531bbe;
L_00531b75:; BB(0x00531b75);
    /* 00531b75: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531b79: je 0x531bf9 */ if (fZ) goto L_00531bf9;
L_00531b7b:; BB(0x00531b7b);
    /* 00531b7b: jmp 0x531c3e */ goto L_00531c3e;
L_00531b80:; BB(0x00531b80);
    /* 00531b80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531b83: mov byte ptr [ecx + 0x1c0], 1 */ W8((u32)(r_ecx+0x1c0u), 0x1u);
    /* 00531b8a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531b8d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00531b90: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 00531b96: push 0x6c3f5c */ { u32 v = 0x6c3f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00531b9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531ba0u); f_00630f40();
    /* 00531ba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531ba4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531ba7: call 0x531c90 */ r_esp -= 4; W32(r_esp, 0x531bacu); f_00531c90();
    /* 00531bac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531baf: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 00531bb9: jmp 0x531c3e */ goto L_00531c3e;
L_00531bbe:; BB(0x00531bbe);
    /* 00531bbe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531bc1: mov byte ptr [edx + 0x1c0], 1 */ W8((u32)(r_edx+0x1c0u), 0x1u);
    /* 00531bc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531bcb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00531bce: mov dword ptr [eax + 0x1a4], ecx */ W32((u32)(r_eax+0x1a4u), r_ecx);
    /* 00531bd4: push 0x6c3f40 */ { u32 v = 0x6c3f40u; r_esp -= 4; W32(r_esp, v); }
    /* 00531bd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531bdeu); f_00630f40();
    /* 00531bde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531be1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531be2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531be5: call 0x531c90 */ r_esp -= 4; W32(r_esp, 0x531beau); f_00531c90();
    /* 00531bea: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531bed: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
    /* 00531bf7: jmp 0x531c3e */ goto L_00531c3e;
L_00531bf9:; BB(0x00531bf9);
    /* 00531bf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531bfc: call 0x531e00 */ r_esp -= 4; W32(r_esp, 0x531c01u); f_00531e00();
    /* 00531c01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531c04: add eax, 0x1a8 */ {  u32 a = r_eax; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531c0a: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00531c0f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00531c12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531c13: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x531c19u); call_ind(t); }
    /* 00531c19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531c1c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531c1f: mov byte ptr [edx + 0x1c0], 1 */ W8((u32)(r_edx+0x1c0u), 0x1u);
    /* 00531c26: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531c29: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00531c2c: mov dword ptr [eax + 0x1a4], ecx */ W32((u32)(r_eax+0x1a4u), r_ecx);
    /* 00531c32: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00531c35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531c36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531c39: call 0x531c90 */ r_esp -= 4; W32(r_esp, 0x531c3eu); f_00531c90();
L_00531c3e:; BB(0x00531c3e);
    /* 00531c3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c41: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531c43: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x531c48u); f_00686d72();
    /* 00531c48: mov esp, ebp */ r_esp = r_ebp;
    /* 00531c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531c4b: ret 8 */ FN_RET(0x00531b50); r_esp += 12; return;
}

void f_00531c50(void) /* sub_531C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531c50);
    /* 00531c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00531c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531c57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c5a: mov byte ptr [eax + 0x1c0], 1 */ W8((u32)(r_eax+0x1c0u), 0x1u);
    /* 00531c61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c64: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00531c67: mov dword ptr [ecx + 0x1a4], edx */ W32((u32)(r_ecx+0x1a4u), r_edx);
    /* 00531c6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00531c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531c71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c74: call 0x531c90 */ r_esp -= 4; W32(r_esp, 0x531c79u); f_00531c90();
    /* 00531c79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c7c: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 00531c86: mov esp, ebp */ r_esp = r_ebp;
    /* 00531c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531c89: ret 8 */ FN_RET(0x00531c50); r_esp += 12; return;
}

void f_00531c90(void) /* sub_531C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531c90);
    /* 00531c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00531c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531c97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531c9a: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531ca0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ca3: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531ca9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00531cab: mov ecx, eax */ r_ecx = r_eax;
    /* 00531cad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00531cb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531cb2u); call_ind(t); }
    /* 00531cb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531cb5: mov dword ptr [ecx + 0x198], 0xffffffff */ W32((u32)(r_ecx+0x198u), 0xffffffffu);
    /* 00531cbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00531cc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531cc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531cc6: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531ccc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ccf: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531cd5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00531cd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00531cd9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00531cdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531ce1u); call_ind(t); }
    /* 00531ce1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531ce4: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00531cea: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x531cefu); f_005ef050();
    /* 00531cef: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531cf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531cf5: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 00531cfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531cfe: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00531d04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531d05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d08: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00531d0e: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x531d13u); f_005ecc60();
    /* 00531d13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d19: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00531d1c: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531d1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d22: sub eax, dword ptr [edx + 0x190] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x190u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531d28: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00531d29: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531d2b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00531d2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d30: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531d33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d36: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 00531d3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d3f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00531d42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531d43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d46: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00531d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531d4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d50: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531d56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d59: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531d5f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00531d61: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00531d64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531d66u); call_ind(t); }
    /* 00531d66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d69: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531d6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d72: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531d78: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00531d7a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00531d7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531d7fu); call_ind(t); }
    /* 00531d7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d82: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x531d87u); f_005eb570();
    /* 00531d87: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00531d8d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x531d92u); f_005f3e50();
    /* 00531d92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531d95: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 00531d9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00531d9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531d9e: ret 4 */ FN_RET(0x00531c90); r_esp += 8; return;
}

void f_00531db0(void) /* sub_531DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531db0);
    /* 00531db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00531db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531db7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00531dbd: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x531dc2u); f_005f3e50();
    /* 00531dc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531dc5: sub eax, dword ptr [ecx + 0x19c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x19cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531dcc: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x531dd1u); f_00686eba();
    /* 00531dd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531dd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531dd7: cmp eax, dword ptr [edx + 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x178u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531ddd: jge 0x531de5 */ if ((fS==fO)) goto L_00531de5;
L_00531ddf:; BB(0x00531ddf);
    /* 00531ddf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00531de1: jmp 0x531dfb */ goto L_00531dfb;
L_00531de5:; BB(0x00531de5);
    /* 00531de5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00531deb: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x531df0u); f_005f3e50();
    /* 00531df0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531df3: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 00531df9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00531dfb:; BB(0x00531dfb);
    /* 00531dfb: mov esp, ebp */ r_esp = r_ebp;
    /* 00531dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531dfe: ret  */ FN_RET(0x00531db0); r_esp += 4; return;
}

void f_00531e00(void) /* sub_531E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531e00);
    /* 00531e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00531e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531e07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531e0a: mov byte ptr [eax + 0x1a8], 0 */ W8((u32)(r_eax+0x1a8u), 0x0u);
    /* 00531e11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531e14: add ecx, 0x1a8 */ {  u32 a = r_ecx; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00531e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531e1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531e1e: call 0x531e30 */ r_esp -= 4; W32(r_esp, 0x531e23u); f_00531e30();
    /* 00531e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531e24: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x531e29u); f_006311e0();
    /* 00531e29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531e2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00531e2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531e2f: ret  */ FN_RET(0x00531e00); r_esp += 4; return;
}

