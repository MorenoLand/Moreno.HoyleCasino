#include "protos.h"

void f_005ad1f0(void) /* royalmatchgame::func_005ad1f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ad1f0);
    /* 005ad1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ad1f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad1f5: push 0x6a7cbc */ { u32 v = 0x6a7cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad1fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ad200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad201: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad204: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ad209: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ad20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad20c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ad20f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ad215: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005ad218: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ad21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad21c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad222: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5ad227u); f_005b4e50();
    /* 005ad227: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ad22a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad22e: jne 0x5ad23f */ if (!fZ) goto L_005ad23f;
L_005ad230:; BB(0x005ad230);
    /* 005ad230: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad236: mov edx, dword ptr [ecx + 0x5bc] */ r_edx = R32((u32)(r_ecx+0x5bcu));
    /* 005ad23c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_005ad23f:; BB(0x005ad23f);
    /* 005ad23f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ad242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad243: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad248u); f_005dcb00();
    /* 005ad248: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad24b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ad24e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ad251: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad256u); f_0063aac0();
    /* 005ad256: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ad258: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ad25b: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad25f: je 0x5ad27d */ if (fZ) goto L_005ad27d;
L_005ad261:; BB(0x005ad261);
    /* 005ad261: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ad264: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad269u); f_0063aac0();
    /* 005ad269: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad26b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005ad26e: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad272: je 0x5ad27d */ if (fZ) goto L_005ad27d;
L_005ad274:; BB(0x005ad274);
    /* 005ad274: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ad27b: jmp 0x5ad284 */ goto L_005ad284;
L_005ad27d:; BB(0x005ad27d);
    /* 005ad27d: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_005ad284:; BB(0x005ad284);
    /* 005ad284: movzx eax, byte ptr [ebp - 0x34] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 005ad288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad28a: je 0x5ad2eb */ if (fZ) goto L_005ad2eb;
L_005ad28c:; BB(0x005ad28c);
    /* 005ad28c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad28e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005ad294: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x5ad299u); f_005df7b0();
    /* 005ad299: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ad29c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad29e: je 0x5ad2eb */ if (fZ) goto L_005ad2eb;
L_005ad2a0:; BB(0x005ad2a0);
    /* 005ad2a0: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005ad2a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2a6: je 0x5ad2eb */ if (fZ) goto L_005ad2eb;
L_005ad2a8:; BB(0x005ad2a8);
    /* 005ad2a8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad2ab: movzx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)R8((u32)(r_eax+0x19u));
    /* 005ad2af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2b1: jne 0x5ad2eb */ if (!fZ) goto L_005ad2eb;
L_005ad2b3:; BB(0x005ad2b3);
    /* 005ad2b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ad2b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad2b7: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005ad2bd: call 0x5a4b20 */ r_esp -= 4; W32(r_esp, 0x5ad2c2u); f_005a4b20();
    /* 005ad2c2: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2c5: je 0x5ad2eb */ if (fZ) goto L_005ad2eb;
L_005ad2c7:; BB(0x005ad2c7);
    /* 005ad2c7: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ad2cd: call 0x5a80d0 */ r_esp -= 4; W32(r_esp, 0x5ad2d2u); f_005a80d0();
    /* 005ad2d2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad2d5: mov byte ptr [eax + 0x19], 1 */ W8((u32)(r_eax+0x19u), 0x1u);
    /* 005ad2d9: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005ad2df: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x5ad2e4u); f_0057c140();
    /* 005ad2e4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ad2e6: jmp 0x5ad4ce */ goto L_005ad4ce;
L_005ad2eb:; BB(0x005ad2eb);
    /* 005ad2eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad2ee: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 005ad2f2: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005ad2f8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ad2fb: mov dword ptr [edx + 0x5bc], eax */ W32((u32)(r_edx+0x5bcu), r_eax);
    /* 005ad301: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad304: mov byte ptr [ecx + 0xd], 1 */ W8((u32)(r_ecx+0xdu), 0x1u);
    /* 005ad308: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ad30b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005ad30e: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ad312: ja 0x5ad4b1 */ if ((!fC&&!fZ)) goto L_005ad4b1;
L_005ad318:; BB(0x005ad318);
    /* 005ad318: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ad31b: jmp dword ptr [eax*4 + 0x5ad4e0] */ { u32 t = R32((u32)(r_eax*4+0x5ad4e0u)); switch (t) { case 0x5ad322u: goto L_005ad322; case 0x5ad333u: goto L_005ad333; case 0x5ad401u: goto L_005ad401; case 0x5ad3aau: goto L_005ad3aa; case 0x5ad494u: goto L_005ad494; default: UNSUP(0x005ad31b, "jump table entry is not a known target"); } }
L_005ad322:; BB(0x005ad322);
    /* 005ad322: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ad325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad326: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad329: call 0x5aee50 */ r_esp -= 4; W32(r_esp, 0x5ad32eu); f_005aee50();
    /* 005ad32e: jmp 0x5ad4cc */ goto L_005ad4cc;
L_005ad333:; BB(0x005ad333);
    /* 005ad333: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad335: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad33b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad33e: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad344: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ad347: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad349: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad34c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad34eu); call_ind(t); }
    /* 005ad34e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad350: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ad355u); f_00686d82();
    /* 005ad355: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad358: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ad35b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ad362: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad366: je 0x5ad37f */ if (fZ) goto L_005ad37f;
L_005ad368:; BB(0x005ad368);
    /* 005ad368: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad36e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ad371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad372: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ad375: call 0x5ab7f0 */ r_esp -= 4; W32(r_esp, 0x5ad37au); f_005ab7f0();
    /* 005ad37a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ad37d: jmp 0x5ad386 */ goto L_005ad386;
L_005ad37f:; BB(0x005ad37f);
    /* 005ad37f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ad386:; BB(0x005ad386);
    /* 005ad386: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ad389: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ad38c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ad393: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ad396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad397: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad39d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005ad3a0: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5ad3a5u); f_005fc420();
    /* 005ad3a5: jmp 0x5ad4cc */ goto L_005ad4cc;
L_005ad3aa:; BB(0x005ad3aa);
    /* 005ad3aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ad3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad3ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ad3b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad3b2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad3b8: call 0x5b8090 */ r_esp -= 4; W32(r_esp, 0x5ad3bdu); f_005b8090();
    /* 005ad3bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ad3c0: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ad3c5: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005ad3c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ad3cc: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ad3d1: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005ad3d5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ad3d7: mov ecx, edx */ r_ecx = r_edx;
    /* 005ad3d9: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005ad3dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ad3deu); call_ind(t); }
    /* 005ad3de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad3e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad3e2: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad3e7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad3ea: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad3f0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad3f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ad3f5: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad3f7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ad3fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad3fcu); call_ind(t); }
    /* 005ad3fc: jmp 0x5ad4cc */ goto L_005ad4cc;
L_005ad401:; BB(0x005ad401);
    /* 005ad401: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ad404: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad405: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ad408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad409: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad40f: call 0x5b3ee0 */ r_esp -= 4; W32(r_esp, 0x5ad414u); f_005b3ee0();
    /* 005ad414: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ad41a: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5ad41fu); f_005a7ea0();
    /* 005ad41f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad421: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad426: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad429: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad42f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad432: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ad434: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad436: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ad439: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad43bu); call_ind(t); }
    /* 005ad43b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad43d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ad442u); f_00686d82();
    /* 005ad442: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad445: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ad448: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ad44f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad453: je 0x5ad46c */ if (fZ) goto L_005ad46c;
L_005ad455:; BB(0x005ad455);
    /* 005ad455: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad45b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ad45e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad45f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ad462: call 0x5ab7f0 */ r_esp -= 4; W32(r_esp, 0x5ad467u); f_005ab7f0();
    /* 005ad467: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005ad46a: jmp 0x5ad473 */ goto L_005ad473;
L_005ad46c:; BB(0x005ad46c);
    /* 005ad46c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005ad473:; BB(0x005ad473);
    /* 005ad473: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ad476: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ad479: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ad480: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ad483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad484: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ad48a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005ad48d: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5ad492u); f_005fc420();
    /* 005ad492: jmp 0x5ad4cc */ goto L_005ad4cc;
L_005ad494:; BB(0x005ad494);
    /* 005ad494: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ad497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad498: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad49e: call 0x5b81f0 */ r_esp -= 4; W32(r_esp, 0x5ad4a3u); f_005b81f0();
    /* 005ad4a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ad4a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4a7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ad4aa: call 0x5aee50 */ r_esp -= 4; W32(r_esp, 0x5ad4afu); f_005aee50();
    /* 005ad4af: jmp 0x5ad4cc */ goto L_005ad4cc;
L_005ad4b1:; BB(0x005ad4b1);
    /* 005ad4b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ad4b3: jne 0x5ad4cc */ if (!fZ) goto L_005ad4cc;
L_005ad4b5:; BB(0x005ad4b5);
    /* 005ad4b5: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4ba: push 0x6cfe84 */ { u32 v = 0x6cfe84u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4bf: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4c4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ad4c9u); f_005e9f20();
    /* 005ad4c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ad4cc:; BB(0x005ad4cc);
    /* 005ad4cc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005ad4ce:; BB(0x005ad4ce);
    /* 005ad4ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ad4d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ad4d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad4d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005ad4db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad4dc: ret 0xc */ FN_RET(0x005ad1f0); r_esp += 16; return;
}

