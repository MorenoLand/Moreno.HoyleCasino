#include "protos.h"

void f_006695e0(void) /* SyncViewerRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006695e0);
    /* 006695e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006695e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006695e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006695e5: push 0x6acc68 */ { u32 v = 0x6acc68u; r_esp -= 4; W32(r_esp, v); }
    /* 006695ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006695f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006695f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006695f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006695f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006695f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006695fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006695fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00669603: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00669606: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00669609: call 0x64cbe0 */ r_esp -= 4; W32(r_esp, 0x66960eu); f_0064cbe0();
    /* 0066960e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669615: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00669618: mov dword ptr [eax], 0x6dfd74 */ W32((u32)(r_eax), 0x6dfd74u);
    /* 0066961e: push 0x231864 */ { u32 v = 0x231864u; r_esp -= 4; W32(r_esp, v); }
    /* 00669623: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00669626: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x66962bu); f_005f1ad0();
    /* 0066962b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669632: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00669635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00669638: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066963f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669640: mov esp, ebp */ r_esp = r_ebp;
    /* 00669642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669643: ret  */ FN_RET(0x006695e0); r_esp += 4; return;
}

void f_00669650(void) /* SyncViewerRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00669650);
    /* 00669650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669651: mov ebp, esp */ r_ebp = r_esp;
    /* 00669653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669655: push 0x6acc8b */ { u32 v = 0x6acc8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066965a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00669660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669661: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669664: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00669669: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066966b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066966c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066966f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00669675: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00669678: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066967b: mov dword ptr [eax], 0x6dfd74 */ W32((u32)(r_eax), 0x6dfd74u);
    /* 00669681: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669688: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066968b: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00669691: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00669694: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00669697: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066969a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066969e: je 0x6696b3 */ if (fZ) goto L_006696b3;
L_006696a0:; BB(0x006696a0);
    /* 006696a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006696a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006696a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006696a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006696aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006696ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6696aeu); call_ind(t); }
    /* 006696ae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006696b1: jmp 0x6696ba */ goto L_006696ba;
L_006696b3:; BB(0x006696b3);
    /* 006696b3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006696ba:; BB(0x006696ba);
    /* 006696ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006696c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006696c4: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x6696c9u); f_0064cc80();
    /* 006696c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006696cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006696d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006696d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006696d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006696d7: ret  */ FN_RET(0x00669650); r_esp += 4; return;
}

void f_006696e0(void) /* SyncViewerRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006696e0);
    /* 006696e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006696e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006696e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006696e5: push 0x6accc7 */ { u32 v = 0x6accc7u; r_esp -= 4; W32(r_esp, v); }
    /* 006696ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006696f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006696f1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006696f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006696f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006696fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006696fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006696ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00669705: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00669708: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066970b: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x669710u); f_0064ce60();
    /* 00669710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669712: push 0x6e0238 */ { u32 v = 0x6e0238u; r_esp -= 4; W32(r_esp, v); }
    /* 00669717: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0066971c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0066971f: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x669724u); f_00607960();
    /* 00669724: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00669727: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 0066972c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x669731u); f_00686d82();
    /* 00669731: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669734: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00669737: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066973e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669742: je 0x669751 */ if (fZ) goto L_00669751;
L_00669744:; BB(0x00669744);
    /* 00669744: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00669747: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x66974cu); f_0063a0c0();
    /* 0066974c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066974f: jmp 0x669758 */ goto L_00669758;
L_00669751:; BB(0x00669751);
    /* 00669751: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00669758:; BB(0x00669758);
    /* 00669758: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066975b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066975e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669765: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669768: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066976b: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00669771: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669773: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669775: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669777: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669779: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066977c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066977d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669783: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00669785: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066978b: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 00669791: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x669793u); call_ind(t); }
    /* 00669793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669794: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669797: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066979d: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x6697a2u); f_0063a8d0();
    /* 006697a2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006697a5: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 006697ab: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006697ae: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006697b1: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 006697b3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006697b5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006697b8: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x6697bdu); f_00646150();
    /* 006697bd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006697c0: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 006697c6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006697c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006697cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006697ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006697d1: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x6697d6u); f_00646380();
    /* 006697d6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006697d9: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 006697df: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006697e2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006697e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006697e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006697e9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006697ec: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x6697f1u); f_006464d0();
    /* 006697f1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006697f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6697fbu); f_00686d82();
    /* 006697fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006697fe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00669801: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00669808: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066980c: je 0x669833 */ if (fZ) goto L_00669833;
