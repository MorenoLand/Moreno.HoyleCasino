#include "protos.h"

void f_0063f400(void) /* SettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f400);
    /* 0063f400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f401: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f403: sub esp, 0x350 */ {  u32 a = r_esp; u32 b = 0x350u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f409: mov dword ptr [ebp - 0x33c], ecx */ W32((u32)(r_ebp+0xfffffcc4u), r_ecx);
    /* 0063f40f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0063f416: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063f41d: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f424: jne 0x63f42b */ if (!fZ) goto L_0063f42b;
L_0063f426:; BB(0x0063f426);
    /* 0063f426: jmp 0x63fe67 */ goto L_0063fe67;
L_0063f42b:; BB(0x0063f42b);
    /* 0063f42b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f42d: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f433: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f438u); f_005fb300();
    /* 0063f438: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f43b: mov dword ptr [ebp + ecx*8 - 0x330], eax */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd0u), r_eax);
    /* 0063f442: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f445: mov dword ptr [ebp + edx*8 - 0x32c], 0 */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), 0x0u);
    /* 0063f450: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f453: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f456: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063f459: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f45b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f461: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f466u); f_005fb300();
    /* 0063f466: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f469: mov dword ptr [ebp + ecx*8 - 0x330], eax */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd0u), r_eax);
    /* 0063f470: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f473: mov dword ptr [ebp + edx*8 - 0x32c], 1 */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), 0x1u);
    /* 0063f47e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f481: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f484: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063f487: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f48e: jmp 0x63f499 */ goto L_0063f499;
L_0063f490:; BB(0x0063f490);
    /* 0063f490: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f493: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f496: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063f499:; BB(0x0063f499);
    /* 0063f499: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f49f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f4a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f4a7: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063f4ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f4afu); call_ind(t); }
    /* 0063f4af: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f4b2: jge 0x63f70e */ if ((fS==fO)) goto L_0063f70e;
L_0063f4b8:; BB(0x0063f4b8);
    /* 0063f4b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f4bb: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f4be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f4bf: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f4c5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f4cau); f_005fb5e0();
    /* 0063f4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f4cc: jne 0x63f4e8 */ if (!fZ) goto L_0063f4e8;
L_0063f4ce:; BB(0x0063f4ce);
    /* 0063f4ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f4d1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f4d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f4d5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f4db: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f4e0u); f_005fb300();
    /* 0063f4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f4e2: je 0x63f709 */ if (fZ) goto L_0063f709;
L_0063f4e8:; BB(0x0063f4e8);
    /* 0063f4e8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f4ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f4f0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f4f6: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0063f4fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f4feu); call_ind(t); }
    /* 0063f4fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f500: jle 0x63f51c */ if ((fZ||fS!=fO)) goto L_0063f51c;
L_0063f502:; BB(0x0063f502);
    /* 0063f502: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f505: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f509: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f50f: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f514u); f_005fb5e0();
    /* 0063f514: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
    /* 0063f51a: jmp 0x63f534 */ goto L_0063f534;
L_0063f51c:; BB(0x0063f51c);
    /* 0063f51c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f51f: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f522: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f523: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f529: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f52eu); f_005fb300();
    /* 0063f52e: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
L_0063f534:; BB(0x0063f534);
    /* 0063f534: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f537: mov eax, dword ptr [ebp - 0x340] */ r_eax = R32((u32)(r_ebp+0xfffffcc0u));
    /* 0063f53d: mov dword ptr [ebp + edx*8 - 0x330], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd0u), r_eax);
    /* 0063f544: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f548: jne 0x63f55d */ if (!fZ) goto L_0063f55d;
L_0063f54a:; BB(0x0063f54a);
    /* 0063f54a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f54d: mov dword ptr [ebp + ecx*8 - 0x32c], 8 */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd4u), 0x8u);
    /* 0063f558: jmp 0x63f700 */ goto L_0063f700;
L_0063f55d:; BB(0x0063f55d);
    /* 0063f55d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f563: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f565: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f56b: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0063f571: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f573u); call_ind(t); }
    /* 0063f573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063f575: jle 0x63f640 */ if ((fZ||fS!=fO)) goto L_0063f640;