void f_005ad620(void) /* royalmatchgame::func_005ad620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ad620);
    /* 005ad620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad621: mov ebp, esp */ r_ebp = r_esp;
    /* 005ad623: sub esp, 0x1ac */ {  u32 a = r_esp; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad629: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad62a: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 005ad630: mov byte ptr [ebp - 0x45], 1 */ W8((u32)(r_ebp+0xffffffbbu), 0x1u);
    /* 005ad634: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad63a: call 0x5b5cb0 */ r_esp -= 4; W32(r_esp, 0x5ad63fu); f_005b5cb0();
    /* 005ad63f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ad642: mov dword ptr [ebp - 0x40], 0xffffffff */ W32((u32)(r_ebp+0xffffffc0u), 0xffffffffu);
    /* 005ad649: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 005ad650: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad656: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ad65bu); f_005b4f00();
    /* 005ad65b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ad65e: fldz  */ FPUSH(0.0);
    /* 005ad660: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ad663: fld1  */ FPUSH(1.0);
    /* 005ad665: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ad668: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 005ad66f: mov dword ptr [ebp - 0x3c], 0xffffffff */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffffu);
    /* 005ad676: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad67c: call 0x5b5240 */ r_esp -= 4; W32(r_esp, 0x5ad681u); f_005b5240();
    /* 005ad681: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005ad687: cmp dword ptr [ebp - 0x144], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ad68e: ja 0x5ae855 */ if ((!fC&&!fZ)) goto L_005ae855;
L_005ad694:; BB(0x005ad694);
    /* 005ad694: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 005ad69a: jmp dword ptr [eax*4 + 0x5aea04] */ { u32 t = R32((u32)(r_eax*4+0x5aea04u)); switch (t) { case 0x5ad6a1u: goto L_005ad6a1; case 0x5ad7e9u: goto L_005ad7e9; case 0x5ad6adu: goto L_005ad6ad; case 0x5ad7ddu: goto L_005ad7dd; case 0x5ad9c1u: goto L_005ad9c1; case 0x5adfd0u: goto L_005adfd0; case 0x5ae221u: goto L_005ae221; case 0x5ae6cfu: goto L_005ae6cf; case 0x5ae6dbu: goto L_005ae6db; case 0x5ae6e7u: goto L_005ae6e7; case 0x5ae6f3u: goto L_005ae6f3; case 0x5ae6ffu: goto L_005ae6ff; case 0x5ae7d0u: goto L_005ae7d0; case 0x5ad814u: goto L_005ad814; case 0x5ad8edu: goto L_005ad8ed; case 0x5ad8f9u: goto L_005ad8f9; case 0x5ad905u: goto L_005ad905; case 0x5ad911u: goto L_005ad911; default: UNSUP(0x005ad69a, "jump table entry is not a known target"); } }
L_005ad6a1:; BB(0x005ad6a1);
    /* 005ad6a1: mov dword ptr [ebp - 0x3c], 0x7d8 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d8u);
    /* 005ad6a8: jmp 0x5ae870 */ goto L_005ae870;
L_005ad6ad:; BB(0x005ad6ad);
    /* 005ad6ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad6b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6b3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad6b9: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ad6beu); f_005b4f50();
    /* 005ad6be: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad6c1: jne 0x5ad73f */ if (!fZ) goto L_005ad73f;
L_005ad6c3:; BB(0x005ad6c3);
    /* 005ad6c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad6c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6c9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad6cf: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ad6d4u); f_005b73a0();
    /* 005ad6d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6d8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad6ddu); f_005dcb00();
    /* 005ad6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad6e0: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005ad6e3: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ad6e6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad6ebu); f_0063aac0();
    /* 005ad6eb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ad6ed: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005ad6f0: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad6f4: je 0x5ad715 */ if (fZ) goto L_005ad715;
L_005ad6f6:; BB(0x005ad6f6);
    /* 005ad6f6: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ad6f9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad6feu); f_0063aac0();
    /* 005ad6fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad700: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005ad703: cmp dword ptr [ebp - 0x6c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad707: je 0x5ad715 */ if (fZ) goto L_005ad715;
L_005ad709:; BB(0x005ad709);
    /* 005ad709: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 005ad713: jmp 0x5ad71f */ goto L_005ad71f;
L_005ad715:; BB(0x005ad715);
    /* 005ad715: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
L_005ad71f:; BB(0x005ad71f);
    /* 005ad71f: movzx eax, byte ptr [ebp - 0x148] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeb8u));
    /* 005ad726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad728: je 0x5ad73a */ if (fZ) goto L_005ad73a;
L_005ad72a:; BB(0x005ad72a);
    /* 005ad72a: mov dword ptr [ebp - 0x3c], 0x40d */ W32((u32)(r_ebp+0xffffffc4u), 0x40du);
    /* 005ad731: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ad737: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ad73a:; BB(0x005ad73a);
    /* 005ad73a: jmp 0x5ad7d8 */ goto L_005ad7d8;
L_005ad73f:; BB(0x005ad73f);
    /* 005ad73f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad744: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad745: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad74b: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ad750u); f_005b73a0();
    /* 005ad750: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad754: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad759u); f_005dcb00();
    /* 005ad759: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad75c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005ad75f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ad762: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad767u); f_0063aac0();
    /* 005ad767: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ad769: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005ad76c: cmp dword ptr [ebp - 0x74], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad770: je 0x5ad791 */ if (fZ) goto L_005ad791;
L_005ad772:; BB(0x005ad772);
    /* 005ad772: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ad775: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad77au); f_0063aac0();
    /* 005ad77a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ad77c: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005ad77f: cmp dword ptr [ebp - 0x78], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad783: je 0x5ad791 */ if (fZ) goto L_005ad791;
L_005ad785:; BB(0x005ad785);
    /* 005ad785: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 005ad78f: jmp 0x5ad79b */ goto L_005ad79b;
L_005ad791:; BB(0x005ad791);
    /* 005ad791: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
L_005ad79b:; BB(0x005ad79b);
    /* 005ad79b: movzx edx, byte ptr [ebp - 0x14c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb4u));
    /* 005ad7a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad7a4: jne 0x5ad7c8 */ if (!fZ) goto L_005ad7c8;
L_005ad7a6:; BB(0x005ad7a6);
    /* 005ad7a6: mov dword ptr [ebp - 0x3c], 0x401 */ W32((u32)(r_ebp+0xffffffc4u), 0x401u);
    /* 005ad7ad: mov dword ptr [ebp - 0x50], 0x402 */ W32((u32)(r_ebp+0xffffffb0u), 0x402u);
    /* 005ad7b4: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005ad7ba: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ad7bd: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ad7c3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ad7c6: jmp 0x5ad7d8 */ goto L_005ad7d8;
L_005ad7c8:; BB(0x005ad7c8);
    /* 005ad7c8: mov dword ptr [ebp - 0x3c], 0x3e8 */ W32((u32)(r_ebp+0xffffffc4u), 0x3e8u);
    /* 005ad7cf: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ad7d5: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ad7d8:; BB(0x005ad7d8);
    /* 005ad7d8: jmp 0x5ae870 */ goto L_005ae870;
L_005ad7dd:; BB(0x005ad7dd);
    /* 005ad7dd: mov dword ptr [ebp - 0x3c], 0x7d3 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d3u);
    /* 005ad7e4: jmp 0x5ae870 */ goto L_005ae870;
L_005ad7e9:; BB(0x005ad7e9);
    /* 005ad7e9: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005ad7ee: mov ecx, dword ptr [eax + 0x5bc] */ r_ecx = R32((u32)(r_eax+0x5bcu));
    /* 005ad7f4: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 005ad7fa: cmp dword ptr [ebp - 0x150], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ad801: ja 0x5ad9a1 */ if ((!fC&&!fZ)) goto L_005ad9a1;
L_005ad807:; BB(0x005ad807);
    /* 005ad807: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005ad80d: jmp dword ptr [edx*4 + 0x5aea38] */ { u32 t = R32((u32)(r_edx*4+0x5aea38u)); switch (t) { case 0x5ae7d0u: goto L_005ae7d0; case 0x5ae6ffu: goto L_005ae6ff; case 0x5ae6f3u: goto L_005ae6f3; case 0x5ae6e7u: goto L_005ae6e7; case 0x5ae6dbu: goto L_005ae6db; case 0x5ae6cfu: goto L_005ae6cf; case 0x5ae221u: goto L_005ae221; case 0x5adfd0u: goto L_005adfd0; case 0x5ad9c1u: goto L_005ad9c1; case 0x5ad7ddu: goto L_005ad7dd; case 0x5ad6adu: goto L_005ad6ad; case 0x5ad7e9u: goto L_005ad7e9; case 0x5ad6a1u: goto L_005ad6a1; case 0x5ad814u: goto L_005ad814; case 0x5ad8edu: goto L_005ad8ed; case 0x5ad8f9u: goto L_005ad8f9; case 0x5ad905u: goto L_005ad905; case 0x5ad911u: goto L_005ad911; default: UNSUP(0x005ad80d, "jump table entry is not a known target"); } }
L_005ad814:; BB(0x005ad814);
    /* 005ad814: mov dword ptr [ebp - 0x3c], 0x7d5 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d5u);
    /* 005ad81b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad81e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad81f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad824u); f_005dcb00();
    /* 005ad824: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad827: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005ad82d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ad833: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad838u); f_0063aac0();
    /* 005ad838: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ad83a: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005ad83d: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad841: je 0x5ad86b */ if (fZ) goto L_005ad86b;
L_005ad843:; BB(0x005ad843);
    /* 005ad843: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ad849: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad84eu); f_0063aac0();
    /* 005ad84e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ad850: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005ad856: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad85d: je 0x5ad86b */ if (fZ) goto L_005ad86b;
L_005ad85f:; BB(0x005ad85f);
    /* 005ad85f: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 005ad869: jmp 0x5ad875 */ goto L_005ad875;
L_005ad86b:; BB(0x005ad86b);
    /* 005ad86b: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
L_005ad875:; BB(0x005ad875);
    /* 005ad875: movzx eax, byte ptr [ebp - 0x154] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeacu));
    /* 005ad87c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad87e: jne 0x5ad8e8 */ if (!fZ) goto L_005ad8e8;
L_005ad880:; BB(0x005ad880);
    /* 005ad880: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad882: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad885: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad886: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad88c: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ad891u); f_005b4f50();
    /* 005ad891: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad894: jle 0x5ad8b5 */ if ((fZ||fS!=fO)) goto L_005ad8b5;
