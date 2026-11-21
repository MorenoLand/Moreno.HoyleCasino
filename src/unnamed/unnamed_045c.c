#include "protos.h"

void f_0045c0a0(void) /* sub_45C0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c0a0);
    /* 0045c0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c0a3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c0a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045c0a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c0ab: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045c0b1: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x45c0b6u); f_005df7b0();
    /* 0045c0b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045c0b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c0bb: je 0x45c148 */ if (fZ) goto L_0045c148;
L_0045c0c1:; BB(0x0045c0c1);
    /* 0045c0c1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045c0c4: movzx edx, byte ptr [ecx + 9] */ r_edx = (u32)R8((u32)(r_ecx+0x9u));
    /* 0045c0c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c0ca: jne 0x45c148 */ if (!fZ) goto L_0045c148;
L_0045c0cc:; BB(0x0045c0cc);
    /* 0045c0cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c0cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c0d0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c0d5u); f_005dcb00();
    /* 0045c0d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c0d8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045c0db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c0de: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c0e3u); f_0063aac0();
    /* 0045c0e3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045c0e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c0e8: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c0ec: je 0x45c10a */ if (fZ) goto L_0045c10a;
L_0045c0ee:; BB(0x0045c0ee);
    /* 0045c0ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c0f1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c0f6u); f_0063aac0();
    /* 0045c0f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c0f8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045c0fb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c0ff: je 0x45c10a */ if (fZ) goto L_0045c10a;
L_0045c101:; BB(0x0045c101);
    /* 0045c101: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0045c108: jmp 0x45c111 */ goto L_0045c111;
L_0045c10a:; BB(0x0045c10a);
    /* 0045c10a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0045c111:; BB(0x0045c111);
    /* 0045c111: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0045c115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c117: je 0x45c148 */ if (fZ) goto L_0045c148;
L_0045c119:; BB(0x0045c119);
    /* 0045c119: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c11c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c11d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c123: call 0x4613b0 */ r_esp -= 4; W32(r_esp, 0x45c128u); f_004613b0();
    /* 0045c128: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045c12b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c12d: jne 0x45c148 */ if (!fZ) goto L_0045c148;
L_0045c12f:; BB(0x0045c12f);
    /* 0045c12f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045c132: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
    /* 0045c136: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045c13c: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x45c141u); f_0057c140();
    /* 0045c141: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045c143: jmp 0x45c207 */ goto L_0045c207;
L_0045c148:; BB(0x0045c148);
    /* 0045c148: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045c14b: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0045c14f: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c155: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045c158: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045c15b: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c15e: mov byte ptr [eax + 0xe5], 1 */ W8((u32)(r_eax+0xe5u), 0x1u);
    /* 0045c165: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c169: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c16f: call 0x45fde0 */ r_esp -= 4; W32(r_esp, 0x45c174u); f_0045fde0();
    /* 0045c174: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c17a: mov dword ptr [edx + 0x118], 0xffffffff */ W32((u32)(r_edx+0x118u), 0xffffffffu);
    /* 0045c184: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c189: mov dword ptr [eax + 0x11c], 0xffffffff */ W32((u32)(r_eax+0x11cu), 0xffffffffu);
    /* 0045c193: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c199: mov dword ptr [ecx + 0x120], 0xffffffff */ W32((u32)(r_ecx+0x120u), 0xffffffffu);
    /* 0045c1a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c1a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c1a7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c1acu); f_005dcb00();
    /* 0045c1ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c1af: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045c1b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c1b5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c1bau); f_0063aac0();
    /* 0045c1ba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045c1bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045c1bf: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c1c3: je 0x45c1e1 */ if (fZ) goto L_0045c1e1;
L_0045c1c5:; BB(0x0045c1c5);
    /* 0045c1c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c1c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c1cdu); f_0063aac0();
    /* 0045c1cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045c1cf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045c1d2: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c1d6: je 0x45c1e1 */ if (fZ) goto L_0045c1e1;
L_0045c1d8:; BB(0x0045c1d8);
    /* 0045c1d8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0045c1df: jmp 0x45c1e8 */ goto L_0045c1e8;
L_0045c1e1:; BB(0x0045c1e1);
    /* 0045c1e1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0045c1e8:; BB(0x0045c1e8);
    /* 0045c1e8: movzx edx, byte ptr [ebp - 0x2c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 0045c1ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c1ee: je 0x45c205 */ if (fZ) goto L_0045c205;
L_0045c1f0:; BB(0x0045c1f0);
    /* 0045c1f0: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c1f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045c1f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c1fb: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c1fe: mov byte ptr [ecx + 0xe0], 0 */ W8((u32)(r_ecx+0xe0u), 0x0u);
L_0045c205:; BB(0x0045c205);
    /* 0045c205: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045c207:; BB(0x0045c207);
    /* 0045c207: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c20a: ret 4 */ FN_RET(0x0045c0a0); r_esp += 8; return;
}

void f_0045c210(void) /* sub_45C210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c210);
    /* 0045c210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c211: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c213: sub esp, 0x18c */ {  u32 a = r_esp; u32 b = 0x18cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c219: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045c21e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045c220: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045c223: mov dword ptr [ebp - 0x188], ecx */ W32((u32)(r_ebp+0xfffffe78u), r_ecx);
    /* 0045c229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c22c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c22d: push 0x6b9b44 */ { u32 v = 0x6b9b44u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c232: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0045c238: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c239: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45c23fu); call_ind(t); }
    /* 0045c23f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c242: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0045c248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c249: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45c24eu); f_0062fde0();
    /* 0045c24e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c251: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c256: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045c25c: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 0045c262: cmp dword ptr [ebp - 0x134], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c269: je 0x45c2a1 */ if (fZ) goto L_0045c2a1;
L_0045c26b:; BB(0x0045c26b);
    /* 0045c26b: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c271: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045c277: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0045c27d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c283: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0045c289: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0045c28f: add edx, dword ptr [ebp - 0x138] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffec8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c295: mov byte ptr [edx + 0xe0], 1 */ W8((u32)(r_edx+0xe0u), 0x1u);
    /* 0045c29c: jmp 0x45c36d */ goto L_0045c36d;
L_0045c2a1:; BB(0x0045c2a1);
    /* 0045c2a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c2a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2a5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c2aau); f_005dcb00();
    /* 0045c2aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c2ad: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0045c2b3: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0045c2b9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c2beu); f_0063aac0();
    /* 0045c2be: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045c2c0: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 0045c2c6: cmp dword ptr [ebp - 0x140], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c2cd: je 0x45c2f7 */ if (fZ) goto L_0045c2f7;
