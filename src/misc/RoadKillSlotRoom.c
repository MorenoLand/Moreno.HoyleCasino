#include "protos.h"

void f_00571fe0(void) /* RoadKillSlotRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571fe0);
    /* 00571fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00571fe5: push 0x6a6098 */ { u32 v = 0x6a6098u; r_esp -= 4; W32(r_esp, v); }
    /* 00571fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00571ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571ff1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571ff4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00571ff9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00571ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571ffc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00571fff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00572005: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00572008: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057200b: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x572010u); f_005d7b60();
    /* 00572010: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572017: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057201a: mov dword ptr [eax], 0x6ca794 */ W32((u32)(r_eax), 0x6ca794u);
    /* 00572020: push 0x6ca780 */ { u32 v = 0x6ca780u; r_esp -= 4; W32(r_esp, v); }
    /* 00572025: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57202au); f_00630f40();
    /* 0057202a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057202d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057202e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572034: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x572039u); f_005f38b0();
    /* 00572039: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057203c: mov dword ptr [0x79344c], ecx */ W32((u32)(0x79344cu), r_ecx);
    /* 00572042: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572047: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x57204cu); f_005f1ad0();
    /* 0057204c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057204e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572050: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572052: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572055: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x57205au); f_005f1b10();
    /* 0057205a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00572060: jmp 0x57206e */ goto L_0057206e;
L_00572062:; BB(0x00572062);
    /* 00572062: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00572066: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0057206a: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0057206e:; BB(0x0057206e);
    /* 0057206e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00572072: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00572075: jge 0x572093 */ if ((fS==fO)) goto L_00572093;
L_00572077:; BB(0x00572077);
    /* 00572077: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572079: push 0x16040 */ { u32 v = 0x16040u; r_esp -= 4; W32(r_esp, v); }
    /* 0057207e: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00572083: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00572089: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057208c: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x572091u); f_006044b0();
    /* 00572091: jmp 0x572062 */ goto L_00572062;
L_00572093:; BB(0x00572093);
    /* 00572093: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057209a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057209d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005720a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005720a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005720a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005720aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005720ab: ret  */ FN_RET(0x00571fe0); r_esp += 4; return;
}

void f_005720b0(void) /* RoadKillSlotRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005720b0);
    /* 005720b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005720b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005720b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005720b5: push 0x6a60bb */ { u32 v = 0x6a60bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005720ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005720c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005720c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005720c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005720c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005720cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005720cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005720cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005720d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005720d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005720db: mov dword ptr [eax], 0x6ca794 */ W32((u32)(r_eax), 0x6ca794u);
    /* 005720e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005720e8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005720ee: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5720f3u); f_005de170();
    /* 005720f3: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005720f9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005720fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005720ff: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00572102: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572106: je 0x57211b */ if (fZ) goto L_0057211b;
L_00572108:; BB(0x00572108);
    /* 00572108: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057210a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057210d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057210f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00572112: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00572114: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572116u); call_ind(t); }
    /* 00572116: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00572119: jmp 0x572122 */ goto L_00572122;
L_0057211b:; BB(0x0057211b);
    /* 0057211b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00572122:; BB(0x00572122);
    /* 00572122: mov dword ptr [0x793450], 0 */ W32((u32)(0x793450u), 0x0u);
    /* 0057212c: mov dword ptr [0x79344c], 0 */ W32((u32)(0x79344cu), 0x0u);
    /* 00572136: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057213d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572140: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x572145u); f_005d7bd0();
    /* 00572145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572148: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057214f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572150: mov esp, ebp */ r_esp = r_ebp;
    /* 00572152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572153: ret  */ FN_RET(0x005720b0); r_esp += 4; return;
}

