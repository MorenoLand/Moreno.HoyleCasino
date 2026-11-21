#include "protos.h"

void f_0066d7f0(void) /* sub_66D7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d7f0);
    /* 0066d7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7f5: push 0x6ad00e */ { u32 v = 0x6ad00eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d801: sub esp, 0x4fc */ {  u32 a = r_esp; u32 b = 0x4fcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d807: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066d80c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d80e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066d811: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d812: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d814: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066d817: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066d81d: mov dword ptr [ebp - 0x4d4], ecx */ W32((u32)(r_ebp+0xfffffb2cu), r_ecx);
    /* 0066d823: mov dword ptr [ebp - 0x458], 0 */ W32((u32)(r_ebp+0xfffffba8u), 0x0u);
    /* 0066d82d: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 0066d834: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d839: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d83b: lea eax, [ebp - 0x413] */ r_eax = (u32)(r_ebp+0xfffffbedu);
    /* 0066d841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d842: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x66d847u); f_00686fa2();
    /* 0066d847: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d84a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d84c: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d855: push 0x263928 */ { u32 v = 0x263928u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d85a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d860: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66d865u); f_005eae80();
    /* 0066d865: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066d86b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x66d870u); f_005f3bf0();
    /* 0066d870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d871: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066d877: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d879: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066d87f: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0066d885: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d887u); call_ind(t); }
    /* 0066d887: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 0066d88d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d892: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66d897u); f_00686d82();
    /* 0066d897: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d89a: mov dword ptr [ebp - 0x468], eax */ W32((u32)(r_ebp+0xfffffb98u), r_eax);
    /* 0066d8a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d8a7: cmp dword ptr [ebp - 0x468], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d8ae: je 0x66d8c3 */ if (fZ) goto L_0066d8c3;
L_0066d8b0:; BB(0x0066d8b0);
    /* 0066d8b0: mov ecx, dword ptr [ebp - 0x468] */ r_ecx = R32((u32)(r_ebp+0xfffffb98u));
    /* 0066d8b6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66d8bbu); f_005eaaf0();
    /* 0066d8bb: mov dword ptr [ebp - 0x4d8], eax */ W32((u32)(r_ebp+0xfffffb28u), r_eax);
    /* 0066d8c1: jmp 0x66d8cd */ goto L_0066d8cd;
L_0066d8c3:; BB(0x0066d8c3);
    /* 0066d8c3: mov dword ptr [ebp - 0x4d8], 0 */ W32((u32)(r_ebp+0xfffffb28u), 0x0u);
L_0066d8cd:; BB(0x0066d8cd);
    /* 0066d8cd: mov ecx, dword ptr [ebp - 0x4d8] */ r_ecx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0066d8d3: mov dword ptr [ebp - 0x464], ecx */ W32((u32)(r_ebp+0xfffffb9cu), r_ecx);
    /* 0066d8d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d8e0: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d8e6: mov eax, dword ptr [ebp - 0x464] */ r_eax = R32((u32)(r_ebp+0xfffffb9cu));
    /* 0066d8ec: mov dword ptr [edx + 0x1f8], eax */ W32((u32)(r_edx+0x1f8u), r_eax);
    /* 0066d8f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d8f4: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d8fa: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66d8ffu); f_005f53c0();
    /* 0066d8ff: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d903: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d909: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d90b: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d911: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066d914: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d916u); call_ind(t); }
    /* 0066d916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d917: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d91d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d91f: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d925: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066d928: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d92au); call_ind(t); }
    /* 0066d92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d92b: push 0x263929 */ { u32 v = 0x263929u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d930: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d936: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0066d93c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66d941u); f_005eae80();
    /* 0066d941: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d947: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0066d94d: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d953: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0066d959: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d95b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066d95e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d960u); call_ind(t); }
    /* 0066d960: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d965: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66d96au); f_00686d82();
    /* 0066d96a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d96d: mov dword ptr [ebp - 0x470], eax */ W32((u32)(r_ebp+0xfffffb90u), r_eax);
    /* 0066d973: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066d97a: cmp dword ptr [ebp - 0x470], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d981: je 0x66d996 */ if (fZ) goto L_0066d996;
L_0066d983:; BB(0x0066d983);
    /* 0066d983: mov ecx, dword ptr [ebp - 0x470] */ r_ecx = R32((u32)(r_ebp+0xfffffb90u));
    /* 0066d989: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66d98eu); f_005ec5a0();
    /* 0066d98e: mov dword ptr [ebp - 0x4dc], eax */ W32((u32)(r_ebp+0xfffffb24u), r_eax);
    /* 0066d994: jmp 0x66d9a0 */ goto L_0066d9a0;
L_0066d996:; BB(0x0066d996);
    /* 0066d996: mov dword ptr [ebp - 0x4dc], 0 */ W32((u32)(r_ebp+0xfffffb24u), 0x0u);
L_0066d9a0:; BB(0x0066d9a0);
    /* 0066d9a0: mov ecx, dword ptr [ebp - 0x4dc] */ r_ecx = R32((u32)(r_ebp+0xfffffb24u));
    /* 0066d9a6: mov dword ptr [ebp - 0x46c], ecx */ W32((u32)(r_ebp+0xfffffb94u), r_ecx);
    /* 0066d9ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d9b3: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9b9: mov eax, dword ptr [ebp - 0x46c] */ r_eax = R32((u32)(r_ebp+0xfffffb94u));
    /* 0066d9bf: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 0066d9c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9c7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9c9: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9cf: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66d9d4u); f_005f53c0();
    /* 0066d9d4: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9d8: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d9e0: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9e6: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066d9e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d9ebu); call_ind(t); }
    /* 0066d9eb: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9ef: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d9f7: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066d9fd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066da00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66da02u); call_ind(t); }
    /* 0066da02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066da03: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0066da05: push 0x257 */ { u32 v = 0x257u; r_esp -= 4; W32(r_esp, v); }
    /* 0066da0a: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0066da0f: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066da15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066da17: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066da1d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0066da23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66da25u); call_ind(t); }
    /* 0066da25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066da26: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066da2c: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0066da32: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66da37u); f_005ec8f0();
    /* 0066da37: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066da3d: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0066da43: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066da49: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0066da4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066da51: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066da54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66da56u); call_ind(t); }
    /* 0066da56: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066da5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066da5e: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066da64: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066da6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66da6cu); call_ind(t); }
    /* 0066da6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da6e: je 0x66db6a */ if (fZ) goto L_0066db6a;
L_0066da74:; BB(0x0066da74);
    /* 0066da74: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066da79: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66da7eu); f_00686d82();
    /* 0066da7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066da81: mov dword ptr [ebp - 0x478], eax */ W32((u32)(r_ebp+0xfffffb88u), r_eax);
    /* 0066da87: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066da8e: cmp dword ptr [ebp - 0x478], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da95: je 0x66daaa */ if (fZ) goto L_0066daaa;
L_0066da97:; BB(0x0066da97);
    /* 0066da97: mov ecx, dword ptr [ebp - 0x478] */ r_ecx = R32((u32)(r_ebp+0xfffffb88u));
    /* 0066da9d: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66daa2u); f_005ec5a0();
    /* 0066daa2: mov dword ptr [ebp - 0x4e0], eax */ W32((u32)(r_ebp+0xfffffb20u), r_eax);
    /* 0066daa8: jmp 0x66dab4 */ goto L_0066dab4;
L_0066daaa:; BB(0x0066daaa);
    /* 0066daaa: mov dword ptr [ebp - 0x4e0], 0 */ W32((u32)(r_ebp+0xfffffb20u), 0x0u);
L_0066dab4:; BB(0x0066dab4);
    /* 0066dab4: mov ecx, dword ptr [ebp - 0x4e0] */ r_ecx = R32((u32)(r_ebp+0xfffffb20u));
    /* 0066daba: mov dword ptr [ebp - 0x474], ecx */ W32((u32)(r_ebp+0xfffffb8cu), r_ecx);
    /* 0066dac0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dac7: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dacd: mov eax, dword ptr [ebp - 0x474] */ r_eax = R32((u32)(r_ebp+0xfffffb8cu));
    /* 0066dad3: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 0066dad9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dadb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dadd: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dae3: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66dae8u); f_005f53c0();
    /* 0066dae8: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066daeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066daec: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066daf2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066daf4: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dafa: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066dafd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66daffu); call_ind(t); }
    /* 0066daff: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066db02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db03: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066db09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066db0b: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066db11: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066db14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66db16u); call_ind(t); }
    /* 0066db16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db17: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db19: push 0x257 */ { u32 v = 0x257u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db1e: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db23: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066db29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066db2b: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066db31: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0066db37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66db39u); call_ind(t); }
    /* 0066db39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db3a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066db40: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0066db46: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66db4bu); f_005ec8f0();
    /* 0066db4b: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066db51: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0066db57: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066db5d: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0066db63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066db65: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066db68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66db6au); call_ind(t); }
L_0066db6a:; BB(0x0066db6a);
    /* 0066db6a: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db6f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66db74u); f_00686d82();
    /* 0066db74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066db77: mov dword ptr [ebp - 0x480], eax */ W32((u32)(r_ebp+0xfffffb80u), r_eax);
    /* 0066db7d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0066db84: cmp dword ptr [ebp - 0x480], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066db8b: je 0x66dba0 */ if (fZ) goto L_0066dba0;
L_0066db8d:; BB(0x0066db8d);
    /* 0066db8d: mov ecx, dword ptr [ebp - 0x480] */ r_ecx = R32((u32)(r_ebp+0xfffffb80u));
    /* 0066db93: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66db98u); f_005ec5a0();
    /* 0066db98: mov dword ptr [ebp - 0x4e4], eax */ W32((u32)(r_ebp+0xfffffb1cu), r_eax);
    /* 0066db9e: jmp 0x66dbaa */ goto L_0066dbaa;
L_0066dba0:; BB(0x0066dba0);
    /* 0066dba0: mov dword ptr [ebp - 0x4e4], 0 */ W32((u32)(r_ebp+0xfffffb1cu), 0x0u);
L_0066dbaa:; BB(0x0066dbaa);
    /* 0066dbaa: mov ecx, dword ptr [ebp - 0x4e4] */ r_ecx = R32((u32)(r_ebp+0xfffffb1cu));
    /* 0066dbb0: mov dword ptr [ebp - 0x47c], ecx */ W32((u32)(r_ebp+0xfffffb84u), r_ecx);
    /* 0066dbb6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dbbd: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dbc3: mov eax, dword ptr [ebp - 0x47c] */ r_eax = R32((u32)(r_ebp+0xfffffb84u));
    /* 0066dbc9: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 0066dbcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbd1: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbd3: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dbd9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66dbdeu); f_005f53c0();
    /* 0066dbde: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dbe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe2: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dbe8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066dbea: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dbf0: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066dbf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dbf5u); call_ind(t); }
    /* 0066dbf5: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dbf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbf9: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dbff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066dc01: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dc07: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066dc0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dc0cu); call_ind(t); }
    /* 0066dc0c: add eax, 0xe2 */ {  u32 a = r_eax; u32 b = 0xe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dc11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc12: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc14: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc19: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc1e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc23: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dc29: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0066dc2f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66dc34u); f_005ec8f0();
    /* 0066dc34: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dc3a: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0066dc40: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dc46: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0066dc4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066dc4e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066dc51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dc53u); call_ind(t); }
    /* 0066dc53: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc58: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66dc5du); f_00686d82();
    /* 0066dc5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dc60: mov dword ptr [ebp - 0x488], eax */ W32((u32)(r_ebp+0xfffffb78u), r_eax);
    /* 0066dc66: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0066dc6d: cmp dword ptr [ebp - 0x488], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dc74: je 0x66dc89 */ if (fZ) goto L_0066dc89;
L_0066dc76:; BB(0x0066dc76);
    /* 0066dc76: mov ecx, dword ptr [ebp - 0x488] */ r_ecx = R32((u32)(r_ebp+0xfffffb78u));
    /* 0066dc7c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66dc81u); f_005ec5a0();
    /* 0066dc81: mov dword ptr [ebp - 0x4e8], eax */ W32((u32)(r_ebp+0xfffffb18u), r_eax);
    /* 0066dc87: jmp 0x66dc93 */ goto L_0066dc93;
L_0066dc89:; BB(0x0066dc89);
    /* 0066dc89: mov dword ptr [ebp - 0x4e8], 0 */ W32((u32)(r_ebp+0xfffffb18u), 0x0u);
L_0066dc93:; BB(0x0066dc93);
    /* 0066dc93: mov ecx, dword ptr [ebp - 0x4e8] */ r_ecx = R32((u32)(r_ebp+0xfffffb18u));
    /* 0066dc99: mov dword ptr [ebp - 0x484], ecx */ W32((u32)(r_ebp+0xfffffb7cu), r_ecx);
    /* 0066dc9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dca6: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dcac: mov eax, dword ptr [ebp - 0x484] */ r_eax = R32((u32)(r_ebp+0xfffffb7cu));
    /* 0066dcb2: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 0066dcb8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcba: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcbc: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dcc2: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66dcc7u); f_005f53c0();
    /* 0066dcc7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dcca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dccb: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dcd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066dcd3: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dcd9: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066dcdc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dcdeu); call_ind(t); }
    /* 0066dcde: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dce2: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dce8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066dcea: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dcf0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066dcf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dcf5u); call_ind(t); }
    /* 0066dcf5: add eax, 0xe2 */ {  u32 a = r_eax; u32 b = 0xe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dcfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcfb: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcfd: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd02: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd07: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd0c: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dd12: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0066dd18: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66dd1du); f_005ec8f0();
    /* 0066dd1d: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dd23: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 0066dd29: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dd2f: mov ecx, dword ptr [ecx + 0x1a0] */ r_ecx = R32((u32)(r_ecx+0x1a0u));
    /* 0066dd35: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066dd37: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066dd3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66dd3cu); call_ind(t); }
    /* 0066dd3c: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd3e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66dd43u); f_00686d82();
    /* 0066dd43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dd46: mov dword ptr [ebp - 0x490], eax */ W32((u32)(r_ebp+0xfffffb70u), r_eax);
    /* 0066dd4c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0066dd53: cmp dword ptr [ebp - 0x490], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dd5a: je 0x66dd6f */ if (fZ) goto L_0066dd6f;
L_0066dd5c:; BB(0x0066dd5c);
    /* 0066dd5c: mov ecx, dword ptr [ebp - 0x490] */ r_ecx = R32((u32)(r_ebp+0xfffffb70u));
    /* 0066dd62: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x66dd67u); f_005f6130();
    /* 0066dd67: mov dword ptr [ebp - 0x4ec], eax */ W32((u32)(r_ebp+0xfffffb14u), r_eax);
    /* 0066dd6d: jmp 0x66dd79 */ goto L_0066dd79;
L_0066dd6f:; BB(0x0066dd6f);
    /* 0066dd6f: mov dword ptr [ebp - 0x4ec], 0 */ W32((u32)(r_ebp+0xfffffb14u), 0x0u);
L_0066dd79:; BB(0x0066dd79);
    /* 0066dd79: mov ecx, dword ptr [ebp - 0x4ec] */ r_ecx = R32((u32)(r_ebp+0xfffffb14u));
    /* 0066dd7f: mov dword ptr [ebp - 0x48c], ecx */ W32((u32)(r_ebp+0xfffffb74u), r_ecx);
    /* 0066dd85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dd8c: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dd92: mov eax, dword ptr [ebp - 0x48c] */ r_eax = R32((u32)(r_ebp+0xfffffb74u));
    /* 0066dd98: mov dword ptr [edx + 0x1f0], eax */ W32((u32)(r_edx+0x1f0u), r_eax);
    /* 0066dd9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dda0: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dda6: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66ddabu); f_005f53c0();
    /* 0066ddab: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ddae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ddaf: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ddb5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ddb7: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ddbd: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066ddc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ddc2u); call_ind(t); }
    /* 0066ddc2: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ddc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ddc6: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ddcc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ddce: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ddd4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066ddd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ddd9u); call_ind(t); }
    /* 0066ddd9: add eax, 0x67 */ {  u32 a = r_eax; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066dddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dddd: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dddf: push 0x189 */ { u32 v = 0x189u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dde4: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ddea: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0066ddf0: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x66ddf5u); f_005f61d0();
    /* 0066ddf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ddf7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ddfc: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0066de01: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066de07: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 0066de0d: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x66de12u); f_005f6490();
    /* 0066de12: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066de18: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0066de1e: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066de24: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0066de2a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066de2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0066de2e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066de31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66de33u); call_ind(t); }
    /* 0066de33: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066de39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066de3b: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066de41: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0066de47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66de49u); call_ind(t); }
    /* 0066de49: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0066de4f: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066de55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066de57: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066de5d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0066de63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66de65u); call_ind(t); }
    /* 0066de65: mov dword ptr [ebp - 0x460], eax */ W32((u32)(r_ebp+0xfffffba0u), r_eax);
    /* 0066de6b: mov ecx, dword ptr [ebp - 0x460] */ r_ecx = R32((u32)(r_ebp+0xfffffba0u));
    /* 0066de71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066de72: push 0x6da4e4 */ { u32 v = 0x6da4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066de77: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 0066de7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066de7e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66de84u); call_ind(t); }
    /* 0066de84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066de87: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066de8c: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 0066de92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066de93: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66de98u); f_005ea9c0();
    /* 0066de98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066de9b: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 0066dea1: cmp dword ptr [ebp - 0x41c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dea8: jne 0x66dee2 */ if (!fZ) goto L_0066dee2;
L_0066deaa:; BB(0x0066deaa);
    /* 0066deaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066deac: push 0x6e0dfc */ { u32 v = 0x6e0dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066deb1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66deb6u); f_00630f40();
    /* 0066deb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066deb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066deba: push 0x6e0dd8 */ { u32 v = 0x6e0dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066debf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66dec4u); f_00630f40();
    /* 0066dec4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dec8: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x66decdu); f_0062ff10();
    /* 0066decd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ded0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ded2: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066ded8: call 0x66f370 */ r_esp -= 4; W32(r_esp, 0x66deddu); f_0066f370();
    /* 0066dedd: jmp 0x66e9c1 */ goto L_0066e9c1;
L_0066dee2:; BB(0x0066dee2);
    /* 0066dee2: cmp dword ptr [ebp - 0x420], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066dee9: jle 0x66df0d */ if ((fZ||fS!=fO)) goto L_0066df0d;
L_0066deeb:; BB(0x0066deeb);
    /* 0066deeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066deed: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0066def3: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066def9: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066defc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066defd: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0066df03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066df04: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x66df0au); call_ind(t); }
    /* 0066df0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066df0d:; BB(0x0066df0d);
    /* 0066df0d: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0066df13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066df14: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066df16: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0066df1b: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df21: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066df27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066df28: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66df2eu); call_ind(t); }
    /* 0066df2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066df31: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0066df37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066df38: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66df3eu); call_ind(t); }
    /* 0066df3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066df41: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066df46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066df48: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066df4e: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0066df54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66df56u); call_ind(t); }
    /* 0066df56: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df5c: mov dword ptr [ecx + 0x20c], eax */ W32((u32)(r_ecx+0x20cu), r_eax);
    /* 0066df62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066df64: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066df66: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df6c: mov ecx, dword ptr [edx + 0x20c] */ r_ecx = R32((u32)(r_edx+0x20cu));
    /* 0066df72: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x66df77u); f_0063a3e0();
    /* 0066df77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066df79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066df7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066df7d: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df83: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0066df86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066df87: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df8d: mov eax, dword ptr [edx + 0x24c] */ r_eax = R32((u32)(r_edx+0x24cu));
    /* 0066df93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066df94: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066df9a: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0066dfa0: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x66dfa5u); f_0063a8d0();
    /* 0066dfa5: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dfab: mov eax, dword ptr [edx + 0x248] */ r_eax = R32((u32)(r_edx+0x248u));
    /* 0066dfb1: mov dword ptr [ebp - 0x4c8], eax */ W32((u32)(r_ebp+0xfffffb38u), r_eax);
    /* 0066dfb7: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dfbd: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0066dfc3: mov dword ptr [ebp - 0x4c4], edx */ W32((u32)(r_ebp+0xfffffb3cu), r_edx);
    /* 0066dfc9: mov ecx, dword ptr [ebp - 0x4c4] */ r_ecx = R32((u32)(r_ebp+0xfffffb3cu));
    /* 0066dfcf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66dfd4u); f_0063aac0();
    /* 0066dfd4: mov ecx, dword ptr [ebp - 0x4c8] */ r_ecx = R32((u32)(r_ebp+0xfffffb38u));
    /* 0066dfda: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0066dfdc: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066dfe2: mov eax, dword ptr [edx + 0x248] */ r_eax = R32((u32)(r_edx+0x248u));
    /* 0066dfe8: mov dword ptr [ebp - 0x4f0], eax */ W32((u32)(r_ebp+0xfffffb10u), r_eax);
    /* 0066dfee: cmp dword ptr [ebp - 0x4f0], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffb10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dff5: je 0x66e00a */ if (fZ) goto L_0066e00a;
L_0066dff7:; BB(0x0066dff7);
    /* 0066dff7: cmp dword ptr [ebp - 0x4f0], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffb10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dffe: je 0x66e06f */ if (fZ) goto L_0066e06f;
L_0066e000:; BB(0x0066e000);
    /* 0066e000: jmp 0x66e097 */ goto L_0066e097;
L_0066e00a:; BB(0x0066e00a);
    /* 0066e00a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e010: add ecx, 0x250 */ {  u32 a = r_ecx; u32 b = 0x250u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e016: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066e019: mov edx, esp */ r_edx = r_esp;
    /* 0066e01b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066e01d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0066e01f: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0066e022: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0066e025: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0066e028: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0066e02b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e031: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e033: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e039: mov edx, dword ptr [eax + 0x1f0] */ r_edx = R32((u32)(r_eax+0x1f0u));
    /* 0066e03f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e041u); call_ind(t); }
    /* 0066e041: mov dword ptr [ebp - 0x4d0], eax */ W32((u32)(r_ebp+0xfffffb30u), r_eax);
    /* 0066e047: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e04d: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066e053: mov dword ptr [ebp - 0x4cc], ecx */ W32((u32)(r_ebp+0xfffffb34u), r_ecx);
    /* 0066e059: mov ecx, dword ptr [ebp - 0x4cc] */ r_ecx = R32((u32)(r_ebp+0xfffffb34u));
    /* 0066e05f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66e064u); f_0063aac0();
    /* 0066e064: mov edx, dword ptr [ebp - 0x4d0] */ r_edx = R32((u32)(r_ebp+0xfffffb30u));
    /* 0066e06a: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0066e06d: jmp 0x66e097 */ goto L_0066e097;
L_0066e06f:; BB(0x0066e06f);
    /* 0066e06f: mov esi, dword ptr [ebp - 0x4d4] */ r_esi = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e075: add esi, 0x25c */ {  u32 a = r_esi; u32 b = 0x25cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066e07b: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e081: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066e087: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0066e08a: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 0066e08d: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066e090: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0066e095: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0066e097:; BB(0x0066e097);
    /* 0066e097: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e09d: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e0a2u); f_005f53c0();
    /* 0066e0a2: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e0a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0a6: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0ac: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066e0b2: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0066e0b5: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x66e0bau); f_00646380();
    /* 0066e0ba: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e0c2: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0c8: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0066e0cb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e0cdu); call_ind(t); }
    /* 0066e0cd: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e0d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0d1: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066e0d9: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0df: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066e0e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e0e4u); call_ind(t); }
    /* 0066e0e4: add eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0e8: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e0ee: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0066e0f4: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0066e0f7: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x66e0fcu); f_00646150();
    /* 0066e0fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0fe: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e104: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066e10a: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0066e10d: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x66e112u); f_00646c20();
    /* 0066e112: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e117: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e11cu); f_00686d82();
    /* 0066e11c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e11f: mov dword ptr [ebp - 0x498], eax */ W32((u32)(r_ebp+0xfffffb68u), r_eax);
    /* 0066e125: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0066e12c: cmp dword ptr [ebp - 0x498], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e133: je 0x66e148 */ if (fZ) goto L_0066e148;
L_0066e135:; BB(0x0066e135);
    /* 0066e135: mov ecx, dword ptr [ebp - 0x498] */ r_ecx = R32((u32)(r_ebp+0xfffffb68u));
    /* 0066e13b: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66e140u); f_005eaaf0();
    /* 0066e140: mov dword ptr [ebp - 0x4f4], eax */ W32((u32)(r_ebp+0xfffffb0cu), r_eax);
    /* 0066e146: jmp 0x66e152 */ goto L_0066e152;
L_0066e148:; BB(0x0066e148);
    /* 0066e148: mov dword ptr [ebp - 0x4f4], 0 */ W32((u32)(r_ebp+0xfffffb0cu), 0x0u);
L_0066e152:; BB(0x0066e152);
    /* 0066e152: mov edx, dword ptr [ebp - 0x4f4] */ r_edx = R32((u32)(r_ebp+0xfffffb0cu));
    /* 0066e158: mov dword ptr [ebp - 0x494], edx */ W32((u32)(r_ebp+0xfffffb6cu), r_edx);
    /* 0066e15e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e165: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e16b: mov ecx, dword ptr [ebp - 0x494] */ r_ecx = R32((u32)(r_ebp+0xfffffb6cu));
    /* 0066e171: mov dword ptr [eax + 0x1f4], ecx */ W32((u32)(r_eax+0x1f4u), r_ecx);
    /* 0066e177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e179: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e17f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e184u); f_005f53c0();
    /* 0066e184: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e188: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e18e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e190: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e196: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0066e199: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e19bu); call_ind(t); }
    /* 0066e19b: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e19e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e19f: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e1a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066e1a7: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e1ad: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066e1b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e1b2u); call_ind(t); }
    /* 0066e1b2: add eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e1bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e1be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e1c4: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0066e1ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e1ccu); call_ind(t); }
    /* 0066e1cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1cd: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e1d3: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0066e1d9: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66e1deu); f_005eae80();
    /* 0066e1de: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e1e4: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0066e1ea: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e1f0: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0066e1f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066e1f8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066e1fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e1fdu); call_ind(t); }
    /* 0066e1fd: mov dword ptr [ebp - 0x418], 1 */ W32((u32)(r_ebp+0xfffffbe8u), 0x1u);
    /* 0066e207: jmp 0x66e218 */ goto L_0066e218;
L_0066e209:; BB(0x0066e209);
    /* 0066e209: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e20f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e212: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
L_0066e218:; BB(0x0066e218);
    /* 0066e218: cmp dword ptr [ebp - 0x418], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e21f: jge 0x66e56c */ if ((fS==fO)) goto L_0066e56c;
L_0066e225:; BB(0x0066e225);
    /* 0066e225: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e22a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e22fu); f_00686d82();
    /* 0066e22f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e232: mov dword ptr [ebp - 0x4a0], eax */ W32((u32)(r_ebp+0xfffffb60u), r_eax);
    /* 0066e238: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0066e23f: cmp dword ptr [ebp - 0x4a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e246: je 0x66e25b */ if (fZ) goto L_0066e25b;
L_0066e248:; BB(0x0066e248);
    /* 0066e248: mov ecx, dword ptr [ebp - 0x4a0] */ r_ecx = R32((u32)(r_ebp+0xfffffb60u));
    /* 0066e24e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66e253u); f_005ec5a0();
    /* 0066e253: mov dword ptr [ebp - 0x4f8], eax */ W32((u32)(r_ebp+0xfffffb08u), r_eax);
    /* 0066e259: jmp 0x66e265 */ goto L_0066e265;
L_0066e25b:; BB(0x0066e25b);
    /* 0066e25b: mov dword ptr [ebp - 0x4f8], 0 */ W32((u32)(r_ebp+0xfffffb08u), 0x0u);
L_0066e265:; BB(0x0066e265);
    /* 0066e265: mov edx, dword ptr [ebp - 0x4f8] */ r_edx = R32((u32)(r_ebp+0xfffffb08u));
    /* 0066e26b: mov dword ptr [ebp - 0x49c], edx */ W32((u32)(r_ebp+0xfffffb64u), r_edx);
    /* 0066e271: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e278: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e27e: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e284: mov edx, dword ptr [ebp - 0x49c] */ r_edx = R32((u32)(r_ebp+0xfffffb64u));
    /* 0066e28a: mov dword ptr [ecx + eax*4 + 0x178], edx */ W32((u32)(r_ecx+r_eax*4+0x178u), r_edx);
    /* 0066e291: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e293: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e295: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e29b: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e2a0u); f_005f53c0();
    /* 0066e2a0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2a4: mov esi, dword ptr [ebp - 0x418] */ r_esi = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e2aa: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066e2ad: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066e2b0: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e2b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066e2b8: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e2be: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066e2c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e2c3u); call_ind(t); }
    /* 0066e2c3: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066e2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2cb: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e2d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e2d3: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e2d9: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066e2dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e2deu); call_ind(t); }
    /* 0066e2de: add eax, 0xa6 */ {  u32 a = r_eax; u32 b = 0xa6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e2e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2e4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2e6: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2eb: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2f0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2f5: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e2fb: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e301: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0066e308: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66e30du); f_005ec8f0();
    /* 0066e30d: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e313: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e319: mov ecx, dword ptr [eax + edx*4 + 0x178] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0066e320: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e326: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e32c: mov edx, dword ptr [eax + edx*4 + 0x178] */ r_edx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0066e333: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066e335: mov ecx, edx */ r_ecx = r_edx;
    /* 0066e337: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0066e33a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e33cu); call_ind(t); }
    /* 0066e33c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e341: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e346u); f_00686d82();
    /* 0066e346: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e349: mov dword ptr [ebp - 0x4a8], eax */ W32((u32)(r_ebp+0xfffffb58u), r_eax);
    /* 0066e34f: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0066e356: cmp dword ptr [ebp - 0x4a8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e35d: je 0x66e372 */ if (fZ) goto L_0066e372;
L_0066e35f:; BB(0x0066e35f);
    /* 0066e35f: mov ecx, dword ptr [ebp - 0x4a8] */ r_ecx = R32((u32)(r_ebp+0xfffffb58u));
    /* 0066e365: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66e36au); f_005ec5a0();
    /* 0066e36a: mov dword ptr [ebp - 0x4fc], eax */ W32((u32)(r_ebp+0xfffffb04u), r_eax);
    /* 0066e370: jmp 0x66e37c */ goto L_0066e37c;
L_0066e372:; BB(0x0066e372);
    /* 0066e372: mov dword ptr [ebp - 0x4fc], 0 */ W32((u32)(r_ebp+0xfffffb04u), 0x0u);
L_0066e37c:; BB(0x0066e37c);
    /* 0066e37c: mov eax, dword ptr [ebp - 0x4fc] */ r_eax = R32((u32)(r_ebp+0xfffffb04u));
    /* 0066e382: mov dword ptr [ebp - 0x4a4], eax */ W32((u32)(r_ebp+0xfffffb5cu), r_eax);
    /* 0066e388: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e38f: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e395: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e39b: mov eax, dword ptr [ebp - 0x4a4] */ r_eax = R32((u32)(r_ebp+0xfffffb5cu));
    /* 0066e3a1: mov dword ptr [edx + ecx*4 + 0x1a0], eax */ W32((u32)(r_edx+r_ecx*4+0x1a0u), r_eax);
    /* 0066e3a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3aa: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3ac: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e3b2: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e3b7u); f_005f53c0();
    /* 0066e3b7: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3bb: mov esi, dword ptr [ebp - 0x418] */ r_esi = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e3c1: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066e3c4: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066e3c7: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e3cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e3cf: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e3d5: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066e3d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e3dau); call_ind(t); }
    /* 0066e3da: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066e3e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3e2: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e3e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e3ea: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e3f0: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066e3f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e3f5u); call_ind(t); }
    /* 0066e3f5: add eax, 0xa6 */ {  u32 a = r_eax; u32 b = 0xa6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e3fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3fb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3fd: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e402: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e407: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e40c: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e412: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e418: mov ecx, dword ptr [ecx + eax*4 + 0x1a0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1a0u));
    /* 0066e41f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66e424u); f_005ec8f0();
    /* 0066e424: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e42a: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e430: mov ecx, dword ptr [eax + edx*4 + 0x1a0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1a0u));
    /* 0066e437: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e43d: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e443: mov edx, dword ptr [eax + edx*4 + 0x1a0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1a0u));
    /* 0066e44a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066e44c: mov ecx, edx */ r_ecx = r_edx;
    /* 0066e44e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0066e451: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e453u); call_ind(t); }
    /* 0066e453: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e458: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e45du); f_00686d82();
    /* 0066e45d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e460: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 0066e466: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0066e46d: cmp dword ptr [ebp - 0x4b0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e474: je 0x66e489 */ if (fZ) goto L_0066e489;