L_0063f57b:; BB(0x0063f57b);
    /* 0063f57b: mov dword ptr [ebp - 0x334], 0xffffffff */ W32((u32)(r_ebp+0xfffffcccu), 0xffffffffu);
    /* 0063f585: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f588: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f58c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f592: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f597u); f_005fb5e0();
    /* 0063f597: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f599: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x63f59eu); f_006026d0();
    /* 0063f59e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063f5a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f5a3: jne 0x63f5dd */ if (!fZ) goto L_0063f5dd;
L_0063f5a5:; BB(0x0063f5a5);
    /* 0063f5a5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f5ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f5ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f5b3: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0063f5b9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f5bbu); call_ind(t); }
    /* 0063f5bb: mov dword ptr [ebp - 0x344], eax */ W32((u32)(r_ebp+0xfffffcbcu), r_eax);
    /* 0063f5c1: mov eax, dword ptr [ebp - 0x344] */ r_eax = R32((u32)(r_ebp+0xfffffcbcu));
    /* 0063f5c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063f5c9: mov ecx, dword ptr [ebp - 0x344] */ r_ecx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 0063f5cf: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0063f5d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f5d7u); call_ind(t); }
    /* 0063f5d7: mov dword ptr [ebp - 0x334], eax */ W32((u32)(r_ebp+0xfffffcccu), r_eax);
L_0063f5dd:; BB(0x0063f5dd);
    /* 0063f5dd: cmp dword ptr [ebp - 0x334], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f5e4: jne 0x63f62b */ if (!fZ) goto L_0063f62b;
L_0063f5e6:; BB(0x0063f5e6);
    /* 0063f5e6: push 0x6dbaf4 */ { u32 v = 0x6dbaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f5eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63f5f0u); f_00630f40();
    /* 0063f5f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f5f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f5f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f5f7: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f5fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f5fb: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f601: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63f606u); f_005fb5e0();
    /* 0063f606: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f608: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x63f60du); f_00602b70();
    /* 0063f60d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f60e: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63f613u); f_00686ec0();
    /* 0063f613: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f616: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0063f618: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0063f61a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063f61c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f61f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f622: mov dword ptr [ebp + edx*8 - 0x32c], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), r_eax);
    /* 0063f629: jmp 0x63f63b */ goto L_0063f63b;
L_0063f62b:; BB(0x0063f62b);
    /* 0063f62b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f62e: mov ecx, dword ptr [ebp - 0x334] */ r_ecx = R32((u32)(r_ebp+0xfffffcccu));
    /* 0063f634: mov dword ptr [ebp + eax*8 - 0x32c], ecx */ W32((u32)(r_ebp+r_eax*8+0xfffffcd4u), r_ecx);
L_0063f63b:; BB(0x0063f63b);
    /* 0063f63b: jmp 0x63f700 */ goto L_0063f700;
L_0063f640:; BB(0x0063f640);
    /* 0063f640: mov dword ptr [ebp - 0x338], 0xffffffff */ W32((u32)(r_ebp+0xfffffcc8u), 0xffffffffu);
    /* 0063f64a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f64d: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f650: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f651: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f657: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f65cu); f_005fb300();
    /* 0063f65c: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f65e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x63f663u); f_006026d0();
    /* 0063f663: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063f666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f668: jne 0x63f6a2 */ if (!fZ) goto L_0063f6a2;
L_0063f66a:; BB(0x0063f66a);
    /* 0063f66a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f670: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f672: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f678: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0063f67e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f680u); call_ind(t); }
    /* 0063f680: mov dword ptr [ebp - 0x348], eax */ W32((u32)(r_ebp+0xfffffcb8u), r_eax);
    /* 0063f686: mov ecx, dword ptr [ebp - 0x348] */ r_ecx = R32((u32)(r_ebp+0xfffffcb8u));
    /* 0063f68c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f68e: mov ecx, dword ptr [ebp - 0x348] */ r_ecx = R32((u32)(r_ebp+0xfffffcb8u));
    /* 0063f694: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0063f69a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f69cu); call_ind(t); }
    /* 0063f69c: mov dword ptr [ebp - 0x338], eax */ W32((u32)(r_ebp+0xfffffcc8u), r_eax);
L_0063f6a2:; BB(0x0063f6a2);
    /* 0063f6a2: cmp dword ptr [ebp - 0x338], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcc8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f6a9: jne 0x63f6f0 */ if (!fZ) goto L_0063f6f0;