L_0066980e:; BB(0x0066980e);
    /* 0066980e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00669811: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x669816u); f_006280d0();
    /* 00669816: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00669819: mov dword ptr [ecx], 0x6e013c */ W32((u32)(r_ecx), 0x6e013cu);
    /* 0066981f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00669822: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669825: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 0066982b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066982e: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00669831: jmp 0x66983a */ goto L_0066983a;
L_00669833:; BB(0x00669833);
    /* 00669833: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0066983a:; BB(0x0066983a);
    /* 0066983a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066983d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00669840: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669847: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669849: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066984e: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669853: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669858: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066985a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066985c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066985e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00669860: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669862: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00669867: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00669869: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066986b: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00669870: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669872: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00669874: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669879: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 0066987e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00669880: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669885: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0066988a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066988c: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 00669891: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00669896: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 0066989b: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 006698a0: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006698a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006698a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006698a9: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006698ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006698b0: push 0x325b8d */ { u32 v = 0x325b8du; r_esp -= 4; W32(r_esp, v); }
    /* 006698b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006698b7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006698ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006698bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006698c1: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006698c4: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x6698c9u); f_005fac90();
    /* 006698c9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006698cc: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 006698cf: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006698d4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6698d9u); f_00686d82();
    /* 006698d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006698dc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006698df: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006698e6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006698ea: je 0x669911 */ if (fZ) goto L_00669911;
L_006698ec:; BB(0x006698ec);
    /* 006698ec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006698ef: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x6698f4u); f_006280d0();
    /* 006698f4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006698f7: mov dword ptr [eax], 0x6e003c */ W32((u32)(r_eax), 0x6e003cu);
    /* 006698fd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00669900: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669903: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00669909: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066990c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0066990f: jmp 0x669918 */ goto L_00669918;
