#include "protos.h"

void f_004012b0(void) /* BaccaratDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004012b0);
    /* 004012b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004012b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004012b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004012b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004012b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004012bc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4012c1u); f_005e9e20();
    /* 004012c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004012c4: mov dword ptr [eax], 0x6b2728 */ W32((u32)(r_eax), 0x6b2728u);
    /* 004012ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004012d1: jmp 0x4012dc */ goto L_004012dc;
L_004012d3:; BB(0x004012d3);
    /* 004012d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004012d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004012d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004012dc:; BB(0x004012dc);
    /* 004012dc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004012e0: jge 0x4012f2 */ if ((fS==fO)) goto L_004012f2;
L_004012e2:; BB(0x004012e2);
    /* 004012e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004012e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004012e8: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 004012f0: jmp 0x4012d3 */ goto L_004012d3;
L_004012f2:; BB(0x004012f2);
    /* 004012f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004012f5: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 004012fc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004012ff: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00401306: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040130d: jmp 0x401318 */ goto L_00401318;
L_0040130f:; BB(0x0040130f);
    /* 0040130f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401312: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401315: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00401318:; BB(0x00401318);
    /* 00401318: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040131c: jge 0x40132e */ if ((fS==fO)) goto L_0040132e;
L_0040131e:; BB(0x0040131e);
    /* 0040131e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401321: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401324: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
    /* 0040132c: jmp 0x40130f */ goto L_0040130f;
L_0040132e:; BB(0x0040132e);
    /* 0040132e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401331: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 00401338: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040133f: jmp 0x40134a */ goto L_0040134a;
L_00401341:; BB(0x00401341);
    /* 00401341: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401344: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401347: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040134a:; BB(0x0040134a);
    /* 0040134a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040134e: jge 0x401360 */ if ((fS==fO)) goto L_00401360;
L_00401350:; BB(0x00401350);
    /* 00401350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401353: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401356: mov dword ptr [eax + edx*4 + 0x5c], 0 */ W32((u32)(r_eax+r_edx*4+0x5cu), 0x0u);
    /* 0040135e: jmp 0x401341 */ goto L_00401341;
L_00401360:; BB(0x00401360);
    /* 00401360: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401363: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0040136a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040136d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040136f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401370: ret  */ FN_RET(0x004012b0); r_esp += 4; return;
}

void f_00401380(void) /* BaccaratDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401380);
    /* 00401380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401381: mov ebp, esp */ r_ebp = r_esp;
    /* 00401383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401385: push 0x69d598 */ { u32 v = 0x69d598u; r_esp -= 4; W32(r_esp, v); }
    /* 0040138a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401391: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401394: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00401399: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040139b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040139c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040139f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004013a5: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004013a8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004013ab: mov dword ptr [eax], 0x6b2728 */ W32((u32)(r_eax), 0x6b2728u);
    /* 004013b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004013b8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004013bf: jmp 0x4013ca */ goto L_004013ca;
L_004013c1:; BB(0x004013c1);
    /* 004013c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004013c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004013c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004013ca:; BB(0x004013ca);
    /* 004013ca: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004013ce: jge 0x401405 */ if ((fS==fO)) goto L_00401405;
L_004013d0:; BB(0x004013d0);
    /* 004013d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004013d3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004013d6: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004013da: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004013dd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004013e0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004013e3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004013e7: je 0x4013fc */ if (fZ) goto L_004013fc;
L_004013e9:; BB(0x004013e9);
    /* 004013e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004013eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004013ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004013f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004013f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004013f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4013f7u); call_ind(t); }
    /* 004013f7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004013fa: jmp 0x401403 */ goto L_00401403;
L_004013fc:; BB(0x004013fc);
    /* 004013fc: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00401403:; BB(0x00401403);
    /* 00401403: jmp 0x4013c1 */ goto L_004013c1;