L_0063f6ab:; BB(0x0063f6ab);
    /* 0063f6ab: push 0x6dbaf4 */ { u32 v = 0x6dbaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63f6b5u); f_00630f40();
    /* 0063f6b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f6bc: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f6bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6c0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f6c6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f6cbu); f_005fb300();
    /* 0063f6cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f6cd: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x63f6d2u); f_00602b70();
    /* 0063f6d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f6d3: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63f6d8u); f_00686ec0();
    /* 0063f6d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063f6db: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0063f6dd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0063f6df: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063f6e1: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f6e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f6e7: mov dword ptr [ebp + edx*8 - 0x32c], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), r_eax);
    /* 0063f6ee: jmp 0x63f700 */ goto L_0063f700;
L_0063f6f0:; BB(0x0063f6f0);
    /* 0063f6f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f6f3: mov ecx, dword ptr [ebp - 0x338] */ r_ecx = R32((u32)(r_ebp+0xfffffcc8u));
    /* 0063f6f9: mov dword ptr [ebp + eax*8 - 0x32c], ecx */ W32((u32)(r_ebp+r_eax*8+0xfffffcd4u), r_ecx);
L_0063f700:; BB(0x0063f700);
    /* 0063f700: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f703: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f706: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0063f709:; BB(0x0063f709);
    /* 0063f709: jmp 0x63f490 */ goto L_0063f490;
L_0063f70e:; BB(0x0063f70e);
    /* 0063f70e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f715: jmp 0x63f720 */ goto L_0063f720;
L_0063f717:; BB(0x0063f717);
    /* 0063f717: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f71a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f71d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0063f720:; BB(0x0063f720);
    /* 0063f720: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f726: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f728: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f72e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063f734: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f736u); call_ind(t); }
    /* 0063f736: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f739: jge 0x63f786 */ if ((fS==fO)) goto L_0063f786;
L_0063f73b:; BB(0x0063f73b);
    /* 0063f73b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f73e: add ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f742: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f748: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f74du); f_005fb300();
    /* 0063f74d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f74f: je 0x63f784 */ if (fZ) goto L_0063f784;
L_0063f751:; BB(0x0063f751);
    /* 0063f751: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f754: add edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f757: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f758: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f75e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f763u); f_005fb300();
    /* 0063f763: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f766: mov dword ptr [ebp + ecx*8 - 0x330], eax */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd0u), r_eax);
    /* 0063f76d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f770: mov dword ptr [ebp + edx*8 - 0x32c], 4 */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), 0x4u);
    /* 0063f77b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f77e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f781: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f784:; BB(0x0063f784);
    /* 0063f784: jmp 0x63f717 */ goto L_0063f717;
L_0063f786:; BB(0x0063f786);
    /* 0063f786: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f78d: jmp 0x63f798 */ goto L_0063f798;
L_0063f78f:; BB(0x0063f78f);
    /* 0063f78f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f792: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f795: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063f798:; BB(0x0063f798);
    /* 0063f798: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f79e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f7a0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f7a6: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063f7ac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f7aeu); call_ind(t); }
    /* 0063f7ae: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f7b1: jge 0x63f7fe */ if ((fS==fO)) goto L_0063f7fe;
L_0063f7b3:; BB(0x0063f7b3);
    /* 0063f7b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f7b6: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f7b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7ba: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f7c0: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f7c5u); f_005fb300();
    /* 0063f7c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f7c7: je 0x63f7fc */ if (fZ) goto L_0063f7fc;
L_0063f7c9:; BB(0x0063f7c9);
    /* 0063f7c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f7cc: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f7cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f7d0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f7d6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f7dbu); f_005fb300();
    /* 0063f7db: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f7de: mov dword ptr [ebp + edx*8 - 0x330], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd0u), r_eax);
    /* 0063f7e5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f7e8: mov dword ptr [ebp + eax*8 - 0x32c], 5 */ W32((u32)(r_ebp+r_eax*8+0xfffffcd4u), 0x5u);
    /* 0063f7f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f7f6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f7f9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0063f7fc:; BB(0x0063f7fc);
    /* 0063f7fc: jmp 0x63f78f */ goto L_0063f78f;