L_00669911:; BB(0x00669911);
    /* 00669911: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00669918:; BB(0x00669918);
    /* 00669918: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066991b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066991e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00669925: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669927: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066992c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669931: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669936: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669938: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066993a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066993c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066993e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669940: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00669945: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00669947: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00669949: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 0066994e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669950: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00669952: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669957: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 0066995c: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0066995e: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669963: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00669968: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066996a: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 0066996f: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00669974: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00669979: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 0066997e: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00669983: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669985: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669987: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066998c: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 00669991: push 0x325b8d */ { u32 v = 0x325b8du; r_esp -= 4; W32(r_esp, v); }
    /* 00669996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669998: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066999b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066999c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006699a1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006699a4: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x6699a9u); f_005fac90();
    /* 006699a9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006699ac: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 006699af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699b7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006699b9: push 0x6e002c */ { u32 v = 0x6e002cu; r_esp -= 4; W32(r_esp, v); }
    /* 006699be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006699c0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006699c2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006699c4: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006699c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699cd: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006699d3: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006699d6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6699dbu); f_005f9de0();
    /* 006699db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006699e3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006699e5: push 0x6e0024 */ { u32 v = 0x6e0024u; r_esp -= 4; W32(r_esp, v); }
    /* 006699ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006699ec: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699f1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006699f3: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006699f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006699fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006699fc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669a01: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00669a04: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x669a09u); f_005f9de0();
    /* 00669a09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a0d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a11: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a13: push 0x6e001c */ { u32 v = 0x6e001cu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a1a: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a1f: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a24: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a2d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669a33: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00669a36: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x669a3bu); f_005f9de0();
    /* 00669a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a3d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a41: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a43: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a45: push 0x6e0024 */ { u32 v = 0x6e0024u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a4a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00669a4c: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a51: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a56: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a5b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a5f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669a65: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669a68: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x669a6du); f_005f9de0();
    /* 00669a6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a77: push 0x6e0014 */ { u32 v = 0x6e0014u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a7c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00669a7e: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a83: push 0x1b5 */ { u32 v = 0x1b5u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a88: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00669a8d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669a91: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669a96: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00669a99: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x669a9eu); f_005f9de0();
    /* 00669a9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669aa0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669aa2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669aa4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669aa6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669aa8: push 0x6e001c */ { u32 v = 0x6e001cu; r_esp -= 4; W32(r_esp, v); }
    /* 00669aad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00669aaf: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00669ab4: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 00669ab9: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00669abe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ac0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ac2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669ac8: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00669acb: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x669ad0u); f_005f9de0();
    /* 00669ad0: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ad5: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ada: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669adf: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ae4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ae9: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669aee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669af0: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00669af2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669af4: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00669af6: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00669af8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669afa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669afc: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669b02: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669b05: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x669b0au); f_005fa880();
    /* 00669b0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b0c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b0e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669b10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b12: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b14: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b16: push 0x6e000c */ { u32 v = 0x6e000cu; r_esp -= 4; W32(r_esp, v); }
    /* 00669b1b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b1d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b1f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b21: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00669b26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b28: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b2e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669b33: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00669b36: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x669b3bu); f_005f9ff0();
    /* 00669b3b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669b3e: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00669b41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b43: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669b47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b4b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b4d: push 0x6e0004 */ { u32 v = 0x6e0004u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b52: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b54: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b56: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b58: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00669b5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b5f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b65: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669b6b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669b6e: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x669b73u); f_005f9ff0();
    /* 00669b73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b75: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669b79: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b7b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b7d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b7f: push 0x6dfffc */ { u32 v = 0x6dfffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00669b84: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b86: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b88: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b8a: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 00669b8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b91: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669b97: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669b9c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00669b9f: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x669ba4u); f_005f9ff0();
    /* 00669ba4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ba6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669ba9: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00669bac: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x669bb1u); f_006065d0();
    /* 00669bb1: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bb6: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bbb: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bc0: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bc5: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bca: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bd1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bd3: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bd8: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bda: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00669bdc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669bde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669be0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669be6: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669be9: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x669beeu); f_005fa880();
    /* 00669bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bfa: push 0x6dffe8 */ { u32 v = 0x6dffe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c01: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c03: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c08: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c0d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c11: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669c16: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00669c19: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x669c1eu); f_005f9ef0();
    /* 00669c1e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669c21: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 00669c24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c26: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c28: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c2a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c2e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c30: push 0x6dffd8 */ { u32 v = 0x6dffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c35: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c37: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00669c39: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c3e: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c47: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669c4d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669c50: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x669c55u); f_005f9ef0();
    /* 00669c55: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669c58: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 00669c5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c5d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c65: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c67: push 0x6dffc8 */ { u32 v = 0x6dffc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c6c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c6e: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c70: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c75: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c7a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669c7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669c7e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669c84: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00669c87: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x669c8cu); f_005f9ef0();
    /* 00669c8c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669c8f: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 00669c92: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669c95: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00669c98: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669c9b: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00669c9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00669ca0: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00669ca6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x669ca8u); call_ind(t); }
    /* 00669ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669caa: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669caf: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cb4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cb9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cbd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cbf: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cc1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cc3: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cc8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cca: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ccc: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00669cd1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cd3: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cd5: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669cda: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00669cdf: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ce1: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00669ce6: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00669ceb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ced: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cf2: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cf7: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cfc: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 00669d01: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00669d06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d0c: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d11: push 0x325b8d */ { u32 v = 0x325b8du; r_esp -= 4; W32(r_esp, v); }
    /* 00669d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d1a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669d20: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00669d23: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x669d28u); f_005fac90();
    /* 00669d28: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669d2b: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00669d2e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00669d31: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x669d36u); f_00669d50();
    /* 00669d36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00669d39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00669d40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669d41: mov esp, ebp */ r_esp = r_ebp;
    /* 00669d43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669d44: ret  */ FN_RET(0x006696e0); r_esp += 4; return;
}

