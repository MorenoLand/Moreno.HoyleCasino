#include "protos.h"

void f_005dc0a0(void) /* sub_5DC0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc0a0);
    /* 005dc0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc0a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc0a7: cmp dword ptr [0x7947c4], 0 */ {  u32 a = R32((u32)(0x7947c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0ae: je 0x5dc0c5 */ if (fZ) goto L_005dc0c5;
L_005dc0b0:; BB(0x005dc0b0);
    /* 005dc0b0: mov ecx, dword ptr [0x7947c4] */ r_ecx = R32((u32)(0x7947c4u));
    /* 005dc0b6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc0bbu); f_005f8990();
    /* 005dc0bb: mov dword ptr [0x7947c4], 0 */ W32((u32)(0x7947c4u), 0x0u);
L_005dc0c5:; BB(0x005dc0c5);
    /* 005dc0c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc0c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc0c8: ret  */ FN_RET(0x005dc0a0); r_esp += 4; return;
}

void f_005dc0d0(void) /* sub_5DC0D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc0d0);
    /* 005dc0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0d5: push 0x6a93cd */ { u32 v = 0x6a93cdu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc0e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc0e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc0eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc0ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc0ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc0f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc0f8: cmp dword ptr [0x7947c8], 0 */ {  u32 a = R32((u32)(0x7947c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0ff: jne 0x5dc16a */ if (!fZ) goto L_005dc16a;
L_005dc101:; BB(0x005dc101);
    /* 005dc101: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc106: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc10bu); f_00686d82();
    /* 005dc10b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc10e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc111: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc118: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc11c: je 0x5dc12b */ if (fZ) goto L_005dc12b;
L_005dc11e:; BB(0x005dc11e);
    /* 005dc11e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc121: call 0x5cefb0 */ r_esp -= 4; W32(r_esp, 0x5dc126u); f_005cefb0();
    /* 005dc126: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dc129: jmp 0x5dc132 */ goto L_005dc132;
L_005dc12b:; BB(0x005dc12b);
    /* 005dc12b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dc132:; BB(0x005dc132);
    /* 005dc132: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc135: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc138: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc13f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc142: mov dword ptr [0x7947c8], ecx */ W32((u32)(0x7947c8u), r_ecx);
    /* 005dc148: mov edx, dword ptr [0x7947c8] */ r_edx = R32((u32)(0x7947c8u));
    /* 005dc14e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc150: mov ecx, dword ptr [0x7947c8] */ r_ecx = R32((u32)(0x7947c8u));
    /* 005dc156: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005dc159: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dc15bu); call_ind(t); }
    /* 005dc15b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc15d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc15f: mov ecx, dword ptr [0x7947c8] */ r_ecx = R32((u32)(0x7947c8u));
    /* 005dc165: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc16au); f_005f7340();
L_005dc16a:; BB(0x005dc16a);
    /* 005dc16a: mov ecx, dword ptr [0x7947c8] */ r_ecx = R32((u32)(0x7947c8u));
    /* 005dc170: call 0x5cf3e0 */ r_esp -= 4; W32(r_esp, 0x5dc175u); f_005cf3e0();
    /* 005dc175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc178: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc17f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc180: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc183: ret  */ FN_RET(0x005dc0d0); r_esp += 4; return;
}

void f_005dc190(void) /* sub_5DC190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc190);
    /* 005dc190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc191: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc197: cmp dword ptr [0x7947c8], 0 */ {  u32 a = R32((u32)(0x7947c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc19e: je 0x5dc1b5 */ if (fZ) goto L_005dc1b5;
L_005dc1a0:; BB(0x005dc1a0);
    /* 005dc1a0: mov ecx, dword ptr [0x7947c8] */ r_ecx = R32((u32)(0x7947c8u));
    /* 005dc1a6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc1abu); f_005f8990();
    /* 005dc1ab: mov dword ptr [0x7947c8], 0 */ W32((u32)(0x7947c8u), 0x0u);
L_005dc1b5:; BB(0x005dc1b5);
    /* 005dc1b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc1b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc1b8: ret  */ FN_RET(0x005dc190); r_esp += 4; return;
}

void f_005dc1c0(void) /* sub_5DC1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc1c0);
    /* 005dc1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc1c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1c5: push 0x6a93f3 */ { u32 v = 0x6a93f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc1d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc1d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc1df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc1e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc1e8: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005dc1ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc1f1: je 0x5dc21b */ if (fZ) goto L_005dc21b;
L_005dc1f3:; BB(0x005dc1f3);
    /* 005dc1f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1f5: push 0x6d4510 */ { u32 v = 0x6d4510u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc1fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dc1ffu); f_00630f40();
    /* 005dc1ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc203: push 0x6d44f8 */ { u32 v = 0x6d44f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc208: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dc20du); f_00630f40();
    /* 005dc20d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc211: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5dc216u); f_0062ff10();
    /* 005dc216: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc219: jmp 0x5dc297 */ goto L_005dc297;
L_005dc21b:; BB(0x005dc21b);
    /* 005dc21b: cmp dword ptr [0x7947cc], 0 */ {  u32 a = R32((u32)(0x7947ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc222: jne 0x5dc28c */ if (!fZ) goto L_005dc28c;
L_005dc224:; BB(0x005dc224);
    /* 005dc224: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc229: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc22eu); f_00686d82();
    /* 005dc22e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc231: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc234: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc23b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc23f: je 0x5dc24e */ if (fZ) goto L_005dc24e;
L_005dc241:; BB(0x005dc241);
    /* 005dc241: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc244: call 0x5cf470 */ r_esp -= 4; W32(r_esp, 0x5dc249u); f_005cf470();
    /* 005dc249: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dc24c: jmp 0x5dc255 */ goto L_005dc255;
L_005dc24e:; BB(0x005dc24e);
    /* 005dc24e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dc255:; BB(0x005dc255);
    /* 005dc255: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc258: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dc25b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc262: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc265: mov dword ptr [0x7947cc], edx */ W32((u32)(0x7947ccu), r_edx);
    /* 005dc26b: mov eax, dword ptr [0x7947cc] */ r_eax = R32((u32)(0x7947ccu));
    /* 005dc270: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc272: mov ecx, dword ptr [0x7947cc] */ r_ecx = R32((u32)(0x7947ccu));
    /* 005dc278: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005dc27b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc27du); call_ind(t); }
    /* 005dc27d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc27f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc281: mov ecx, dword ptr [0x7947cc] */ r_ecx = R32((u32)(0x7947ccu));
    /* 005dc287: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc28cu); f_005f7340();
L_005dc28c:; BB(0x005dc28c);
    /* 005dc28c: mov ecx, dword ptr [0x7947cc] */ r_ecx = R32((u32)(0x7947ccu));
    /* 005dc292: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dc297u); f_005f85d0();
L_005dc297:; BB(0x005dc297);
    /* 005dc297: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc29a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc2a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc2a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2a5: ret  */ FN_RET(0x005dc1c0); r_esp += 4; return;
}

void f_005dc2b0(void) /* sub_5DC2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc2b0);
    /* 005dc2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc2b7: cmp dword ptr [0x7947cc], 0 */ {  u32 a = R32((u32)(0x7947ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc2be: je 0x5dc2d5 */ if (fZ) goto L_005dc2d5;
L_005dc2c0:; BB(0x005dc2c0);
    /* 005dc2c0: mov ecx, dword ptr [0x7947cc] */ r_ecx = R32((u32)(0x7947ccu));
    /* 005dc2c6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc2cbu); f_005f8990();
    /* 005dc2cb: mov dword ptr [0x7947cc], 0 */ W32((u32)(0x7947ccu), 0x0u);
L_005dc2d5:; BB(0x005dc2d5);
    /* 005dc2d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2d8: ret  */ FN_RET(0x005dc2b0); r_esp += 4; return;
}

void f_005dc2e0(void) /* sub_5DC2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc2e0);
    /* 005dc2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc2e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2e5: push 0x6a9419 */ { u32 v = 0x6a9419u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc2f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc2f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc2fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc2ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc305: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc308: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc30f: jne 0x5dc31a */ if (!fZ) goto L_005dc31a;
L_005dc311:; BB(0x005dc311);
    /* 005dc311: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc318: je 0x5dc31c */ if (fZ) goto L_005dc31c;
L_005dc31a:; BB(0x005dc31a);
    /* 005dc31a: jmp 0x5dc399 */ goto L_005dc399;
L_005dc31c:; BB(0x005dc31c);
    /* 005dc31c: cmp dword ptr [0x7947d0], 0 */ {  u32 a = R32((u32)(0x7947d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc323: jne 0x5dc38e */ if (!fZ) goto L_005dc38e;
L_005dc325:; BB(0x005dc325);
    /* 005dc325: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc32a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc32fu); f_00686d82();
    /* 005dc32f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc332: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc335: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc33c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc340: je 0x5dc34f */ if (fZ) goto L_005dc34f;
L_005dc342:; BB(0x005dc342);
    /* 005dc342: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc345: call 0x5cfaf0 */ r_esp -= 4; W32(r_esp, 0x5dc34au); f_005cfaf0();
    /* 005dc34a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dc34d: jmp 0x5dc356 */ goto L_005dc356;
L_005dc34f:; BB(0x005dc34f);
    /* 005dc34f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dc356:; BB(0x005dc356);
    /* 005dc356: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc359: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc35c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc363: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc366: mov dword ptr [0x7947d0], ecx */ W32((u32)(0x7947d0u), r_ecx);
    /* 005dc36c: mov edx, dword ptr [0x7947d0] */ r_edx = R32((u32)(0x7947d0u));
    /* 005dc372: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc374: mov ecx, dword ptr [0x7947d0] */ r_ecx = R32((u32)(0x7947d0u));
    /* 005dc37a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005dc37d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dc37fu); call_ind(t); }
    /* 005dc37f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc383: mov ecx, dword ptr [0x7947d0] */ r_ecx = R32((u32)(0x7947d0u));
    /* 005dc389: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc38eu); f_005f7340();
L_005dc38e:; BB(0x005dc38e);
    /* 005dc38e: mov ecx, dword ptr [0x7947d0] */ r_ecx = R32((u32)(0x7947d0u));
    /* 005dc394: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dc399u); f_005f85d0();
L_005dc399:; BB(0x005dc399);
    /* 005dc399: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc39c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc3a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc3a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc3a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc3a7: ret  */ FN_RET(0x005dc2e0); r_esp += 4; return;
}

void f_005dc3b0(void) /* sub_5DC3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc3b0);
    /* 005dc3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc3b7: cmp dword ptr [0x7947d0], 0 */ {  u32 a = R32((u32)(0x7947d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc3be: je 0x5dc3d5 */ if (fZ) goto L_005dc3d5;
L_005dc3c0:; BB(0x005dc3c0);
    /* 005dc3c0: mov ecx, dword ptr [0x7947d0] */ r_ecx = R32((u32)(0x7947d0u));
    /* 005dc3c6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc3cbu); f_005f8990();
    /* 005dc3cb: mov dword ptr [0x7947d0], 0 */ W32((u32)(0x7947d0u), 0x0u);
L_005dc3d5:; BB(0x005dc3d5);
    /* 005dc3d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc3d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc3d8: ret  */ FN_RET(0x005dc3b0); r_esp += 4; return;
}

void f_005dc3e0(void) /* sub_5DC3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc3e0);
    /* 005dc3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3e5: push 0x6a943f */ { u32 v = 0x6a943fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc3f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc3f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc3fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc3ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc405: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005dc408: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005dc40f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc411: je 0x5dc418 */ if (fZ) goto L_005dc418;
L_005dc413:; BB(0x005dc413);
    /* 005dc413: jmp 0x5dc4d0 */ goto L_005dc4d0;
L_005dc418:; BB(0x005dc418);
    /* 005dc418: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc41f: jne 0x5dc42a */ if (!fZ) goto L_005dc42a;
L_005dc421:; BB(0x005dc421);
    /* 005dc421: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc428: je 0x5dc42f */ if (fZ) goto L_005dc42f;
L_005dc42a:; BB(0x005dc42a);
    /* 005dc42a: jmp 0x5dc4d0 */ goto L_005dc4d0;
L_005dc42f:; BB(0x005dc42f);
    /* 005dc42f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc432: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5dc437u); f_005d52e0();
    /* 005dc437: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005dc43a: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 005dc43d: movsx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffebu));
    /* 005dc441: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc444: jne 0x5dc457 */ if (!fZ) goto L_005dc457;
L_005dc446:; BB(0x005dc446);
    /* 005dc446: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc44b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc44d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dc450: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5dc455u); f_005d70e0();
    /* 005dc455: jmp 0x5dc4d0 */ goto L_005dc4d0;
L_005dc457:; BB(0x005dc457);
    /* 005dc457: cmp dword ptr [0x7947d4], 0 */ {  u32 a = R32((u32)(0x7947d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc45e: jne 0x5dc4d0 */ if (!fZ) goto L_005dc4d0;
L_005dc460:; BB(0x005dc460);
    /* 005dc460: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc465: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc46au); f_00686d82();
    /* 005dc46a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc46d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc470: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc477: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc47b: je 0x5dc48a */ if (fZ) goto L_005dc48a;
L_005dc47d:; BB(0x005dc47d);
    /* 005dc47d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc480: call 0x5cfe70 */ r_esp -= 4; W32(r_esp, 0x5dc485u); f_005cfe70();
    /* 005dc485: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dc488: jmp 0x5dc491 */ goto L_005dc491;
L_005dc48a:; BB(0x005dc48a);
    /* 005dc48a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005dc491:; BB(0x005dc491);
    /* 005dc491: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc494: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc497: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc49e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc4a1: mov dword ptr [0x7947d4], ecx */ W32((u32)(0x7947d4u), r_ecx);
    /* 005dc4a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc4aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4ab: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005dc4b1: call 0x5cff20 */ r_esp -= 4; W32(r_esp, 0x5dc4b6u); f_005cff20();
    /* 005dc4b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4ba: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005dc4c0: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc4c5u); f_005f7340();
    /* 005dc4c5: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005dc4cb: call 0x5d0140 */ r_esp -= 4; W32(r_esp, 0x5dc4d0u); f_005d0140();
L_005dc4d0:; BB(0x005dc4d0);
    /* 005dc4d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc4d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc4da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc4db: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc4de: ret 4 */ FN_RET(0x005dc3e0); r_esp += 8; return;
}

void f_005dc4f0(void) /* sub_5DC4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc4f0);
    /* 005dc4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc4f7: cmp dword ptr [0x7947d4], 0 */ {  u32 a = R32((u32)(0x7947d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc4fe: je 0x5dc515 */ if (fZ) goto L_005dc515;
L_005dc500:; BB(0x005dc500);
    /* 005dc500: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005dc506: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc50bu); f_005f8990();
    /* 005dc50b: mov dword ptr [0x7947d4], 0 */ W32((u32)(0x7947d4u), 0x0u);
L_005dc515:; BB(0x005dc515);
    /* 005dc515: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc518: ret  */ FN_RET(0x005dc4f0); r_esp += 4; return;
}

void f_005dc520(void) /* sub_5DC520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc520);
    /* 005dc520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc521: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc525: push 0x6a9465 */ { u32 v = 0x6a9465u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc531: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc534: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc539: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc53b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc53c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc53f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc545: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc548: cmp dword ptr [0x7947d8], 0 */ {  u32 a = R32((u32)(0x7947d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc54f: jne 0x5dc5b6 */ if (!fZ) goto L_005dc5b6;
L_005dc551:; BB(0x005dc551);
    /* 005dc551: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc556: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc55bu); f_00686d82();
    /* 005dc55b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc55e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc561: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc568: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc56c: je 0x5dc57b */ if (fZ) goto L_005dc57b;
L_005dc56e:; BB(0x005dc56e);
    /* 005dc56e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc571: call 0x5d0500 */ r_esp -= 4; W32(r_esp, 0x5dc576u); f_005d0500();
    /* 005dc576: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dc579: jmp 0x5dc582 */ goto L_005dc582;
L_005dc57b:; BB(0x005dc57b);
    /* 005dc57b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dc582:; BB(0x005dc582);
    /* 005dc582: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc585: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dc588: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc58f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc592: mov dword ptr [0x7947d8], ecx */ W32((u32)(0x7947d8u), r_ecx);
    /* 005dc598: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc59b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc59c: mov ecx, dword ptr [0x7947d8] */ r_ecx = R32((u32)(0x7947d8u));
    /* 005dc5a2: call 0x5d05a0 */ r_esp -= 4; W32(r_esp, 0x5dc5a7u); f_005d05a0();
    /* 005dc5a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5ab: mov ecx, dword ptr [0x7947d8] */ r_ecx = R32((u32)(0x7947d8u));
    /* 005dc5b1: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc5b6u); f_005f7340();
L_005dc5b6:; BB(0x005dc5b6);
    /* 005dc5b6: mov ecx, dword ptr [0x7947d8] */ r_ecx = R32((u32)(0x7947d8u));
    /* 005dc5bc: call 0x5d06f0 */ r_esp -= 4; W32(r_esp, 0x5dc5c1u); f_005d06f0();
    /* 005dc5c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc5c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc5cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc5cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc5ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc5cf: ret 4 */ FN_RET(0x005dc520); r_esp += 8; return;
}

void f_005dc5e0(void) /* sub_5DC5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc5e0);
    /* 005dc5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc5e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc5e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc5e7: cmp dword ptr [0x7947d8], 0 */ {  u32 a = R32((u32)(0x7947d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc5ee: je 0x5dc605 */ if (fZ) goto L_005dc605;
L_005dc5f0:; BB(0x005dc5f0);
    /* 005dc5f0: mov ecx, dword ptr [0x7947d8] */ r_ecx = R32((u32)(0x7947d8u));
    /* 005dc5f6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dc5fbu); f_005f8990();
    /* 005dc5fb: mov dword ptr [0x7947d8], 0 */ W32((u32)(0x7947d8u), 0x0u);
L_005dc605:; BB(0x005dc605);
    /* 005dc605: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc608: ret  */ FN_RET(0x005dc5e0); r_esp += 4; return;
}

void f_005dc610(void) /* sub_5DC610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc610);
    /* 005dc610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc611: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc615: push 0x6a948b */ { u32 v = 0x6a948bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc61a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc621: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc624: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc629: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc62b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc62c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc62f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc635: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005dc638: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc63a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dc640: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5dc645u); f_00635cb0();
    /* 005dc645: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dc648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc64a: jne 0x5dc714 */ if (!fZ) goto L_005dc714;
L_005dc650:; BB(0x005dc650);
    /* 005dc650: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005dc657: jmp 0x5dc662 */ goto L_005dc662;
L_005dc659:; BB(0x005dc659);
    /* 005dc659: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc65c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc65f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005dc662:; BB(0x005dc662);
    /* 005dc662: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005dc668: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dc66a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dc670: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005dc676: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dc678u); call_ind(t); }
    /* 005dc678: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc67b: jge 0x5dc714 */ if ((fS==fO)) goto L_005dc714;
L_005dc681:; BB(0x005dc681);
    /* 005dc681: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc685: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dc68au); f_005dcb00();
    /* 005dc68a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc68d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dc690: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dc693: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dc698u); f_0063aac0();
    /* 005dc698: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dc69a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005dc69d: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6a1: je 0x5dc6bf */ if (fZ) goto L_005dc6bf;
L_005dc6a3:; BB(0x005dc6a3);
    /* 005dc6a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dc6a6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dc6abu); f_0063aac0();
    /* 005dc6ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc6ad: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005dc6b0: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6b4: je 0x5dc6bf */ if (fZ) goto L_005dc6bf;
L_005dc6b6:; BB(0x005dc6b6);
    /* 005dc6b6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005dc6bd: jmp 0x5dc6c6 */ goto L_005dc6c6;
L_005dc6bf:; BB(0x005dc6bf);
    /* 005dc6bf: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_005dc6c6:; BB(0x005dc6c6);
    /* 005dc6c6: movzx eax, byte ptr [ebp - 0x2c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 005dc6ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6cc: je 0x5dc70f */ if (fZ) goto L_005dc70f;
L_005dc6ce:; BB(0x005dc6ce);
    /* 005dc6ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc6d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6d2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dc6d7u); f_005dcb00();
    /* 005dc6d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc6da: mov ecx, eax */ r_ecx = r_eax;
    /* 005dc6dc: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5dc6e1u); f_005d52e0();
    /* 005dc6e1: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6e5: je 0x5dc70f */ if (fZ) goto L_005dc70f;
L_005dc6e7:; BB(0x005dc6e7);
    /* 005dc6e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6e9: push 0x6d4574 */ { u32 v = 0x6d4574u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dc6f3u); f_00630f40();
    /* 005dc6f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc6f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6f7: push 0x6d4558 */ { u32 v = 0x6d4558u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc6fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dc701u); f_00630f40();
    /* 005dc701: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc705: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5dc70au); f_0062ff10();
    /* 005dc70a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc70d: jmp 0x5dc714 */ goto L_005dc714;
L_005dc70f:; BB(0x005dc70f);
    /* 005dc70f: jmp 0x5dc659 */ goto L_005dc659;
L_005dc714:; BB(0x005dc714);
    /* 005dc714: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc71b: jne 0x5dc785 */ if (!fZ) goto L_005dc785;
L_005dc71d:; BB(0x005dc71d);
    /* 005dc71d: push 0x3c10 */ { u32 v = 0x3c10u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc722: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc727u); f_00686d82();
    /* 005dc727: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc72a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dc72d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc734: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc738: je 0x5dc747 */ if (fZ) goto L_005dc747;
L_005dc73a:; BB(0x005dc73a);
    /* 005dc73a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc73d: call 0x585f20 */ r_esp -= 4; W32(r_esp, 0x5dc742u); f_00585f20();
    /* 005dc742: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005dc745: jmp 0x5dc74e */ goto L_005dc74e;
L_005dc747:; BB(0x005dc747);
    /* 005dc747: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005dc74e:; BB(0x005dc74e);
    /* 005dc74e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005dc751: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005dc754: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc75b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc75e: mov dword ptr [0x793584], eax */ W32((u32)(0x793584u), r_eax);
    /* 005dc763: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005dc769: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc76b: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005dc771: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005dc774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc776u); call_ind(t); }
    /* 005dc776: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc77a: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005dc780: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc785u); f_005f7340();
L_005dc785:; BB(0x005dc785);
    /* 005dc785: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005dc78b: call 0x588300 */ r_esp -= 4; W32(r_esp, 0x5dc790u); f_00588300();
    /* 005dc790: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc793: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc79a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc79b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc79e: ret  */ FN_RET(0x005dc610); r_esp += 4; return;
}

void f_005dc9d0(void) /* sub_5DC9D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc9d0);
    /* 005dc9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc9d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc9da: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc9de: jne 0x5dc9e2 */ if (!fZ) goto L_005dc9e2;
L_005dc9e0:; BB(0x005dc9e0);
    /* 005dc9e0: jmp 0x5dc9ed */ goto L_005dc9ed;
L_005dc9e2:; BB(0x005dc9e2);
    /* 005dc9e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc9e5: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 005dc9e8: call 0x5e86b0 */ r_esp -= 4; W32(r_esp, 0x5dc9edu); f_005e86b0();
L_005dc9ed:; BB(0x005dc9ed);
    /* 005dc9ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc9ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc9f0: ret  */ FN_RET(0x005dc9d0); r_esp += 4; return;
}

void f_005dca70(void) /* sub_5DCA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dca70);
    /* 005dca70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dca71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dca73: mov eax, 0x6d46f0 */ r_eax = 0x6d46f0u;
    /* 005dca78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dca79: ret  */ FN_RET(0x005dca70); r_esp += 4; return;
}

void f_005dca80(void) /* sub_5DCA80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dca80);
    /* 005dca80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dca81: mov ebp, esp */ r_ebp = r_esp;
    /* 005dca83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dca85: push 0x6a94db */ { u32 v = 0x6a94dbu; r_esp -= 4; W32(r_esp, v); }
    /* 005dca8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dca90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dca91: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dca94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dca99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dca9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dca9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dca9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dcaa5: push 0x4f84 */ { u32 v = 0x4f84u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcaaa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dcaafu); f_00686d82();
    /* 005dcaaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcab2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dcab5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcabc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcac0: je 0x5dcacf */ if (fZ) goto L_005dcacf;
L_005dcac2:; BB(0x005dcac2);
    /* 005dcac2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dcac5: call 0x5dcb80 */ r_esp -= 4; W32(r_esp, 0x5dcacau); f_005dcb80();
    /* 005dcaca: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dcacd: jmp 0x5dcad6 */ goto L_005dcad6;
L_005dcacf:; BB(0x005dcacf);
    /* 005dcacf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005dcad6:; BB(0x005dcad6);
    /* 005dcad6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcad9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dcadc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dcae3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcae6: mov dword ptr [0x7947e0], ecx */ W32((u32)(0x7947e0u), r_ecx);
    /* 005dcaec: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005dcaf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcaf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dcafb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dcafc: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcafe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcaff: ret  */ FN_RET(0x005dca80); r_esp += 4; return;
}

void f_005dcb00(void) /* sub_5DCB00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcb00);
    /* 005dcb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb01: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcb03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb04: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcb0b: je 0x5dcb64 */ if (fZ) goto L_005dcb64;
L_005dcb0d:; BB(0x005dcb0d);
    /* 005dcb0d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005dcb12: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcb16: je 0x5dcb64 */ if (fZ) goto L_005dcb64;
L_005dcb18:; BB(0x005dcb18);
    /* 005dcb18: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcb1c: jl 0x5dcb64 */ if ((fS!=fO)) goto L_005dcb64;
L_005dcb1e:; BB(0x005dcb1e);
    /* 005dcb1e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dcb24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dcb26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dcb2c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005dcb32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dcb34u); call_ind(t); }
    /* 005dcb34: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcb37: jge 0x5dcb64 */ if ((fS==fO)) goto L_005dcb64;
L_005dcb39:; BB(0x005dcb39);
    /* 005dcb39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb3b: push 0x75d708 */ { u32 v = 0x75d708u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb40: push 0x75d724 */ { u32 v = 0x75d724u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb47: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dcb4d: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005dcb50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dcb53: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005dcb56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb57: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5dcb5cu); f_00686ede();
    /* 005dcb5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcb5f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcb62: jmp 0x5dcb6b */ goto L_005dcb6b;
L_005dcb64:; BB(0x005dcb64);
    /* 005dcb64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005dcb6b:; BB(0x005dcb6b);
    /* 005dcb6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcb6e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcb70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcb71: ret  */ FN_RET(0x005dcb00); r_esp += 4; return;
}