L_0063f7fe:; BB(0x0063f7fe);
    /* 0063f7fe: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f805: jmp 0x63f810 */ goto L_0063f810;
L_0063f807:; BB(0x0063f807);
    /* 0063f807: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f80a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f80d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0063f810:; BB(0x0063f810);
    /* 0063f810: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063f815: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063f817: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f81d: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063f823: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f825u); call_ind(t); }
    /* 0063f825: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f828: jge 0x63f875 */ if ((fS==fO)) goto L_0063f875;
L_0063f82a:; BB(0x0063f82a);
    /* 0063f82a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f82d: add ecx, 0x1d */ {  u32 a = r_ecx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f830: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f831: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f837: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f83cu); f_005fb300();
    /* 0063f83c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f83e: je 0x63f873 */ if (fZ) goto L_0063f873;
L_0063f840:; BB(0x0063f840);
    /* 0063f840: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f843: add edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f847: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f84d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f852u); f_005fb300();
    /* 0063f852: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f855: mov dword ptr [ebp + ecx*8 - 0x330], eax */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd0u), r_eax);
    /* 0063f85c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f85f: mov dword ptr [ebp + edx*8 - 0x32c], 6 */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), 0x6u);
    /* 0063f86a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f86d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f870: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f873:; BB(0x0063f873);
    /* 0063f873: jmp 0x63f807 */ goto L_0063f807;
L_0063f875:; BB(0x0063f875);
    /* 0063f875: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f87c: jmp 0x63f887 */ goto L_0063f887;
L_0063f87e:; BB(0x0063f87e);
    /* 0063f87e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f881: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f884: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063f887:; BB(0x0063f887);
    /* 0063f887: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063f88d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063f88f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f895: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063f89b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63f89du); call_ind(t); }
    /* 0063f89d: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f8a0: jge 0x63f8ed */ if ((fS==fO)) goto L_0063f8ed;
L_0063f8a2:; BB(0x0063f8a2);
    /* 0063f8a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f8a5: add eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8a9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f8af: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63f8b4u); f_005fb350();
    /* 0063f8b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f8b6: je 0x63f8eb */ if (fZ) goto L_0063f8eb;
L_0063f8b8:; BB(0x0063f8b8);
    /* 0063f8b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f8bb: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f8be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8bf: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f8c5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63f8cau); f_005fb350();
    /* 0063f8ca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f8cd: mov dword ptr [ebp + edx*8 - 0x330], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd0u), r_eax);
    /* 0063f8d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f8d7: mov dword ptr [ebp + eax*8 - 0x32c], 7 */ W32((u32)(r_ebp+r_eax*8+0xfffffcd4u), 0x7u);
    /* 0063f8e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f8e8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0063f8eb:; BB(0x0063f8eb);
    /* 0063f8eb: jmp 0x63f87e */ goto L_0063f87e;
L_0063f8ed:; BB(0x0063f8ed);
    /* 0063f8ed: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063f8ef: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f8f5: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f8fau); f_005fb300();
    /* 0063f8fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f8fc: je 0x63f947 */ if (fZ) goto L_0063f947;
L_0063f8fe:; BB(0x0063f8fe);
    /* 0063f8fe: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063f900: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f906: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f90bu); f_005fb300();
    /* 0063f90b: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f90d: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x63f912u); f_006026d0();
    /* 0063f912: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0063f915: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f917: je 0x63f947 */ if (fZ) goto L_0063f947;
L_0063f919:; BB(0x0063f919);
    /* 0063f919: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063f91b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f921: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f926u); f_005fb300();
    /* 0063f926: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f929: mov dword ptr [ebp + ecx*8 - 0x330], eax */ W32((u32)(r_ebp+r_ecx*8+0xfffffcd0u), r_eax);
    /* 0063f930: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f933: mov dword ptr [ebp + edx*8 - 0x32c], 9 */ W32((u32)(r_ebp+r_edx*8+0xfffffcd4u), 0x9u);
    /* 0063f93e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f941: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f944: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063f947:; BB(0x0063f947);
    /* 0063f947: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f949: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f94f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f954u); f_005fb300();
    /* 0063f954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f956: je 0x63f9a1 */ if (fZ) goto L_0063f9a1;