void f_0066a210(void) /* SyncViewerRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066a210);
    /* 0066a210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a211: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a213: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a219: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066a21e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a220: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066a223: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0066a226: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a229: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a22f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0066a232: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0066a235: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a238: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a23e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0066a241: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0066a244: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066a247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a248: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a24e: call 0x639590 */ r_esp -= 4; W32(r_esp, 0x66a253u); f_00639590();
    /* 0066a253: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066a256: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a259: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066a25c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66a261u); f_00615260();
    /* 0066a261: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066a264: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a267: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066a26a: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66a26fu); f_00615260();
    /* 0066a26f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0066a272: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066a275: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0066a278: cmp dword ptr [ebp - 0x7c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0066a27c: ja 0x66a730 */ if ((!fC&&!fZ)) goto L_0066a730;
L_0066a282:; BB(0x0066a282);
    /* 0066a282: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0066a285: jmp dword ptr [ecx*4 + 0x66a79c] */ { u32 t = R32((u32)(r_ecx*4+0x66a79cu)); switch (t) { case 0x66a299u: goto L_0066a299; case 0x66a2c7u: goto L_0066a2c7; case 0x66a330u: goto L_0066a330; case 0x66a39cu: goto L_0066a39c; case 0x66a536u: goto L_0066a536; case 0x66a557u: goto L_0066a557; case 0x66a28cu: goto L_0066a28c; default: UNSUP(0x0066a285, "jump table entry is not a known target"); } }
L_0066a28c:; BB(0x0066a28c);
    /* 0066a28c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a28f: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x66a294u); f_00669d50();
    /* 0066a294: jmp 0x66a730 */ goto L_0066a730;
L_0066a299:; BB(0x0066a299);
    /* 0066a299: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066a29f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a2a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a2a7: mov edx, dword ptr [eax + 0x258] */ r_edx = R32((u32)(r_eax+0x258u));
    /* 0066a2ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66a2afu); call_ind(t); }
    /* 0066a2af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a2b0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066a2b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a2b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a2bd: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0066a2c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a2c2u); call_ind(t); }
    /* 0066a2c2: jmp 0x66a730 */ goto L_0066a730;
L_0066a2c7:; BB(0x0066a2c7);
    /* 0066a2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a2ca: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0066a2cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066a2d0: jns 0x66a2ee */ if (!fS) goto L_0066a2ee;
L_0066a2d2:; BB(0x0066a2d2);
    /* 0066a2d2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066a2d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a2da: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a2e0: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0066a2e6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66a2e8u); call_ind(t); }
    /* 0066a2e8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a2eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066a2ee:; BB(0x0066a2ee);
    /* 0066a2ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a2f2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a2f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a2fa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a300: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0066a306: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a308u); call_ind(t); }
    /* 0066a308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a309: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a30c: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 0066a312: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x66a317u); f_0063b490();
    /* 0066a317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a319: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a31b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a31e: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66a323u); f_006464d0();
    /* 0066a323: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a326: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x66a32bu); f_00669d50();
    /* 0066a32b: jmp 0x66a730 */ goto L_0066a730;
L_0066a330:; BB(0x0066a330);
    /* 0066a330: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a333: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066a336: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0066a339: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066a33e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a340: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a346: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0066a34c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a34eu); call_ind(t); }
    /* 0066a34e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a351: jl 0x66a35a */ if ((fS!=fO)) goto L_0066a35a;
L_0066a353:; BB(0x0066a353);
    /* 0066a353: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0066a35a:; BB(0x0066a35a);
    /* 0066a35a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a35d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a35e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066a364: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a366: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a36c: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 0066a372: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66a374u); call_ind(t); }
    /* 0066a374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a375: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a378: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a37e: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x66a383u); f_0063b490();
    /* 0066a383: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a385: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a387: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a38a: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66a38fu); f_006464d0();
    /* 0066a38f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a392: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x66a397u); f_00669d50();
    /* 0066a397: jmp 0x66a730 */ goto L_0066a730;
L_0066a39c:; BB(0x0066a39c);
    /* 0066a39c: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a3a0: jne 0x66a519 */ if (!fZ) goto L_0066a519;
L_0066a3a6:; BB(0x0066a3a6);
    /* 0066a3a6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a3a9: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066a3ac: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x66a3b1u); f_00600230();
    /* 0066a3b1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0066a3b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a3b6: jne 0x66a3d0 */ if (!fZ) goto L_0066a3d0;