void f_00572160(void) /* RoadKillSlotRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572160);
    /* 00572160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572161: mov ebp, esp */ r_ebp = r_esp;
    /* 00572163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572165: push 0x6a60ec */ { u32 v = 0x6a60ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057216a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572171: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572174: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00572179: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057217b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057217c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057217f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00572185: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00572188: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057218b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x572190u); f_005d8230();
    /* 00572190: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572196: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x57219bu); f_005f3e50();
    /* 0057219b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057219e: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 005721a4: cmp dword ptr [0x793450], 0 */ {  u32 a = R32((u32)(0x793450u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005721ab: jne 0x5721f3 */ if (!fZ) goto L_005721f3;
L_005721ad:; BB(0x005721ad);
    /* 005721ad: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005721b2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5721b7u); f_00686d82();
    /* 005721b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005721ba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005721bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005721c4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005721c8: je 0x5721d7 */ if (fZ) goto L_005721d7;
L_005721ca:; BB(0x005721ca);
    /* 005721ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005721cd: call 0x56ba40 */ r_esp -= 4; W32(r_esp, 0x5721d2u); f_0056ba40();
    /* 005721d2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005721d5: jmp 0x5721de */ goto L_005721de;
L_005721d7:; BB(0x005721d7);
    /* 005721d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005721de:; BB(0x005721de);
    /* 005721de: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005721e1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005721e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005721eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005721ee: mov dword ptr [0x793450], eax */ W32((u32)(0x793450u), r_eax);
L_005721f3:; BB(0x005721f3);
    /* 005721f3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005721f5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5721fau); f_00686d82();
    /* 005721fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005721fd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00572200: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00572207: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057220b: je 0x572228 */ if (fZ) goto L_00572228;
L_0057220d:; BB(0x0057220d);
    /* 0057220d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057220f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572212: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x572217u); f_005fc0d0();
    /* 00572217: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057221a: mov dword ptr [ecx], 0x6caa94 */ W32((u32)(r_ecx), 0x6caa94u);
    /* 00572220: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572223: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00572226: jmp 0x57222f */ goto L_0057222f;
L_00572228:; BB(0x00572228);
    /* 00572228: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0057222f:; BB(0x0057222f);
    /* 0057222f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00572232: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00572235: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057223c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057223f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572240: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572243: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x572248u); f_005f1b70();
    /* 00572248: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057224b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572252: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572253: mov esp, ebp */ r_esp = r_ebp;
    /* 00572255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572256: ret  */ FN_RET(0x00572160); r_esp += 4; return;
}

void f_00572260(void) /* RoadKillSlotRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572260);
    /* 00572260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572261: mov ebp, esp */ r_ebp = r_esp;
    /* 00572263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572266: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572269: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057226c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057226f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572276: je 0x572293 */ if (fZ) goto L_00572293;
L_00572278:; BB(0x00572278);
    /* 00572278: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057227f: je 0x5722e4 */ if (fZ) goto L_005722e4;
L_00572281:; BB(0x00572281);
    /* 00572281: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572288: je 0x572310 */ if (fZ) goto L_00572310;
L_0057228e:; BB(0x0057228e);
    /* 0057228e: jmp 0x572332 */ goto L_00572332;
L_00572293:; BB(0x00572293);
    /* 00572293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572295: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057229a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057229d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5722a2u); f_005fe640();
    /* 005722a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722a4: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005722a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722ac: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5722b1u); f_005fe640();
    /* 005722b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722b3: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005722b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722bb: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5722c0u); f_005fe640();
    /* 005722c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722c2: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005722c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722ca: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5722cfu); f_005fe640();
    /* 005722cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722d1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005722d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005722d5: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005722da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722dd: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5722e2u); f_005fe240();
    /* 005722e2: jmp 0x572332 */ goto L_00572332;
L_005722e4:; BB(0x005722e4);
    /* 005722e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722e6: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005722eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722ee: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5722f3u); f_005fe640();
    /* 005722f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005722f5: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005722fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005722fd: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x572302u); f_005fe640();
    /* 00572302: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00572304: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00572306: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572309: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57230eu); f_005fe640();
    /* 0057230e: jmp 0x572332 */ goto L_00572332;
L_00572310:; BB(0x00572310);
    /* 00572310: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572312: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00572317: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057231a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57231fu); f_005fe640();
    /* 0057231f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572321: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572325: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057232a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057232d: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x572332u); f_005fe240();
L_00572332:; BB(0x00572332);
    /* 00572332: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00572335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572336: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00572339: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057233a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057233d: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x572342u); f_005d8670();
    /* 00572342: mov esp, ebp */ r_esp = r_ebp;
    /* 00572344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572345: ret 8 */ FN_RET(0x00572260); r_esp += 12; return;
}

void f_00572350(void) /* RoadKillSlotRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572350);
    /* 00572350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572351: mov ebp, esp */ r_ebp = r_esp;
    /* 00572353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572357: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057235c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00572362: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x572367u); f_005df2e0();
    /* 00572367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572368: push 0x3102e2 */ { u32 v = 0x3102e2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057236d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572370: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x572375u); f_005f1e60();
    /* 00572375: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572378: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x57237du); f_0064e430();
    /* 0057237d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057237f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572380: ret  */ FN_RET(0x00572350); r_esp += 4; return;
}