L_0063f958:; BB(0x0063f958);
    /* 0063f958: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f95a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f960: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f965u); f_005fb300();
    /* 0063f965: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f967: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x63f96cu); f_006026d0();
    /* 0063f96c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063f96f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f971: je 0x63f9a1 */ if (fZ) goto L_0063f9a1;
L_0063f973:; BB(0x0063f973);
    /* 0063f973: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063f975: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f97b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63f980u); f_005fb300();
    /* 0063f980: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f983: mov dword ptr [ebp + edx*8 - 0x330], eax */ W32((u32)(r_ebp+r_edx*8+0xfffffcd0u), r_eax);
    /* 0063f98a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f98d: mov dword ptr [ebp + eax*8 - 0x32c], 0xa */ W32((u32)(r_ebp+r_eax*8+0xfffffcd4u), 0xau);
    /* 0063f998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063f99b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063f99e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0063f9a1:; BB(0x0063f9a1);
    /* 0063f9a1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063f9a8: jmp 0x63f9b3 */ goto L_0063f9b3;
L_0063f9aa:; BB(0x0063f9aa);
    /* 0063f9aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063f9b0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0063f9b3:; BB(0x0063f9b3);
    /* 0063f9b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9b6: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f9b9: jge 0x63fa04 */ if ((fS==fO)) goto L_0063fa04;
L_0063f9bb:; BB(0x0063f9bb);
    /* 0063f9bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9be: cmp dword ptr [ebp + ecx*8 - 0x330], 0 */ {  u32 a = R32((u32)(r_ebp+r_ecx*8+0xfffffcd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f9c6: je 0x63fa02 */ if (fZ) goto L_0063fa02;
L_0063f9c8:; BB(0x0063f9c8);
    /* 0063f9c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063f9cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f9cc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9cf: mov ecx, dword ptr [ebp + eax*8 - 0x330] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xfffffcd0u));
    /* 0063f9d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9d9: mov eax, dword ptr [ebp + edx*8 - 0x330] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffcd0u));
    /* 0063f9e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f9e2: mov ecx, eax */ r_ecx = r_eax;
    /* 0063f9e4: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0063f9ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f9ecu); call_ind(t); }
    /* 0063f9ec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f9f1: je 0x63fa02 */ if (fZ) goto L_0063fa02;
L_0063f9f3:; BB(0x0063f9f3);
    /* 0063f9f3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063f9f6: mov eax, dword ptr [ebp + edx*8 - 0x32c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xfffffcd4u));
    /* 0063f9fd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063fa00: jmp 0x63fa04 */ goto L_0063fa04;
L_0063fa02:; BB(0x0063fa02);
    /* 0063fa02: jmp 0x63f9aa */ goto L_0063f9aa;
L_0063fa04:; BB(0x0063fa04);
    /* 0063fa04: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fa08: jne 0x63fa54 */ if (!fZ) goto L_0063fa54;
L_0063fa0a:; BB(0x0063fa0a);
    /* 0063fa0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063fa0d: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fa11: jne 0x63fa4f */ if (!fZ) goto L_0063fa4f;
L_0063fa13:; BB(0x0063fa13);
    /* 0063fa13: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa18: mov edx, dword ptr [ebp - 0x33c] */ r_edx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fa1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063fa20: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fa26: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0063fa2c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63fa2eu); call_ind(t); }
    /* 0063fa2e: mov eax, dword ptr [ebp - 0x33c] */ r_eax = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fa34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063fa38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa39: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063fa3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063fa41: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063fa47: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 0063fa4d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63fa4fu); call_ind(t); }
L_0063fa4f:; BB(0x0063fa4f);
    /* 0063fa4f: jmp 0x63fe67 */ goto L_0063fe67;
L_0063fa54:; BB(0x0063fa54);
    /* 0063fa54: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fa58: jne 0x63fa83 */ if (!fZ) goto L_0063fa83;
L_0063fa5a:; BB(0x0063fa5a);
    /* 0063fa5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063fa5d: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fa61: jne 0x63fa7e */ if (!fZ) goto L_0063fa7e;
L_0063fa63:; BB(0x0063fa63);
    /* 0063fa63: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa68: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fa6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fa70: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fa76: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fa7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fa7eu); call_ind(t); }
L_0063fa7e:; BB(0x0063fa7e);
    /* 0063fa7e: jmp 0x63fe67 */ goto L_0063fe67;
