#include "protos.h"

void f_005e6160(void) /* CasinoDemoAboutRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6160);
    /* 005e6160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6161: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6165: push 0x6a9907 */ { u32 v = 0x6a9907u; r_esp -= 4; W32(r_esp, v); }
    /* 005e616a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e6170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6172: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e6177: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e6179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e617a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e617d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e6183: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e6186: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6189: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5e618eu); f_005d7b60();
    /* 005e618e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e6195: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6198: mov dword ptr [eax], 0x6d57d4 */ W32((u32)(r_eax), 0x6d57d4u);
    /* 005e619e: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e61a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e61a6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5e61abu); f_005f1ad0();
    /* 005e61ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e61b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e61b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e61b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e61bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e61c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e61c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e61c3: ret  */ FN_RET(0x005e6160); r_esp += 4; return;
}

void f_005e61f0(void) /* CasinoDemoAboutRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e61f0);
    /* 005e61f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e61f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e61f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e61f5: push 0x6a992d */ { u32 v = 0x6a992du; r_esp -= 4; W32(r_esp, v); }
    /* 005e61fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e6200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6201: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6204: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e6209: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e620b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e620c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e620f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e6215: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e6218: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e621b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5e6220u); f_005d8230();
    /* 005e6220: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6222: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6227: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e622b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e622d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e622f: push 0x311b18 */ { u32 v = 0x311b18u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6234: push 0x311b18 */ { u32 v = 0x311b18u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e623b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e6240: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e6243: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6248u); f_005f9ce0();
    /* 005e6248: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e624a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e624f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6251: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6256: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6258: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e625a: push 0x311b19 */ { u32 v = 0x311b19u; r_esp -= 4; W32(r_esp, v); }
    /* 005e625f: push 0x311b19 */ { u32 v = 0x311b19u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6264: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6266: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e626c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e626f: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6274u); f_005f9ce0();
    /* 005e6274: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6276: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6278: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e627a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e627c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e627e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6285: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6289: push 0x311b1a */ { u32 v = 0x311b1au; r_esp -= 4; W32(r_esp, v); }
    /* 005e628e: push 0x311b1a */ { u32 v = 0x311b1au; r_esp -= 4; W32(r_esp, v); }
    /* 005e6293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6295: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e629b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e629e: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e62a3u); f_005f9de0();
    /* 005e62a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62ad: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62b8: push 0x311b1b */ { u32 v = 0x311b1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62bd: push 0x311b1b */ { u32 v = 0x311b1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e62c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62c4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e62c9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e62cc: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e62d1u); f_005f9de0();
    /* 005e62d1: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005e62d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e62d8u); f_00686d82();
    /* 005e62d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e62db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e62de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e62e5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e62e9: je 0x5e62f8 */ if (fZ) goto L_005e62f8;
L_005e62eb:; BB(0x005e62eb);
    /* 005e62eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e62ee: call 0x5e6420 */ r_esp -= 4; W32(r_esp, 0x5e62f3u); f_005e6420();
    /* 005e62f3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e62f6: jmp 0x5e62ff */ goto L_005e62ff;
L_005e62f8:; BB(0x005e62f8);
    /* 005e62f8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e62ff:; BB(0x005e62ff);
    /* 005e62ff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6302: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e6305: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e630c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e630f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6310: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6313: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5e6318u); f_005f1b70();
    /* 005e6318: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e631b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e6322: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6323: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6326: ret  */ FN_RET(0x005e61f0); r_esp += 4; return;
}

void f_005e6330(void) /* CasinoDemoAboutRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6330);
    /* 005e6330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6331: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6333: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6336: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6339: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e633c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e633f: cmp dword ptr [ebp - 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6346: je 0x5e6353 */ if (fZ) goto L_005e6353;
L_005e6348:; BB(0x005e6348);
    /* 005e6348: cmp dword ptr [ebp - 8], 0x186d8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e634f: je 0x5e637f */ if (fZ) goto L_005e637f;
L_005e6351:; BB(0x005e6351);
    /* 005e6351: jmp 0x5e638e */ goto L_005e638e;
L_005e6353:; BB(0x005e6353);
    /* 005e6353: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6355: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e635a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e635d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e6362u); f_005fe640();
    /* 005e6362: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6364: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6369: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e636c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e6371u); f_005fe640();
    /* 005e6371: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6373: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6375: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6378: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e637du); f_005fe640();
    /* 005e637d: jmp 0x5e638e */ goto L_005e638e;
L_005e637f:; BB(0x005e637f);
    /* 005e637f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6381: push 0x186dd */ { u32 v = 0x186ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6386: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6389: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e638eu); f_005fe640();
L_005e638e:; BB(0x005e638e);
    /* 005e638e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e6391: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6392: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6395: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6396: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6399: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5e639eu); f_005d8670();
    /* 005e639e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e63a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e63a1: ret 8 */ FN_RET(0x005e6330); r_esp += 12; return;
}

void f_005e63b0(void) /* CasinoDemoAboutRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e63b0);
    /* 005e63b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e63b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e63b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e63b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e63b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e63ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e63bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63be: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5e63c3u); f_005d7f40();
    /* 005e63c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63c6: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63ca: je 0x5e6409 */ if (fZ) goto L_005e6409;
L_005e63cc:; BB(0x005e63cc);
    /* 005e63cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e63cf: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 005e63d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63d5: jne 0x5e63e0 */ if (!fZ) goto L_005e63e0;
L_005e63d7:; BB(0x005e63d7);
    /* 005e63d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e63da: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63de: je 0x5e63e9 */ if (fZ) goto L_005e63e9;
L_005e63e0:; BB(0x005e63e0);
    /* 005e63e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e63e3: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e63e7: jne 0x5e6409 */ if (!fZ) goto L_005e6409;
L_005e63e9:; BB(0x005e63e9);
    /* 005e63e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e63eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e63ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63f0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005e63f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e63f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e63f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e63fb: mov ecx, eax */ r_ecx = r_eax;
    /* 005e63fd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e6400: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6402u); call_ind(t); }
    /* 005e6402: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6405: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005e6409:; BB(0x005e6409);
    /* 005e6409: mov esp, ebp */ r_esp = r_ebp;
    /* 005e640b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e640c: ret 4 */ FN_RET(0x005e63b0); r_esp += 8; return;
}