void f_00572390(void) /* RoadKillSlotRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572390);
    /* 00572390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572391: mov ebp, esp */ r_ebp = r_esp;
    /* 00572393: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572396: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057239c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057239f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005723a2: sub ecx, 0x30ef5a */ {  u32 a = r_ecx; u32 b = 0x30ef5au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005723a8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005723ab: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005723af: ja 0x572455 */ if ((!fC&&!fZ)) goto L_00572455;
L_005723b5:; BB(0x005723b5);
    /* 005723b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005723b8: jmp dword ptr [edx*4 + 0x57246c] */ { u32 t = R32((u32)(r_edx*4+0x57246cu)); switch (t) { case 0x572438u: goto L_00572438; case 0x57241bu: goto L_0057241b; case 0x5723feu: goto L_005723fe; case 0x5723e1u: goto L_005723e1; case 0x5723bfu: goto L_005723bf; default: UNSUP(0x005723b8, "jump table entry is not a known target"); } }
L_005723bf:; BB(0x005723bf);
    /* 005723bf: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 005723c4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005723c7: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 005723cd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005723d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005723d2: mov ecx, eax */ r_ecx = r_eax;
    /* 005723d4: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005723da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5723dcu); call_ind(t); }
    /* 005723dc: jmp 0x572465 */ goto L_00572465;
L_005723e1:; BB(0x005723e1);
    /* 005723e1: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005723e7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005723ea: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 005723ef: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005723f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005723f4: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005723fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5723fcu); call_ind(t); }
    /* 005723fc: jmp 0x572465 */ goto L_00572465;
L_005723fe:; BB(0x005723fe);
    /* 005723fe: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572404: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00572407: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0057240c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057240f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00572411: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00572417: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572419u); call_ind(t); }
    /* 00572419: jmp 0x572465 */ goto L_00572465;
L_0057241b:; BB(0x0057241b);
    /* 0057241b: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572421: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00572424: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00572429: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0057242c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057242e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00572434: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572436u); call_ind(t); }
    /* 00572436: jmp 0x572465 */ goto L_00572465;
L_00572438:; BB(0x00572438);
    /* 00572438: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0057243e: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00572441: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00572446: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00572449: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057244b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00572451: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572453u); call_ind(t); }
    /* 00572453: jmp 0x572465 */ goto L_00572465;
L_00572455:; BB(0x00572455);
    /* 00572455: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00572458: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572459: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057245c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057245d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572460: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x572465u); f_005dc7d0();
L_00572465:; BB(0x00572465);
    /* 00572465: mov esp, ebp */ r_esp = r_ebp;
    /* 00572467: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572468: ret 8 */ FN_RET(0x00572390); r_esp += 12; return;
}

void f_00572480(void) /* RoadKillSlotRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572480);
    /* 00572480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572481: mov ebp, esp */ r_ebp = r_esp;
    /* 00572483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572489: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057248c: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572490: jne 0x5725e0 */ if (!fZ) goto L_005725e0;
L_00572496:; BB(0x00572496);
    /* 00572496: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572499: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0057249d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057249e: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5724a4u); call_ind(t); }
    /* 005724a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005724a7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005724aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005724ad: sub eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005724b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005724b3: cmp dword ptr [ebp - 8], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005724b7: ja 0x5725e0 */ if ((!fC&&!fZ)) goto L_005725e0;
L_005724bd:; BB(0x005724bd);
    /* 005724bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005724c0: movzx edx, byte ptr [ecx + 0x57260c] */ r_edx = (u32)R8((u32)(r_ecx+0x57260cu));
    /* 005724c7: jmp dword ptr [edx*4 + 0x5725f4] */ { u32 t = R32((u32)(r_edx*4+0x5725f4u)); switch (t) { case 0x572576u: goto L_00572576; case 0x5724ceu: goto L_005724ce; case 0x5725acu: goto L_005725ac; case 0x572540u: goto L_00572540; case 0x572507u: goto L_00572507; case 0x5725e0u: goto L_005725e0; default: UNSUP(0x005724c7, "jump table entry is not a known target"); } }
L_005724ce:; BB(0x005724ce);
    /* 005724ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005724d0: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 005724d5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005724db: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5724e0u); f_005f2a60();
    /* 005724e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005724e2: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5724e7u); f_006026d0();
    /* 005724e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005724ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005724ec: je 0x572502 */ if (fZ) goto L_00572502;