L_00401405:; BB(0x00401405);
    /* 00401405: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00401408: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0040140b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0040140e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00401411: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00401414: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401418: je 0x40142d */ if (fZ) goto L_0040142d;
L_0040141a:; BB(0x0040141a);
    /* 0040141a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040141c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040141f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401421: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00401424: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00401426: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401428u); call_ind(t); }
    /* 00401428: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0040142b: jmp 0x401434 */ goto L_00401434;
L_0040142d:; BB(0x0040142d);
    /* 0040142d: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00401434:; BB(0x00401434);
    /* 00401434: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00401437: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040143a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040143d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00401440: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00401443: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401447: je 0x40145c */ if (fZ) goto L_0040145c;
L_00401449:; BB(0x00401449);
    /* 00401449: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040144b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040144e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401450: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00401453: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00401455: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401457u); call_ind(t); }
    /* 00401457: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0040145a: jmp 0x401463 */ goto L_00401463;
L_0040145c:; BB(0x0040145c);
    /* 0040145c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00401463:; BB(0x00401463);
    /* 00401463: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040146a: jmp 0x401475 */ goto L_00401475;
L_0040146c:; BB(0x0040146c);
    /* 0040146c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040146f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401472: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00401475:; BB(0x00401475);
    /* 00401475: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401479: jge 0x4014b0 */ if ((fS==fO)) goto L_004014b0;
L_0040147b:; BB(0x0040147b);
    /* 0040147b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040147e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00401481: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00401485: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00401488: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040148b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0040148e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401492: je 0x4014a7 */ if (fZ) goto L_004014a7;
L_00401494:; BB(0x00401494);
    /* 00401494: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401496: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00401499: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040149b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040149e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004014a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4014a2u); call_ind(t); }
    /* 004014a2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004014a5: jmp 0x4014ae */ goto L_004014ae;
L_004014a7:; BB(0x004014a7);
    /* 004014a7: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004014ae:; BB(0x004014ae);
    /* 004014ae: jmp 0x40146c */ goto L_0040146c;
L_004014b0:; BB(0x004014b0);
    /* 004014b0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004014b3: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004014b6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004014b9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004014bc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004014bf: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004014c3: je 0x4014d8 */ if (fZ) goto L_004014d8;
L_004014c5:; BB(0x004014c5);
    /* 004014c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004014c7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004014ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004014cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004014cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004014d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4014d3u); call_ind(t); }
    /* 004014d3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004014d6: jmp 0x4014df */ goto L_004014df;
L_004014d8:; BB(0x004014d8);
    /* 004014d8: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004014df:; BB(0x004014df);
    /* 004014df: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004014e6: jmp 0x4014f1 */ goto L_004014f1;
L_004014e8:; BB(0x004014e8);
    /* 004014e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004014eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004014ee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004014f1:; BB(0x004014f1);
    /* 004014f1: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004014f5: jge 0x40152c */ if ((fS==fO)) goto L_0040152c;
L_004014f7:; BB(0x004014f7);
    /* 004014f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004014fa: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004014fd: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00401501: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00401504: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00401507: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0040150a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040150e: je 0x401523 */ if (fZ) goto L_00401523;
L_00401510:; BB(0x00401510);
    /* 00401510: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401512: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00401515: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401517: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040151a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040151c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40151eu); call_ind(t); }
    /* 0040151e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00401521: jmp 0x40152a */ goto L_0040152a;
L_00401523:; BB(0x00401523);
    /* 00401523: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0040152a:; BB(0x0040152a);
    /* 0040152a: jmp 0x4014e8 */ goto L_004014e8;
L_0040152c:; BB(0x0040152c);
    /* 0040152c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040152f: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00401532: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00401535: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00401538: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040153b: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040153f: je 0x401554 */ if (fZ) goto L_00401554;
L_00401541:; BB(0x00401541);
    /* 00401541: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401543: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00401546: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401548: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040154b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040154d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40154fu); call_ind(t); }
    /* 0040154f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00401552: jmp 0x40155b */ goto L_0040155b;