L_0045c2cf:; BB(0x0045c2cf);
    /* 0045c2cf: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0045c2d5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c2dau); f_0063aac0();
    /* 0045c2da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c2dc: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 0045c2e2: cmp dword ptr [ebp - 0x144], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c2e9: je 0x45c2f7 */ if (fZ) goto L_0045c2f7;
L_0045c2eb:; BB(0x0045c2eb);
    /* 0045c2eb: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 0045c2f5: jmp 0x45c301 */ goto L_0045c301;
L_0045c2f7:; BB(0x0045c2f7);
    /* 0045c2f7: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
L_0045c301:; BB(0x0045c301);
    /* 0045c301: movzx eax, byte ptr [ebp - 0x18c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe74u));
    /* 0045c308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c30a: je 0x45c36d */ if (fZ) goto L_0045c36d;
L_0045c30c:; BB(0x0045c30c);
    /* 0045c30c: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c312: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045c315: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 0045c31b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c31e: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c321: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0045c327: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0045c32b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045c32d: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c330: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0045c333: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0045c337: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 0045c33d: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0045c343: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0045c349: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0045c34f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c355: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 0045c35b: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0045c361: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0045c367: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
L_0045c36d:; BB(0x0045c36d);
    /* 0045c36d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c373: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 0045c379: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0045c37f: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c382: mov byte ptr [edx + 0xe0], 1 */ W8((u32)(r_edx+0xe0u), 0x1u);
    /* 0045c389: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045c38f: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45c394u); f_004587e0();
    /* 0045c394: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c399: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045c39f: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 0045c3a5: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c3ab: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045c3b1: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 0045c3b7: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 0045c3bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3be: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0045c3c4: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c3c9: mov cx, word ptr [eax + edx*2 + 0xac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xacu))) & 0xffffu);
    /* 0045c3d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3d2: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0045c3d8: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c3dd: mov cx, word ptr [eax + edx*2 + 0xa2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xa2u))) & 0xffffu);
    /* 0045c3e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3e6: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c3ec: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x45c3f1u); f_00452fd0();
    /* 0045c3f1: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c3f7: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045c3fd: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 0045c403: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c409: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 0045c40f: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
    /* 0045c415: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c41a: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045c420: mov dword ptr [ebp - 0x16c], ecx */ W32((u32)(r_ebp+0xfffffe94u), r_ecx);
    /* 0045c426: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0045c429: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c42a: mov eax, dword ptr [ebp - 0x164] */ r_eax = R32((u32)(r_ebp+0xfffffe9cu));
    /* 0045c430: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c436: mov dx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xacu))) & 0xffffu);
    /* 0045c43e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c43f: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 0045c445: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c44b: mov dx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xa2u))) & 0xffffu);
    /* 0045c453: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c454: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 0045c45a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c45b: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c461: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x45c466u); f_004530b0();
    /* 0045c466: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0045c46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c46d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c470: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c475: mov cx, word ptr [eax + edx*2 + 0xac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xacu))) & 0xffffu);
    /* 0045c47d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c47e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c481: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c486: mov cx, word ptr [eax + edx*2 + 0xa2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xa2u))) & 0xffffu);
    /* 0045c48e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c48f: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c495: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x45c49au); f_00452fd0();
    /* 0045c49a: lea edx, [ebp - 0x118] */ r_edx = (u32)(r_ebp+0xfffffee8u);
    /* 0045c4a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c4a4: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c4aa: mov dx, word ptr [ecx + eax*2 + 0xac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xacu))) & 0xffffu);
    /* 0045c4b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c4b6: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c4bc: mov dx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xa2u))) & 0xffffu);
    /* 0045c4c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c4c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4c9: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c4cf: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x45c4d4u); f_004530b0();
    /* 0045c4d4: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 0045c4da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4db: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 0045c4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4e2: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c4e8: call 0x4534b0 */ r_esp -= 4; W32(r_esp, 0x45c4edu); f_004534b0();
    /* 0045c4ed: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045c4f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c4f2: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045c4f5: mov byte ptr [ebp - 0x171], cl */ W8((u32)(r_ebp+0xfffffe8fu), (u8)r_ecx);
    /* 0045c4fb: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045c501: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 0045c507: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 0045c50d: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c510: mov cl, byte ptr [ebp - 0x171] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8fu))) & 0xffu);
    /* 0045c516: mov byte ptr [eax + 0xea], cl */ W8((u32)(r_eax+0xeau), (u8)r_ecx);
    /* 0045c51c: lea edx, [ebp - 0x118] */ r_edx = (u32)(r_ebp+0xfffffee8u);
    /* 0045c522: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c523: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045c526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c527: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c52d: call 0x453550 */ r_esp -= 4; W32(r_esp, 0x45c532u); f_00453550();
    /* 0045c532: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045c535: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c537: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045c53a: mov byte ptr [ebp - 0x179], dl */ W8((u32)(r_ebp+0xfffffe87u), (u8)r_edx);
    /* 0045c540: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c545: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 0045c54b: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0045c551: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c554: mov dl, byte ptr [ebp - 0x179] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe87u))) & 0xffu);
    /* 0045c55a: mov byte ptr [ecx + 0xef], dl */ W8((u32)(r_ecx+0xefu), (u8)r_edx);
    /* 0045c560: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c564: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c56a: call 0x461600 */ r_esp -= 4; W32(r_esp, 0x45c56fu); f_00461600();
    /* 0045c56f: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c573: jne 0x45c584 */ if (!fZ) goto L_0045c584;
L_0045c575:; BB(0x0045c575);
    /* 0045c575: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c57b: mov byte ptr [ecx + 0x115], 1 */ W8((u32)(r_ecx+0x115u), 0x1u);
    /* 0045c582: jmp 0x45c5a3 */ goto L_0045c5a3;
L_0045c584:; BB(0x0045c584);
    /* 0045c584: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c588: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c58du); f_005dcb00();
    /* 0045c58d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c590: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 0045c596: mov eax, dword ptr [ebp - 0x180] */ r_eax = R32((u32)(r_ebp+0xfffffe80u));
    /* 0045c59c: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
L_0045c5a3:; BB(0x0045c5a3);
    /* 0045c5a3: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c5a7: je 0x45c5d5 */ if (fZ) goto L_0045c5d5;