L_0063fa83:; BB(0x0063fa83);
    /* 0063fa83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa84: mov ecx, esp */ r_ecx = r_esp;
    /* 0063fa86: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0063fa8d: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0063fa90: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0063fa95: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0063fa98: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa9a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fa9c: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063faa2: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x63faa7u); f_005ecd00();
    /* 0063faa7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063faab: jne 0x63fb07 */ if (!fZ) goto L_0063fb07;
L_0063faad:; BB(0x0063faad);
    /* 0063faad: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063fab3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fab5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063fabb: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0063fac1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fac3u); call_ind(t); }
    /* 0063fac3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063fac6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063faca: je 0x63fad7 */ if (fZ) goto L_0063fad7;
L_0063facc:; BB(0x0063facc);
    /* 0063facc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063facf: mov dword ptr [ebp - 0x34c], ecx */ W32((u32)(r_ebp+0xfffffcb4u), r_ecx);
    /* 0063fad5: jmp 0x63faea */ goto L_0063faea;
L_0063fad7:; BB(0x0063fad7);
    /* 0063fad7: push 0x6dbd48 */ { u32 v = 0x6dbd48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fadc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fae1u); f_00630f40();
    /* 0063fae1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fae4: mov dword ptr [ebp - 0x34c], eax */ W32((u32)(r_ebp+0xfffffcb4u), r_eax);
L_0063faea:; BB(0x0063faea);
    /* 0063faea: mov edx, dword ptr [ebp - 0x34c] */ r_edx = R32((u32)(r_ebp+0xfffffcb4u));
    /* 0063faf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063faf1: mov eax, dword ptr [ebp - 0x33c] */ r_eax = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063faf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063faf9: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063faff: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fb05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fb07u); call_ind(t); }
L_0063fb07:; BB(0x0063fb07);
    /* 0063fb07: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fb0b: jne 0x63fb67 */ if (!fZ) goto L_0063fb67;
L_0063fb0d:; BB(0x0063fb0d);
    /* 0063fb0d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063fb13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fb15: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063fb1b: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0063fb21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fb23u); call_ind(t); }
    /* 0063fb23: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063fb26: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fb2a: je 0x63fb37 */ if (fZ) goto L_0063fb37;
L_0063fb2c:; BB(0x0063fb2c);
    /* 0063fb2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063fb2f: mov dword ptr [ebp - 0x350], ecx */ W32((u32)(r_ebp+0xfffffcb0u), r_ecx);
    /* 0063fb35: jmp 0x63fb4a */ goto L_0063fb4a;
L_0063fb37:; BB(0x0063fb37);
    /* 0063fb37: push 0x6dbd28 */ { u32 v = 0x6dbd28u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb3c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fb41u); f_00630f40();
    /* 0063fb41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fb44: mov dword ptr [ebp - 0x350], eax */ W32((u32)(r_ebp+0xfffffcb0u), r_eax);
L_0063fb4a:; BB(0x0063fb4a);
    /* 0063fb4a: mov edx, dword ptr [ebp - 0x350] */ r_edx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 0063fb50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb51: mov eax, dword ptr [ebp - 0x33c] */ r_eax = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fb57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063fb59: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fb5f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fb65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fb67u); call_ind(t); }
L_0063fb67:; BB(0x0063fb67);
    /* 0063fb67: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fb6b: jne 0x63fb91 */ if (!fZ) goto L_0063fb91;
L_0063fb6d:; BB(0x0063fb6d);
    /* 0063fb6d: push 0x6dbd08 */ { u32 v = 0x6dbd08u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb72: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fb77u); f_00630f40();
    /* 0063fb77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fb7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fb7b: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fb81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fb83: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fb89: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fb8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fb91u); call_ind(t); }
L_0063fb91:; BB(0x0063fb91);
    /* 0063fb91: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fb95: jne 0x63fc7a */ if (!fZ) goto L_0063fc7a;
L_0063fb9b:; BB(0x0063fb9b);
    /* 0063fb9b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063fba1: cmp dword ptr [ecx + 0x1dc], 1 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fba8: jne 0x63fbd3 */ if (!fZ) goto L_0063fbd3;
