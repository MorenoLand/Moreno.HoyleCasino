#include "protos.h"

void f_0052f240(void) /* sub_52F240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f240);
    /* 0052f240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f241: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f245: push 0x6a463c */ { u32 v = 0x6a463cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f24a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052f250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f251: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f254: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052f259: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f25b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f25c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052f25f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052f265: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052f268: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f26a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52f26fu); f_00686d82();
    /* 0052f26f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f272: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052f275: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f27c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f280: je 0x52f293 */ if (fZ) goto L_0052f293;
L_0052f282:; BB(0x0052f282);
    /* 0052f282: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f286: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052f289: call 0x5301d0 */ r_esp -= 4; W32(r_esp, 0x52f28eu); f_005301d0();
    /* 0052f28e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052f291: jmp 0x52f29a */ goto L_0052f29a;
L_0052f293:; BB(0x0052f293);
    /* 0052f293: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052f29a:; BB(0x0052f29a);
    /* 0052f29a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052f29d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052f2a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052f2a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f2aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f2ae: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x52f2b3u); f_005f5df0();
    /* 0052f2b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f2b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052f2bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052f2be: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f2c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f2c1: ret  */ FN_RET(0x0052f240); r_esp += 4; return;
}

void f_0052f2d0(void) /* sub_52F2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f2d0);
    /* 0052f2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f2d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2d5: push 0x6a4662 */ { u32 v = 0x6a4662u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052f2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f2e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052f2e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f2eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052f2ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052f2f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052f2f8: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52f2ffu); f_00686d82();
    /* 0052f2ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f302: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052f305: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f30c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f310: je 0x52f323 */ if (fZ) goto L_0052f323;
L_0052f312:; BB(0x0052f312);
    /* 0052f312: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f316: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052f319: call 0x530450 */ r_esp -= 4; W32(r_esp, 0x52f31eu); f_00530450();
    /* 0052f31e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052f321: jmp 0x52f32a */ goto L_0052f32a;
L_0052f323:; BB(0x0052f323);
    /* 0052f323: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052f32a:; BB(0x0052f32a);
    /* 0052f32a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052f32d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052f330: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052f337: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f33a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f33b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f33e: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x52f343u); f_005f5df0();
    /* 0052f343: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f346: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052f34d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052f34e: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f351: ret  */ FN_RET(0x0052f2d0); r_esp += 4; return;
}

void f_0052f360(void) /* sub_52F360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f360);
    /* 0052f360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f361: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f365: push 0x6a4688 */ { u32 v = 0x6a4688u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f36a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052f370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f371: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052f379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f37c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052f37f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052f385: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052f388: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f38a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52f38fu); f_00686d82();
    /* 0052f38f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f392: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052f395: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f39c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f3a0: je 0x52f3b3 */ if (fZ) goto L_0052f3b3;
L_0052f3a2:; BB(0x0052f3a2);
    /* 0052f3a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f3a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052f3a9: call 0x5309c0 */ r_esp -= 4; W32(r_esp, 0x52f3aeu); f_005309c0();
    /* 0052f3ae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052f3b1: jmp 0x52f3ba */ goto L_0052f3ba;
L_0052f3b3:; BB(0x0052f3b3);
    /* 0052f3b3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052f3ba:; BB(0x0052f3ba);
    /* 0052f3ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052f3bd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052f3c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052f3c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f3ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f3ce: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x52f3d3u); f_005f5df0();
    /* 0052f3d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f3d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052f3dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052f3de: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f3e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f3e1: ret  */ FN_RET(0x0052f360); r_esp += 4; return;
}

void f_0052f3f0(void) /* sub_52F3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f3f0);
    /* 0052f3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f3f3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f3f6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0052f3f9: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3fb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f3fe: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052f404: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f405: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f40b: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f410u); f_00537880();
    /* 0052f410: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052f413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f415: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f418: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0052f41e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f41f: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f425: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f42au); f_00537880();
    /* 0052f42a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052f42d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f42f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f432: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f438: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f439: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f43f: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f444u); f_00537880();
    /* 0052f444: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052f447: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f449: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f44c: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052f452: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f453: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f459: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f45eu); f_00537880();
    /* 0052f45e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052f461: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f463: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f466: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0052f46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f46d: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f473: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f478u); f_00537880();
    /* 0052f478: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052f47b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f47d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f480: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f487: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f48d: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f492u); f_00537880();
    /* 0052f492: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052f495: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f497: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f49a: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052f4a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4a1: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f4a7: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f4acu); f_00537880();
    /* 0052f4ac: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052f4af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4b1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f4b4: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0052f4ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4bb: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f4c1: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f4c6u); f_00537880();
    /* 0052f4c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052f4c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4cb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f4ce: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4d5: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f4db: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f4e0u); f_00537880();
    /* 0052f4e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052f4e3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f4e6: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052f4ec: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f4ef: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f4f2: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052f4f8: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 0052f4fd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f500: jne 0x52f648 */ if (!fZ) goto L_0052f648;