L_005724ee:; BB(0x005724ee);
    /* 005724ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005724f0: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 005724f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005724f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005724fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005724fd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00572500: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572502u); call_ind(t); }
L_00572502:; BB(0x00572502);
    /* 00572502: jmp 0x5725e0 */ goto L_005725e0;
L_00572507:; BB(0x00572507);
    /* 00572507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572509: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057250e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00572514: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x572519u); f_005f2a60();
    /* 00572519: mov ecx, eax */ r_ecx = r_eax;
    /* 0057251b: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x572520u); f_006026d0();
    /* 00572520: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00572523: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572525: je 0x57253b */ if (fZ) goto L_0057253b;
L_00572527:; BB(0x00572527);
    /* 00572527: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572529: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057252e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572531: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00572533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572536: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00572539: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57253bu); call_ind(t); }
L_0057253b:; BB(0x0057253b);
    /* 0057253b: jmp 0x5725e0 */ goto L_005725e0;
L_00572540:; BB(0x00572540);
    /* 00572540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572542: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00572547: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057254d: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x572552u); f_005f2a60();
    /* 00572552: mov ecx, eax */ r_ecx = r_eax;
    /* 00572554: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x572559u); f_006026d0();
    /* 00572559: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057255c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057255e: je 0x572574 */ if (fZ) goto L_00572574;
L_00572560:; BB(0x00572560);
    /* 00572560: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572562: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00572567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057256a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057256c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057256f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00572572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572574u); call_ind(t); }
L_00572574:; BB(0x00572574);
    /* 00572574: jmp 0x5725e0 */ goto L_005725e0;
L_00572576:; BB(0x00572576);
    /* 00572576: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572578: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057257d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00572583: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x572588u); f_005f2a60();
    /* 00572588: mov ecx, eax */ r_ecx = r_eax;
    /* 0057258a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x57258fu); f_006026d0();
    /* 0057258f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00572592: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572594: je 0x5725aa */ if (fZ) goto L_005725aa;
L_00572596:; BB(0x00572596);
    /* 00572596: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572598: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057259d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005725a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005725a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005725a5: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005725a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5725aau); call_ind(t); }
L_005725aa:; BB(0x005725aa);
    /* 005725aa: jmp 0x5725e0 */ goto L_005725e0;
L_005725ac:; BB(0x005725ac);
    /* 005725ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005725ae: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 005725b3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005725b9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5725beu); f_005f2a60();
    /* 005725be: mov ecx, eax */ r_ecx = r_eax;
    /* 005725c0: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5725c5u); f_006026d0();
    /* 005725c5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005725c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005725ca: je 0x5725e0 */ if (fZ) goto L_005725e0;
L_005725cc:; BB(0x005725cc);
    /* 005725cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005725ce: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 005725d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005725d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005725d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005725db: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005725de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5725e0u); call_ind(t); }
L_005725e0:; BB(0x005725e0);
    /* 005725e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005725e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005725e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005725e7: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5725ecu); f_005d7f40();
    /* 005725ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005725ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005725ef: ret 4 */ FN_RET(0x00572480); r_esp += 8; return;
}

void f_00572620(void) /* RoadKillSlotRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572620);
    /* 00572620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572621: mov ebp, esp */ r_ebp = r_esp;
    /* 00572623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057262a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057262d: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x572632u); f_005fc360();
    /* 00572632: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572635: jne 0x57263f */ if (!fZ) goto L_0057263f;
L_00572637:; BB(0x00572637);
    /* 00572637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057263a: call 0x572950 */ r_esp -= 4; W32(r_esp, 0x57263fu); f_00572950();
L_0057263f:; BB(0x0057263f);
    /* 0057263f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572642: call 0x5d8020 */ r_esp -= 4; W32(r_esp, 0x572647u); f_005d8020();
    /* 00572647: mov esp, ebp */ r_esp = r_ebp;
    /* 00572649: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057264a: ret  */ FN_RET(0x00572620); r_esp += 4; return;
}

void f_00572660(void) /* RoadKillSlotRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572660);
    /* 00572660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572661: mov ebp, esp */ r_ebp = r_esp;
    /* 00572663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572667: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572669: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57266eu); f_005dcb00();
    /* 0057266e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572671: mov esp, ebp */ r_esp = r_ebp;
    /* 00572673: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572674: ret  */ FN_RET(0x00572660); r_esp += 4; return;
}