L_0066e476:; BB(0x0066e476);
    /* 0066e476: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0066e47c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66e481u); f_005ec5a0();
    /* 0066e481: mov dword ptr [ebp - 0x500], eax */ W32((u32)(r_ebp+0xfffffb00u), r_eax);
    /* 0066e487: jmp 0x66e493 */ goto L_0066e493;
L_0066e489:; BB(0x0066e489);
    /* 0066e489: mov dword ptr [ebp - 0x500], 0 */ W32((u32)(r_ebp+0xfffffb00u), 0x0u);
L_0066e493:; BB(0x0066e493);
    /* 0066e493: mov eax, dword ptr [ebp - 0x500] */ r_eax = R32((u32)(r_ebp+0xfffffb00u));
    /* 0066e499: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0066e49f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e4a6: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e4ac: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e4b2: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0066e4b8: mov dword ptr [edx + ecx*4 + 0x1c8], eax */ W32((u32)(r_edx+r_ecx*4+0x1c8u), r_eax);
    /* 0066e4bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e4c1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e4c3: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e4c9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e4ceu); f_005f53c0();
    /* 0066e4ce: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e4d2: mov esi, dword ptr [ebp - 0x418] */ r_esi = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e4d8: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066e4db: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066e4de: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e4e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e4e6: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e4ec: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066e4ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e4f1u); call_ind(t); }
    /* 0066e4f1: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066e4f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e4f9: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e4ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066e501: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e507: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066e50a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e50cu); call_ind(t); }
    /* 0066e50c: add eax, 0x82 */ {  u32 a = r_eax; u32 b = 0x82u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e512: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e514: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e516: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e51b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e520: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e526: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e52c: mov ecx, dword ptr [ecx + eax*4 + 0x1c8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0066e533: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66e538u); f_005ec8f0();
    /* 0066e538: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e53e: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e544: mov ecx, dword ptr [eax + edx*4 + 0x1c8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0066e54b: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e551: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e557: mov edx, dword ptr [eax + edx*4 + 0x1c8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0066e55e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066e560: mov ecx, edx */ r_ecx = r_edx;
    /* 0066e562: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0066e565: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e567u); call_ind(t); }
    /* 0066e567: jmp 0x66e209 */ goto L_0066e209;
L_0066e56c:; BB(0x0066e56c);
    /* 0066e56c: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 0066e576: jmp 0x66e587 */ goto L_0066e587;
L_0066e578:; BB(0x0066e578);
    /* 0066e578: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e581: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
L_0066e587:; BB(0x0066e587);
    /* 0066e587: cmp dword ptr [ebp - 0x418], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e58e: jge 0x66e79e */ if ((fS==fO)) goto L_0066e79e;
L_0066e594:; BB(0x0066e594);
    /* 0066e594: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e59a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e5a0: cmp dword ptr [edx + ecx*4 + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e5a5: jl 0x66e799 */ if ((fS!=fO)) goto L_0066e799;
L_0066e5ab:; BB(0x0066e5ab);
    /* 0066e5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e5ac: mov eax, esp */ r_eax = r_esp;
    /* 0066e5ae: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0066e5b5: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0066e5b8: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0066e5be: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0066e5c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e5c3: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e5c9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e5cf: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0066e5d3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0066e5d5: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0066e5d7: add edx, 0x9b */ {  u32 a = r_edx; u32 b = 0x9bu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066e5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e5de: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e5e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e5ea: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0066e5ee: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e5f4: mov ecx, dword ptr [eax + edx*4 + 0x178] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0066e5fb: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x66e600u); f_005ecd00();
    /* 0066e600: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e606: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e60c: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0066e610: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e616: mov edx, dword ptr [ecx + eax*4 + 0x178] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0066e61d: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e623: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e629: mov eax, dword ptr [ecx + eax*4 + 0x64] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0066e62d: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e633: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0066e63a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066e63c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066e63f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e641u); call_ind(t); }
    /* 0066e641: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e642: mov ecx, esp */ r_ecx = r_esp;
    /* 0066e644: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0066e64b: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0066e64e: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0066e653: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0066e656: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e658: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e65e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e664: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0066e668: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0066e66a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0066e66c: add eax, 0x9b */ {  u32 a = r_eax; u32 b = 0x9bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e672: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e678: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e67e: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0066e682: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e688: mov ecx, dword ptr [ecx + eax*4 + 0x1a0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1a0u));
    /* 0066e68f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x66e694u); f_005ecd00();
    /* 0066e694: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e69a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066e69f: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0066e6a3: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e6a9: mov eax, dword ptr [edx + ecx*4 + 0x1a0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066e6b0: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e6b6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066e6bc: mov ecx, dword ptr [edx + ecx*4 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0066e6c0: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e6c6: mov ecx, dword ptr [edx + ecx*4 + 0x1a0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066e6cd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066e6cf: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066e6d2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e6d4u); call_ind(t); }
    /* 0066e6d4: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e6da: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e6e0: cmp dword ptr [ecx + eax*4 + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e6e5: je 0x66e766 */ if (fZ) goto L_0066e766;
L_0066e6e7:; BB(0x0066e6e7);
    /* 0066e6e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e6e8: mov edx, esp */ r_edx = r_esp;
    /* 0066e6ea: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0066e6f0: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0066e6f3: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0066e6f9: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0066e6fc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e6fe: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 0066e703: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e709: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066e70e: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0066e712: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e718: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0066e71f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x66e724u); f_005ecd00();
    /* 0066e724: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e72a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e730: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0066e734: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e73a: mov ecx, dword ptr [eax + edx*4 + 0x1c8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0066e741: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e747: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066e74c: mov edx, dword ptr [eax + edx*4 + 0x64] */ r_edx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0066e750: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e756: mov edx, dword ptr [eax + edx*4 + 0x1c8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0066e75d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066e75f: mov ecx, edx */ r_ecx = r_edx;
    /* 0066e761: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066e764: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66e766u); call_ind(t); }
L_0066e766:; BB(0x0066e766);
    /* 0066e766: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066e76c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066e772: cmp dword ptr [ecx + eax*4 + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e777: jne 0x66e799 */ if (!fZ) goto L_0066e799;
L_0066e779:; BB(0x0066e779);
    /* 0066e779: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e77e: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e783: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e788: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e78e: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 0066e794: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x66e799u); f_005f6490();
L_0066e799:; BB(0x0066e799);
    /* 0066e799: jmp 0x66e578 */ goto L_0066e578;
L_0066e79e:; BB(0x0066e79e);
    /* 0066e79e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e7a8u); f_00686d82();
    /* 0066e7a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e7ab: mov dword ptr [ebp - 0x4b8], eax */ W32((u32)(r_ebp+0xfffffb48u), r_eax);
    /* 0066e7b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0066e7b8: cmp dword ptr [ebp - 0x4b8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e7bf: je 0x66e7d4 */ if (fZ) goto L_0066e7d4;
L_0066e7c1:; BB(0x0066e7c1);
    /* 0066e7c1: mov ecx, dword ptr [ebp - 0x4b8] */ r_ecx = R32((u32)(r_ebp+0xfffffb48u));
    /* 0066e7c7: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66e7ccu); f_005ec5a0();
    /* 0066e7cc: mov dword ptr [ebp - 0x504], eax */ W32((u32)(r_ebp+0xfffffafcu), r_eax);
    /* 0066e7d2: jmp 0x66e7de */ goto L_0066e7de;
L_0066e7d4:; BB(0x0066e7d4);
    /* 0066e7d4: mov dword ptr [ebp - 0x504], 0 */ W32((u32)(r_ebp+0xfffffafcu), 0x0u);
L_0066e7de:; BB(0x0066e7de);
    /* 0066e7de: mov eax, dword ptr [ebp - 0x504] */ r_eax = R32((u32)(r_ebp+0xfffffafcu));
    /* 0066e7e4: mov dword ptr [ebp - 0x4b4], eax */ W32((u32)(r_ebp+0xfffffb4cu), r_eax);
    /* 0066e7ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e7f1: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e7f7: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0066e7fd: mov dword ptr [ecx + 0x204], edx */ W32((u32)(r_ecx+0x204u), r_edx);
    /* 0066e803: push 0x6e0db8 */ { u32 v = 0x6e0db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e808: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66e80du); f_00630f40();
    /* 0066e80d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e811: push 0x6e0db4 */ { u32 v = 0x6e0db4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e816: lea eax, [ebp - 0x454] */ r_eax = (u32)(r_ebp+0xfffffbacu);
    /* 0066e81c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e81d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66e823u); call_ind(t); }
    /* 0066e823: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e826: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e828: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e82a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e830: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e835u); f_005f53c0();
    /* 0066e835: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e839: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e83f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e841: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e847: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066e84a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e84cu); call_ind(t); }
    /* 0066e84c: add eax, 0x17c */ {  u32 a = r_eax; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e852: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e858: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e85a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e860: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066e863: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e865u); call_ind(t); }
    /* 0066e865: add eax, 0x186 */ {  u32 a = r_eax; u32 b = 0x186u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e86b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e86d: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e872: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e877: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 0066e87d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e87e: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e884: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0066e88a: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66e88fu); f_005ec8f0();
    /* 0066e88f: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e895: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066e89b: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e8a1: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0066e8a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e8a9: mov ecx, eax */ r_ecx = r_eax;
    /* 0066e8ab: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066e8ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e8b0u); call_ind(t); }
    /* 0066e8b0: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066e8b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e8b8: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 0066e8be: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0066e8c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e8c6u); call_ind(t); }
    /* 0066e8c6: mov dword ptr [ebp - 0x45c], eax */ W32((u32)(r_ebp+0xfffffba4u), r_eax);
    /* 0066e8cc: cmp dword ptr [ebp - 0x45c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffba4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e8d3: je 0x66e9c1 */ if (fZ) goto L_0066e9c1;
L_0066e8d9:; BB(0x0066e8d9);
    /* 0066e8d9: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e8de: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66e8e3u); f_00686d82();
    /* 0066e8e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e8e6: mov dword ptr [ebp - 0x4c0], eax */ W32((u32)(r_ebp+0xfffffb40u), r_eax);
    /* 0066e8ec: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0066e8f3: cmp dword ptr [ebp - 0x4c0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e8fa: je 0x66e90f */ if (fZ) goto L_0066e90f;
L_0066e8fc:; BB(0x0066e8fc);
    /* 0066e8fc: mov ecx, dword ptr [ebp - 0x4c0] */ r_ecx = R32((u32)(r_ebp+0xfffffb40u));
    /* 0066e902: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66e907u); f_005ec5a0();
    /* 0066e907: mov dword ptr [ebp - 0x508], eax */ W32((u32)(r_ebp+0xfffffaf8u), r_eax);
    /* 0066e90d: jmp 0x66e919 */ goto L_0066e919;
L_0066e90f:; BB(0x0066e90f);
    /* 0066e90f: mov dword ptr [ebp - 0x508], 0 */ W32((u32)(r_ebp+0xfffffaf8u), 0x0u);
L_0066e919:; BB(0x0066e919);
    /* 0066e919: mov ecx, dword ptr [ebp - 0x508] */ r_ecx = R32((u32)(r_ebp+0xfffffaf8u));
    /* 0066e91f: mov dword ptr [ebp - 0x4bc], ecx */ W32((u32)(r_ebp+0xfffffb44u), r_ecx);
    /* 0066e925: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e92c: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e932: mov eax, dword ptr [ebp - 0x4bc] */ r_eax = R32((u32)(r_ebp+0xfffffb44u));
    /* 0066e938: mov dword ptr [edx + 0x208], eax */ W32((u32)(r_edx+0x208u), r_eax);
    /* 0066e93e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e940: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e942: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e948: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66e94du); f_005f53c0();
    /* 0066e94d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e951: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e957: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e959: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e95f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066e962: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e964u); call_ind(t); }
    /* 0066e964: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e968: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e96e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e970: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e976: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066e979: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e97bu); call_ind(t); }
    /* 0066e97b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e97c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e97e: push 0x257 */ { u32 v = 0x257u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e983: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e988: mov ecx, dword ptr [ebp - 0x45c] */ r_ecx = R32((u32)(r_ebp+0xfffffba4u));
    /* 0066e98e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e98f: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e995: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0066e99b: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66e9a0u); f_005ec8f0();
    /* 0066e9a0: mov eax, dword ptr [ebp - 0x4d4] */ r_eax = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e9a6: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0066e9ac: mov edx, dword ptr [ebp - 0x4d4] */ r_edx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0066e9b2: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0066e9b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066e9ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0066e9bc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066e9bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66e9c1u); call_ind(t); }
L_0066e9c1:; BB(0x0066e9c1);
    /* 0066e9c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066e9c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066e9cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e9cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066e9cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066e9ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066e9d1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e9d3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66e9d8u); f_00686d72();
    /* 0066e9d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0066e9da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e9db: ret  */ FN_RET(0x0066d7f0); r_esp += 4; return;
}