L_0052f506:; BB(0x0052f506);
    /* 0052f506: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f509: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f50f: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f512: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f515: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f51a: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f51f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052f522: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052f524: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f528: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052f52b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f52e: mov byte ptr [eax + 0x19d], dl */ W8((u32)(r_eax+0x19du), (u8)r_edx);
    /* 0052f534: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f537: movzx edx, byte ptr [ecx + 0x19d] */ r_edx = (u32)R8((u32)(r_ecx+0x19du));
    /* 0052f53e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f540: jne 0x52f562 */ if (!fZ) goto L_0052f562;
L_0052f542:; BB(0x0052f542);
    /* 0052f542: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f546: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f549: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0052f54f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f552: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052f558: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f55a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f560: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f562u); call_ind(t); }
L_0052f562:; BB(0x0052f562);
    /* 0052f562: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f565: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f56b: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f56e: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f571: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f576: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f57b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f57c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f57f: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0052f585: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f588: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0052f58e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f590: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f596: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f598u); call_ind(t); }
    /* 0052f598: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f59b: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052f5a1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f5a4: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0052f5aa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f5ac: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f5af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f5b1u); call_ind(t); }
    /* 0052f5b1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f5b4: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f5ba: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f5bd: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f5c0: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f5c5: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f5ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f5cb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f5ce: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0052f5d4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f5d7: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0052f5dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f5df: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f5e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f5e7u); call_ind(t); }
    /* 0052f5e7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f5ea: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f5f0: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f5f3: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f5f6: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f5fb: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f600: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052f603: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052f605: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f609: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052f60c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f60f: mov byte ptr [eax + 0x19e], dl */ W8((u32)(r_eax+0x19eu), (u8)r_edx);
    /* 0052f615: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f618: movzx edx, byte ptr [ecx + 0x19e] */ r_edx = (u32)R8((u32)(r_ecx+0x19eu));
    /* 0052f61f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f621: jne 0x52f643 */ if (!fZ) goto L_0052f643;
L_0052f623:; BB(0x0052f623);
    /* 0052f623: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f627: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f62a: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052f630: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f633: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052f639: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f63b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f641: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f643u); call_ind(t); }
L_0052f643:; BB(0x0052f643);
    /* 0052f643: jmp 0x52f7a2 */ goto L_0052f7a2;
L_0052f648:; BB(0x0052f648);
    /* 0052f648: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f64b: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f651: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f654: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f657: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f65c: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f661: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052f664: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052f666: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f66a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052f66d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f670: mov byte ptr [eax + 0x19d], dl */ W8((u32)(r_eax+0x19du), (u8)r_edx);
    /* 0052f676: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f679: movzx edx, byte ptr [ecx + 0x19d] */ r_edx = (u32)R8((u32)(r_ecx+0x19du));
    /* 0052f680: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f682: jne 0x52f6a4 */ if (!fZ) goto L_0052f6a4;
L_0052f684:; BB(0x0052f684);
    /* 0052f684: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f688: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f68b: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0052f691: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f694: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052f69a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f69c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f6a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f6a4u); call_ind(t); }
L_0052f6a4:; BB(0x0052f6a4);
    /* 0052f6a4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f6a7: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f6ad: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f6b0: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f6b3: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f6b8: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f6bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f6be: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f6c1: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0052f6c7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f6ca: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0052f6d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f6d2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f6d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f6dau); call_ind(t); }
    /* 0052f6da: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f6dd: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f6e3: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f6e6: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f6e9: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f6ee: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f6f4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f6f7: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0052f6fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f700: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0052f706: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f708: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f70e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f710u); call_ind(t); }
    /* 0052f710: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f713: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f719: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f71c: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f71f: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f724: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f72a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f72d: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0052f733: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f736: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0052f73c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f73e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f744: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f746u); call_ind(t); }
    /* 0052f746: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f749: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f74f: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f752: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f755: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052f75a: movsx ecx, byte ptr [eax + edx + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x15u));
    /* 0052f75f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052f762: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052f764: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f768: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052f76b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f76e: mov byte ptr [eax + 0x19e], dl */ W8((u32)(r_eax+0x19eu), (u8)r_edx);
    /* 0052f774: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f777: movzx edx, byte ptr [ecx + 0x19e] */ r_edx = (u32)R8((u32)(r_ecx+0x19eu));
    /* 0052f77e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f780: jne 0x52f7a2 */ if (!fZ) goto L_0052f7a2;
L_0052f782:; BB(0x0052f782);
    /* 0052f782: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f786: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f789: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052f78f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052f792: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052f798: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f79a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f7a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f7a2u); call_ind(t); }
L_0052f7a2:; BB(0x0052f7a2);
    /* 0052f7a2: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0052f7a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f7a8: je 0x52f7df */ if (fZ) goto L_0052f7df;
L_0052f7aa:; BB(0x0052f7aa);
    /* 0052f7aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7ad: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052f7b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f7b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7b7: fld1  */ FPUSH(1.0);
    /* 0052f7b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f7bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7c4: push 0x18a93 */ { u32 v = 0x18a93u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7c9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052f7cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052f7d1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052f7d7: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052f7dd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52f7dfu); call_ind(t); }
L_0052f7df:; BB(0x0052f7df);
    /* 0052f7df: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f7e2: ret 4 */ FN_RET(0x0052f3f0); r_esp += 8; return;
}