L_005ad896:; BB(0x005ad896);
    /* 005ad896: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad898: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad89b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad89c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad8a2: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ad8a7u); f_005b4f50();
    /* 005ad8a7: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8aa: jge 0x5ad8b5 */ if ((fS==fO)) goto L_005ad8b5;
L_005ad8ac:; BB(0x005ad8ac);
    /* 005ad8ac: mov dword ptr [ebp - 0x3c], 0x7d6 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d6u);
    /* 005ad8b3: jmp 0x5ad8e8 */ goto L_005ad8e8;
L_005ad8b5:; BB(0x005ad8b5);
    /* 005ad8b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad8b7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad8bb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad8c1: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ad8c6u); f_005b4f50();
    /* 005ad8c6: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8c9: jle 0x5ad8e8 */ if ((fZ||fS!=fO)) goto L_005ad8e8;
L_005ad8cb:; BB(0x005ad8cb);
    /* 005ad8cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ad8cd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad8d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad8d1: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad8d7: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ad8dcu); f_005b4f50();
    /* 005ad8dc: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8df: jge 0x5ad8e8 */ if ((fS==fO)) goto L_005ad8e8;
L_005ad8e1:; BB(0x005ad8e1);
    /* 005ad8e1: mov dword ptr [ebp - 0x3c], 0x7d7 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d7u);
L_005ad8e8:; BB(0x005ad8e8);
    /* 005ad8e8: jmp 0x5ad9bc */ goto L_005ad9bc;
L_005ad8ed:; BB(0x005ad8ed);
    /* 005ad8ed: mov dword ptr [ebp - 0x3c], 0x7d0 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d0u);
    /* 005ad8f4: jmp 0x5ad9bc */ goto L_005ad9bc;
L_005ad8f9:; BB(0x005ad8f9);
    /* 005ad8f9: mov dword ptr [ebp - 0x3c], 0x7d2 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d2u);
    /* 005ad900: jmp 0x5ad9bc */ goto L_005ad9bc;
L_005ad905:; BB(0x005ad905);
    /* 005ad905: mov dword ptr [ebp - 0x3c], 0x7d4 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d4u);
    /* 005ad90c: jmp 0x5ad9bc */ goto L_005ad9bc;
L_005ad911:; BB(0x005ad911);
    /* 005ad911: mov dword ptr [ebp - 0x3c], 0x402 */ W32((u32)(r_ebp+0xffffffc4u), 0x402u);
    /* 005ad918: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ad91b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad91c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ad921u); f_005dcb00();
    /* 005ad921: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad924: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005ad92a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005ad930: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad935u); f_0063aac0();
    /* 005ad935: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ad937: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005ad93d: cmp dword ptr [ebp - 0x8c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad944: je 0x5ad96e */ if (fZ) goto L_005ad96e;
L_005ad946:; BB(0x005ad946);
    /* 005ad946: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005ad94c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad951u); f_0063aac0();
    /* 005ad951: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ad953: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005ad959: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad960: je 0x5ad96e */ if (fZ) goto L_005ad96e;
L_005ad962:; BB(0x005ad962);
    /* 005ad962: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 005ad96c: jmp 0x5ad978 */ goto L_005ad978;
L_005ad96e:; BB(0x005ad96e);
    /* 005ad96e: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
L_005ad978:; BB(0x005ad978);
    /* 005ad978: movzx edx, byte ptr [ebp - 0x158] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffea8u));
    /* 005ad97f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad981: jne 0x5ad99f */ if (!fZ) goto L_005ad99f;
L_005ad983:; BB(0x005ad983);
    /* 005ad983: mov dword ptr [ebp - 0x50], 0x3f6 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f6u);
    /* 005ad98a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad98c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ad98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad990: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad996: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ad99bu); f_005b73a0();
    /* 005ad99b: mov byte ptr [ebp - 0x45], 0 */ W8((u32)(r_ebp+0xffffffbbu), 0x0u);
L_005ad99f:; BB(0x005ad99f);
    /* 005ad99f: jmp 0x5ad9bc */ goto L_005ad9bc;
L_005ad9a1:; BB(0x005ad9a1);
    /* 005ad9a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005ad9a3: jne 0x5ad9bc */ if (!fZ) goto L_005ad9bc;