L_0045c5a9:; BB(0x0045c5a9);
    /* 0045c5a9: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c5af: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 0045c5b5: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0045c5bb: mov dword ptr [edx + 0x124], 5 */ W32((u32)(r_edx+0x124u), 0x5u);
    /* 0045c5c5: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0045c5cb: mov dword ptr [eax + 0x128], 4 */ W32((u32)(r_eax+0x128u), 0x4u);
L_0045c5d5:; BB(0x0045c5d5);
    /* 0045c5d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c5d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c5d9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045c5df: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045c5e2: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045c5e7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045c5ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045c5ec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045c5ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45c5f1u); call_ind(t); }
    /* 0045c5f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c5f4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c5f6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45c5fbu); f_00686d72();
    /* 0045c5fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c5fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c5fe: ret 4 */ FN_RET(0x0045c210); r_esp += 8; return;
}

void f_0045c610(void) /* sub_45C610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c610);
    /* 0045c610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c611: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c613: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c619: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045c61e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045c620: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045c623: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0045c629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045c62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c62d: push 0x6b9b68 */ { u32 v = 0x6b9b68u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c632: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0045c638: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c639: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x45c63fu); call_ind(t); }
    /* 0045c63f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c642: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0045c648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c649: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x45c64eu); f_0062fde0();
    /* 0045c64e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c651: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045c654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c655: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c659: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c65f: call 0x461a10 */ r_esp -= 4; W32(r_esp, 0x45c664u); f_00461a10();
    /* 0045c664: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c667: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c669: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45c66eu); f_00686d72();
    /* 0045c66e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c670: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c671: ret 8 */ FN_RET(0x0045c610); r_esp += 12; return;
}

void f_0045c680(void) /* sub_45C680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045c680);
    /* 0045c680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c681: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c683: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c689: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c68a: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 0045c690: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 0045c697: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0045c69e: mov dword ptr [ebp - 0x54], 0xffffffff */ W32((u32)(r_ebp+0xffffffacu), 0xffffffffu);
    /* 0045c6a5: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0045c6ac: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 0045c6b3: fldz  */ FPUSH(0.0);
    /* 0045c6b5: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045c6b8: fld1  */ FPUSH(1.0);
    /* 0045c6ba: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045c6bd: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c6c2: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045c6c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045c6cb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c6cf: jl 0x45c730 */ if ((fS!=fO)) goto L_0045c730;
L_0045c6d1:; BB(0x0045c6d1);
    /* 0045c6d1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c6d5: jg 0x45c730 */ if ((!fZ&&fS==fO)) goto L_0045c730;
L_0045c6d7:; BB(0x0045c6d7);
    /* 0045c6d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c6da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6db: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c6e0u); f_005dcb00();
    /* 0045c6e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c6e3: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0045c6e6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045c6e9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c6eeu); f_0063aac0();
    /* 0045c6ee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045c6f0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0045c6f3: cmp dword ptr [ebp - 0x5c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c6f7: je 0x45c718 */ if (fZ) goto L_0045c718;
L_0045c6f9:; BB(0x0045c6f9);
    /* 0045c6f9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0045c6fc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c701u); f_0063aac0();
    /* 0045c701: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045c703: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0045c706: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c70a: je 0x45c718 */ if (fZ) goto L_0045c718;
L_0045c70c:; BB(0x0045c70c);
    /* 0045c70c: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 0045c716: jmp 0x45c722 */ goto L_0045c722;
L_0045c718:; BB(0x0045c718);
    /* 0045c718: mov dword ptr [ebp - 0xf4], 1 */ W32((u32)(r_ebp+0xffffff0cu), 0x1u);
L_0045c722:; BB(0x0045c722);
    /* 0045c722: mov dl, byte ptr [ebp - 0xf4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff0cu))) & 0xffu);
    /* 0045c728: mov byte ptr [ebp - 0xf5], dl */ W8((u32)(r_ebp+0xffffff0bu), (u8)r_edx);
    /* 0045c72e: jmp 0x45c737 */ goto L_0045c737;
L_0045c730:; BB(0x0045c730);
    /* 0045c730: mov byte ptr [ebp - 0xf5], 0 */ W8((u32)(r_ebp+0xffffff0bu), 0x0u);
L_0045c737:; BB(0x0045c737);
    /* 0045c737: mov al, byte ptr [ebp - 0xf5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff0bu))) & 0xffu);
    /* 0045c73d: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0045c740: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 0045c747: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 0045c74e: mov byte ptr [ebp - 0x41], 1 */ W8((u32)(r_ebp+0xffffffbfu), 0x1u);
    /* 0045c752: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c758: mov edx, dword ptr [ecx + 0x128] */ r_edx = R32((u32)(r_ecx+0x128u));
    /* 0045c75e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0045c761: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0045c764: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0045c76a: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c770: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 0045c776: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 0045c77c: cmp dword ptr [ebp - 0xfc], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c783: ja 0x45cfc0 */ if ((!fC&&!fZ)) goto L_0045cfc0;
L_0045c789:; BB(0x0045c789);
    /* 0045c789: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0045c78f: jmp dword ptr [eax*4 + 0x45d1a4] */ { u32 t = R32((u32)(r_eax*4+0x45d1a4u)); switch (t) { case 0x45c796u: goto L_0045c796; case 0x45cbcdu: goto L_0045cbcd; case 0x45c861u: goto L_0045c861; case 0x45cef5u: goto L_0045cef5; case 0x45cf01u: goto L_0045cf01; case 0x45cf59u: goto L_0045cf59; default: UNSUP(0x0045c78f, "jump table entry is not a known target"); } }
L_0045c796:; BB(0x0045c796);
    /* 0045c796: mov byte ptr [ebp - 0x41], 0 */ W8((u32)(r_ebp+0xffffffbfu), 0x0u);
    /* 0045c79a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c79d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c79e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c7a3u); f_005dcb00();
    /* 0045c7a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c7a6: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0045c7a9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0045c7ac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c7b1u); f_0063aac0();
    /* 0045c7b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c7b3: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0045c7b6: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c7ba: je 0x45c7db */ if (fZ) goto L_0045c7db;
L_0045c7bc:; BB(0x0045c7bc);
    /* 0045c7bc: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0045c7bf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c7c4u); f_0063aac0();
    /* 0045c7c4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045c7c6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0045c7c9: cmp dword ptr [ebp - 0x70], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c7cd: je 0x45c7db */ if (fZ) goto L_0045c7db;