void f_00572680(void) /* RoadKillSlotRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572680);
    /* 00572680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572681: mov ebp, esp */ r_ebp = r_esp;
    /* 00572683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572685: push 0x6a6112 */ { u32 v = 0x6a6112u; r_esp -= 4; W32(r_esp, v); }
    /* 0057268a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572691: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572694: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00572699: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057269b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057269c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057269f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005726a5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005726a8: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005726ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005726ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005726ae: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5726b3u); f_005dcb00();
    /* 005726b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005726b6: mov ecx, eax */ r_ecx = r_eax;
    /* 005726b8: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5726bdu); f_005d5ac0();
    /* 005726bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005726c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005726c1: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005726c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005726c5: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005726cb: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x5726d0u); f_0056da30();
    /* 005726d0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005726d2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005726d5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005726d8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005726db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005726de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005726df: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005726e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005726e3: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005726e6: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x5726ebu); f_0064c6a0();
    /* 005726eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005726ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005726f0: je 0x572708 */ if (fZ) goto L_00572708;
L_005726f2:; BB(0x005726f2);
    /* 005726f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005726f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005726f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005726f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005726fa: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572700: call 0x56dc60 */ r_esp -= 4; W32(r_esp, 0x572705u); f_0056dc60();
    /* 00572705: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00572708:; BB(0x00572708);
    /* 00572708: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0057270e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572711: add eax, dword ptr [edx + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00572717: cmp eax, 0x3b9ac9ff */ {  u32 a = r_eax; u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0057271c: jbe 0x572732 */ if ((fC||fZ)) goto L_00572732;
L_0057271e:; BB(0x0057271e);
    /* 0057271e: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572724: mov edx, 0x3b9ac9ff */ r_edx = 0x3b9ac9ffu;
    /* 00572729: sub edx, dword ptr [ecx + 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057272f: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00572732:; BB(0x00572732);
    /* 00572732: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572736: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00572739: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057273a: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572740: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x572745u); f_0056da30();
    /* 00572745: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00572747: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0057274a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057274d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00572750: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572753: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00572756: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00572759: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057275c: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057275f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00572762: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572766: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572769: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057276a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057276c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x572771u); f_005dcb00();
    /* 00572771: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572774: mov ecx, eax */ r_ecx = r_eax;
    /* 00572776: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x57277bu); f_005d5fb0();
    /* 0057277b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057277e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057277f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572785: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57278au); f_005dcb00();
    /* 0057278a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057278d: mov ecx, eax */ r_ecx = r_eax;
    /* 0057278f: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x572794u); f_005d5cf0();
    /* 00572794: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572798: je 0x572931 */ if (fZ) goto L_00572931;
L_0057279e:; BB(0x0057279e);
    /* 0057279e: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005727a4: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727ab: jne 0x5727c7 */ if (!fZ) goto L_005727c7;
L_005727ad:; BB(0x005727ad);
    /* 005727ad: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 005727b3: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727ba: jne 0x5727c7 */ if (!fZ) goto L_005727c7;
L_005727bc:; BB(0x005727bc);
    /* 005727bc: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005727c2: call 0x56e480 */ r_esp -= 4; W32(r_esp, 0x5727c7u); f_0056e480();
L_005727c7:; BB(0x005727c7);
    /* 005727c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005727ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005727cb: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005727d1: call 0x56df70 */ r_esp -= 4; W32(r_esp, 0x5727d6u); f_0056df70();
    /* 005727d6: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 005727dc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005727df: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5727e4u); f_005fc360();
    /* 005727e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727e7: jne 0x572838 */ if (!fZ) goto L_00572838;
L_005727e9:; BB(0x005727e9);
    /* 005727e9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005727ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005727f1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005727f7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005727fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5727fcu); call_ind(t); }
    /* 005727fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005727ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572801: je 0x572838 */ if (fZ) goto L_00572838;
L_00572803:; BB(0x00572803);
    /* 00572803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572805: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572806: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0057280c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057280f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572810: fld1  */ FPUSH(1.0);
    /* 00572812: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00572815: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572817: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00572819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057281b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057281d: push 0x19268 */ { u32 v = 0x19268u; r_esp -= 4; W32(r_esp, v); }
    /* 00572822: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572828: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057282a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572830: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00572836: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572838u); call_ind(t); }
L_00572838:; BB(0x00572838);
    /* 00572838: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057283a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057283d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00572840: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00572843: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00572846: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00572848: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057284b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57284du); call_ind(t); }
    /* 0057284d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572851: jne 0x57285d */ if (!fZ) goto L_0057285d;
L_00572853:; BB(0x00572853);
    /* 00572853: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572857: je 0x57291c */ if (fZ) goto L_0057291c;
L_0057285d:; BB(0x0057285d);
    /* 0057285d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057285f: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572865: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00572868: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0057286d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00572870: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00572872: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00572878: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57287au); call_ind(t); }
    /* 0057287a: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572880: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00572883: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00572888: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0057288b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057288d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00572890: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572892u); call_ind(t); }
    /* 00572892: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00572894: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x572899u); f_00686d82();
    /* 00572899: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057289c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057289f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005728a6: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005728aa: je 0x5728c0 */ if (fZ) goto L_005728c0;
L_005728ac:; BB(0x005728ac);
    /* 005728ac: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005728af: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005728b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005728b3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005728b6: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5728bbu); f_006010a0();
    /* 005728bb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005728be: jmp 0x5728c7 */ goto L_005728c7;
L_005728c0:; BB(0x005728c0);
    /* 005728c0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005728c7:; BB(0x005728c7);
    /* 005728c7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005728ca: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005728cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005728d4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005728d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005728d8: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 005728de: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005728e1: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5728e6u); f_005f5d50();
    /* 005728e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005728e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005728e9: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005728ef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005728f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005728f3: fld1  */ FPUSH(1.0);
    /* 005728f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005728f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005728fa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005728fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005728fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572900: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 00572905: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057290a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057290c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572912: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00572918: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57291au); call_ind(t); }
    /* 0057291a: jmp 0x572931 */ goto L_00572931;
L_0057291c:; BB(0x0057291c);
    /* 0057291c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057291e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00572921: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00572924: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00572927: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057292a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057292c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057292f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572931u); call_ind(t); }
L_00572931:; BB(0x00572931);
    /* 00572931: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572934: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057293b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057293c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057293e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057293f: ret 4 */ FN_RET(0x00572680); r_esp += 8; return;
}