L_0066a3b8:; BB(0x0066a3b8);
    /* 0066a3b8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a3bc: jle 0x66a3d0 */ if ((fZ||fS!=fO)) goto L_0066a3d0;
L_0066a3be:; BB(0x0066a3be);
    /* 0066a3be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a3c1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3c5: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a3c8: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066a3cb: call 0x66aa00 */ r_esp -= 4; W32(r_esp, 0x66a3d0u); f_0066aa00();
L_0066a3d0:; BB(0x0066a3d0);
    /* 0066a3d0: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a3d3: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0066a3d6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x66a3dbu); f_00600230();
    /* 0066a3db: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066a3de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a3e0: jne 0x66a4f2 */ if (!fZ) goto L_0066a4f2;
L_0066a3e6:; BB(0x0066a3e6);
    /* 0066a3e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a3e9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0066a3ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066a3ef: jns 0x66a40d */ if (!fS) goto L_0066a40d;
L_0066a3f1:; BB(0x0066a3f1);
    /* 0066a3f1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066a3f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a3f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a3ff: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0066a405: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66a407u); call_ind(t); }
    /* 0066a407: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a40a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066a40d:; BB(0x0066a40d);
    /* 0066a40d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a411: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a417: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a419: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a41f: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0066a425: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a427u); call_ind(t); }
    /* 0066a427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a428: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a42b: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 0066a431: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x66a436u); f_0063b490();
    /* 0066a436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a438: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a43a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a43d: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66a442u); f_006464d0();
    /* 0066a442: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a445: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066a448: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0066a44b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066a44e: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a453u); f_005e4390();
    /* 0066a453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a455: je 0x66a46b */ if (fZ) goto L_0066a46b;
L_0066a457:; BB(0x0066a457);
    /* 0066a457: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066a45a: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a45fu); f_005e4390();
    /* 0066a45f: mov ecx, eax */ r_ecx = r_eax;
    /* 0066a461: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x66a466u); f_00629c70();
    /* 0066a466: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0066a469: jmp 0x66a472 */ goto L_0066a472;
L_0066a46b:; BB(0x0066a46b);
    /* 0066a46b: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0066a472:; BB(0x0066a472);
    /* 0066a472: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a476: je 0x66a4bc */ if (fZ) goto L_0066a4bc;
L_0066a478:; BB(0x0066a478);
    /* 0066a478: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a47b: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066a47e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0066a481: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0066a484: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a489u); f_005e4390();
    /* 0066a489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a48b: je 0x66a4a4 */ if (fZ) goto L_0066a4a4;
L_0066a48d:; BB(0x0066a48d);
    /* 0066a48d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0066a490: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a495u); f_005e4390();
    /* 0066a495: mov ecx, eax */ r_ecx = r_eax;
    /* 0066a497: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x66a49cu); f_00629c70();
    /* 0066a49c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0066a4a2: jmp 0x66a4ae */ goto L_0066a4ae;
L_0066a4a4:; BB(0x0066a4a4);
    /* 0066a4a4: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0066a4ae:; BB(0x0066a4ae);
    /* 0066a4ae: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066a4b4: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0066a4ba: jmp 0x66a4c6 */ goto L_0066a4c6;
L_0066a4bc:; BB(0x0066a4bc);
    /* 0066a4bc: mov dword ptr [ebp - 0x88], 0x6b27f8 */ W32((u32)(r_ebp+0xffffff78u), 0x6b27f8u);
L_0066a4c6:; BB(0x0066a4c6);
    /* 0066a4c6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0066a4cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4cd: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 0066a4d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4d1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66a4d6u); f_00686d8e();
    /* 0066a4d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a4d9: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a4dc: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x66a4e1u); f_00669d50();
    /* 0066a4e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4e3: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0066a4e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4e7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a4ea: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0066a4ed: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x66a4f2u); f_00628f40();
L_0066a4f2:; BB(0x0066a4f2);
    /* 0066a4f2: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a4f5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066a4f8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a4fb: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066a4fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a500: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066a506: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a508u); call_ind(t); }
    /* 0066a508: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a50b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a50c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a50f: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066a512: call 0x66aa60 */ r_esp -= 4; W32(r_esp, 0x66a517u); f_0066aa60();
    /* 0066a517: jmp 0x66a531 */ goto L_0066a531;