L_00401554:; BB(0x00401554);
    /* 00401554: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0040155b:; BB(0x0040155b);
    /* 0040155b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401562: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00401565: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x40156au); f_005e9e40();
    /* 0040156a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040156d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00401574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401575: mov esp, ebp */ r_esp = r_ebp;
    /* 00401577: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401578: ret  */ FN_RET(0x00401380); r_esp += 4; return;
}

void f_004037c0(void) /* baccaratdisplay::func_004037c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004037c0);
    /* 004037c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004037c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004037c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004037c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004037c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004037cd: jl 0x4037d5 */ if ((fS!=fO)) goto L_004037d5;
L_004037cf:; BB(0x004037cf);
    /* 004037cf: cmp dword ptr [ebp + 8], 0x62 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004037d3: jle 0x4037ec */ if ((fZ||fS!=fO)) goto L_004037ec;
L_004037d5:; BB(0x004037d5);
    /* 004037d5: push 0x369 */ { u32 v = 0x369u; r_esp -= 4; W32(r_esp, v); }
    /* 004037da: push 0x6b2bcc */ { u32 v = 0x6b2bccu; r_esp -= 4; W32(r_esp, v); }
    /* 004037df: push 0x6b2bb0 */ { u32 v = 0x6b2bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004037e4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4037e9u); f_005e9f20();
    /* 004037e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004037ec:; BB(0x004037ec);
    /* 004037ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004037ef: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 004037f5: imul edx, edx, 0x338 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x338u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004037fb: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00403800: lea ecx, [eax + edx + 0xbc] */ r_ecx = (u32)(r_eax+r_edx+0xbcu);
    /* 00403807: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040380a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040380c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040380f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403812: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00403814: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403817: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x40381cu); f_00403a30();
    /* 0040381c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040381e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403821: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00403824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403825: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403827: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040382a: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x40382fu); f_00403a30();
    /* 0040382f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403831: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403834: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00403837: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403838: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040383a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040383d: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x403842u); f_00403a30();
    /* 00403842: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403844: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403847: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0040384a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040384b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040384d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403850: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x403855u); f_00403a30();
    /* 00403855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403857: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040385a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0040385d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040385e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00403860: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403863: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x403868u); f_00403a30();
    /* 00403868: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040386f: jmp 0x40387a */ goto L_0040387a;
L_00403871:; BB(0x00403871);
    /* 00403871: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403874: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403877: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040387a:; BB(0x0040387a);
    /* 0040387a: cmp dword ptr [ebp - 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040387e: jge 0x4038e2 */ if ((fS==fO)) goto L_004038e2;
L_00403880:; BB(0x00403880);
    /* 00403880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403882: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00403887: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040388a: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040388d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040388e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403891: call 0x403ad0 */ r_esp -= 4; W32(r_esp, 0x403896u); f_00403ad0();
    /* 00403896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403898: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040389d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004038a0: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004038a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004038a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004038a7: call 0x403ad0 */ r_esp -= 4; W32(r_esp, 0x4038acu); f_00403ad0();
    /* 004038ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004038af: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004038b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004038b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004038b6: call 0x403b70 */ r_esp -= 4; W32(r_esp, 0x4038bbu); f_00403b70();
    /* 004038bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004038bd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004038c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004038c5: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004038c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004038c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004038cc: call 0x403ad0 */ r_esp -= 4; W32(r_esp, 0x4038d1u); f_00403ad0();
    /* 004038d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004038d4: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004038d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004038d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004038db: call 0x403b70 */ r_esp -= 4; W32(r_esp, 0x4038e0u); f_00403b70();
    /* 004038e0: jmp 0x403871 */ goto L_00403871;
L_004038e2:; BB(0x004038e2);
    /* 004038e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004038e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004038e8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004038ef: jmp 0x403903 */ goto L_00403903;