L_0063fbaa:; BB(0x0063fbaa);
    /* 0063fbaa: push 0x6dbce8 */ { u32 v = 0x6dbce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbaf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fbb4u); f_00630f40();
    /* 0063fbb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fbb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fbb8: mov edx, dword ptr [ebp - 0x33c] */ r_edx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fbbe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063fbc0: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fbc6: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0063fbcc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63fbceu); call_ind(t); }
    /* 0063fbce: jmp 0x63fc7a */ goto L_0063fc7a;
L_0063fbd3:; BB(0x0063fbd3);
    /* 0063fbd3: mov eax, dword ptr [0x163068c] */ r_eax = R32((u32)(0x163068cu));
    /* 0063fbd8: cmp dword ptr [eax + 0x1dc], 1 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063fbdf: jle 0x63fc56 */ if ((fZ||fS!=fO)) goto L_0063fc56;
L_0063fbe1:; BB(0x0063fbe1);
    /* 0063fbe1: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063fbe7: cmp dword ptr [ecx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fbee: jne 0x63fc56 */ if (!fZ) goto L_0063fc56;
L_0063fbf0:; BB(0x0063fbf0);
    /* 0063fbf0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063fbf6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063fbf8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063fbfe: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0063fc04: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63fc06u); call_ind(t); }
    /* 0063fc06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fc08: jne 0x63fc30 */ if (!fZ) goto L_0063fc30;
L_0063fc0a:; BB(0x0063fc0a);
    /* 0063fc0a: push 0x6dbcc8 */ { u32 v = 0x6dbcc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc0f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fc14u); f_00630f40();
    /* 0063fc14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fc17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc18: mov eax, dword ptr [ebp - 0x33c] */ r_eax = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063fc20: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc26: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fc2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fc2eu); call_ind(t); }
    /* 0063fc2e: jmp 0x63fc54 */ goto L_0063fc54;
L_0063fc30:; BB(0x0063fc30);
    /* 0063fc30: push 0x6dbca8 */ { u32 v = 0x6dbca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc35: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fc3au); f_00630f40();
    /* 0063fc3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fc3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc3e: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fc46: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc4c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fc52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fc54u); call_ind(t); }
L_0063fc54:; BB(0x0063fc54);
    /* 0063fc54: jmp 0x63fc7a */ goto L_0063fc7a;
L_0063fc56:; BB(0x0063fc56);
    /* 0063fc56: push 0x6dbc88 */ { u32 v = 0x6dbc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc5b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fc60u); f_00630f40();
    /* 0063fc60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fc63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc64: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fc6c: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc72: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fc78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fc7au); call_ind(t); }
L_0063fc7a:; BB(0x0063fc7a);
    /* 0063fc7a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fc7e: jne 0x63fca4 */ if (!fZ) goto L_0063fca4;
L_0063fc80:; BB(0x0063fc80);
    /* 0063fc80: push 0x6dbc68 */ { u32 v = 0x6dbc68u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc85: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fc8au); f_00630f40();
    /* 0063fc8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fc8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fc8e: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fc96: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fc9c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fca2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fca4u); call_ind(t); }
L_0063fca4:; BB(0x0063fca4);
    /* 0063fca4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fca8: jne 0x63fcce */ if (!fZ) goto L_0063fcce;
L_0063fcaa:; BB(0x0063fcaa);
    /* 0063fcaa: push 0x6dbc48 */ { u32 v = 0x6dbc48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcaf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fcb4u); f_00630f40();
    /* 0063fcb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fcb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcb8: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fcbe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fcc0: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fcc6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fccc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fcceu); call_ind(t); }
L_0063fcce:; BB(0x0063fcce);
    /* 0063fcce: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fcd2: jne 0x63fcf8 */ if (!fZ) goto L_0063fcf8;
L_0063fcd4:; BB(0x0063fcd4);
    /* 0063fcd4: push 0x6dbc28 */ { u32 v = 0x6dbc28u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fcd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fcdeu); f_00630f40();
    /* 0063fcde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fce2: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fce8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fcea: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fcf0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fcf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fcf8u); call_ind(t); }
L_0063fcf8:; BB(0x0063fcf8);
    /* 0063fcf8: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fcfc: jne 0x63fd22 */ if (!fZ) goto L_0063fd22;
