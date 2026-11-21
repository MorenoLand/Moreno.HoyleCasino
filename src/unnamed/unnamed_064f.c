#include "protos.h"

void f_0064f030(void) /* sub_64F030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f030);
    /* 0064f030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f031: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f037: cmp dword ptr [0x16306d0], 0 */ {  u32 a = R32((u32)(0x16306d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f03e: je 0x64f055 */ if (fZ) goto L_0064f055;
L_0064f040:; BB(0x0064f040);
    /* 0064f040: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0064f046: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f04bu); f_005f8990();
    /* 0064f04b: mov dword ptr [0x16306d0], 0 */ W32((u32)(0x16306d0u), 0x0u);
L_0064f055:; BB(0x0064f055);
    /* 0064f055: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f057: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f058: ret  */ FN_RET(0x0064f030); r_esp += 4; return;
}

void f_0064f350(void) /* sub_64F350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f350);
    /* 0064f350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f351: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f357: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f35e: je 0x64f375 */ if (fZ) goto L_0064f375;
L_0064f360:; BB(0x0064f360);
    /* 0064f360: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0064f366: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f36bu); f_005f8990();
    /* 0064f36b: mov dword ptr [0x163069c], 0 */ W32((u32)(0x163069cu), 0x0u);
L_0064f375:; BB(0x0064f375);
    /* 0064f375: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f377: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f378: ret  */ FN_RET(0x0064f350); r_esp += 4; return;
}

void f_0064f380(void) /* sub_64F380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f380);
    /* 0064f380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f381: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f385: push 0x6ac165 */ { u32 v = 0x6ac165u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f38a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f391: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f394: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f399: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f39b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f39c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f39f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f3a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f3a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f3ab: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f3af: jne 0x64f41a */ if (!fZ) goto L_0064f41a;
L_0064f3b1:; BB(0x0064f3b1);
    /* 0064f3b1: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f3b6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f3bbu); f_00686d82();
    /* 0064f3bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f3be: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f3c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f3c8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f3cc: je 0x64f3db */ if (fZ) goto L_0064f3db;
L_0064f3ce:; BB(0x0064f3ce);
    /* 0064f3ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f3d1: call 0x650830 */ r_esp -= 4; W32(r_esp, 0x64f3d6u); f_00650830();
    /* 0064f3d6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f3d9: jmp 0x64f3e2 */ goto L_0064f3e2;
L_0064f3db:; BB(0x0064f3db);
    /* 0064f3db: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f3e2:; BB(0x0064f3e2);
    /* 0064f3e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f3e5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064f3e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f3ef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f3f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f3f5: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0064f3f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f3fb: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0064f3fe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f401: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0064f404: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064f406: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0064f409: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64f40bu); call_ind(t); }
    /* 0064f40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f40d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f40f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f412: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0064f415: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f41au); f_005f7340();
L_0064f41a:; BB(0x0064f41a);
    /* 0064f41a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f41d: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0064f420: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f425u); f_005f85d0();
    /* 0064f425: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f428: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f42f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f430: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f433: ret  */ FN_RET(0x0064f380); r_esp += 4; return;
}

void f_0064f440(void) /* sub_64F440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f440);
    /* 0064f440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f441: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064f44a: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f44e: je 0x64f465 */ if (fZ) goto L_0064f465;
L_0064f450:; BB(0x0064f450);
    /* 0064f450: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064f453: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0064f456: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f45bu); f_005f8990();
    /* 0064f45b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064f45e: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
L_0064f465:; BB(0x0064f465);
    /* 0064f465: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f467: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f468: ret  */ FN_RET(0x0064f440); r_esp += 4; return;
}

void f_0064f470(void) /* sub_64F470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f470);
    /* 0064f470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f471: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f475: push 0x6ac19c */ { u32 v = 0x6ac19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f47a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f481: sub esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f487: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f48c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f48e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f492: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f495: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f49b: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 0064f4a1: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f4abu); f_00686d82();
    /* 0064f4ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f4ae: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0064f4b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f4bb: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f4c2: je 0x64f4d7 */ if (fZ) goto L_0064f4d7;
L_0064f4c4:; BB(0x0064f4c4);
    /* 0064f4c4: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0064f4ca: call 0x674d40 */ r_esp -= 4; W32(r_esp, 0x64f4cfu); f_00674d40();
    /* 0064f4cf: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0064f4d5: jmp 0x64f4e1 */ goto L_0064f4e1;