L_0045c7cf:; BB(0x0045c7cf);
    /* 0045c7cf: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 0045c7d9: jmp 0x45c7e5 */ goto L_0045c7e5;
L_0045c7db:; BB(0x0045c7db);
    /* 0045c7db: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
L_0045c7e5:; BB(0x0045c7e5);
    /* 0045c7e5: movzx ecx, byte ptr [ebp - 0x100] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff00u));
    /* 0045c7ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c7ee: jne 0x45c85c */ if (!fZ) goto L_0045c85c;
L_0045c7f0:; BB(0x0045c7f0);
    /* 0045c7f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c7f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7f4: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c7fa: call 0x44eaf0 */ r_esp -= 4; W32(r_esp, 0x45c7ffu); f_0044eaf0();
    /* 0045c7ff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045c802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c804: je 0x45c826 */ if (fZ) goto L_0045c826;
L_0045c806:; BB(0x0045c806);
    /* 0045c806: mov dword ptr [ebp - 0x1c], 0x7f3 */ W32((u32)(r_ebp+0xffffffe4u), 0x7f3u);
    /* 0045c80d: mov dword ptr [ebp - 0x58], 0x404 */ W32((u32)(r_ebp+0xffffffa8u), 0x404u);
    /* 0045c814: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0045c81a: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045c81d: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045c823: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0045c826:; BB(0x0045c826);
    /* 0045c826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c829: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c82a: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c830: call 0x44ebc0 */ r_esp -= 4; W32(r_esp, 0x45c835u); f_0044ebc0();
    /* 0045c835: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045c838: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c83a: je 0x45c85c */ if (fZ) goto L_0045c85c;
L_0045c83c:; BB(0x0045c83c);
    /* 0045c83c: mov dword ptr [ebp - 0x1c], 0x7f4 */ W32((u32)(r_ebp+0xffffffe4u), 0x7f4u);
    /* 0045c843: mov dword ptr [ebp - 0x58], 0x402 */ W32((u32)(r_ebp+0xffffffa8u), 0x402u);
    /* 0045c84a: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0045c850: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045c853: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045c859: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0045c85c:; BB(0x0045c85c);
    /* 0045c85c: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045c861:; BB(0x0045c861);
    /* 0045c861: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c865: je 0x45c86d */ if (fZ) goto L_0045c86d;
L_0045c867:; BB(0x0045c867);
    /* 0045c867: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c86b: jne 0x45c872 */ if (!fZ) goto L_0045c872;
L_0045c86d:; BB(0x0045c86d);
    /* 0045c86d: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045c872:; BB(0x0045c872);
    /* 0045c872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c876: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c87c: call 0x44eaf0 */ r_esp -= 4; W32(r_esp, 0x45c881u); f_0044eaf0();
    /* 0045c881: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045c884: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c886: je 0x45c992 */ if (fZ) goto L_0045c992;
L_0045c88c:; BB(0x0045c88c);
    /* 0045c88c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c88f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c890: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c896: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45c89bu); f_004605c0();
    /* 0045c89b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c89d: jne 0x45c992 */ if (!fZ) goto L_0045c992;
L_0045c8a3:; BB(0x0045c8a3);
    /* 0045c8a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c8a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c8a7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c8acu); f_005dcb00();
    /* 0045c8ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c8af: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0045c8b2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045c8b5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c8bau); f_0063aac0();
    /* 0045c8ba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045c8bc: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0045c8bf: cmp dword ptr [ebp - 0x78], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c8c3: je 0x45c8e4 */ if (fZ) goto L_0045c8e4;
L_0045c8c5:; BB(0x0045c8c5);
    /* 0045c8c5: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0045c8c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c8cdu); f_0063aac0();
    /* 0045c8cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c8cf: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0045c8d2: cmp dword ptr [ebp - 0x7c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c8d6: je 0x45c8e4 */ if (fZ) goto L_0045c8e4;
L_0045c8d8:; BB(0x0045c8d8);
    /* 0045c8d8: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 0045c8e2: jmp 0x45c8ee */ goto L_0045c8ee;
L_0045c8e4:; BB(0x0045c8e4);
    /* 0045c8e4: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
L_0045c8ee:; BB(0x0045c8ee);
    /* 0045c8ee: movzx eax, byte ptr [ebp - 0x104] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffefcu));
    /* 0045c8f5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0045c8f7: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0045c8f9: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045c8fc: add eax, 0x7f5 */ {  u32 a = r_eax; u32 b = 0x7f5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c901: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045c904: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c907: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c908: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45c90du); f_005dcb00();
    /* 0045c90d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c910: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0045c916: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045c91c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c921u); f_0063aac0();
    /* 0045c921: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c923: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0045c929: cmp dword ptr [ebp - 0x84], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c930: je 0x45c95a */ if (fZ) goto L_0045c95a;
L_0045c932:; BB(0x0045c932);
    /* 0045c932: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0045c938: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45c93du); f_0063aac0();
    /* 0045c93d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045c93f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0045c945: cmp dword ptr [ebp - 0x88], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c94c: je 0x45c95a */ if (fZ) goto L_0045c95a;
L_0045c94e:; BB(0x0045c94e);
    /* 0045c94e: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 0045c958: jmp 0x45c964 */ goto L_0045c964;
L_0045c95a:; BB(0x0045c95a);
    /* 0045c95a: mov dword ptr [ebp - 0x108], 1 */ W32((u32)(r_ebp+0xfffffef8u), 0x1u);
