#include "protos.h"

void f_0063c620(void) /* sub_63C620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063c620);
    /* 0063c620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c621: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c625: push 0x6abc33 */ { u32 v = 0x6abc33u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c62a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063c630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c631: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063c637: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063c63c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063c63e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c63f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063c642: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063c648: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0063c64b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063c652: jmp 0x63c65d */ goto L_0063c65d;
L_0063c654:; BB(0x0063c654);
    /* 0063c654: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c657: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c65a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0063c65d:; BB(0x0063c65d);
    /* 0063c65d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063c663: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c665: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063c66b: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063c671: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c673u); call_ind(t); }
    /* 0063c673: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c676: jge 0x63c6c0 */ if ((fS==fO)) goto L_0063c6c0;
L_0063c678:; BB(0x0063c678);
    /* 0063c678: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c67b: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063c681: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c684: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063c687: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c68b: je 0x63c6be */ if (fZ) goto L_0063c6be;
L_0063c68d:; BB(0x0063c68d);
    /* 0063c68d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c68f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c692: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063c698: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c69b: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063c69e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063c6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c6a2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c6a5: call 0x63d570 */ r_esp -= 4; W32(r_esp, 0x63c6aau); f_0063d570();
    /* 0063c6aa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c6ad: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063c6b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c6b6: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063c6b9: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x63c6beu); f_0063b2d0();
L_0063c6be:; BB(0x0063c6be);
    /* 0063c6be: jmp 0x63c654 */ goto L_0063c654;
L_0063c6c0:; BB(0x0063c6c0);
    /* 0063c6c0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c6c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c6c8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c6ce: mov eax, dword ptr [edx + 0x13c] */ r_eax = R32((u32)(r_edx+0x13cu));
    /* 0063c6d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c6d6u); call_ind(t); }
    /* 0063c6d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063c6d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c6db: je 0x63c6f2 */ if (fZ) goto L_0063c6f2;
L_0063c6dd:; BB(0x0063c6dd);
    /* 0063c6dd: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c6e0: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063c6e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c6e7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c6ed: call 0x64d5e0 */ r_esp -= 4; W32(r_esp, 0x63c6f2u); f_0064d5e0();
L_0063c6f2:; BB(0x0063c6f2);
    /* 0063c6f2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063c6f9: jmp 0x63c704 */ goto L_0063c704;
L_0063c6fb:; BB(0x0063c6fb);
    /* 0063c6fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c6fe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c701: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063c704:; BB(0x0063c704);
    /* 0063c704: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063c70a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c70c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063c712: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063c718: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c71au); call_ind(t); }
    /* 0063c71a: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c71d: jge 0x63cfa6 */ if ((fS==fO)) goto L_0063cfa6;
L_0063c723:; BB(0x0063c723);
    /* 0063c723: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c726: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063c72c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c72f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063c732: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063c735: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c738: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63c73du); f_0063aac0();
    /* 0063c73d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063c73f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063c742: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c746: je 0x63c764 */ if (fZ) goto L_0063c764;
L_0063c748:; BB(0x0063c748);
    /* 0063c748: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063c74b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63c750u); f_0063aac0();
    /* 0063c750: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063c752: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0063c755: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c759: je 0x63c764 */ if (fZ) goto L_0063c764;
L_0063c75b:; BB(0x0063c75b);
    /* 0063c75b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0063c762: jmp 0x63c76b */ goto L_0063c76b;
L_0063c764:; BB(0x0063c764);
    /* 0063c764: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0063c76b:; BB(0x0063c76b);
    /* 0063c76b: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 0063c76f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c771: je 0x63c88d */ if (fZ) goto L_0063c88d;
L_0063c777:; BB(0x0063c777);
    /* 0063c777: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c77a: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c77d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c77e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c781: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c786u); f_005fb300();
    /* 0063c786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c788: jne 0x63c7ff */ if (!fZ) goto L_0063c7ff;
L_0063c78a:; BB(0x0063c78a);
    /* 0063c78a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c78c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c78e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063c790: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c792: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c794: push 0x6dbb38 */ { u32 v = 0x6dbb38u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c799: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63c79eu); f_00630f40();
    /* 0063c79e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7a4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c7a7: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063c7ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c7b0: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0063c7b4: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c7b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7b8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c7bb: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063c7c1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c7c4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0063c7c6: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0063c7c8: and edx, 0x49 */ {  u32 a = r_edx; u32 b = 0x49u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0063c7cb: add edx, 0x69 */ {  u32 a = r_edx; u32 b = 0x69u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c7ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c7d1: add edx, dword ptr [ecx + eax*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*8)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c7d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7d5: push 0x30d4c8 */ { u32 v = 0x30d4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c7dd: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c7e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7e3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c7e6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63c7ebu); f_005f9de0();
    /* 0063c7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7ee: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c7f0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c7f3: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c7f8u); f_005fb480();
    /* 0063c7f8: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c7fa: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c7ffu); f_005ff5a0();
L_0063c7ff:; BB(0x0063c7ff);
    /* 0063c7ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c802: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c805: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c806: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c809: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c80eu); f_005fb300();
    /* 0063c80e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c810: je 0x63c846 */ if (fZ) goto L_0063c846;
L_0063c812:; BB(0x0063c812);
    /* 0063c812: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c815: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c819: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c81c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c821u); f_005fb300();
    /* 0063c821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c824: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c826: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c829: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c82eu); f_005fb480();
    /* 0063c82e: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c830: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63c835u); f_005ff670();
    /* 0063c835: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c838: add ecx, 0x1d */ {  u32 a = r_ecx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c83b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c83c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c83e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c841: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63c846u); f_005fbcb0();
L_0063c846:; BB(0x0063c846);
    /* 0063c846: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c849: add edx, 0x25 */ {  u32 a = r_edx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c84c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c84d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c850: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63c855u); f_005fb350();
    /* 0063c855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c857: je 0x63c88d */ if (fZ) goto L_0063c88d;
L_0063c859:; BB(0x0063c859);
    /* 0063c859: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c85c: add eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c85f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c860: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c863: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63c868u); f_005fb350();
    /* 0063c868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c869: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c86b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c86d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c870: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c875u); f_005fb480();
    /* 0063c875: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c877: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63c87cu); f_005ff670();
    /* 0063c87c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c87f: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c882: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c883: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c885: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c888: call 0x5fbce0 */ r_esp -= 4; W32(r_esp, 0x63c88du); f_005fbce0();
L_0063c88d:; BB(0x0063c88d);
    /* 0063c88d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c890: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063c896: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c899: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063c89c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0063c89f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063c8a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63c8a7u); f_0063aac0();
    /* 0063c8a7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063c8a9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063c8ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c8ae: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c8b2: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063c8b5: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063c8b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c8ba: je 0x63ca28 */ if (fZ) goto L_0063ca28;
L_0063c8c0:; BB(0x0063c8c0);
    /* 0063c8c0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c8c3: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063c8c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c8cc: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063c8cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c8d1: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c8d5: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0063c8d8: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063c8db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c8dd: jne 0x63c964 */ if (!fZ) goto L_0063c964;
L_0063c8e3:; BB(0x0063c8e3);
    /* 0063c8e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c8e6: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c8e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8ea: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c8ed: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c8f2u); f_005fb300();
    /* 0063c8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c8f4: jne 0x63c964 */ if (!fZ) goto L_0063c964;
L_0063c8f6:; BB(0x0063c8f6);
    /* 0063c8f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8fa: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8fc: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c8fe: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c900: push 0x6dbb20 */ { u32 v = 0x6dbb20u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c905: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63c90au); f_00630f40();
    /* 0063c90a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c90d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c90e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c910: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c913: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063c919: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c91c: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0063c920: add ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c924: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c927: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063c92d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c930: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 0063c933: add edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c93a: push 0x30d4c8 */ { u32 v = 0x30d4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c93f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c942: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c946: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c948: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c94b: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63c950u); f_005f9de0();
    /* 0063c950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c953: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c955: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c958: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c95du); f_005fb480();
    /* 0063c95d: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c95f: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c964u); f_005ff5a0();
L_0063c964:; BB(0x0063c964);
    /* 0063c964: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c967: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c96a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c96b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c96e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c973u); f_005fb300();
    /* 0063c973: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c975: je 0x63c9ab */ if (fZ) goto L_0063c9ab;
L_0063c977:; BB(0x0063c977);
    /* 0063c977: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c97a: add edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c97d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c97e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c981: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c986u); f_005fb300();
    /* 0063c986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c987: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c989: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c98b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c98e: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c993u); f_005fb480();
    /* 0063c993: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c995: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63c99au); f_005ff670();
    /* 0063c99a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c99d: add eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9a3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c9a6: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63c9abu); f_005fbcb0();
L_0063c9ab:; BB(0x0063c9ab);
    /* 0063c9ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c9ae: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c9b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9b2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c9b5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63c9bau); f_005fb350();
    /* 0063c9ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c9bc: jne 0x63ca28 */ if (!fZ) goto L_0063ca28;
L_0063c9be:; BB(0x0063c9be);
    /* 0063c9be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9c0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9c4: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9c6: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9c8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9ca: push 0x6dbb04 */ { u32 v = 0x6dbb04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63c9d4u); f_00630f40();
    /* 0063c9d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063c9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9da: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c9dd: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063c9e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c9e6: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0063c9ea: add edx, 0x6e */ {  u32 a = r_edx; u32 b = 0x6eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c9ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9ee: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063c9f1: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063c9f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c9fa: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 0063c9fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c9fe: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ca06: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ca09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca0c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca0f: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x63ca14u); f_005f9ef0();
    /* 0063ca14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca17: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca19: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca1c: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63ca21u); f_005fb480();
    /* 0063ca21: mov ecx, eax */ r_ecx = r_eax;
    /* 0063ca23: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63ca28u); f_005ff5a0();
L_0063ca28:; BB(0x0063ca28);
    /* 0063ca28: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca2b: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063ca31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ca34: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063ca37: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0063ca3a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063ca3d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63ca42u); f_0063aac0();
    /* 0063ca42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063ca44: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063ca47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ca49: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ca4d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063ca50: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063ca53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ca55: je 0x63cbbe */ if (fZ) goto L_0063cbbe;
L_0063ca5b:; BB(0x0063ca5b);
    /* 0063ca5b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca60: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ca63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca64: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca67: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x63ca6cu); f_005fb5a0();
    /* 0063ca6c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ca6f: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ca72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca73: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca76: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63ca7bu); f_005fb5e0();
    /* 0063ca7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ca7d: je 0x63cabb */ if (fZ) goto L_0063cabb;
L_0063ca7f:; BB(0x0063ca7f);
    /* 0063ca7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ca82: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063ca85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca86: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ca89: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63ca8eu); f_005fb5e0();
    /* 0063ca8e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0063ca91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca95: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca99: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca9b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ca9d: push 0x6dbaf4 */ { u32 v = 0x6dbaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063caa2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63caa7u); f_00630f40();
    /* 0063caa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063caaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063caab: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063caae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063cab0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063cab3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0063cab9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63cabbu); call_ind(t); }
L_0063cabb:; BB(0x0063cabb);
    /* 0063cabb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cabe: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cac2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cac5: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cacau); f_005fb300();
    /* 0063caca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cacb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cacd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cacf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cad2: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cad7u); f_005fb480();
    /* 0063cad7: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cad9: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cadeu); f_005ff670();
    /* 0063cade: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cae1: add edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cae4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cae5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cae8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63caedu); f_005fb300();
    /* 0063caed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063caee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063caf0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063caf2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063caf5: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cafau); f_005fb480();
    /* 0063cafa: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cafc: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cb01u); f_005ff670();
    /* 0063cb01: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb04: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cb07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb08: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb0b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cb10u); f_005fb300();
    /* 0063cb10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb13: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb15: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb18: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cb1du); f_005fb480();
    /* 0063cb1d: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cb1f: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cb24u); f_005ff670();
    /* 0063cb24: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb27: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cb2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb2b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb2e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63cb33u); f_005fb350();
    /* 0063cb33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb36: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb38: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb3b: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cb40u); f_005fb480();
    /* 0063cb40: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cb42: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cb47u); f_005ff670();
    /* 0063cb47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb4b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb4e: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x63cb53u); f_005fb2b0();
    /* 0063cb53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb56: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb58: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb5b: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cb60u); f_005fb480();
    /* 0063cb60: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cb62: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cb67u); f_005ff670();
    /* 0063cb67: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb6a: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cb6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb70: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb73: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63cb78u); f_005fbcb0();
    /* 0063cb78: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb7b: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cb7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb81: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb84: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63cb89u); f_005fbcb0();
    /* 0063cb89: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb8c: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cb8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cb92: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cb95: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63cb9au); f_005fbcb0();
    /* 0063cb9a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cb9d: add eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cba1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cba3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cba6: call 0x5fbce0 */ r_esp -= 4; W32(r_esp, 0x63cbabu); f_005fbce0();
    /* 0063cbab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cbae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbb1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cbb4: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x63cbb9u); f_005fbc80();
    /* 0063cbb9: jmp 0x63cf90 */ goto L_0063cf90;
L_0063cbbe:; BB(0x0063cbbe);
    /* 0063cbbe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cbc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbc2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cbc5: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x63cbcau); f_005fb2b0();
    /* 0063cbca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cbcc: jne 0x63cc27 */ if (!fZ) goto L_0063cc27;
L_0063cbce:; BB(0x0063cbce);
    /* 0063cbce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbd0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbd9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cbdc: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063cbe2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cbe5: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 0063cbe9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063cbec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cbed: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cbf0: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063cbf6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cbf9: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0063cbfc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cbff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc00: push 0x30d4e8 */ { u32 v = 0x30d4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc05: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cc08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc0b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc0e: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x63cc13u); f_005f9ce0();
    /* 0063cc13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc16: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc18: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc1b: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cc20u); f_005fb480();
    /* 0063cc20: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cc22: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63cc27u); f_005ff5a0();
L_0063cc27:; BB(0x0063cc27);
    /* 0063cc27: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc29: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63cc2eu); f_00686d82();
    /* 0063cc2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063cc31: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063cc34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063cc3b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cc3f: je 0x63cc4e */ if (fZ) goto L_0063cc4e;
L_0063cc41:; BB(0x0063cc41);
    /* 0063cc41: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063cc44: call 0x6454f0 */ r_esp -= 4; W32(r_esp, 0x63cc49u); f_006454f0();
    /* 0063cc49: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0063cc4c: jmp 0x63cc55 */ goto L_0063cc55;
L_0063cc4e:; BB(0x0063cc4e);
    /* 0063cc4e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0063cc55:; BB(0x0063cc55);
    /* 0063cc55: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063cc58: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063cc5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063cc62: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc65: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063cc6b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cc6e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063cc71: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063cc74: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0063cc77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc7d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc81: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc84: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063cc8a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cc8d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063cc90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cc91: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cc94: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063cc9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cc9d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063cca0: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063cca3: call 0x645820 */ r_esp -= 4; W32(r_esp, 0x63cca8u); f_00645820();
    /* 0063cca8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccaa: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ccad: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063ccb3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ccb6: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063ccb9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063ccbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccbd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ccc0: call 0x63d4b0 */ r_esp -= 4; W32(r_esp, 0x63ccc5u); f_0063d4b0();
    /* 0063ccc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccc9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cccc: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063ccd2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ccd5: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063ccd8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063ccdb: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x63cce0u); f_006464d0();
    /* 0063cce0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cce3: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063cce9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ccec: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 0063ccf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ccf1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ccf4: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063ccfa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ccfd: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0063cd00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd01: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd04: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063cd0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd0d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063cd10: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063cd13: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x63cd18u); f_00646150();
    /* 0063cd18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd1a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd1d: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063cd23: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd26: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063cd29: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063cd2c: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x63cd31u); f_00646380();
    /* 0063cd31: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd34: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063cd3a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd3d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063cd40: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0063cd43: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0063cd46: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63cd4bu); f_0063aac0();
    /* 0063cd4b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cd4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd4f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd53: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd56: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x63cd5bu); f_005fb5a0();
    /* 0063cd5b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd5f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd62: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x63cd67u); f_005fb550();
    /* 0063cd67: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0063cd6a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd6d: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063cd73: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd76: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0063cd7a: add ecx, 0x57 */ {  u32 a = r_ecx; u32 b = 0x57u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cd7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd7e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cd81: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063cd87: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cd8a: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 0063cd8d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cd90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cd91: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0063cd94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063cd96: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0063cd99: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0063cd9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63cd9eu); call_ind(t); }
    /* 0063cd9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cda1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cda4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cda5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cda8: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63cdadu); f_005fb5e0();
    /* 0063cdad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063cdaf: je 0x63cdef */ if (fZ) goto L_0063cdef;
L_0063cdb1:; BB(0x0063cdb1);
    /* 0063cdb1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cdb4: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cdb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdb8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cdbb: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63cdc0u); f_005fb5e0();
    /* 0063cdc0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0063cdc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdc9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdcd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdcf: push 0x6dbae0 */ { u32 v = 0x6dbae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdd4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63cdd9u); f_00630f40();
    /* 0063cdd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063cddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cddd: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0063cde0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063cde2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0063cde5: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0063cdeb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63cdedu); call_ind(t); }
    /* 0063cded: jmp 0x63ce32 */ goto L_0063ce32;
L_0063cdef:; BB(0x0063cdef);
    /* 0063cdef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cdf2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cdf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cdf6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cdf9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cdfeu); f_005fb300();
    /* 0063cdfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ce00: je 0x63ce32 */ if (fZ) goto L_0063ce32;
L_0063ce02:; BB(0x0063ce02);
    /* 0063ce02: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ce05: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063ce08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce09: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ce0c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63ce11u); f_005fb300();
    /* 0063ce11: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0063ce14: push 0x6dbae0 */ { u32 v = 0x6dbae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce19: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63ce1eu); f_00630f40();
    /* 0063ce1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ce21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce22: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0063ce25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ce27: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0063ce2a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063ce30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ce32u); call_ind(t); }
L_0063ce32:; BB(0x0063ce32);
    /* 0063ce32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ce35: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ce38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce39: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ce3c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63ce41u); f_005fb350();
    /* 0063ce41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ce43: je 0x63cebb */ if (fZ) goto L_0063cebb;
L_0063ce45:; BB(0x0063ce45);
    /* 0063ce45: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ce48: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063ce4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ce51: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063ce54: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0063ce57: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063ce5a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063ce5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce5e: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ce61: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063ce67: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063ce69: call 0x63b560 */ r_esp -= 4; W32(r_esp, 0x63ce6eu); f_0063b560();
    /* 0063ce6e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063ce71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ce73: je 0x63ce99 */ if (fZ) goto L_0063ce99;
L_0063ce75:; BB(0x0063ce75);
    /* 0063ce75: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ce78: add edx, 0x25 */ {  u32 a = r_edx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063ce7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ce7c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063ce7f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63ce84u); f_005fb350();
    /* 0063ce84: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0063ce87: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0063ce8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ce8c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0063ce8f: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0063ce95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ce97u); call_ind(t); }
    /* 0063ce97: jmp 0x63cebb */ goto L_0063cebb;
L_0063ce99:; BB(0x0063ce99);
    /* 0063ce99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ce9c: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ce9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cea0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cea3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63cea8u); f_005fb350();
    /* 0063cea8: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0063ceab: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063ceae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063ceb0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063ceb3: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0063ceb9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63cebbu); call_ind(t); }
L_0063cebb:; BB(0x0063cebb);
    /* 0063cebb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cebe: call 0x63d860 */ r_esp -= 4; W32(r_esp, 0x63cec3u); f_0063d860();
    /* 0063cec3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cec6: cmp eax, dword ptr [ecx + 0x1d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063cecc: jle 0x63cf5c */ if ((fZ||fS!=fO)) goto L_0063cf5c;
L_0063ced2:; BB(0x0063ced2);
    /* 0063ced2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ced6: je 0x63cf5c */ if (fZ) goto L_0063cf5c;
L_0063cedc:; BB(0x0063cedc);
    /* 0063cedc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cedf: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cee2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cee3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cee6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63ceebu); f_005fb300();
    /* 0063ceeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ceed: jne 0x63cf5a */ if (!fZ) goto L_0063cf5a;
L_0063ceef:; BB(0x0063ceef);
    /* 0063ceef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef5: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef7: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cef9: push 0x6dbad0 */ { u32 v = 0x6dbad0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cefe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63cf03u); f_00630f40();
    /* 0063cf03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063cf06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf09: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf0c: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063cf12: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf15: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 0063cf19: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cf1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf1d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf20: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063cf26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf29: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0063cf2c: add ecx, 0x69 */ {  u32 a = r_ecx; u32 b = 0x69u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cf2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf30: push 0x30d4c8 */ { u32 v = 0x30d4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf38: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063cf3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf3e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf41: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63cf46u); f_005f9de0();
    /* 0063cf46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf4b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf4e: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cf53u); f_005fb480();
    /* 0063cf53: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cf55: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63cf5au); f_005ff5a0();
L_0063cf5a:; BB(0x0063cf5a);
    /* 0063cf5a: jmp 0x63cf90 */ goto L_0063cf90;
L_0063cf5c:; BB(0x0063cf5c);
    /* 0063cf5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf5f: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063cf62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf63: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf66: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cf6bu); f_005fb300();
    /* 0063cf6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf6e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf70: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf73: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63cf78u); f_005fb480();
    /* 0063cf78: mov ecx, eax */ r_ecx = r_eax;
    /* 0063cf7a: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63cf7fu); f_005ff670();
    /* 0063cf7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf82: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063cf85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf88: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf8b: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63cf90u); f_005fbcb0();
L_0063cf90:; BB(0x0063cf90);
    /* 0063cf90: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063cf93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063cf94: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063cf99: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cf9c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0063cf9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63cfa1u); call_ind(t); }
    /* 0063cfa1: jmp 0x63c6fb */ goto L_0063c6fb;
L_0063cfa6:; BB(0x0063cfa6);
    /* 0063cfa6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cfa9: cmp dword ptr [ecx + 0x1d4], 4 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063cfb0: jle 0x63d2c4 */ if ((fZ||fS!=fO)) goto L_0063d2c4;
L_0063cfb6:; BB(0x0063cfb6);
    /* 0063cfb6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cfb9: call 0x63d860 */ r_esp -= 4; W32(r_esp, 0x63cfbeu); f_0063d860();
    /* 0063cfbe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063cfc1: jg 0x63cff9 */ if ((!fZ&&fS==fO)) goto L_0063cff9;
L_0063cfc3:; BB(0x0063cfc3);
    /* 0063cfc3: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfc5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cfc8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cfcdu); f_005fb300();
    /* 0063cfcd: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0063cfd0: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0063cfd3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063cfd5: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0063cfd8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0063cfdb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63cfddu); call_ind(t); }
    /* 0063cfdd: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063cfdf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cfe2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63cfe7u); f_005fb300();
    /* 0063cfe7: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0063cfea: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0063cfed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063cfef: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0063cff2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0063cff5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63cff7u); call_ind(t); }
    /* 0063cff7: jmp 0x63d02d */ goto L_0063d02d;
L_0063cff9:; BB(0x0063cff9);
    /* 0063cff9: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063cffb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063cffe: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d003u); f_005fb300();
    /* 0063d003: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0063d006: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0063d009: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d00b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0063d00e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0063d011: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d013u); call_ind(t); }
    /* 0063d013: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d015: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d018: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d01du); f_005fb300();
    /* 0063d01d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0063d020: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0063d023: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d025: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0063d028: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0063d02b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d02du); call_ind(t); }
L_0063d02d:; BB(0x0063d02d);
    /* 0063d02d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063d034: jmp 0x63d03f */ goto L_0063d03f;
L_0063d036:; BB(0x0063d036);
    /* 0063d036: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d039: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d03c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063d03f:; BB(0x0063d03f);
    /* 0063d03f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063d045: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d047: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d04d: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063d053: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d055u); call_ind(t); }
    /* 0063d055: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d058: jge 0x63d2c4 */ if ((fS==fO)) goto L_0063d2c4;
L_0063d05e:; BB(0x0063d05e);
    /* 0063d05e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d061: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0063d067: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0063d06a: cmp dword ptr [ebp - 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d06d: jl 0x63d0f3 */ if ((fS!=fO)) goto L_0063d0f3;
L_0063d073:; BB(0x0063d073);
    /* 0063d073: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d076: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0063d07c: lea ecx, [eax*4 + 4] */ r_ecx = (u32)(r_eax*4+0x4u);
    /* 0063d083: cmp dword ptr [ebp - 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d086: jge 0x63d0f3 */ if ((fS==fO)) goto L_0063d0f3;
L_0063d088:; BB(0x0063d088);
    /* 0063d088: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d08b: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d08e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d08f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d092: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d097u); f_005fb5e0();
    /* 0063d097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d099: je 0x63d0bc */ if (fZ) goto L_0063d0bc;
L_0063d09b:; BB(0x0063d09b);
    /* 0063d09b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d09e: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d0a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d0a2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d0a5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d0aau); f_005fb5e0();
    /* 0063d0aa: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0063d0ad: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0063d0b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d0b2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0063d0b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0063d0b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d0bau); call_ind(t); }
    /* 0063d0ba: jmp 0x63d0ee */ goto L_0063d0ee;
L_0063d0bc:; BB(0x0063d0bc);
    /* 0063d0bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d0bf: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d0c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d0c3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d0c6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d0cbu); f_005fb300();
    /* 0063d0cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d0cd: je 0x63d0ee */ if (fZ) goto L_0063d0ee;
L_0063d0cf:; BB(0x0063d0cf);
    /* 0063d0cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d0d2: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d0d6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d0d9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d0deu); f_005fb300();
    /* 0063d0de: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0063d0e1: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0063d0e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d0e6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0063d0e9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0063d0ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d0eeu); call_ind(t); }
L_0063d0ee:; BB(0x0063d0ee);
    /* 0063d0ee: jmp 0x63d036 */ goto L_0063d036;
L_0063d0f3:; BB(0x0063d0f3);
    /* 0063d0f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d0f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d0f7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d0fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d0fc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d0ff: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0063d102: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d104u); call_ind(t); }
    /* 0063d104: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d107: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d10a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d10b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d10e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d113u); f_005fb5e0();
    /* 0063d113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d115: je 0x63d138 */ if (fZ) goto L_0063d138;
L_0063d117:; BB(0x0063d117);
    /* 0063d117: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d11a: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d11d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d11e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d121: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d126u); f_005fb5e0();
    /* 0063d126: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0063d129: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0063d12c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d12e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0063d131: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0063d134: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d136u); call_ind(t); }
    /* 0063d136: jmp 0x63d16a */ goto L_0063d16a;
L_0063d138:; BB(0x0063d138);
    /* 0063d138: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d13b: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d13e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d13f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d142: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d147u); f_005fb300();
    /* 0063d147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d149: je 0x63d16a */ if (fZ) goto L_0063d16a;
L_0063d14b:; BB(0x0063d14b);
    /* 0063d14b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d14e: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d152: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d155: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d15au); f_005fb300();
    /* 0063d15a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0063d15d: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063d160: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d162: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063d165: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0063d168: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d16au); call_ind(t); }
L_0063d16a:; BB(0x0063d16a);
    /* 0063d16a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d16d: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d173: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d176: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063d179: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d17d: je 0x63d1b0 */ if (fZ) goto L_0063d1b0;
L_0063d17f:; BB(0x0063d17f);
    /* 0063d17f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d181: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d184: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063d18a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d18d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063d190: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0063d193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d194: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d197: call 0x63d570 */ r_esp -= 4; W32(r_esp, 0x63d19cu); f_0063d570();
    /* 0063d19c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d19f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d1a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d1a8: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0063d1ab: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x63d1b0u); f_0063b2d0();
L_0063d1b0:; BB(0x0063d1b0);
    /* 0063d1b0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1b5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d1b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d1bc: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x63d1c1u); f_005fb5a0();
    /* 0063d1c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d1c4: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d1c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1c8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d1cb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d1d0u); f_005fb300();
    /* 0063d1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1d3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1d5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d1d8: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d1ddu); f_005fb480();
    /* 0063d1dd: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d1df: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d1e4u); f_005ff670();
    /* 0063d1e4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d1e7: add edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d1ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1eb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d1ee: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d1f3u); f_005fb300();
    /* 0063d1f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1f6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d1fb: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d200u); f_005fb480();
    /* 0063d200: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d202: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d207u); f_005ff670();
    /* 0063d207: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d20a: add eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d20e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d211: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d216u); f_005fb300();
    /* 0063d216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d219: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d21b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d21e: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d223u); f_005fb480();
    /* 0063d223: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d225: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d22au); f_005ff670();
    /* 0063d22a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d22d: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d231: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d234: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63d239u); f_005fb350();
    /* 0063d239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d23a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d23c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d23e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d241: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d246u); f_005fb480();
    /* 0063d246: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d248: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d24du); f_005ff670();
    /* 0063d24d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d250: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d251: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d254: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x63d259u); f_005fb2b0();
    /* 0063d259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d25a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d25c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d25e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d261: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d266u); f_005fb480();
    /* 0063d266: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d268: call 0x5ff670 */ r_esp -= 4; W32(r_esp, 0x63d26du); f_005ff670();
    /* 0063d26d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d270: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d274: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d276: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d279: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63d27eu); f_005fbcb0();
    /* 0063d27e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d281: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d284: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d285: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d287: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d28a: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63d28fu); f_005fbcb0();
    /* 0063d28f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d292: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d295: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d296: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d298: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d29b: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x63d2a0u); f_005fbcb0();
    /* 0063d2a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d2a3: add eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2a9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d2ac: call 0x5fbce0 */ r_esp -= 4; W32(r_esp, 0x63d2b1u); f_005fbce0();
    /* 0063d2b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d2b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2b7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d2ba: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x63d2bfu); f_005fbc80();
    /* 0063d2bf: jmp 0x63d036 */ goto L_0063d036;
L_0063d2c4:; BB(0x0063d2c4);
    /* 0063d2c4: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063d2ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d2cc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d2d2: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 0063d2d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d2dau); call_ind(t); }
    /* 0063d2da: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063d2dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d2df: je 0x63d34e */ if (fZ) goto L_0063d34e;
L_0063d2e1:; BB(0x0063d2e1);
    /* 0063d2e1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063d2e8: jmp 0x63d2f3 */ goto L_0063d2f3;
L_0063d2ea:; BB(0x0063d2ea);
    /* 0063d2ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d2ed: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d2f0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063d2f3:; BB(0x0063d2f3);
    /* 0063d2f3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063d2f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d2fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d301: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063d307: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d309u); call_ind(t); }
    /* 0063d309: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d30c: jge 0x63d34e */ if ((fS==fO)) goto L_0063d34e;
L_0063d30e:; BB(0x0063d30e);
    /* 0063d30e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d311: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d315: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d318: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d31du); f_005fb300();
    /* 0063d31d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d31f: je 0x63d34c */ if (fZ) goto L_0063d34c;
L_0063d321:; BB(0x0063d321);
    /* 0063d321: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d324: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d328: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d32b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d330u); f_005fb300();
    /* 0063d330: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0063d336: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0063d33c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d33e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0063d344: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0063d34a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d34cu); call_ind(t); }
L_0063d34c:; BB(0x0063d34c);
    /* 0063d34c: jmp 0x63d2ea */ goto L_0063d2ea;
L_0063d34e:; BB(0x0063d34e);
    /* 0063d34e: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063d353: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d355: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d35b: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0063d361: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d363u); call_ind(t); }
    /* 0063d363: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063d366: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d368: je 0x63d45f */ if (fZ) goto L_0063d45f;
L_0063d36e:; BB(0x0063d36e);
    /* 0063d36e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063d375: jmp 0x63d380 */ goto L_0063d380;
L_0063d377:; BB(0x0063d377);
    /* 0063d377: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d37a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d37d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0063d380:; BB(0x0063d380);
    /* 0063d380: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063d385: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d387: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d38d: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063d393: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d395u); call_ind(t); }
    /* 0063d395: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d398: jge 0x63d45f */ if ((fS==fO)) goto L_0063d45f;
L_0063d39e:; BB(0x0063d39e);
    /* 0063d39e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d3a1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d3a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3a5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d3a8: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d3adu); f_005fb5e0();
    /* 0063d3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d3af: je 0x63d3de */ if (fZ) goto L_0063d3de;
L_0063d3b1:; BB(0x0063d3b1);
    /* 0063d3b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d3b4: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d3b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3b8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d3bb: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63d3c0u); f_005fb5e0();
    /* 0063d3c0: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0063d3c6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0063d3cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d3ce: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0063d3d4: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063d3da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d3dcu); call_ind(t); }
    /* 0063d3dc: jmp 0x63d41c */ goto L_0063d41c;
L_0063d3de:; BB(0x0063d3de);
    /* 0063d3de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d3e1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d3e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3e5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d3e8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d3edu); f_005fb300();
    /* 0063d3ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d3ef: je 0x63d41c */ if (fZ) goto L_0063d41c;
L_0063d3f1:; BB(0x0063d3f1);
    /* 0063d3f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d3f4: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d3f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3f8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d3fb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d400u); f_005fb300();
    /* 0063d400: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0063d406: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0063d40c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d40e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0063d414: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063d41a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d41cu); call_ind(t); }
L_0063d41c:; BB(0x0063d41c);
    /* 0063d41c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d41f: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d423: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d426: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d42bu); f_005fb300();
    /* 0063d42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d42d: je 0x63d45a */ if (fZ) goto L_0063d45a;
L_0063d42f:; BB(0x0063d42f);
    /* 0063d42f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d432: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d435: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d436: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d439: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63d43eu); f_005fb300();
    /* 0063d43e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0063d444: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0063d44a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d44c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0063d452: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063d458: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d45au); call_ind(t); }
L_0063d45a:; BB(0x0063d45a);
    /* 0063d45a: jmp 0x63d377 */ goto L_0063d377;
L_0063d45f:; BB(0x0063d45f);
    /* 0063d45f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d461: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d464: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d465: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d467: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d469: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063d46c: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63d471u); f_005fb480();
    /* 0063d471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d472: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063d478: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063d47a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d480: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0063d486: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63d488u); call_ind(t); }
    /* 0063d488: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063d48d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d48f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d495: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063d49b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d49du); call_ind(t); }
    /* 0063d49d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d4a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d4a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d4a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d4aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d4ab: ret  */ FN_RET(0x0063c620); r_esp += 4; return;
}