L_0064f4d7:; BB(0x0064f4d7);
    /* 0064f4d7: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0064f4e1:; BB(0x0064f4e1);
    /* 0064f4e1: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0064f4e7: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0064f4ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f4f4: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0064f4fa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064f4fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f500: call 0x675480 */ r_esp -= 4; W32(r_esp, 0x64f505u); f_00675480();
    /* 0064f505: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064f508: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f50a: jne 0x64f54a */ if (!fZ) goto L_0064f54a;
L_0064f50c:; BB(0x0064f50c);
    /* 0064f50c: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f511: push 0x6dd0e8 */ { u32 v = 0x6dd0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f516: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64f51bu); f_00630f40();
    /* 0064f51b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f51f: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0064f525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f526: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64f52cu); call_ind(t); }
    /* 0064f52c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f52f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f531: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f536: lea ecx, [ebp - 0x114] */ r_ecx = (u32)(r_ebp+0xfffffeecu);
    /* 0064f53c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f53d: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x64f542u); f_0062ff10();
    /* 0064f542: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f545: jmp 0x64f5d7 */ goto L_0064f5d7;
L_0064f54a:; BB(0x0064f54a);
    /* 0064f54a: cmp dword ptr [0x16306a4], 0 */ {  u32 a = R32((u32)(0x16306a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f551: jne 0x64f5cc */ if (!fZ) goto L_0064f5cc;
L_0064f553:; BB(0x0064f553);
    /* 0064f553: push 0x640 */ { u32 v = 0x640u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f558: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f55du); f_00686d82();
    /* 0064f55d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f560: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0064f566: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f56d: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f574: je 0x64f591 */ if (fZ) goto L_0064f591;
L_0064f576:; BB(0x0064f576);
    /* 0064f576: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064f579: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f57a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f57d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f57e: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0064f584: call 0x656340 */ r_esp -= 4; W32(r_esp, 0x64f589u); f_00656340();
    /* 0064f589: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0064f58f: jmp 0x64f59b */ goto L_0064f59b;
L_0064f591:; BB(0x0064f591);
    /* 0064f591: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_0064f59b:; BB(0x0064f59b);
    /* 0064f59b: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0064f5a1: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 0064f5a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f5ae: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0064f5b4: mov dword ptr [0x16306a4], edx */ W32((u32)(0x16306a4u), r_edx);
    /* 0064f5ba: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0064f5bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064f5c1: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0064f5c7: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0064f5ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64f5ccu); call_ind(t); }
L_0064f5cc:; BB(0x0064f5cc);
    /* 0064f5cc: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0064f5d2: call 0x6571b0 */ r_esp -= 4; W32(r_esp, 0x64f5d7u); f_006571b0();
L_0064f5d7:; BB(0x0064f5d7);
    /* 0064f5d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f5da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f5e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f5e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f5e5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064f5e7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x64f5ecu); f_00686d72();
    /* 0064f5ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f5ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f5ef: ret 4 */ FN_RET(0x0064f470); r_esp += 8; return;
}

void f_0064f600(void) /* sub_64F600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f600);
    /* 0064f600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f601: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f607: cmp dword ptr [0x16306a4], 0 */ {  u32 a = R32((u32)(0x16306a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f60e: je 0x64f625 */ if (fZ) goto L_0064f625;
L_0064f610:; BB(0x0064f610);
    /* 0064f610: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0064f616: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f61bu); f_005f8990();
    /* 0064f61b: mov dword ptr [0x16306a4], 0 */ W32((u32)(0x16306a4u), 0x0u);
L_0064f625:; BB(0x0064f625);
    /* 0064f625: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f62c: je 0x64f639 */ if (fZ) goto L_0064f639;
L_0064f62e:; BB(0x0064f62e);
    /* 0064f62e: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064f634: call 0x65e770 */ r_esp -= 4; W32(r_esp, 0x64f639u); f_0065e770();
L_0064f639:; BB(0x0064f639);
    /* 0064f639: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f640: je 0x64f64d */ if (fZ) goto L_0064f64d;
L_0064f642:; BB(0x0064f642);
    /* 0064f642: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0064f648: call 0x65c4d0 */ r_esp -= 4; W32(r_esp, 0x64f64du); f_0065c4d0();
L_0064f64d:; BB(0x0064f64d);
    /* 0064f64d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f650: ret  */ FN_RET(0x0064f600); r_esp += 4; return;
}

void f_0064f660(void) /* sub_64F660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f660);
    /* 0064f660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f661: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f665: push 0x6ac1cf */ { u32 v = 0x6ac1cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f66a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f671: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f674: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f679: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f67c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f67f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f685: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f688: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064f68d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064f68f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064f695: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0064f69b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64f69du); call_ind(t); }
    /* 0064f69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f69f: jne 0x64f6a6 */ if (!fZ) goto L_0064f6a6;
L_0064f6a1:; BB(0x0064f6a1);
    /* 0064f6a1: jmp 0x64f726 */ goto L_0064f726;
L_0064f6a6:; BB(0x0064f6a6);
    /* 0064f6a6: cmp dword ptr [0x16306d4], 0 */ {  u32 a = R32((u32)(0x16306d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f6ad: jne 0x64f71b */ if (!fZ) goto L_0064f71b;
L_0064f6af:; BB(0x0064f6af);
    /* 0064f6af: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6b4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f6b9u); f_00686d82();
    /* 0064f6b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f6bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f6bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f6c6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f6ca: je 0x64f6dd */ if (fZ) goto L_0064f6dd;
L_0064f6cc:; BB(0x0064f6cc);
    /* 0064f6cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064f6cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f6d3: call 0x676650 */ r_esp -= 4; W32(r_esp, 0x64f6d8u); f_00676650();
    /* 0064f6d8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f6db: jmp 0x64f6e4 */ goto L_0064f6e4;
L_0064f6dd:; BB(0x0064f6dd);
    /* 0064f6dd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f6e4:; BB(0x0064f6e4);
    /* 0064f6e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f6e7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064f6ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f6f1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f6f4: mov dword ptr [0x16306d4], eax */ W32((u32)(0x16306d4u), r_eax);
    /* 0064f6f9: mov ecx, dword ptr [0x16306d4] */ r_ecx = R32((u32)(0x16306d4u));
    /* 0064f6ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064f701: mov ecx, dword ptr [0x16306d4] */ r_ecx = R32((u32)(0x16306d4u));
    /* 0064f707: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0064f70a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64f70cu); call_ind(t); }
    /* 0064f70c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f70e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f710: mov ecx, dword ptr [0x16306d4] */ r_ecx = R32((u32)(0x16306d4u));
    /* 0064f716: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f71bu); f_005f7340();
L_0064f71b:; BB(0x0064f71b);
    /* 0064f71b: mov ecx, dword ptr [0x16306d4] */ r_ecx = R32((u32)(0x16306d4u));
    /* 0064f721: call 0x676840 */ r_esp -= 4; W32(r_esp, 0x64f726u); f_00676840();
L_0064f726:; BB(0x0064f726);
    /* 0064f726: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f729: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f731: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f733: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f734: ret 4 */ FN_RET(0x0064f660); r_esp += 8; return;
}

void f_0064f740(void) /* sub_64F740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f740);
    /* 0064f740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f741: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f747: cmp dword ptr [0x16306d4], 0 */ {  u32 a = R32((u32)(0x16306d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f74e: je 0x64f765 */ if (fZ) goto L_0064f765;
L_0064f750:; BB(0x0064f750);
    /* 0064f750: mov ecx, dword ptr [0x16306d4] */ r_ecx = R32((u32)(0x16306d4u));
    /* 0064f756: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f75bu); f_005f8990();
    /* 0064f75b: mov dword ptr [0x16306d4], 0 */ W32((u32)(0x16306d4u), 0x0u);
L_0064f765:; BB(0x0064f765);
    /* 0064f765: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f767: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f768: ret  */ FN_RET(0x0064f740); r_esp += 4; return;
}

void f_0064f770(void) /* sub_64F770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f770);
    /* 0064f770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f771: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f775: push 0x6ac1f5 */ { u32 v = 0x6ac1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f781: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f784: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f789: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f78c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f78f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f795: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f798: cmp dword ptr [0x16306d8], 0 */ {  u32 a = R32((u32)(0x16306d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f79f: jne 0x64f80a */ if (!fZ) goto L_0064f80a;
L_0064f7a1:; BB(0x0064f7a1);
    /* 0064f7a1: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f7abu); f_00686d82();
    /* 0064f7ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f7ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f7b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f7b8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f7bc: je 0x64f7cb */ if (fZ) goto L_0064f7cb;
L_0064f7be:; BB(0x0064f7be);
    /* 0064f7be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f7c1: call 0x676b60 */ r_esp -= 4; W32(r_esp, 0x64f7c6u); f_00676b60();
    /* 0064f7c6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f7c9: jmp 0x64f7d2 */ goto L_0064f7d2;
L_0064f7cb:; BB(0x0064f7cb);
    /* 0064f7cb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f7d2:; BB(0x0064f7d2);
    /* 0064f7d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f7d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f7d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f7df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f7e2: mov dword ptr [0x16306d8], ecx */ W32((u32)(0x16306d8u), r_ecx);
    /* 0064f7e8: mov edx, dword ptr [0x16306d8] */ r_edx = R32((u32)(0x16306d8u));
    /* 0064f7ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064f7f0: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0064f7f6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f7f9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64f7fbu); call_ind(t); }
    /* 0064f7fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7ff: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0064f805: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f80au); f_005f7340();
L_0064f80a:; BB(0x0064f80a);
    /* 0064f80a: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0064f810: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f815u); f_005f85d0();
    /* 0064f815: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f818: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f81f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f820: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f823: ret  */ FN_RET(0x0064f770); r_esp += 4; return;
}

void f_0064f830(void) /* sub_64F830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f830);
    /* 0064f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f837: cmp dword ptr [0x16306d8], 0 */ {  u32 a = R32((u32)(0x16306d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f83e: je 0x64f855 */ if (fZ) goto L_0064f855;
L_0064f840:; BB(0x0064f840);
    /* 0064f840: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0064f846: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f84bu); f_005f8990();
    /* 0064f84b: mov dword ptr [0x16306d8], 0 */ W32((u32)(0x16306d8u), 0x0u);
L_0064f855:; BB(0x0064f855);
    /* 0064f855: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f858: ret  */ FN_RET(0x0064f830); r_esp += 4; return;
}

void f_0064f860(void) /* sub_64F860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f860);
    /* 0064f860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f861: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f865: push 0x6ac21b */ { u32 v = 0x6ac21bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f871: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f87b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f87c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f87f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f885: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f888: cmp dword ptr [0x16306dc], 0 */ {  u32 a = R32((u32)(0x16306dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f88f: jne 0x64f8fa */ if (!fZ) goto L_0064f8fa;
L_0064f891:; BB(0x0064f891);
    /* 0064f891: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f896: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f89bu); f_00686d82();
    /* 0064f89b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f89e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f8a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f8a8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f8ac: je 0x64f8bb */ if (fZ) goto L_0064f8bb;
L_0064f8ae:; BB(0x0064f8ae);
    /* 0064f8ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8b1: call 0x677690 */ r_esp -= 4; W32(r_esp, 0x64f8b6u); f_00677690();
    /* 0064f8b6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f8b9: jmp 0x64f8c2 */ goto L_0064f8c2;
L_0064f8bb:; BB(0x0064f8bb);
    /* 0064f8bb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f8c2:; BB(0x0064f8c2);
    /* 0064f8c2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f8c5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f8c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f8cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f8d2: mov dword ptr [0x16306dc], ecx */ W32((u32)(0x16306dcu), r_ecx);
    /* 0064f8d8: mov edx, dword ptr [0x16306dc] */ r_edx = R32((u32)(0x16306dcu));
    /* 0064f8de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064f8e0: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0064f8e6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f8e9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64f8ebu); call_ind(t); }
    /* 0064f8eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8ef: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0064f8f5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f8fau); f_005f7340();
L_0064f8fa:; BB(0x0064f8fa);
    /* 0064f8fa: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0064f900: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f905u); f_005f85d0();
    /* 0064f905: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f908: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f90f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f910: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f912: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f913: ret  */ FN_RET(0x0064f860); r_esp += 4; return;
}

void f_0064f920(void) /* sub_64F920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f920);
    /* 0064f920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f921: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f927: cmp dword ptr [0x16306dc], 0 */ {  u32 a = R32((u32)(0x16306dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f92e: je 0x64f945 */ if (fZ) goto L_0064f945;
L_0064f930:; BB(0x0064f930);
    /* 0064f930: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0064f936: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f93bu); f_005f8990();
    /* 0064f93b: mov dword ptr [0x16306dc], 0 */ W32((u32)(0x16306dcu), 0x0u);
L_0064f945:; BB(0x0064f945);
    /* 0064f945: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f948: ret  */ FN_RET(0x0064f920); r_esp += 4; return;
}

void f_0064f950(void) /* sub_64F950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f950);
    /* 0064f950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f951: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f955: push 0x6ac241 */ { u32 v = 0x6ac241u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f961: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f96c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f96f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f975: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f978: cmp dword ptr [0x16306c4], 0 */ {  u32 a = R32((u32)(0x16306c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f97f: jne 0x64fa0d */ if (!fZ) goto L_0064fa0d;
L_0064f985:; BB(0x0064f985);
    /* 0064f985: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f98a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f98fu); f_00686d82();
    /* 0064f98f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f992: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f995: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f99c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f9a0: je 0x64f9af */ if (fZ) goto L_0064f9af;
L_0064f9a2:; BB(0x0064f9a2);
    /* 0064f9a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f9a5: call 0x66d310 */ r_esp -= 4; W32(r_esp, 0x64f9aau); f_0066d310();
    /* 0064f9aa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f9ad: jmp 0x64f9b6 */ goto L_0064f9b6;
L_0064f9af:; BB(0x0064f9af);
    /* 0064f9af: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f9b6:; BB(0x0064f9b6);
    /* 0064f9b6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f9b9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f9bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f9c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f9c6: mov dword ptr [0x16306c4], ecx */ W32((u32)(0x16306c4u), r_ecx);
    /* 0064f9cc: mov ecx, dword ptr [0x16306c4] */ r_ecx = R32((u32)(0x16306c4u));
    /* 0064f9d2: call 0x66d7f0 */ r_esp -= 4; W32(r_esp, 0x64f9d7u); f_0066d7f0();
    /* 0064f9d7: cmp dword ptr [0x16306c4], 0 */ {  u32 a = R32((u32)(0x16306c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f9de: jne 0x64f9e2 */ if (!fZ) goto L_0064f9e2;
L_0064f9e0:; BB(0x0064f9e0);
    /* 0064f9e0: jmp 0x64fa20 */ goto L_0064fa20;
L_0064f9e2:; BB(0x0064f9e2);
    /* 0064f9e2: mov edx, dword ptr [0x16306c4] */ r_edx = R32((u32)(0x16306c4u));
    /* 0064f9e8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064f9ed: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0064f9f0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0064f9f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9f7: mov edx, dword ptr [0x16306c4] */ r_edx = R32((u32)(0x16306c4u));
    /* 0064f9fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064f9ff: mov ecx, dword ptr [0x16306c4] */ r_ecx = R32((u32)(0x16306c4u));
    /* 0064fa05: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0064fa0b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64fa0du); call_ind(t); }
L_0064fa0d:; BB(0x0064fa0d);
    /* 0064fa0d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064fa10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa11: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064fa14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa15: mov ecx, dword ptr [0x16306c4] */ r_ecx = R32((u32)(0x16306c4u));
    /* 0064fa1b: call 0x66e9e0 */ r_esp -= 4; W32(r_esp, 0x64fa20u); f_0066e9e0();
L_0064fa20:; BB(0x0064fa20);
    /* 0064fa20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fa23: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064fa2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064fa2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fa2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fa2e: ret 8 */ FN_RET(0x0064f950); r_esp += 12; return;
}

void f_0064fa40(void) /* sub_64FA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fa40);
    /* 0064fa40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa41: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fa43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064fa46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064fa49: cmp dword ptr [0x16306c4], 0 */ {  u32 a = R32((u32)(0x16306c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa50: je 0x64fa8a */ if (fZ) goto L_0064fa8a;
L_0064fa52:; BB(0x0064fa52);
    /* 0064fa52: mov eax, dword ptr [0x16306c4] */ r_eax = R32((u32)(0x16306c4u));
    /* 0064fa57: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064fa5a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064fa5d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064fa60: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa64: je 0x64fa79 */ if (fZ) goto L_0064fa79;
L_0064fa66:; BB(0x0064fa66);
    /* 0064fa66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064fa6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064fa6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064fa70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064fa72: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64fa74u); call_ind(t); }
    /* 0064fa74: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064fa77: jmp 0x64fa80 */ goto L_0064fa80;
L_0064fa79:; BB(0x0064fa79);
    /* 0064fa79: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0064fa80:; BB(0x0064fa80);
    /* 0064fa80: mov dword ptr [0x16306c4], 0 */ W32((u32)(0x16306c4u), 0x0u);
L_0064fa8a:; BB(0x0064fa8a);
    /* 0064fa8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fa8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fa8d: ret  */ FN_RET(0x0064fa40); r_esp += 4; return;
}

void f_0064fba0(void) /* sub_64FBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fba0);
    /* 0064fba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fba5: push 0x6ac28d */ { u32 v = 0x6ac28du; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064fbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbb1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064fbb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064fbb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064fbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064fbbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064fbc5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0064fbc8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064fbcf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fbd5: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64fbdau); f_005f3bf0();
    /* 0064fbda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbdb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064fbe0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064fbe2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fbe8: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064fbee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fbf0u); call_ind(t); }
    /* 0064fbf0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064fbf3: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fbf7: jne 0x64fbfe */ if (!fZ) goto L_0064fbfe;
L_0064fbf9:; BB(0x0064fbf9);
    /* 0064fbf9: jmp 0x64fcb4 */ goto L_0064fcb4;
L_0064fbfe:; BB(0x0064fbfe);
    /* 0064fbfe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064fc01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fc03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064fc06: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0064fc0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fc0eu); call_ind(t); }
    /* 0064fc0e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064fc11: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc13: jne 0x64fc1a */ if (!fZ) goto L_0064fc1a;
L_0064fc15:; BB(0x0064fc15);
    /* 0064fc15: jmp 0x64fcb4 */ goto L_0064fcb4;
L_0064fc1a:; BB(0x0064fc1a);
    /* 0064fc1a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc1d: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc21: jne 0x64fc88 */ if (!fZ) goto L_0064fc88;
L_0064fc23:; BB(0x0064fc23);
    /* 0064fc23: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fc28: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64fc2du); f_00686d82();
    /* 0064fc2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fc30: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064fc33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064fc3a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc3e: je 0x64fc4d */ if (fZ) goto L_0064fc4d;
L_0064fc40:; BB(0x0064fc40);
    /* 0064fc40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064fc43: call 0x66f3f0 */ r_esp -= 4; W32(r_esp, 0x64fc48u); f_0066f3f0();
    /* 0064fc48: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064fc4b: jmp 0x64fc54 */ goto L_0064fc54;
L_0064fc4d:; BB(0x0064fc4d);
    /* 0064fc4d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0064fc54:; BB(0x0064fc54);
    /* 0064fc54: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064fc57: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064fc5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064fc61: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc64: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064fc67: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0064fc6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc6d: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0064fc70: call 0x66f4f0 */ r_esp -= 4; W32(r_esp, 0x64fc75u); f_0066f4f0();
    /* 0064fc75: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc78: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0064fc7b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc7e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0064fc81: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064fc83: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064fc86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fc88u); call_ind(t); }
L_0064fc88:; BB(0x0064fc88);
    /* 0064fc88: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fc8b: movzx edx, byte ptr [ecx + 0x48] */ r_edx = (u32)R8((u32)(r_ecx+0x48u));
    /* 0064fc8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc91: jne 0x64fca1 */ if (!fZ) goto L_0064fca1;
L_0064fc93:; BB(0x0064fc93);
    /* 0064fc93: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064fc97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc99: jne 0x64fca1 */ if (!fZ) goto L_0064fca1;
L_0064fc9b:; BB(0x0064fc9b);
    /* 0064fc9b: mov byte ptr [ebp - 0x21], 0 */ W8((u32)(r_ebp+0xffffffdfu), 0x0u);
    /* 0064fc9f: jmp 0x64fca5 */ goto L_0064fca5;
L_0064fca1:; BB(0x0064fca1);
    /* 0064fca1: mov byte ptr [ebp - 0x21], 1 */ W8((u32)(r_ebp+0xffffffdfu), 0x1u);
L_0064fca5:; BB(0x0064fca5);
    /* 0064fca5: mov cl, byte ptr [ebp - 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdfu))) & 0xffu);
    /* 0064fca8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fca9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fcac: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0064fcaf: call 0x66f610 */ r_esp -= 4; W32(r_esp, 0x64fcb4u); f_0066f610();
L_0064fcb4:; BB(0x0064fcb4);
    /* 0064fcb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fcb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064fcbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064fcbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fcc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fcc2: ret 4 */ FN_RET(0x0064fba0); r_esp += 8; return;
}