void f_005729f0(void) /* RoadKillSlotRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005729f0);
    /* 005729f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005729f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005729f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005729f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005729f9: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 005729fe: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00572a04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a05: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00572a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a09: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572a0f: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x572a14u); f_0056da30();
    /* 00572a14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572a18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00572a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572a1e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x572a23u); f_005dcb00();
    /* 00572a23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572a26: mov ecx, eax */ r_ecx = r_eax;
    /* 00572a28: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x572a2du); f_005d5fb0();
    /* 00572a2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572a30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a31: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00572a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572a35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572a38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x572a3eu); f_005dcb00();
    /* 00572a3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572a41: mov ecx, eax */ r_ecx = r_eax;
    /* 00572a43: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x572a48u); f_005d5cf0();
    /* 00572a48: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 00572a4e: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 00572a58: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00572a5d: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00572a67: mov esp, ebp */ r_esp = r_ebp;
    /* 00572a69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572a6a: ret 4 */ FN_RET(0x005729f0); r_esp += 8; return;
}

void f_00572a70(void) /* RoadKillSlotRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572a70);
    /* 00572a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00572a73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572a76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00572a79: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00572a7b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00572a81: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x572a86u); f_006375b0();
    /* 00572a86: mov ecx, eax */ r_ecx = r_eax;
    /* 00572a88: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x572a8du); f_0063aae0();
    /* 00572a8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00572a90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572a94: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x572a99u); f_005dcb00();
    /* 00572a99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572a9c: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00572aa2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572aa3: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00572aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572aaa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00572aad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572aae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572ab1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x572ab6u); f_0064c5c0();
    /* 00572ab6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00572ab8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00572abb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572abe: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00572ac0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00572ac3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00572ac6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ac7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x572accu); f_005dcb00();
    /* 00572acc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572acf: mov ecx, eax */ r_ecx = r_eax;
    /* 00572ad1: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x572ad6u); f_0063b0a0();
    /* 00572ad6: mov esp, ebp */ r_esp = r_ebp;
    /* 00572ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572ad9: ret 4 */ FN_RET(0x00572a70); r_esp += 8; return;
}

void f_00572ae0(void) /* RoadKillSlotRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572ae0);
    /* 00572ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572ae7: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572aed: call 0x56de20 */ r_esp -= 4; W32(r_esp, 0x572af2u); f_0056de20();
    /* 00572af2: mov esp, ebp */ r_esp = r_ebp;
    /* 00572af4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572af5: ret  */ FN_RET(0x00572ae0); r_esp += 4; return;
}