L_0045c964:; BB(0x0045c964);
    /* 0045c964: movzx ecx, byte ptr [ebp - 0x108] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef8u));
    /* 0045c96b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045c96d: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045c96f: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c972: add ecx, 0x3f6 */ {  u32 a = r_ecx; u32 b = 0x3f6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c978: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0045c97b: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0045c981: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045c984: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045c98a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045c98d: jmp 0x45cbc8 */ goto L_0045cbc8;
L_0045c992:; BB(0x0045c992);
    /* 0045c992: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c996: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045c99c: call 0x44ebc0 */ r_esp -= 4; W32(r_esp, 0x45c9a1u); f_0044ebc0();
    /* 0045c9a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045c9a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c9a6: je 0x45c9fa */ if (fZ) goto L_0045c9fa;
L_0045c9a8:; BB(0x0045c9a8);
    /* 0045c9a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9ac: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c9b2: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45c9b7u); f_004605c0();
    /* 0045c9b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c9ba: jne 0x45c9fa */ if (!fZ) goto L_0045c9fa;
L_0045c9bc:; BB(0x0045c9bc);
    /* 0045c9bc: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045c9c0: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0045c9c2: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0045c9c4: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c9c7: add edx, 0x7f8 */ {  u32 a = r_edx; u32 b = 0x7f8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c9cd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045c9d0: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045c9d4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0045c9d6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0045c9d8: and eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9db: add eax, 0x3f4 */ {  u32 a = r_eax; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9e0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0045c9e3: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0045c9e9: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045c9ec: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045c9f2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045c9f5: jmp 0x45cbc8 */ goto L_0045cbc8;
L_0045c9fa:; BB(0x0045c9fa);
    /* 0045c9fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045c9fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c9fe: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045ca04: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45ca09u); f_004605c0();
    /* 0045ca09: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ca0c: jne 0x45ca4e */ if (!fZ) goto L_0045ca4e;
L_0045ca0e:; BB(0x0045ca0e);
    /* 0045ca0e: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045ca12: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0045ca14: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0045ca16: and edx, 0xfffffff4 */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ca19: add edx, 0x3fc */ {  u32 a = r_edx; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ca1f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045ca22: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045ca26: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0045ca28: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0045ca2a: and eax, 0xfffffbfb */ {  u32 a = r_eax; u32 b = 0xfffffbfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca2f: add eax, 0x404 */ {  u32 a = r_eax; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca34: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0045ca37: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045ca3d: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0045ca40: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045ca46: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045ca49: jmp 0x45cbc8 */ goto L_0045cbc8;
L_0045ca4e:; BB(0x0045ca4e);
    /* 0045ca4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ca51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca52: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045ca58: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45ca5du); f_004605c0();
    /* 0045ca5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ca5f: jne 0x45cbc8 */ if (!fZ) goto L_0045cbc8;
L_0045ca65:; BB(0x0045ca65);
    /* 0045ca65: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045ca69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ca6b: je 0x45cae3 */ if (fZ) goto L_0045cae3;
L_0045ca6d:; BB(0x0045ca6d);
    /* 0045ca6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ca70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca71: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45ca76u); f_005dcb00();
    /* 0045ca76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ca79: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ca7b: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x45ca80u); f_005d5a50();
    /* 0045ca80: mov esi, eax */ r_esi = r_eax;
    /* 0045ca82: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ca88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ca8a: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ca90: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0045ca96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ca98u); call_ind(t); }
    /* 0045ca98: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ca9a: jle 0x45cae3 */ if ((fZ||fS!=fO)) goto L_0045cae3;
L_0045ca9c:; BB(0x0045ca9c);
    /* 0045ca9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ca9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045caa0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45caa5u); f_005dcb00();
    /* 0045caa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045caa8: mov ecx, eax */ r_ecx = r_eax;
    /* 0045caaa: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x45caafu); f_005d5a50();
    /* 0045caaf: mov esi, eax */ r_esi = r_eax;
    /* 0045cab1: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045cab7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045cab9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045cabf: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0045cac5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45cac7u); call_ind(t); }
    /* 0045cac7: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045caca: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cacc: jge 0x45cae3 */ if ((fS==fO)) goto L_0045cae3;
L_0045cace:; BB(0x0045cace);
    /* 0045cace: mov dword ptr [ebp - 0x1c], 0x410 */ W32((u32)(r_ebp+0xffffffe4u), 0x410u);
    /* 0045cad5: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045cadb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045cade: jmp 0x45cbc8 */ goto L_0045cbc8;
L_0045cae3:; BB(0x0045cae3);
    /* 0045cae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cae7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45caecu); f_005dcb00();
    /* 0045caec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045caef: mov ecx, eax */ r_ecx = r_eax;
    /* 0045caf1: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x45caf6u); f_005d5a50();
    /* 0045caf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045caf8: jne 0x45cb40 */ if (!fZ) goto L_0045cb40;
L_0045cafa:; BB(0x0045cafa);
    /* 0045cafa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cafe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45cb03u); f_005dcb00();
    /* 0045cb03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cb06: mov ecx, eax */ r_ecx = r_eax;
    /* 0045cb08: call 0x5d5a70 */ r_esp -= 4; W32(r_esp, 0x45cb0du); f_005d5a70();
    /* 0045cb0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb0f: jne 0x45cb40 */ if (!fZ) goto L_0045cb40;
L_0045cb11:; BB(0x0045cb11);
    /* 0045cb11: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045cb15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb17: je 0x45cb2b */ if (fZ) goto L_0045cb2b;
L_0045cb19:; BB(0x0045cb19);
    /* 0045cb19: mov dword ptr [ebp - 0x1c], 0x40e */ W32((u32)(r_ebp+0xffffffe4u), 0x40eu);
    /* 0045cb20: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045cb26: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045cb29: jmp 0x45cb3b */ goto L_0045cb3b;
L_0045cb2b:; BB(0x0045cb2b);
    /* 0045cb2b: mov dword ptr [ebp - 0x1c], 0x3f5 */ W32((u32)(r_ebp+0xffffffe4u), 0x3f5u);
    /* 0045cb32: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0045cb38: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0045cb3b:; BB(0x0045cb3b);
    /* 0045cb3b: jmp 0x45cbc8 */ goto L_0045cbc8;
L_0045cb40:; BB(0x0045cb40);
    /* 0045cb40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cb43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb44: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45cb49u); f_005dcb00();
    /* 0045cb49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cb4c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0045cb52: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0045cb58: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cb5du); f_0063aac0();
    /* 0045cb5d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045cb5f: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0045cb65: cmp dword ptr [ebp - 0x90], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb6c: je 0x45cb96 */ if (fZ) goto L_0045cb96;
L_0045cb6e:; BB(0x0045cb6e);
    /* 0045cb6e: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0045cb74: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cb79u); f_0063aac0();
    /* 0045cb79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045cb7b: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0045cb81: cmp dword ptr [ebp - 0x94], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cb88: je 0x45cb96 */ if (fZ) goto L_0045cb96;
L_0045cb8a:; BB(0x0045cb8a);
    /* 0045cb8a: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0045cb94: jmp 0x45cba0 */ goto L_0045cba0;
L_0045cb96:; BB(0x0045cb96);
    /* 0045cb96: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
L_0045cba0:; BB(0x0045cba0);
    /* 0045cba0: movzx eax, byte ptr [ebp - 0x10c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef4u));
    /* 0045cba7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0045cba9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0045cbab: and eax, 0xffffffe6 */ {  u32 a = r_eax; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045cbae: add eax, 0x402 */ {  u32 a = r_eax; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045cbb3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045cbb6: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045cbbc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045cbbf: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045cbc5: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0045cbc8:; BB(0x0045cbc8);
    /* 0045cbc8: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cbcd:; BB(0x0045cbcd);
    /* 0045cbcd: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045cbd3: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x45cbd8u); f_005db190();
    /* 0045cbd8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045cbdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cbdd: je 0x45cc98 */ if (fZ) goto L_0045cc98;
L_0045cbe3:; BB(0x0045cbe3);
    /* 0045cbe3: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045cbe9: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x45cbeeu); f_005dac90();
    /* 0045cbee: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cbf1: jne 0x45cbf8 */ if (!fZ) goto L_0045cbf8;
L_0045cbf3:; BB(0x0045cbf3);
    /* 0045cbf3: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cbf8:; BB(0x0045cbf8);
    /* 0045cbf8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045cbfe: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x45cc03u); f_005dac90();
    /* 0045cc03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cc04: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45cc09u); f_005dcb00();
    /* 0045cc09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cc0c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0045cc12: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0045cc18: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cc1du); f_0063aac0();
    /* 0045cc1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045cc1f: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0045cc25: cmp dword ptr [ebp - 0x9c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc2c: je 0x45cc56 */ if (fZ) goto L_0045cc56;
L_0045cc2e:; BB(0x0045cc2e);
    /* 0045cc2e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0045cc34: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cc39u); f_0063aac0();
    /* 0045cc39: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045cc3b: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0045cc41: cmp dword ptr [ebp - 0xa0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc48: je 0x45cc56 */ if (fZ) goto L_0045cc56;
L_0045cc4a:; BB(0x0045cc4a);
    /* 0045cc4a: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0045cc54: jmp 0x45cc60 */ goto L_0045cc60;
L_0045cc56:; BB(0x0045cc56);
    /* 0045cc56: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
L_0045cc60:; BB(0x0045cc60);
    /* 0045cc60: movzx ecx, byte ptr [ebp - 0x110] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef0u));
    /* 0045cc67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cc69: jne 0x45cc87 */ if (!fZ) goto L_0045cc87;
L_0045cc6b:; BB(0x0045cc6b);
    /* 0045cc6b: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045cc71: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x45cc76u); f_005dac90();
    /* 0045cc76: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045cc79: mov dword ptr [ebp - 0x1c], 0x3fd */ W32((u32)(r_ebp+0xffffffe4u), 0x3fdu);
    /* 0045cc80: fld1  */ FPUSH(1.0);
    /* 0045cc82: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045cc85: jmp 0x45cc93 */ goto L_0045cc93;
L_0045cc87:; BB(0x0045cc87);
    /* 0045cc87: mov dword ptr [ebp - 0x1c], 0x412 */ W32((u32)(r_ebp+0xffffffe4u), 0x412u);
    /* 0045cc8e: fld1  */ FPUSH(1.0);
    /* 0045cc90: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0045cc93:; BB(0x0045cc93);
    /* 0045cc93: jmp 0x45cef0 */ goto L_0045cef0;
L_0045cc98:; BB(0x0045cc98);
    /* 0045cc98: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0045cc9e: cmp dword ptr [edx + 0x4ef8], 2 */ {  u32 a = R32((u32)(r_edx+0x4ef8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cca5: jle 0x45cef0 */ if ((fZ||fS!=fO)) goto L_0045cef0;
L_0045ccab:; BB(0x0045ccab);
    /* 0045ccab: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ccb1: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x45ccb6u); f_005dada0();
    /* 0045ccb6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0045ccb9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045ccbf: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x45ccc4u); f_005dac90();
    /* 0045ccc4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045ccc7: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cccb: je 0x45cdde */ if (fZ) goto L_0045cdde;
L_0045ccd1:; BB(0x0045ccd1);
    /* 0045ccd1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ccd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccd5: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045ccdb: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45cce0u); f_004605c0();
    /* 0045cce0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cce3: jne 0x45cdde */ if (!fZ) goto L_0045cdde;
L_0045cce9:; BB(0x0045cce9);
    /* 0045cce9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045ccec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cced: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45ccf2u); f_005dcb00();
    /* 0045ccf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ccf5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0045ccfb: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0045cd01: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cd06u); f_0063aac0();
    /* 0045cd06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045cd08: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0045cd0e: cmp dword ptr [ebp - 0xa8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd15: je 0x45cd3f */ if (fZ) goto L_0045cd3f;
L_0045cd17:; BB(0x0045cd17);
    /* 0045cd17: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0045cd1d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cd22u); f_0063aac0();
    /* 0045cd22: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045cd24: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0045cd2a: cmp dword ptr [ebp - 0xac], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd31: je 0x45cd3f */ if (fZ) goto L_0045cd3f;
L_0045cd33:; BB(0x0045cd33);
    /* 0045cd33: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0045cd3d: jmp 0x45cd49 */ goto L_0045cd49;
L_0045cd3f:; BB(0x0045cd3f);
    /* 0045cd3f: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
L_0045cd49:; BB(0x0045cd49);
    /* 0045cd49: movzx ecx, byte ptr [ebp - 0x114] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeecu));
    /* 0045cd50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd52: jne 0x45cd5a */ if (!fZ) goto L_0045cd5a;
L_0045cd54:; BB(0x0045cd54);
    /* 0045cd54: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045cd57: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
L_0045cd5a:; BB(0x0045cd5a);
    /* 0045cd5a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045cd5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd5e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45cd63u); f_005dcb00();
    /* 0045cd63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cd66: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0045cd6c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0045cd72: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cd77u); f_0063aac0();
    /* 0045cd77: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045cd79: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0045cd7f: cmp dword ptr [ebp - 0xb4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd86: je 0x45cdb0 */ if (fZ) goto L_0045cdb0;
L_0045cd88:; BB(0x0045cd88);
    /* 0045cd88: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0045cd8e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cd93u); f_0063aac0();
    /* 0045cd93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045cd95: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 0045cd9b: cmp dword ptr [ebp - 0xb8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cda2: je 0x45cdb0 */ if (fZ) goto L_0045cdb0;
L_0045cda4:; BB(0x0045cda4);
    /* 0045cda4: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 0045cdae: jmp 0x45cdba */ goto L_0045cdba;
L_0045cdb0:; BB(0x0045cdb0);
    /* 0045cdb0: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
L_0045cdba:; BB(0x0045cdba);
    /* 0045cdba: movzx eax, byte ptr [ebp - 0x118] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee8u));
    /* 0045cdc1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0045cdc3: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0045cdc5: and eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045cdc8: add eax, 0x3f2 */ {  u32 a = r_eax; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045cdcd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045cdd0: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045cdd6: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0045cdd9: jmp 0x45cef0 */ goto L_0045cef0;
L_0045cdde:; BB(0x0045cdde);
    /* 0045cdde: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cde2: je 0x45cef0 */ if (fZ) goto L_0045cef0;
L_0045cde8:; BB(0x0045cde8);
    /* 0045cde8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045cdeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cdec: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045cdf2: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45cdf7u); f_004605c0();
    /* 0045cdf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cdf9: jne 0x45cef0 */ if (!fZ) goto L_0045cef0;
L_0045cdff:; BB(0x0045cdff);
    /* 0045cdff: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045ce02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce03: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45ce08u); f_005dcb00();
    /* 0045ce08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ce0b: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0045ce11: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0045ce17: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45ce1cu); f_0063aac0();
    /* 0045ce1c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045ce1e: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0045ce24: cmp dword ptr [ebp - 0xc0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce2b: je 0x45ce55 */ if (fZ) goto L_0045ce55;
L_0045ce2d:; BB(0x0045ce2d);
    /* 0045ce2d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0045ce33: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45ce38u); f_0063aac0();
    /* 0045ce38: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045ce3a: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0045ce40: cmp dword ptr [ebp - 0xc4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce47: je 0x45ce55 */ if (fZ) goto L_0045ce55;
L_0045ce49:; BB(0x0045ce49);
    /* 0045ce49: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0045ce53: jmp 0x45ce5f */ goto L_0045ce5f;
L_0045ce55:; BB(0x0045ce55);
    /* 0045ce55: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
L_0045ce5f:; BB(0x0045ce5f);
    /* 0045ce5f: movzx edx, byte ptr [ebp - 0x11c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffee4u));
    /* 0045ce66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce68: jne 0x45ce70 */ if (!fZ) goto L_0045ce70;
L_0045ce6a:; BB(0x0045ce6a);
    /* 0045ce6a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045ce6d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0045ce70:; BB(0x0045ce70);
    /* 0045ce70: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045ce73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce74: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45ce79u); f_005dcb00();
    /* 0045ce79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ce7c: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0045ce82: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045ce88: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45ce8du); f_0063aac0();
    /* 0045ce8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045ce8f: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 0045ce95: cmp dword ptr [ebp - 0xcc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ce9c: je 0x45cec6 */ if (fZ) goto L_0045cec6;
L_0045ce9e:; BB(0x0045ce9e);
    /* 0045ce9e: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0045cea4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45cea9u); f_0063aac0();
    /* 0045cea9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045ceab: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0045ceb1: cmp dword ptr [ebp - 0xd0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ceb8: je 0x45cec6 */ if (fZ) goto L_0045cec6;
L_0045ceba:; BB(0x0045ceba);
    /* 0045ceba: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 0045cec4: jmp 0x45ced0 */ goto L_0045ced0;
L_0045cec6:; BB(0x0045cec6);
    /* 0045cec6: mov dword ptr [ebp - 0x120], 1 */ W32((u32)(r_ebp+0xfffffee0u), 0x1u);
L_0045ced0:; BB(0x0045ced0);
    /* 0045ced0: movzx ecx, byte ptr [ebp - 0x120] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffee0u));
    /* 0045ced7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045ced9: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045cedb: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045cede: add ecx, 0x3f3 */ {  u32 a = r_ecx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045cee4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045cee7: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0045ceed: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0045cef0:; BB(0x0045cef0);
    /* 0045cef0: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cef5:; BB(0x0045cef5);
    /* 0045cef5: mov dword ptr [ebp - 0x20], 0xcb52 */ W32((u32)(r_ebp+0xffffffe0u), 0xcb52u);
    /* 0045cefc: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cf01:; BB(0x0045cf01);
    /* 0045cf01: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045cf07: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0045cf0d: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0045cf13: cmp dword ptr [ebp - 0xd8], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf1a: je 0x45cf21 */ if (fZ) goto L_0045cf21;
L_0045cf1c:; BB(0x0045cf1c);
    /* 0045cf1c: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cf21:; BB(0x0045cf21);
    /* 0045cf21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf23: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045cf29: call 0x44eaf0 */ r_esp -= 4; W32(r_esp, 0x45cf2eu); f_0044eaf0();
    /* 0045cf2e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045cf31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf33: je 0x45cf3c */ if (fZ) goto L_0045cf3c;
L_0045cf35:; BB(0x0045cf35);
    /* 0045cf35: mov dword ptr [ebp - 0x20], 0xcc33 */ W32((u32)(r_ebp+0xffffffe0u), 0xcc33u);
L_0045cf3c:; BB(0x0045cf3c);
    /* 0045cf3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf3e: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045cf44: call 0x44ebc0 */ r_esp -= 4; W32(r_esp, 0x45cf49u); f_0044ebc0();
    /* 0045cf49: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045cf4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf4e: je 0x45cf57 */ if (fZ) goto L_0045cf57;
L_0045cf50:; BB(0x0045cf50);
    /* 0045cf50: mov dword ptr [ebp - 0x20], 0xcc4c */ W32((u32)(r_ebp+0xffffffe0u), 0xcc4cu);
L_0045cf57:; BB(0x0045cf57);
    /* 0045cf57: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cf59:; BB(0x0045cf59);
    /* 0045cf59: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045cf5e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 0045cf64: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 0045cf6a: cmp dword ptr [ebp - 0xdc], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf71: je 0x45cf75 */ if (fZ) goto L_0045cf75;
L_0045cf73:; BB(0x0045cf73);
    /* 0045cf73: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cf75:; BB(0x0045cf75);
    /* 0045cf75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045cf78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf79: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045cf7f: call 0x4605c0 */ r_esp -= 4; W32(r_esp, 0x45cf84u); f_004605c0();
    /* 0045cf84: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0045cf8a: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf91: je 0x45cfb9 */ if (fZ) goto L_0045cfb9;
L_0045cf93:; BB(0x0045cf93);
    /* 0045cf93: cmp dword ptr [ebp - 0x124], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cf9a: je 0x45cfa7 */ if (fZ) goto L_0045cfa7;
L_0045cf9c:; BB(0x0045cf9c);
    /* 0045cf9c: cmp dword ptr [ebp - 0x124], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cfa3: je 0x45cfb0 */ if (fZ) goto L_0045cfb0;
L_0045cfa5:; BB(0x0045cfa5);
    /* 0045cfa5: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cfa7:; BB(0x0045cfa7);
    /* 0045cfa7: mov dword ptr [ebp - 0x20], 0xcc01 */ W32((u32)(r_ebp+0xffffffe0u), 0xcc01u);
    /* 0045cfae: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cfb0:; BB(0x0045cfb0);
    /* 0045cfb0: mov dword ptr [ebp - 0x20], 0xcbcf */ W32((u32)(r_ebp+0xffffffe0u), 0xcbcfu);
    /* 0045cfb7: jmp 0x45cfc0 */ goto L_0045cfc0;
L_0045cfb9:; BB(0x0045cfb9);
    /* 0045cfb9: mov dword ptr [ebp - 0x20], 0xcb6b */ W32((u32)(r_ebp+0xffffffe0u), 0xcb6bu);
L_0045cfc0:; BB(0x0045cfc0);
    /* 0045cfc0: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045cfc5: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0045cfcb: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0045cfd1: mov dword ptr [ecx + 0x124], 0xffffffff */ W32((u32)(r_ecx+0x124u), 0xffffffffu);
    /* 0045cfdb: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 0045cfe1: mov dword ptr [edx + 0x128], 0xffffffff */ W32((u32)(r_edx+0x128u), 0xffffffffu);
    /* 0045cfeb: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cfef: jne 0x45d066 */ if (!fZ) goto L_0045d066;
L_0045cff1:; BB(0x0045cff1);
    /* 0045cff1: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cff5: jne 0x45d01a */ if (!fZ) goto L_0045d01a;
L_0045cff7:; BB(0x0045cff7);
    /* 0045cff7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cff9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cffb: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0045d000: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045d003: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0045d009: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d00c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045d00e: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d010: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045d013: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d015u); call_ind(t); }
    /* 0045d015: jmp 0x45d19f */ goto L_0045d19f;
L_0045d01a:; BB(0x0045d01a);
    /* 0045d01a: cmp dword ptr [ebp - 0x54], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d01e: jne 0x45d040 */ if (!fZ) goto L_0045d040;
L_0045d020:; BB(0x0045d020);
    /* 0045d020: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d022: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0045d028: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045d02b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d02c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d02f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d030: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045d036: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 0045d039: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x45d03eu); f_005cd7c0();
    /* 0045d03e: jmp 0x45d061 */ goto L_0045d061;
L_0045d040:; BB(0x0045d040);
    /* 0045d040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d042: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0045d048: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d04c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045d04f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d050: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045d053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d054: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045d059: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0045d05c: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x45d061u); f_005cd700();
L_0045d061:; BB(0x0045d061);
    /* 0045d061: jmp 0x45d19f */ goto L_0045d19f;
L_0045d066:; BB(0x0045d066);
    /* 0045d066: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d06a: je 0x45d0f4 */ if (fZ) goto L_0045d0f4;
L_0045d070:; BB(0x0045d070);
    /* 0045d070: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045d076: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x45d07bu); f_00636730();
    /* 0045d07b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d07d: je 0x45d0f4 */ if (fZ) goto L_0045d0f4;
L_0045d07f:; BB(0x0045d07f);
    /* 0045d07f: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d083: jle 0x45d116 */ if ((fZ||fS!=fO)) goto L_0045d116;
L_0045d089:; BB(0x0045d089);
    /* 0045d089: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045d08c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d08d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45d092u); f_005dcb00();
    /* 0045d092: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d095: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0045d09b: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0045d0a1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d0a6u); f_0063aac0();
    /* 0045d0a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d0a8: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 0045d0ae: cmp dword ptr [ebp - 0xe4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d0b5: je 0x45d0df */ if (fZ) goto L_0045d0df;
L_0045d0b7:; BB(0x0045d0b7);
    /* 0045d0b7: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0045d0bd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45d0c2u); f_0063aac0();
    /* 0045d0c2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045d0c4: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0045d0ca: cmp dword ptr [ebp - 0xe8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d0d1: je 0x45d0df */ if (fZ) goto L_0045d0df;
L_0045d0d3:; BB(0x0045d0d3);
    /* 0045d0d3: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 0045d0dd: jmp 0x45d0e9 */ goto L_0045d0e9;
L_0045d0df:; BB(0x0045d0df);
    /* 0045d0df: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0045d0e9:; BB(0x0045d0e9);
    /* 0045d0e9: movzx ecx, byte ptr [ebp - 0x128] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 0045d0f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d0f2: je 0x45d116 */ if (fZ) goto L_0045d116;
L_0045d0f4:; BB(0x0045d0f4);
    /* 0045d0f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d0f8: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0045d0fe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d101: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0045d107: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045d10a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d10c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045d10f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d111u); call_ind(t); }
    /* 0045d111: jmp 0x45d19f */ goto L_0045d19f;
L_0045d116:; BB(0x0045d116);
    /* 0045d116: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d11a: je 0x45d127 */ if (fZ) goto L_0045d127;
L_0045d11c:; BB(0x0045d11c);
    /* 0045d11c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045d11f: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 0045d125: jmp 0x45d138 */ goto L_0045d138;
L_0045d127:; BB(0x0045d127);
    /* 0045d127: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045d12d: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x45d132u); f_00636c50();
    /* 0045d132: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
L_0045d138:; BB(0x0045d138);
    /* 0045d138: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0045d13e: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0045d141: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045d144: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045d147: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045d14a: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0045d14d: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0045d150: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0045d153: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0045d156: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0045d159: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d15b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0045d161: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d164: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0045d16a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045d16d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045d16f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d172: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d174u); call_ind(t); }
    /* 0045d174: mov cl, byte ptr [ebp - 0x41] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbfu))) & 0xffu);
    /* 0045d177: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d178: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d17a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045d180: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x45d185u); f_00637810();
    /* 0045d185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d186: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0045d18c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045d18f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d190: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0045d193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d194: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045d19a: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x45d19fu); f_00639390();
L_0045d19f:; BB(0x0045d19f);
    /* 0045d19f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d1a3: ret  */ FN_RET(0x0045c680); r_esp += 4; return;
}