L_004038f1:; BB(0x004038f1);
    /* 004038f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004038f4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004038f7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004038fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004038fd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00403900: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00403903:; BB(0x00403903);
    /* 00403903: cmp dword ptr [ebp - 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403907: jge 0x403a24 */ if ((fS==fO)) goto L_00403a24;
L_0040390d:; BB(0x0040390d);
    /* 0040390d: cmp dword ptr [ebp - 0x14], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403911: jl 0x403918 */ if ((fS!=fO)) goto L_00403918;
L_00403913:; BB(0x00403913);
    /* 00403913: jmp 0x403a24 */ goto L_00403a24;
L_00403918:; BB(0x00403918);
    /* 00403918: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040391b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040391e: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00403922: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00403925: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00403928: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040392b: mov edx, dword ptr [ecx + eax*4 + 0x1ac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1acu));
    /* 00403932: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00403935: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403937: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040393a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040393d: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 00403941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403942: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403945: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403949: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040394c: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x403951u); f_00403a30();
    /* 00403951: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403954: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00403957: je 0x4039a7 */ if (fZ) goto L_004039a7;
L_00403959:; BB(0x00403959);
    /* 00403959: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040395c: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0040395f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00403962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403963: push 0x6b2b94 */ { u32 v = 0x6b2b94u; r_esp -= 4; W32(r_esp, v); }
    /* 00403968: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40396du); f_00630f40();
    /* 0040396d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403971: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403974: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00403977: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403978: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040397b: call 0x403ad0 */ r_esp -= 4; W32(r_esp, 0x403980u); f_00403ad0();
    /* 00403980: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403983: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00403986: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00403989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040398a: push 0x6b2b94 */ { u32 v = 0x6b2b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0040398f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x403994u); f_00630f40();
    /* 00403994: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403998: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040399b: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040399e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040399f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004039a2: call 0x403ad0 */ r_esp -= 4; W32(r_esp, 0x4039a7u); f_00403ad0();
L_004039a7:; BB(0x004039a7);
    /* 004039a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004039aa: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004039ad: je 0x4039e3 */ if (fZ) goto L_004039e3;
L_004039af:; BB(0x004039af);
    /* 004039af: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004039b2: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004039b5: je 0x4039c6 */ if (fZ) goto L_004039c6;
L_004039b7:; BB(0x004039b7);
    /* 004039b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004039ba: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004039bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004039be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004039c1: call 0x403b40 */ r_esp -= 4; W32(r_esp, 0x4039c6u); f_00403b40();
L_004039c6:; BB(0x004039c6);
    /* 004039c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004039c9: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004039cc: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004039cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004039d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004039d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004039d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004039d7: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004039da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004039db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004039de: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x4039e3u); f_00403a30();
L_004039e3:; BB(0x004039e3);
    /* 004039e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004039e6: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004039e9: je 0x403a1f */ if (fZ) goto L_00403a1f;
L_004039eb:; BB(0x004039eb);
    /* 004039eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004039ee: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004039f1: je 0x403a02 */ if (fZ) goto L_00403a02;
L_004039f3:; BB(0x004039f3);
    /* 004039f3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004039f6: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004039f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004039fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004039fd: call 0x403b40 */ r_esp -= 4; W32(r_esp, 0x403a02u); f_00403b40();
L_00403a02:; BB(0x00403a02);
    /* 00403a02: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403a05: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00403a08: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00403a0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403a0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403a13: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403a17: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403a1a: call 0x403a30 */ r_esp -= 4; W32(r_esp, 0x403a1fu); f_00403a30();
L_00403a1f:; BB(0x00403a1f);
    /* 00403a1f: jmp 0x4038f1 */ goto L_004038f1;
L_00403a24:; BB(0x00403a24);
    /* 00403a24: mov esp, ebp */ r_esp = r_ebp;
    /* 00403a26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403a27: ret 4 */ FN_RET(0x004037c0); r_esp += 8; return;
}