L_0066a519:; BB(0x0066a519);
    /* 0066a519: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a51d: jle 0x66a531 */ if ((fZ||fS!=fO)) goto L_0066a531;
L_0066a51f:; BB(0x0066a51f);
    /* 0066a51f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066a522: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066a525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a526: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a529: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066a52c: call 0x66aa60 */ r_esp -= 4; W32(r_esp, 0x66a531u); f_0066aa60();
L_0066a531:; BB(0x0066a531);
    /* 0066a531: jmp 0x66a730 */ goto L_0066a730;
L_0066a536:; BB(0x0066a536);
    /* 0066a536: cmp dword ptr [ebp - 0x34], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a53a: je 0x66a552 */ if (fZ) goto L_0066a552;
L_0066a53c:; BB(0x0066a53c);
    /* 0066a53c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a53f: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0066a542: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a545: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066a548: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066a54a: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0066a550: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a552u); call_ind(t); }
L_0066a552:; BB(0x0066a552);
    /* 0066a552: jmp 0x66a730 */ goto L_0066a730;
L_0066a557:; BB(0x0066a557);
    /* 0066a557: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a55a: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0066a55d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a560: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066a563: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066a565: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066a56b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a56du); call_ind(t); }
    /* 0066a56d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a570: cmp dword ptr [ebp - 0x34], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a573: jne 0x66a6fa */ if (!fZ) goto L_0066a6fa;
L_0066a579:; BB(0x0066a579);
    /* 0066a579: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a57c: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066a57f: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x66a584u); f_00600230();
    /* 0066a584: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0066a587: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a589: jne 0x66a5bd */ if (!fZ) goto L_0066a5bd;
L_0066a58b:; BB(0x0066a58b);
    /* 0066a58b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a58e: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066a591: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a594: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066a597: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a599: mov ecx, eax */ r_ecx = r_eax;
    /* 0066a59b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066a5a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a5a3u); call_ind(t); }
    /* 0066a5a3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a5a6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a5a9: jge 0x66a5bd */ if ((fS==fO)) goto L_0066a5bd;
L_0066a5ab:; BB(0x0066a5ab);
    /* 0066a5ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a5ae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a5b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a5b2: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a5b5: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 0066a5b8: call 0x66aa00 */ r_esp -= 4; W32(r_esp, 0x66a5bdu); f_0066aa00();
L_0066a5bd:; BB(0x0066a5bd);
    /* 0066a5bd: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a5c0: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0066a5c3: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x66a5c8u); f_00600230();
    /* 0066a5c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066a5cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a5cd: jne 0x66a6eb */ if (!fZ) goto L_0066a6eb;
L_0066a5d3:; BB(0x0066a5d3);
    /* 0066a5d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a5d6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066a5d9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0066a5dc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066a5e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a5e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a5e9: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0066a5ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a5f1u); call_ind(t); }
    /* 0066a5f1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a5f4: jl 0x66a5fd */ if ((fS!=fO)) goto L_0066a5fd;
L_0066a5f6:; BB(0x0066a5f6);
    /* 0066a5f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0066a5fd:; BB(0x0066a5fd);
    /* 0066a5fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a600: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a601: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066a607: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a609: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a60f: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 0066a615: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66a617u); call_ind(t); }
    /* 0066a617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a618: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a61b: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a621: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x66a626u); f_0063b490();
    /* 0066a626: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a628: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a62a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a62d: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66a632u); f_006464d0();
    /* 0066a632: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a635: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066a638: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0066a63b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0066a63e: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a643u); f_005e4390();
    /* 0066a643: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a645: je 0x66a65e */ if (fZ) goto L_0066a65e;
L_0066a647:; BB(0x0066a647);
    /* 0066a647: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0066a64a: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a64fu); f_005e4390();
    /* 0066a64f: mov ecx, eax */ r_ecx = r_eax;
    /* 0066a651: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x66a656u); f_00629c70();
    /* 0066a656: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0066a65c: jmp 0x66a668 */ goto L_0066a668;