L_0063fcfe:; BB(0x0063fcfe);
    /* 0063fcfe: push 0x6dbc08 */ { u32 v = 0x6dbc08u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd03: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fd08u); f_00630f40();
    /* 0063fd08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fd0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd0c: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fd12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fd14: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fd1a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fd20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fd22u); call_ind(t); }
L_0063fd22:; BB(0x0063fd22);
    /* 0063fd22: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fd26: jne 0x63fdb9 */ if (!fZ) goto L_0063fdb9;
L_0063fd2c:; BB(0x0063fd2c);
    /* 0063fd2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063fd32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fd34: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063fd3a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0063fd40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fd42u); call_ind(t); }
    /* 0063fd42: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063fd45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fd47: je 0x63fd54 */ if (fZ) goto L_0063fd54;
L_0063fd49:; BB(0x0063fd49);
    /* 0063fd49: movzx edx, byte ptr [0x795f95] */ r_edx = (u32)R8((u32)(0x795f95u));
    /* 0063fd50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fd52: je 0x63fd71 */ if (fZ) goto L_0063fd71;
L_0063fd54:; BB(0x0063fd54);
    /* 0063fd54: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd59: mov eax, dword ptr [ebp - 0x33c] */ r_eax = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fd5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063fd61: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fd67: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fd6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fd6fu); call_ind(t); }
    /* 0063fd6f: jmp 0x63fdb9 */ goto L_0063fdb9;
L_0063fd71:; BB(0x0063fd71);
    /* 0063fd71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd72: mov ecx, esp */ r_ecx = r_esp;
    /* 0063fd74: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0063fd7b: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0063fd7e: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0063fd83: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0063fd86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd88: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd8a: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fd90: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x63fd95u); f_005ecd00();
    /* 0063fd95: push 0x6d4bec */ { u32 v = 0x6d4becu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fd9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fd9fu); f_00630f40();
    /* 0063fd9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fda3: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fda9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fdab: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fdb1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fdb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fdb9u); call_ind(t); }
L_0063fdb9:; BB(0x0063fdb9);
    /* 0063fdb9: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fdbd: je 0x63fdc5 */ if (fZ) goto L_0063fdc5;
L_0063fdbf:; BB(0x0063fdbf);
    /* 0063fdbf: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fdc3: jne 0x63fde9 */ if (!fZ) goto L_0063fde9;
L_0063fdc5:; BB(0x0063fdc5);
    /* 0063fdc5: push 0x6dbbe8 */ { u32 v = 0x6dbbe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fdcfu); f_00630f40();
    /* 0063fdcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fdd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdd3: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fdd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fddb: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fde1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fde7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fde9u); call_ind(t); }
L_0063fde9:; BB(0x0063fde9);
    /* 0063fde9: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fded: jne 0x63fe13 */ if (!fZ) goto L_0063fe13;
L_0063fdef:; BB(0x0063fdef);
    /* 0063fdef: push 0x6dbbc8 */ { u32 v = 0x6dbbc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fdf9u); f_00630f40();
    /* 0063fdf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fdfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fdfd: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fe05: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe0b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fe11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fe13u); call_ind(t); }
L_0063fe13:; BB(0x0063fe13);
    /* 0063fe13: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fe17: jne 0x63fe3d */ if (!fZ) goto L_0063fe3d;
L_0063fe19:; BB(0x0063fe19);
    /* 0063fe19: push 0x6dbba8 */ { u32 v = 0x6dbba8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe1e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fe23u); f_00630f40();
    /* 0063fe23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fe26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe27: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fe2f: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe35: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fe3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fe3du); call_ind(t); }
L_0063fe3d:; BB(0x0063fe3d);
    /* 0063fe3d: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063fe41: jne 0x63fe67 */ if (!fZ) goto L_0063fe67;
L_0063fe43:; BB(0x0063fe43);
    /* 0063fe43: push 0x6dbb88 */ { u32 v = 0x6dbb88u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe48: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63fe4du); f_00630f40();
    /* 0063fe4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063fe50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe51: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063fe59: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 0063fe5f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063fe65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63fe67u); call_ind(t); }
L_0063fe67:; BB(0x0063fe67);
    /* 0063fe67: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fe69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fe6a: ret 4 */ FN_RET(0x0063f400); r_esp += 8; return;
}