L_005ad9a5:; BB(0x005ad9a5);
    /* 005ad9a5: push 0x135 */ { u32 v = 0x135u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9aa: push 0x6cfe84 */ { u32 v = 0x6cfe84u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9af: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9b4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ad9b9u); f_005e9f20();
    /* 005ad9b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ad9bc:; BB(0x005ad9bc);
    /* 005ad9bc: jmp 0x5ae870 */ goto L_005ae870;
L_005ad9c1:; BB(0x005ad9c1);
    /* 005ad9c1: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005ad9c6: mov ecx, dword ptr [eax + 0x5bc] */ r_ecx = R32((u32)(r_eax+0x5bcu));
    /* 005ad9cc: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 005ad9d2: cmp dword ptr [ebp - 0x15c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffea4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad9d9: je 0x5ad9f2 */ if (fZ) goto L_005ad9f2;
L_005ad9db:; BB(0x005ad9db);
    /* 005ad9db: cmp dword ptr [ebp - 0x15c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffea4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad9e2: je 0x5add2e */ if (fZ) goto L_005add2e;
L_005ad9e8:; BB(0x005ad9e8);
    /* 005ad9e8: jmp 0x5adfcb */ goto L_005adfcb;
L_005ad9f2:; BB(0x005ad9f2);
    /* 005ad9f2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad9f8: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5ad9fdu); f_005b58a0();
    /* 005ad9fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada00: jne 0x5ada06 */ if (!fZ) goto L_005ada06;
L_005ada02:; BB(0x005ada02);
    /* 005ada02: mov byte ptr [ebp - 0x45], 0 */ W8((u32)(r_ebp+0xffffffbbu), 0x0u);
L_005ada06:; BB(0x005ada06);
    /* 005ada06: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ada08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ada0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ada0c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ada12: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5ada17u); f_005b3300();
    /* 005ada17: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ada1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada1c: je 0x5adae5 */ if (fZ) goto L_005adae5;
L_005ada22:; BB(0x005ada22);
    /* 005ada22: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ada24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ada27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ada28: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ada2e: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ada33u); f_005b73a0();
    /* 005ada33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ada36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ada37: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ada3cu); f_005dcb00();
    /* 005ada3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ada3f: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005ada45: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005ada4b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ada50u); f_0063aac0();
    /* 005ada50: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ada52: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005ada58: cmp dword ptr [ebp - 0x98], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada5f: je 0x5ada89 */ if (fZ) goto L_005ada89;
L_005ada61:; BB(0x005ada61);
    /* 005ada61: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005ada67: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ada6cu); f_0063aac0();
    /* 005ada6c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ada6e: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005ada74: cmp dword ptr [ebp - 0x9c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada7b: je 0x5ada89 */ if (fZ) goto L_005ada89;
L_005ada7d:; BB(0x005ada7d);
    /* 005ada7d: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 005ada87: jmp 0x5ada93 */ goto L_005ada93;
L_005ada89:; BB(0x005ada89);
    /* 005ada89: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
L_005ada93:; BB(0x005ada93);
    /* 005ada93: movzx edx, byte ptr [ebp - 0x160] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffea0u));
    /* 005ada9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada9c: jne 0x5adac0 */ if (!fZ) goto L_005adac0;
L_005ada9e:; BB(0x005ada9e);
    /* 005ada9e: mov dword ptr [ebp - 0x3c], 0x7d1 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d1u);
    /* 005adaa5: mov dword ptr [ebp - 0x50], 0x402 */ W32((u32)(r_ebp+0xffffffb0u), 0x402u);
    /* 005adaac: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005adab2: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adab5: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005adabb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adabe: jmp 0x5adae0 */ goto L_005adae0;
L_005adac0:; BB(0x005adac0);
    /* 005adac0: mov dword ptr [ebp - 0x3c], 0x3e8 */ W32((u32)(r_ebp+0xffffffc4u), 0x3e8u);
    /* 005adac7: mov dword ptr [ebp - 0x50], 0x40f */ W32((u32)(r_ebp+0xffffffb0u), 0x40fu);
    /* 005adace: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005adad4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adad7: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005adadd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005adae0:; BB(0x005adae0);
    /* 005adae0: jmp 0x5add29 */ goto L_005add29;
L_005adae5:; BB(0x005adae5);
    /* 005adae5: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adaeb: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5adaf0u); f_005b58a0();
    /* 005adaf0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adaf3: jne 0x5adafa */ if (!fZ) goto L_005adafa;
L_005adaf5:; BB(0x005adaf5);
    /* 005adaf5: jmp 0x5adfcb */ goto L_005adfcb;
L_005adafa:; BB(0x005adafa);
    /* 005adafa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adafc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adaff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adb00: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adb06: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adb0bu); f_005b4f50();
    /* 005adb0b: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adb0e: jne 0x5adbd7 */ if (!fZ) goto L_005adbd7;
L_005adb14:; BB(0x005adb14);
    /* 005adb14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005adb16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adb19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005adb1a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adb20: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5adb25u); f_005b73a0();
    /* 005adb25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adb28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adb29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5adb2eu); f_005dcb00();
    /* 005adb2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005adb31: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005adb37: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005adb3d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adb42u); f_0063aac0();
    /* 005adb42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005adb44: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005adb4a: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adb51: je 0x5adb7b */ if (fZ) goto L_005adb7b;
L_005adb53:; BB(0x005adb53);
    /* 005adb53: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005adb59: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adb5eu); f_0063aac0();
    /* 005adb5e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005adb60: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005adb66: cmp dword ptr [ebp - 0xa8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adb6d: je 0x5adb7b */ if (fZ) goto L_005adb7b;
L_005adb6f:; BB(0x005adb6f);
    /* 005adb6f: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 005adb79: jmp 0x5adb85 */ goto L_005adb85;
L_005adb7b:; BB(0x005adb7b);
    /* 005adb7b: mov dword ptr [ebp - 0x164], 1 */ W32((u32)(r_ebp+0xfffffe9cu), 0x1u);
L_005adb85:; BB(0x005adb85);
    /* 005adb85: movzx edx, byte ptr [ebp - 0x164] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe9cu));
    /* 005adb8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adb8e: jne 0x5adbb2 */ if (!fZ) goto L_005adbb2;
L_005adb90:; BB(0x005adb90);
    /* 005adb90: mov dword ptr [ebp - 0x3c], 0x404 */ W32((u32)(r_ebp+0xffffffc4u), 0x404u);
    /* 005adb97: mov dword ptr [ebp - 0x50], 0x3f4 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f4u);
    /* 005adb9e: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005adba4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adba7: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adbad: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adbb0: jmp 0x5adbd2 */ goto L_005adbd2;
L_005adbb2:; BB(0x005adbb2);
    /* 005adbb2: mov dword ptr [ebp - 0x3c], 0x3f0 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f0u);
    /* 005adbb9: mov dword ptr [ebp - 0x50], 0x7dc */ W32((u32)(r_ebp+0xffffffb0u), 0x7dcu);
    /* 005adbc0: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adbc6: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adbc9: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adbcf: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005adbd2:; BB(0x005adbd2);
    /* 005adbd2: jmp 0x5add29 */ goto L_005add29;
L_005adbd7:; BB(0x005adbd7);
    /* 005adbd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adbda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adbdb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5adbe0u); f_005dcb00();
    /* 005adbe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005adbe3: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005adbe9: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005adbef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adbf4u); f_0063aac0();
    /* 005adbf4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005adbf6: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005adbfc: cmp dword ptr [ebp - 0xb0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adc03: je 0x5adc2d */ if (fZ) goto L_005adc2d;
L_005adc05:; BB(0x005adc05);
    /* 005adc05: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005adc0b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adc10u); f_0063aac0();
    /* 005adc10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005adc12: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 005adc18: cmp dword ptr [ebp - 0xb4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adc1f: je 0x5adc2d */ if (fZ) goto L_005adc2d;
L_005adc21:; BB(0x005adc21);
    /* 005adc21: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 005adc2b: jmp 0x5adc37 */ goto L_005adc37;
L_005adc2d:; BB(0x005adc2d);
    /* 005adc2d: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
L_005adc37:; BB(0x005adc37);
    /* 005adc37: movzx eax, byte ptr [ebp - 0x168] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe98u));
    /* 005adc3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adc40: jne 0x5adca4 */ if (!fZ) goto L_005adca4;
L_005adc42:; BB(0x005adc42);
    /* 005adc42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adc44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adc47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005adc48: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adc4e: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adc53u); f_005b4f50();
    /* 005adc53: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adc56: jle 0x5adca4 */ if ((fZ||fS!=fO)) goto L_005adca4;
L_005adc58:; BB(0x005adc58);
    /* 005adc58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adc5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adc5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adc5e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adc64: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adc69u); f_005b4f50();
    /* 005adc69: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adc6c: jge 0x5adca4 */ if ((fS==fO)) goto L_005adca4;
L_005adc6e:; BB(0x005adc6e);
    /* 005adc6e: mov dword ptr [ebp - 0x3c], 0x402 */ W32((u32)(r_ebp+0xffffffc4u), 0x402u);
    /* 005adc75: mov dword ptr [ebp - 0x50], 0x3f6 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f6u);
    /* 005adc7c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adc82: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adc85: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adc8b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adc8e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005adc90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adc93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adc94: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adc9a: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5adc9fu); f_005b73a0();
    /* 005adc9f: jmp 0x5add29 */ goto L_005add29;
L_005adca4:; BB(0x005adca4);
    /* 005adca4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005adcaa: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adcb0: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adcb5u); f_005b4f50();
    /* 005adcb5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adcb8: jle 0x5add03 */ if ((fZ||fS!=fO)) goto L_005add03;
L_005adcba:; BB(0x005adcba);
    /* 005adcba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adcbc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adcbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adcc0: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adcc6: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adccbu); f_005b4f50();
    /* 005adccb: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adcce: jge 0x5add03 */ if ((fS==fO)) goto L_005add03;
L_005adcd0:; BB(0x005adcd0);
    /* 005adcd0: mov dword ptr [ebp - 0x3c], 0x7db */ W32((u32)(r_ebp+0xffffffc4u), 0x7dbu);
    /* 005adcd7: mov dword ptr [ebp - 0x50], 0x3e8 */ W32((u32)(r_ebp+0xffffffb0u), 0x3e8u);
    /* 005adcde: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005adce4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adce7: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005adced: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adcf0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005adcf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adcf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adcf6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adcfc: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5add01u); f_005b73a0();
    /* 005add01: jmp 0x5add29 */ goto L_005add29;
L_005add03:; BB(0x005add03);
    /* 005add03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005add05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005add08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005add09: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005add0f: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5add14u); f_005b5830();
    /* 005add14: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005add17: jle 0x5add29 */ if ((fZ||fS!=fO)) goto L_005add29;
L_005add19:; BB(0x005add19);
    /* 005add19: mov dword ptr [ebp - 0x3c], 0x7da */ W32((u32)(r_ebp+0xffffffc4u), 0x7dau);
    /* 005add20: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005add26: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005add29:; BB(0x005add29);
    /* 005add29: jmp 0x5adfcb */ goto L_005adfcb;
L_005add2e:; BB(0x005add2e);
    /* 005add2e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005add34: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5add39u); f_005b58a0();
    /* 005add39: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005add3c: jne 0x5add42 */ if (!fZ) goto L_005add42;
L_005add3e:; BB(0x005add3e);
    /* 005add3e: mov byte ptr [ebp - 0x45], 0 */ W8((u32)(r_ebp+0xffffffbbu), 0x0u);
L_005add42:; BB(0x005add42);
    /* 005add42: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005add44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005add47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005add48: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005add4e: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5add53u); f_005b3300();
    /* 005add53: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005add56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005add58: je 0x5ade01 */ if (fZ) goto L_005ade01;
L_005add5e:; BB(0x005add5e);
    /* 005add5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005add60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005add63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005add64: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005add6a: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5add6fu); f_005b73a0();
    /* 005add6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005add72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005add73: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5add78u); f_005dcb00();
    /* 005add78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005add7b: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005add81: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005add87: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5add8cu); f_0063aac0();
    /* 005add8c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005add8e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005add94: cmp dword ptr [ebp - 0xbc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005add9b: je 0x5addc5 */ if (fZ) goto L_005addc5;
L_005add9d:; BB(0x005add9d);
    /* 005add9d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005adda3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adda8u); f_0063aac0();
    /* 005adda8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005addaa: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005addb0: cmp dword ptr [ebp - 0xc0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005addb7: je 0x5addc5 */ if (fZ) goto L_005addc5;
L_005addb9:; BB(0x005addb9);
    /* 005addb9: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 005addc3: jmp 0x5addcf */ goto L_005addcf;
L_005addc5:; BB(0x005addc5);
    /* 005addc5: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
L_005addcf:; BB(0x005addcf);
    /* 005addcf: movzx edx, byte ptr [ebp - 0x16c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe94u));
    /* 005addd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005addd8: jne 0x5addec */ if (!fZ) goto L_005addec;
L_005addda:; BB(0x005addda);
    /* 005addda: mov dword ptr [ebp - 0x3c], 0x7d1 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d1u);
    /* 005adde1: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adde7: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005addea: jmp 0x5addfc */ goto L_005addfc;
L_005addec:; BB(0x005addec);
    /* 005addec: mov dword ptr [ebp - 0x3c], 0x3e8 */ W32((u32)(r_ebp+0xffffffc4u), 0x3e8u);
    /* 005addf3: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005addf9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005addfc:; BB(0x005addfc);
    /* 005addfc: jmp 0x5adfcb */ goto L_005adfcb;
L_005ade01:; BB(0x005ade01);
    /* 005ade01: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ade07: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5ade0cu); f_005b58a0();
    /* 005ade0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade0f: jne 0x5ade16 */ if (!fZ) goto L_005ade16;
L_005ade11:; BB(0x005ade11);
    /* 005ade11: jmp 0x5adfcb */ goto L_005adfcb;
L_005ade16:; BB(0x005ade16);
    /* 005ade16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ade18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ade1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ade1c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ade22: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ade27u); f_005b4f50();
    /* 005ade27: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade2a: jne 0x5adef3 */ if (!fZ) goto L_005adef3;
L_005ade30:; BB(0x005ade30);
    /* 005ade30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ade32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ade35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ade36: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ade3c: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ade41u); f_005b73a0();
    /* 005ade41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ade44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ade45: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ade4au); f_005dcb00();
    /* 005ade4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ade4d: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005ade53: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 005ade59: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ade5eu); f_0063aac0();
    /* 005ade5e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ade60: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005ade66: cmp dword ptr [ebp - 0xc8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade6d: je 0x5ade97 */ if (fZ) goto L_005ade97;
L_005ade6f:; BB(0x005ade6f);
    /* 005ade6f: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 005ade75: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ade7au); f_0063aac0();
    /* 005ade7a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ade7c: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005ade82: cmp dword ptr [ebp - 0xcc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade89: je 0x5ade97 */ if (fZ) goto L_005ade97;
L_005ade8b:; BB(0x005ade8b);
    /* 005ade8b: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 005ade95: jmp 0x5adea1 */ goto L_005adea1;
L_005ade97:; BB(0x005ade97);
    /* 005ade97: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
L_005adea1:; BB(0x005adea1);
    /* 005adea1: movzx edx, byte ptr [ebp - 0x170] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe90u));
    /* 005adea8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adeaa: jne 0x5adece */ if (!fZ) goto L_005adece;
L_005adeac:; BB(0x005adeac);
    /* 005adeac: mov dword ptr [ebp - 0x3c], 0x404 */ W32((u32)(r_ebp+0xffffffc4u), 0x404u);
    /* 005adeb3: mov dword ptr [ebp - 0x50], 0x3f4 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f4u);
    /* 005adeba: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005adec0: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adec3: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adec9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adecc: jmp 0x5adeee */ goto L_005adeee;
L_005adece:; BB(0x005adece);
    /* 005adece: mov dword ptr [ebp - 0x3c], 0x7d9 */ W32((u32)(r_ebp+0xffffffc4u), 0x7d9u);
    /* 005aded5: mov dword ptr [ebp - 0x50], 0x40d */ W32((u32)(r_ebp+0xffffffb0u), 0x40du);
    /* 005adedc: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005adee2: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adee5: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adeeb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005adeee:; BB(0x005adeee);
    /* 005adeee: jmp 0x5adfcb */ goto L_005adfcb;
L_005adef3:; BB(0x005adef3);
    /* 005adef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adef5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adef9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adeff: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5adf04u); f_005b4f50();
    /* 005adf04: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adf07: jge 0x5adfcb */ if ((fS==fO)) goto L_005adfcb;
L_005adf0d:; BB(0x005adf0d);
    /* 005adf0d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005adf0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adf12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005adf13: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adf19: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5adf1eu); f_005b73a0();
    /* 005adf1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adf21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adf22: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5adf27u); f_005dcb00();
    /* 005adf27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005adf2a: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005adf30: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005adf36: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adf3bu); f_0063aac0();
    /* 005adf3b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005adf3d: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005adf43: cmp dword ptr [ebp - 0xd4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adf4a: je 0x5adf74 */ if (fZ) goto L_005adf74;
L_005adf4c:; BB(0x005adf4c);
    /* 005adf4c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005adf52: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5adf57u); f_0063aac0();
    /* 005adf57: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005adf59: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 005adf5f: cmp dword ptr [ebp - 0xd8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adf66: je 0x5adf74 */ if (fZ) goto L_005adf74;
L_005adf68:; BB(0x005adf68);
    /* 005adf68: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 005adf72: jmp 0x5adf7e */ goto L_005adf7e;
L_005adf74:; BB(0x005adf74);
    /* 005adf74: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
L_005adf7e:; BB(0x005adf7e);
    /* 005adf7e: movzx edx, byte ptr [ebp - 0x174] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe8cu));
    /* 005adf85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adf87: jne 0x5adfab */ if (!fZ) goto L_005adfab;
L_005adf89:; BB(0x005adf89);
    /* 005adf89: mov dword ptr [ebp - 0x3c], 0x401 */ W32((u32)(r_ebp+0xffffffc4u), 0x401u);
    /* 005adf90: mov dword ptr [ebp - 0x50], 0x3f6 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f6u);
    /* 005adf97: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005adf9d: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adfa0: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adfa6: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005adfa9: jmp 0x5adfcb */ goto L_005adfcb;
L_005adfab:; BB(0x005adfab);
    /* 005adfab: mov dword ptr [ebp - 0x3c], 0x409 */ W32((u32)(r_ebp+0xffffffc4u), 0x409u);
    /* 005adfb2: mov dword ptr [ebp - 0x50], 0x40f */ W32((u32)(r_ebp+0xffffffb0u), 0x40fu);
    /* 005adfb9: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005adfbf: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005adfc2: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005adfc8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005adfcb:; BB(0x005adfcb);
    /* 005adfcb: jmp 0x5ae870 */ goto L_005ae870;
L_005adfd0:; BB(0x005adfd0);
    /* 005adfd0: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 005adfd7: jmp 0x5adfe2 */ goto L_005adfe2;
L_005adfd9:; BB(0x005adfd9);
    /* 005adfd9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005adfdc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005adfdf: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_005adfe2:; BB(0x005adfe2);
    /* 005adfe2: cmp dword ptr [ebp - 0x54], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adfe6: jle 0x5ae21c */ if ((fZ||fS!=fO)) goto L_005ae21c;
L_005adfec:; BB(0x005adfec);
    /* 005adfec: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005adfef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005adff0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005adff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adff4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005adffa: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5adfffu); f_005b5010();
    /* 005adfff: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae002: je 0x5ae217 */ if (fZ) goto L_005ae217;
L_005ae008:; BB(0x005ae008);
    /* 005ae008: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005ae00b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae00c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae00f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae010: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae016: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5ae01bu); f_005b5010();
    /* 005ae01b: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 005ae021: cmp dword ptr [ebp - 0x178], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae028: je 0x5ae122 */ if (fZ) goto L_005ae122;
L_005ae02e:; BB(0x005ae02e);
    /* 005ae02e: cmp dword ptr [ebp - 0x178], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe88u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae035: je 0x5ae041 */ if (fZ) goto L_005ae041;
L_005ae037:; BB(0x005ae037);
    /* 005ae037: jmp 0x5ae215 */ goto L_005ae215;
L_005ae041:; BB(0x005ae041);
    /* 005ae041: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae046: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae047: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae04d: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ae052u); f_005b73a0();
    /* 005ae052: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae055: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae056: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae05bu); f_005dcb00();
    /* 005ae05b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae05e: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005ae064: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005ae06a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae06fu); f_0063aac0();
    /* 005ae06f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae071: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 005ae077: cmp dword ptr [ebp - 0xe0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae07e: je 0x5ae0a8 */ if (fZ) goto L_005ae0a8;
L_005ae080:; BB(0x005ae080);
    /* 005ae080: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005ae086: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae08bu); f_0063aac0();
    /* 005ae08b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae08d: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005ae093: cmp dword ptr [ebp - 0xe4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae09a: je 0x5ae0a8 */ if (fZ) goto L_005ae0a8;
L_005ae09c:; BB(0x005ae09c);
    /* 005ae09c: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 005ae0a6: jmp 0x5ae0b2 */ goto L_005ae0b2;
L_005ae0a8:; BB(0x005ae0a8);
    /* 005ae0a8: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
L_005ae0b2:; BB(0x005ae0b2);
    /* 005ae0b2: movzx eax, byte ptr [ebp - 0x17c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe84u));
    /* 005ae0b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae0bb: jne 0x5ae0fd */ if (!fZ) goto L_005ae0fd;
L_005ae0bd:; BB(0x005ae0bd);
    /* 005ae0bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae0c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0c1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae0c6u); f_005dcb00();
    /* 005ae0c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae0c9: cmp dword ptr [eax + 0x4a8], 5 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae0d0: jle 0x5ae0db */ if ((fZ||fS!=fO)) goto L_005ae0db;
L_005ae0d2:; BB(0x005ae0d2);
    /* 005ae0d2: mov dword ptr [ebp - 0x3c], 0x400 */ W32((u32)(r_ebp+0xffffffc4u), 0x400u);
    /* 005ae0d9: jmp 0x5ae0e2 */ goto L_005ae0e2;
L_005ae0db:; BB(0x005ae0db);
    /* 005ae0db: mov dword ptr [ebp - 0x3c], 0x3fc */ W32((u32)(r_ebp+0xffffffc4u), 0x3fcu);
L_005ae0e2:; BB(0x005ae0e2);
    /* 005ae0e2: mov dword ptr [ebp - 0x50], 0x404 */ W32((u32)(r_ebp+0xffffffb0u), 0x404u);
    /* 005ae0e9: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 005ae0ef: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ae0f2: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae0f8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae0fb: jmp 0x5ae11d */ goto L_005ae11d;
L_005ae0fd:; BB(0x005ae0fd);
    /* 005ae0fd: mov dword ptr [ebp - 0x3c], 0x3f0 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f0u);
    /* 005ae104: mov dword ptr [ebp - 0x50], 0x40d */ W32((u32)(r_ebp+0xffffffb0u), 0x40du);
    /* 005ae10b: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005ae111: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ae114: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae11a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae11d:; BB(0x005ae11d);
    /* 005ae11d: jmp 0x5ae215 */ goto L_005ae215;
L_005ae122:; BB(0x005ae122);
    /* 005ae122: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae124: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae128: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae12e: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5ae133u); f_005b73a0();
    /* 005ae133: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae137: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae13cu); f_005dcb00();
    /* 005ae13c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae13f: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005ae145: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005ae14b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae150u); f_0063aac0();
    /* 005ae150: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae152: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 005ae158: cmp dword ptr [ebp - 0xec], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae15f: je 0x5ae189 */ if (fZ) goto L_005ae189;
L_005ae161:; BB(0x005ae161);
    /* 005ae161: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005ae167: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae16cu); f_0063aac0();
    /* 005ae16c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae16e: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 005ae174: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae17b: je 0x5ae189 */ if (fZ) goto L_005ae189;
L_005ae17d:; BB(0x005ae17d);
    /* 005ae17d: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
    /* 005ae187: jmp 0x5ae193 */ goto L_005ae193;
L_005ae189:; BB(0x005ae189);
    /* 005ae189: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
L_005ae193:; BB(0x005ae193);
    /* 005ae193: movzx eax, byte ptr [ebp - 0x180] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe80u));
    /* 005ae19a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae19c: jne 0x5ae1f5 */ if (!fZ) goto L_005ae1f5;
L_005ae19e:; BB(0x005ae19e);
    /* 005ae19e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae1a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1a2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae1a7u); f_005dcb00();
    /* 005ae1a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae1aa: cmp dword ptr [eax + 0x4a8], -5 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae1b1: jge 0x5ae1d3 */ if ((fS==fO)) goto L_005ae1d3;
L_005ae1b3:; BB(0x005ae1b3);
    /* 005ae1b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1b5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5ae1bau); f_0062fbf0();
    /* 005ae1ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae1bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae1bf: jne 0x5ae1ca */ if (!fZ) goto L_005ae1ca;
L_005ae1c1:; BB(0x005ae1c1);
    /* 005ae1c1: mov dword ptr [ebp - 0x3c], 0x3f1 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f1u);
    /* 005ae1c8: jmp 0x5ae1d1 */ goto L_005ae1d1;
L_005ae1ca:; BB(0x005ae1ca);
    /* 005ae1ca: mov dword ptr [ebp - 0x3c], 0x3ff */ W32((u32)(r_ebp+0xffffffc4u), 0x3ffu);
L_005ae1d1:; BB(0x005ae1d1);
    /* 005ae1d1: jmp 0x5ae1da */ goto L_005ae1da;
L_005ae1d3:; BB(0x005ae1d3);
    /* 005ae1d3: mov dword ptr [ebp - 0x3c], 0x402 */ W32((u32)(r_ebp+0xffffffc4u), 0x402u);
L_005ae1da:; BB(0x005ae1da);
    /* 005ae1da: mov dword ptr [ebp - 0x50], 0x3f6 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f6u);
    /* 005ae1e1: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005ae1e7: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ae1ea: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae1f0: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae1f3: jmp 0x5ae215 */ goto L_005ae215;
L_005ae1f5:; BB(0x005ae1f5);
    /* 005ae1f5: mov dword ptr [ebp - 0x3c], 0x3e8 */ W32((u32)(r_ebp+0xffffffc4u), 0x3e8u);
    /* 005ae1fc: mov dword ptr [ebp - 0x50], 0x40f */ W32((u32)(r_ebp+0xffffffb0u), 0x40fu);
    /* 005ae203: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 005ae209: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005ae20c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae212: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae215:; BB(0x005ae215);
    /* 005ae215: jmp 0x5ae21c */ goto L_005ae21c;
L_005ae217:; BB(0x005ae217);
    /* 005ae217: jmp 0x5adfd9 */ goto L_005adfd9;
L_005ae21c:; BB(0x005ae21c);
    /* 005ae21c: jmp 0x5ae870 */ goto L_005ae870;
L_005ae221:; BB(0x005ae221);
    /* 005ae221: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae227: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x5ae22cu); f_005db190();
    /* 005ae22c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ae22f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae231: je 0x5ae36d */ if (fZ) goto L_005ae36d;
L_005ae237:; BB(0x005ae237);
    /* 005ae237: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae23d: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5ae242u); f_005dac90();
    /* 005ae242: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae245: jne 0x5ae24c */ if (!fZ) goto L_005ae24c;
L_005ae247:; BB(0x005ae247);
    /* 005ae247: jmp 0x5ae870 */ goto L_005ae870;
L_005ae24c:; BB(0x005ae24c);
    /* 005ae24c: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae252: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5ae257u); f_005dac90();
    /* 005ae257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae258: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae25du); f_005dcb00();
    /* 005ae25d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae260: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 005ae266: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005ae26c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae271u); f_0063aac0();
    /* 005ae271: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ae273: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005ae279: cmp dword ptr [ebp - 0xf8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae280: je 0x5ae2aa */ if (fZ) goto L_005ae2aa;
L_005ae282:; BB(0x005ae282);
    /* 005ae282: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005ae288: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae28du); f_0063aac0();
    /* 005ae28d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae28f: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 005ae295: cmp dword ptr [ebp - 0xfc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae29c: je 0x5ae2aa */ if (fZ) goto L_005ae2aa;
L_005ae29e:; BB(0x005ae29e);
    /* 005ae29e: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
    /* 005ae2a8: jmp 0x5ae2b4 */ goto L_005ae2b4;
L_005ae2aa:; BB(0x005ae2aa);
    /* 005ae2aa: mov dword ptr [ebp - 0x184], 1 */ W32((u32)(r_ebp+0xfffffe7cu), 0x1u);
L_005ae2b4:; BB(0x005ae2b4);
    /* 005ae2b4: movzx edx, byte ptr [ebp - 0x184] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe7cu));
    /* 005ae2bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae2bd: je 0x5ae2cb */ if (fZ) goto L_005ae2cb;
L_005ae2bf:; BB(0x005ae2bf);
    /* 005ae2bf: mov dword ptr [ebp - 0x188], 0xffffffff */ W32((u32)(r_ebp+0xfffffe78u), 0xffffffffu);
    /* 005ae2c9: jmp 0x5ae2dc */ goto L_005ae2dc;
L_005ae2cb:; BB(0x005ae2cb);
    /* 005ae2cb: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae2d1: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5ae2d6u); f_005dac90();
    /* 005ae2d6: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
L_005ae2dc:; BB(0x005ae2dc);
    /* 005ae2dc: mov eax, dword ptr [ebp - 0x188] */ r_eax = R32((u32)(r_ebp+0xfffffe78u));
    /* 005ae2e2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ae2e5: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae2eb: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5ae2f0u); f_005dac90();
    /* 005ae2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae2f6u); f_005dcb00();
    /* 005ae2f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae2f9: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005ae2ff: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ae305: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae30au); f_0063aac0();
    /* 005ae30a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae30c: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005ae312: cmp dword ptr [ebp - 0x104], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae319: je 0x5ae343 */ if (fZ) goto L_005ae343;
L_005ae31b:; BB(0x005ae31b);
    /* 005ae31b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005ae321: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae326u); f_0063aac0();
    /* 005ae326: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae328: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005ae32e: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae335: je 0x5ae343 */ if (fZ) goto L_005ae343;
L_005ae337:; BB(0x005ae337);
    /* 005ae337: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 005ae341: jmp 0x5ae34d */ goto L_005ae34d;
L_005ae343:; BB(0x005ae343);
    /* 005ae343: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
L_005ae34d:; BB(0x005ae34d);
    /* 005ae34d: movzx eax, byte ptr [ebp - 0x18c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe74u));
    /* 005ae354: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005ae356: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005ae358: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ae35b: add eax, 0x3fd */ {  u32 a = r_eax; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ae360: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ae363: fld1  */ FPUSH(1.0);
    /* 005ae365: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae368: jmp 0x5ae870 */ goto L_005ae870;
L_005ae36d:; BB(0x005ae36d);
    /* 005ae36d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005ae36f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5ae374u); f_0062fbf0();
    /* 005ae374: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae377: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae37a: jge 0x5ae4f2 */ if ((fS==fO)) goto L_005ae4f2;
L_005ae380:; BB(0x005ae380);
    /* 005ae380: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae382: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5ae387u); f_0062fbf0();
    /* 005ae387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae38a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae38c: je 0x5ae442 */ if (fZ) goto L_005ae442;
L_005ae392:; BB(0x005ae392);
    /* 005ae392: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae398: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5ae39du); f_005dac90();
    /* 005ae39d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ae3a0: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae3a4: je 0x5ae43d */ if (fZ) goto L_005ae43d;
L_005ae3aa:; BB(0x005ae3aa);
    /* 005ae3aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae3ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae3ae: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae3b3u); f_005dcb00();
    /* 005ae3b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae3b6: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 005ae3bc: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ae3c2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae3c7u); f_0063aac0();
    /* 005ae3c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae3c9: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005ae3cf: cmp dword ptr [ebp - 0x110], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae3d6: je 0x5ae400 */ if (fZ) goto L_005ae400;
L_005ae3d8:; BB(0x005ae3d8);
    /* 005ae3d8: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ae3de: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae3e3u); f_0063aac0();
    /* 005ae3e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ae3e5: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005ae3eb: cmp dword ptr [ebp - 0x114], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae3f2: je 0x5ae400 */ if (fZ) goto L_005ae400;
L_005ae3f4:; BB(0x005ae3f4);
    /* 005ae3f4: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
    /* 005ae3fe: jmp 0x5ae40a */ goto L_005ae40a;
L_005ae400:; BB(0x005ae400);
    /* 005ae400: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
L_005ae40a:; BB(0x005ae40a);
    /* 005ae40a: movzx ecx, byte ptr [ebp - 0x190] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe70u));
    /* 005ae411: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae413: jne 0x5ae42d */ if (!fZ) goto L_005ae42d;
L_005ae415:; BB(0x005ae415);
    /* 005ae415: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae418: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005ae41b: mov dword ptr [ebp - 0x3c], 0x3f2 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f2u);
    /* 005ae422: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ae428: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae42b: jmp 0x5ae43d */ goto L_005ae43d;
L_005ae42d:; BB(0x005ae42d);
    /* 005ae42d: mov dword ptr [ebp - 0x3c], 0x40b */ W32((u32)(r_ebp+0xffffffc4u), 0x40bu);
    /* 005ae434: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ae43a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae43d:; BB(0x005ae43d);
    /* 005ae43d: jmp 0x5ae4ed */ goto L_005ae4ed;
L_005ae442:; BB(0x005ae442);
    /* 005ae442: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae448: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x5ae44du); f_005dada0();
    /* 005ae44d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ae450: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae454: je 0x5ae4ed */ if (fZ) goto L_005ae4ed;
L_005ae45a:; BB(0x005ae45a);
    /* 005ae45a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae45d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae45e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae463u); f_005dcb00();
    /* 005ae463: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae466: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005ae46c: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005ae472: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae477u); f_0063aac0();
    /* 005ae477: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae479: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 005ae47f: cmp dword ptr [ebp - 0x11c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae486: je 0x5ae4b0 */ if (fZ) goto L_005ae4b0;
L_005ae488:; BB(0x005ae488);
    /* 005ae488: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005ae48e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae493u); f_0063aac0();
    /* 005ae493: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae495: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005ae49b: cmp dword ptr [ebp - 0x120], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae4a2: je 0x5ae4b0 */ if (fZ) goto L_005ae4b0;
L_005ae4a4:; BB(0x005ae4a4);
    /* 005ae4a4: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 005ae4ae: jmp 0x5ae4ba */ goto L_005ae4ba;
L_005ae4b0:; BB(0x005ae4b0);
    /* 005ae4b0: mov dword ptr [ebp - 0x194], 1 */ W32((u32)(r_ebp+0xfffffe6cu), 0x1u);
L_005ae4ba:; BB(0x005ae4ba);
    /* 005ae4ba: movzx eax, byte ptr [ebp - 0x194] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe6cu));
    /* 005ae4c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae4c3: jne 0x5ae4dd */ if (!fZ) goto L_005ae4dd;
L_005ae4c5:; BB(0x005ae4c5);
    /* 005ae4c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae4c8: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005ae4cb: mov dword ptr [ebp - 0x3c], 0x3f3 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f3u);
    /* 005ae4d2: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ae4d8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae4db: jmp 0x5ae4ed */ goto L_005ae4ed;
L_005ae4dd:; BB(0x005ae4dd);
    /* 005ae4dd: mov dword ptr [ebp - 0x3c], 0x40c */ W32((u32)(r_ebp+0xffffffc4u), 0x40cu);
    /* 005ae4e4: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ae4ea: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae4ed:; BB(0x005ae4ed);
    /* 005ae4ed: jmp 0x5ae6ca */ goto L_005ae6ca;
L_005ae4f2:; BB(0x005ae4f2);
    /* 005ae4f2: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae4f8: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x5ae4fdu); f_005dada0();
    /* 005ae4fd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ae500: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae504: je 0x5ae5cd */ if (fZ) goto L_005ae5cd;
L_005ae50a:; BB(0x005ae50a);
    /* 005ae50a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae50d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae50e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae513u); f_005dcb00();
    /* 005ae513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae516: mov ecx, eax */ r_ecx = r_eax;
    /* 005ae518: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ae51du); f_005d5a50();
    /* 005ae51d: mov esi, eax */ r_esi = r_eax;
    /* 005ae51f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae525: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5ae52au); f_005da880();
    /* 005ae52a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ae52b: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005ae530: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005ae530, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ae530, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ae532: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae534: jge 0x5ae5cd */ if ((fS==fO)) goto L_005ae5cd;
L_005ae53a:; BB(0x005ae53a);
    /* 005ae53a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae53d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae53e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae543u); f_005dcb00();
    /* 005ae543: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae546: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 005ae54c: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005ae552: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae557u); f_0063aac0();
    /* 005ae557: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ae559: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 005ae55f: cmp dword ptr [ebp - 0x128], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae566: je 0x5ae590 */ if (fZ) goto L_005ae590;
L_005ae568:; BB(0x005ae568);
    /* 005ae568: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005ae56e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae573u); f_0063aac0();
    /* 005ae573: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae575: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 005ae57b: cmp dword ptr [ebp - 0x12c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae582: je 0x5ae590 */ if (fZ) goto L_005ae590;
L_005ae584:; BB(0x005ae584);
    /* 005ae584: mov dword ptr [ebp - 0x198], 0 */ W32((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 005ae58e: jmp 0x5ae59a */ goto L_005ae59a;
L_005ae590:; BB(0x005ae590);
    /* 005ae590: mov dword ptr [ebp - 0x198], 1 */ W32((u32)(r_ebp+0xfffffe68u), 0x1u);
L_005ae59a:; BB(0x005ae59a);
    /* 005ae59a: movzx edx, byte ptr [ebp - 0x198] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe68u));
    /* 005ae5a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae5a3: jne 0x5ae5bd */ if (!fZ) goto L_005ae5bd;
L_005ae5a5:; BB(0x005ae5a5);
    /* 005ae5a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae5a8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ae5ab: mov dword ptr [ebp - 0x3c], 0x3f7 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f7u);
    /* 005ae5b2: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae5b8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae5bb: jmp 0x5ae5cd */ goto L_005ae5cd;
L_005ae5bd:; BB(0x005ae5bd);
    /* 005ae5bd: mov dword ptr [ebp - 0x3c], 0x410 */ W32((u32)(r_ebp+0xffffffc4u), 0x410u);
    /* 005ae5c4: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005ae5ca: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae5cd:; BB(0x005ae5cd);
    /* 005ae5cd: cmp dword ptr [ebp - 0x3c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae5d1: jne 0x5ae6ca */ if (!fZ) goto L_005ae6ca;
L_005ae5d7:; BB(0x005ae5d7);
    /* 005ae5d7: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005ae5de: jmp 0x5ae5e9 */ goto L_005ae5e9;
L_005ae5e0:; BB(0x005ae5e0);
    /* 005ae5e0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ae5e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae5e6: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_005ae5e9:; BB(0x005ae5e9);
    /* 005ae5e9: cmp dword ptr [ebp - 0x58], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae5ed: jge 0x5ae6ca */ if ((fS==fO)) goto L_005ae6ca;
L_005ae5f3:; BB(0x005ae5f3);
    /* 005ae5f3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ae5f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae5f7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae5fcu); f_005dcb00();
    /* 005ae5fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae5ff: mov ecx, eax */ r_ecx = r_eax;
    /* 005ae601: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ae606u); f_005d5a50();
    /* 005ae606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae608: jne 0x5ae6c5 */ if (!fZ) goto L_005ae6c5;
L_005ae60e:; BB(0x005ae60e);
    /* 005ae60e: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005ae614: add eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ae617: movzx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)R8((u32)(r_eax+0x14u));
    /* 005ae61b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae61d: jne 0x5ae6c5 */ if (!fZ) goto L_005ae6c5;
L_005ae623:; BB(0x005ae623);
    /* 005ae623: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005ae629: add edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ae62c: mov byte ptr [edx + 0x14], 1 */ W8((u32)(r_edx+0x14u), 0x1u);
    /* 005ae630: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ae633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae634: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ae639u); f_005dcb00();
    /* 005ae639: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae63c: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005ae642: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005ae648: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae64du); f_0063aac0();
    /* 005ae64d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ae64f: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 005ae655: cmp dword ptr [ebp - 0x134], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae65c: je 0x5ae686 */ if (fZ) goto L_005ae686;
L_005ae65e:; BB(0x005ae65e);
    /* 005ae65e: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005ae664: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ae669u); f_0063aac0();
    /* 005ae669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae66b: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 005ae671: cmp dword ptr [ebp - 0x138], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae678: je 0x5ae686 */ if (fZ) goto L_005ae686;
L_005ae67a:; BB(0x005ae67a);
    /* 005ae67a: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 005ae684: jmp 0x5ae690 */ goto L_005ae690;
L_005ae686:; BB(0x005ae686);
    /* 005ae686: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
L_005ae690:; BB(0x005ae690);
    /* 005ae690: movzx eax, byte ptr [ebp - 0x19c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe64u));
    /* 005ae697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae699: jne 0x5ae6b3 */ if (!fZ) goto L_005ae6b3;
L_005ae69b:; BB(0x005ae69b);
    /* 005ae69b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ae69e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005ae6a1: mov dword ptr [ebp - 0x3c], 0x3f5 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f5u);
    /* 005ae6a8: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005ae6ae: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005ae6b1: jmp 0x5ae6c3 */ goto L_005ae6c3;
L_005ae6b3:; BB(0x005ae6b3);
    /* 005ae6b3: mov dword ptr [ebp - 0x3c], 0x40e */ W32((u32)(r_ebp+0xffffffc4u), 0x40eu);
    /* 005ae6ba: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 005ae6c0: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_005ae6c3:; BB(0x005ae6c3);
    /* 005ae6c3: jmp 0x5ae6ca */ goto L_005ae6ca;
L_005ae6c5:; BB(0x005ae6c5);
    /* 005ae6c5: jmp 0x5ae5e0 */ goto L_005ae5e0;
L_005ae6ca:; BB(0x005ae6ca);
    /* 005ae6ca: jmp 0x5ae870 */ goto L_005ae870;
L_005ae6cf:; BB(0x005ae6cf);
    /* 005ae6cf: mov dword ptr [ebp - 0x40], 0xcb52 */ W32((u32)(r_ebp+0xffffffc0u), 0xcb52u);
    /* 005ae6d6: jmp 0x5ae870 */ goto L_005ae870;
L_005ae6db:; BB(0x005ae6db);
    /* 005ae6db: mov dword ptr [ebp - 0x40], 0xcbb6 */ W32((u32)(r_ebp+0xffffffc0u), 0xcbb6u);
    /* 005ae6e2: jmp 0x5ae870 */ goto L_005ae870;
L_005ae6e7:; BB(0x005ae6e7);
    /* 005ae6e7: mov dword ptr [ebp - 0x40], 0xcbe8 */ W32((u32)(r_ebp+0xffffffc0u), 0xcbe8u);
    /* 005ae6ee: jmp 0x5ae870 */ goto L_005ae870;
L_005ae6f3:; BB(0x005ae6f3);
    /* 005ae6f3: mov dword ptr [ebp - 0x40], 0xcb85 */ W32((u32)(r_ebp+0xffffffc0u), 0xcb85u);
    /* 005ae6fa: jmp 0x5ae870 */ goto L_005ae870;
L_005ae6ff:; BB(0x005ae6ff);
    /* 005ae6ff: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005ae706: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae70c: call 0x5b7d50 */ r_esp -= 4; W32(r_esp, 0x5ae711u); f_005b7d50();
    /* 005ae711: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ae714: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae716: je 0x5ae7cb */ if (fZ) goto L_005ae7cb;
L_005ae71c:; BB(0x005ae71c);
    /* 005ae71c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae722: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5ae727u); f_005b58a0();
    /* 005ae727: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae72a: jg 0x5ae740 */ if ((!fZ&&fS==fO)) goto L_005ae740;
L_005ae72c:; BB(0x005ae72c);
    /* 005ae72c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae732: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ae737u); f_005b4f00();
    /* 005ae737: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae73a: jne 0x5ae7cb */ if (!fZ) goto L_005ae7cb;
L_005ae740:; BB(0x005ae740);
    /* 005ae740: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae744: jne 0x5ae752 */ if (!fZ) goto L_005ae752;
L_005ae746:; BB(0x005ae746);
    /* 005ae746: mov dword ptr [ebp - 0x1a0], 4 */ W32((u32)(r_ebp+0xfffffe60u), 0x4u);
    /* 005ae750: jmp 0x5ae75b */ goto L_005ae75b;
L_005ae752:; BB(0x005ae752);
    /* 005ae752: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae755: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
L_005ae75b:; BB(0x005ae75b);
    /* 005ae75b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae75d: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005ae763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae764: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae76a: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ae76fu); f_005b4f50();
    /* 005ae76f: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005ae772: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae776: jne 0x5ae784 */ if (!fZ) goto L_005ae784;
L_005ae778:; BB(0x005ae778);
    /* 005ae778: mov dword ptr [ebp - 0x1a4], 4 */ W32((u32)(r_ebp+0xfffffe5cu), 0x4u);
    /* 005ae782: jmp 0x5ae78d */ goto L_005ae78d;
L_005ae784:; BB(0x005ae784);
    /* 005ae784: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae787: mov dword ptr [ebp - 0x1a4], edx */ W32((u32)(r_ebp+0xfffffe5cu), r_edx);
L_005ae78d:; BB(0x005ae78d);
    /* 005ae78d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae78f: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005ae795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae796: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae79c: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5ae7a1u); f_005b5260();
    /* 005ae7a1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005ae7a4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ae7a7: cmp ecx, dword ptr [ebp - 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae7aa: je 0x5ae7c0 */ if (fZ) goto L_005ae7c0;
L_005ae7ac:; BB(0x005ae7ac);
    /* 005ae7ac: cmp dword ptr [ebp - 0x60], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae7b0: jg 0x5ae7c0 */ if ((!fZ&&fS==fO)) goto L_005ae7c0;
L_005ae7b2:; BB(0x005ae7b2);
    /* 005ae7b2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ae7b5: add edx, 0xcb31 */ {  u32 a = r_edx; u32 b = 0xcb31u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ae7bb: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ae7be: jmp 0x5ae7cb */ goto L_005ae7cb;
L_005ae7c0:; BB(0x005ae7c0);
    /* 005ae7c0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ae7c3: add eax, 0xcb1d */ {  u32 a = r_eax; u32 b = 0xcb1du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ae7c8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_005ae7cb:; BB(0x005ae7cb);
    /* 005ae7cb: jmp 0x5ae870 */ goto L_005ae870;
L_005ae7d0:; BB(0x005ae7d0);
    /* 005ae7d0: mov dword ptr [ebp - 0x64], 3 */ W32((u32)(r_ebp+0xffffff9cu), 0x3u);
    /* 005ae7d7: jmp 0x5ae7e2 */ goto L_005ae7e2;
L_005ae7d9:; BB(0x005ae7d9);
    /* 005ae7d9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ae7dc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae7df: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
L_005ae7e2:; BB(0x005ae7e2);
    /* 005ae7e2: cmp dword ptr [ebp - 0x64], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae7e6: jle 0x5ae853 */ if ((fZ||fS!=fO)) goto L_005ae853;
L_005ae7e8:; BB(0x005ae7e8);
    /* 005ae7e8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ae7eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae7ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7f0: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae7f6: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5ae7fbu); f_005b5010();
    /* 005ae7fb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae7fe: je 0x5ae851 */ if (fZ) goto L_005ae851;
L_005ae800:; BB(0x005ae800);
    /* 005ae800: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ae803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae804: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ae807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae808: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae80e: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5ae813u); f_005b5010();
    /* 005ae813: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 005ae819: cmp dword ptr [ebp - 0x1a8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae820: je 0x5ae848 */ if (fZ) goto L_005ae848;
L_005ae822:; BB(0x005ae822);
    /* 005ae822: cmp dword ptr [ebp - 0x1a8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae829: je 0x5ae83f */ if (fZ) goto L_005ae83f;
L_005ae82b:; BB(0x005ae82b);
    /* 005ae82b: cmp dword ptr [ebp - 0x1a8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae832: je 0x5ae836 */ if (fZ) goto L_005ae836;
L_005ae834:; BB(0x005ae834);
    /* 005ae834: jmp 0x5ae84f */ goto L_005ae84f;
L_005ae836:; BB(0x005ae836);
    /* 005ae836: mov dword ptr [ebp - 0x40], 0xcbcf */ W32((u32)(r_ebp+0xffffffc0u), 0xcbcfu);
    /* 005ae83d: jmp 0x5ae84f */ goto L_005ae84f;
L_005ae83f:; BB(0x005ae83f);
    /* 005ae83f: mov dword ptr [ebp - 0x40], 0xcc01 */ W32((u32)(r_ebp+0xffffffc0u), 0xcc01u);
    /* 005ae846: jmp 0x5ae84f */ goto L_005ae84f;
L_005ae848:; BB(0x005ae848);
    /* 005ae848: mov dword ptr [ebp - 0x40], 0xcb6b */ W32((u32)(r_ebp+0xffffffc0u), 0xcb6bu);
L_005ae84f:; BB(0x005ae84f);
    /* 005ae84f: jmp 0x5ae853 */ goto L_005ae853;
L_005ae851:; BB(0x005ae851);
    /* 005ae851: jmp 0x5ae7d9 */ goto L_005ae7d9;
L_005ae853:; BB(0x005ae853);
    /* 005ae853: jmp 0x5ae870 */ goto L_005ae870;
L_005ae855:; BB(0x005ae855);
    /* 005ae855: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ae857: jne 0x5ae870 */ if (!fZ) goto L_005ae870;
L_005ae859:; BB(0x005ae859);
    /* 005ae859: push 0x2a5 */ { u32 v = 0x2a5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae85e: push 0x6cfe84 */ { u32 v = 0x6cfe84u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae863: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae868: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ae86du); f_005e9f20();
    /* 005ae86d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ae870:; BB(0x005ae870);
    /* 005ae870: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae872: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae874: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae87a: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5ae87fu); f_005b7310();
    /* 005ae87f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae881: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005ae887: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ae88a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005ae890: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ae893: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae895: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ae898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ae89au); call_ind(t); }
    /* 005ae89a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae89e: jne 0x5ae8ac */ if (!fZ) goto L_005ae8ac;
L_005ae8a0:; BB(0x005ae8a0);
    /* 005ae8a0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005ae8a6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ae8a9: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005ae8ac:; BB(0x005ae8ac);
    /* 005ae8ac: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae8b0: jne 0x5ae92e */ if (!fZ) goto L_005ae92e;
L_005ae8b2:; BB(0x005ae8b2);
    /* 005ae8b2: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae8b6: jne 0x5ae8cc */ if (!fZ) goto L_005ae8cc;
L_005ae8b8:; BB(0x005ae8b8);
    /* 005ae8b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ae8bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae8bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ae8c2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ae8c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ae8c7u); call_ind(t); }
    /* 005ae8c7: jmp 0x5ae9fd */ goto L_005ae9fd;
L_005ae8cc:; BB(0x005ae8cc);
    /* 005ae8cc: cmp dword ptr [ebp - 0x40], 0xcbe8 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xcbe8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae8d3: je 0x5ae8de */ if (fZ) goto L_005ae8de;
L_005ae8d5:; BB(0x005ae8d5);
    /* 005ae8d5: cmp dword ptr [ebp - 0x40], 0xcb85 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xcb85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae8dc: jne 0x5ae8ee */ if (!fZ) goto L_005ae8ee;
L_005ae8de:; BB(0x005ae8de);
    /* 005ae8de: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ae8e4: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005ae8e7: mov byte ptr [edx + 0x190], 1 */ W8((u32)(r_edx+0x190u), 0x1u);
L_005ae8ee:; BB(0x005ae8ee);
    /* 005ae8ee: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae8f2: jne 0x5ae90e */ if (!fZ) goto L_005ae90e;
L_005ae8f4:; BB(0x005ae8f4);
    /* 005ae8f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ae8f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ae8fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8fe: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ae904: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005ae907: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x5ae90cu); f_005cd7c0();
    /* 005ae90c: jmp 0x5ae929 */ goto L_005ae929;
L_005ae90e:; BB(0x005ae90e);
    /* 005ae90e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae910: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ae913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae914: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ae917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae918: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ae91b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae91c: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ae921: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005ae924: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x5ae929u); f_005cd700();
L_005ae929:; BB(0x005ae929);
    /* 005ae929: jmp 0x5ae9fd */ goto L_005ae9fd;
L_005ae92e:; BB(0x005ae92e);
    /* 005ae92e: cmp dword ptr [ebp - 0x3c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae932: jne 0x5ae948 */ if (!fZ) goto L_005ae948;
L_005ae934:; BB(0x005ae934);
    /* 005ae934: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae936: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ae939: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ae93b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ae93e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ae941: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ae943u); call_ind(t); }
    /* 005ae943: jmp 0x5ae9fd */ goto L_005ae9fd;
L_005ae948:; BB(0x005ae948);
    /* 005ae948: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae94c: je 0x5ae959 */ if (fZ) goto L_005ae959;
L_005ae94e:; BB(0x005ae94e);
    /* 005ae94e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ae951: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005ae957: jmp 0x5ae978 */ goto L_005ae978;
L_005ae959:; BB(0x005ae959);
    /* 005ae959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae95b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae961: call 0x5b5c90 */ r_esp -= 4; W32(r_esp, 0x5ae966u); f_005b5c90();
    /* 005ae966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae967: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ae96d: call 0x5b5cd0 */ r_esp -= 4; W32(r_esp, 0x5ae972u); f_005b5cd0();
    /* 005ae972: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
L_005ae978:; BB(0x005ae978);
    /* 005ae978: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005ae97e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005ae981: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ae984: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ae987: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ae98a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005ae98d: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 005ae990: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 005ae993: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005ae996: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005ae999: cmp dword ptr [ebp - 0x38], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae99d: jne 0x5ae9be */ if (!fZ) goto L_005ae9be;
L_005ae99f:; BB(0x005ae99f);
    /* 005ae99f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9a3: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005ae9a9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ae9ac: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae9b2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ae9b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ae9b7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ae9ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ae9bcu); call_ind(t); }
    /* 005ae9bc: jmp 0x5ae9fd */ goto L_005ae9fd;
L_005ae9be:; BB(0x005ae9be);
    /* 005ae9be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9c0: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ae9c6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ae9c9: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ae9ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ae9d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ae9d3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ae9d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ae9d8u); call_ind(t); }
    /* 005ae9d8: mov cl, byte ptr [ebp - 0x45] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffbbu))) & 0xffu);
    /* 005ae9db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9dc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ae9e4: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5ae9e9u); f_00637810();
    /* 005ae9e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ae9ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9ee: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005ae9f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9f2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ae9f8: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x5ae9fdu); f_00639390();
L_005ae9fd:; BB(0x005ae9fd);
    /* 005ae9fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ae9fe: mov esp, ebp */ r_esp = r_ebp;
    /* 005aea00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aea01: ret 4 */ FN_RET(0x005ad620); r_esp += 8; return;
}