L_0066a65e:; BB(0x0066a65e);
    /* 0066a65e: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0066a668:; BB(0x0066a668);
    /* 0066a668: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a66f: je 0x66a6b5 */ if (fZ) goto L_0066a6b5;
L_0066a671:; BB(0x0066a671);
    /* 0066a671: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a674: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066a677: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0066a67a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0066a67d: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a682u); f_005e4390();
    /* 0066a682: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a684: je 0x66a69d */ if (fZ) goto L_0066a69d;
L_0066a686:; BB(0x0066a686);
    /* 0066a686: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0066a689: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x66a68eu); f_005e4390();
    /* 0066a68e: mov ecx, eax */ r_ecx = r_eax;
    /* 0066a690: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x66a695u); f_00629c70();
    /* 0066a695: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0066a69b: jmp 0x66a6a7 */ goto L_0066a6a7;
L_0066a69d:; BB(0x0066a69d);
    /* 0066a69d: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0066a6a7:; BB(0x0066a6a7);
    /* 0066a6a7: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0066a6ad: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0066a6b3: jmp 0x66a6bf */ goto L_0066a6bf;
L_0066a6b5:; BB(0x0066a6b5);
    /* 0066a6b5: mov dword ptr [ebp - 0x94], 0x6b27f8 */ W32((u32)(r_ebp+0xffffff6cu), 0x6b27f8u);
L_0066a6bf:; BB(0x0066a6bf);
    /* 0066a6bf: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0066a6c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6c6: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0066a6c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6ca: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66a6cfu); f_00686d8e();
    /* 0066a6cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a6d2: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a6d5: call 0x669d50 */ r_esp -= 4; W32(r_esp, 0x66a6dau); f_00669d50();
    /* 0066a6da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6dc: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 0066a6df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6e0: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a6e3: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0066a6e6: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x66a6ebu); f_00628f40();
L_0066a6eb:; BB(0x0066a6eb);
    /* 0066a6eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6ed: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a6f0: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066a6f3: call 0x66aa60 */ r_esp -= 4; W32(r_esp, 0x66a6f8u); f_0066aa60();
    /* 0066a6f8: jmp 0x66a730 */ goto L_0066a730;
L_0066a6fa:; BB(0x0066a6fa);
    /* 0066a6fa: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a6fe: jl 0x66a730 */ if ((fS!=fO)) goto L_0066a730;
L_0066a700:; BB(0x0066a700);
    /* 0066a700: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a703: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066a706: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a709: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066a70c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a70e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066a714: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a716u); call_ind(t); }
    /* 0066a716: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a719: cmp dword ptr [ebp - 0x34], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a71c: jge 0x66a730 */ if ((fS==fO)) goto L_0066a730;
L_0066a71e:; BB(0x0066a71e);
    /* 0066a71e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066a721: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a724: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a725: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a728: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066a72b: call 0x66aa60 */ r_esp -= 4; W32(r_esp, 0x66a730u); f_0066aa60();
L_0066a730:; BB(0x0066a730);
    /* 0066a730: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a733: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0066a736: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x66a73bu); f_00600230();
    /* 0066a73b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066a73e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a740: je 0x66a75a */ if (fZ) goto L_0066a75a;
L_0066a742:; BB(0x0066a742);
    /* 0066a742: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a745: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0066a74b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0066a74e: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0066a751: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066a754: mov byte ptr [edx + 0x10], 1 */ W8((u32)(r_edx+0x10u), 0x1u);
    /* 0066a758: jmp 0x66a770 */ goto L_0066a770;
L_0066a75a:; BB(0x0066a75a);
    /* 0066a75a: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a75d: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a763: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0066a766: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0066a769: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0066a76c: mov byte ptr [eax + 0x10], 0 */ W8((u32)(r_eax+0x10u), 0x0u);
L_0066a770:; BB(0x0066a770);
    /* 0066a770: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0066a773: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0066a779: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0066a77c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0066a77f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a783: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0066a786: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66a78bu); f_006464d0();
    /* 0066a78b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066a78e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a790: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66a795u); f_00686d72();
    /* 0066a795: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a798: ret 4 */ FN_RET(0x0066a210); r_esp += 8; return;
}

