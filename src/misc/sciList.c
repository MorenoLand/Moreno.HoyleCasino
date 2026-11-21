#include "protos.h"

void f_0060c5f0(void) /* sciList::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c5f0);
    /* 0060c5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5f5: push 0x6aad88 */ { u32 v = 0x6aad88u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c601: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060c609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c60b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c60c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060c60f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060c615: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060c618: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c61b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x60c620u); f_005e9e20();
    /* 0060c620: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c627: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c62a: mov dword ptr [eax], 0x6d827c */ W32((u32)(r_eax), 0x6d827cu);
    /* 0060c630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c633: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0060c63a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c63d: mov dword ptr [edx + 8], 0x20 */ W32((u32)(r_edx+0x8u), 0x20u);
    /* 0060c644: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c649: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60c64eu); f_00686d82();
    /* 0060c64e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c651: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060c654: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c657: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c65a: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0060c65d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c664: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c667: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0060c66a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c66d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0060c670: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0060c673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c674: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60c679u); f_00686fa2();
    /* 0060c679: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c67c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c683: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c689: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c691: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c694: ret  */ FN_RET(0x0060c5f0); r_esp += 4; return;
}

void f_0060c6a0(void) /* sciList::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c6a0);
    /* 0060c6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6a5: push 0x6aadab */ { u32 v = 0x6aadabu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6b1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c6b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060c6b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060c6bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060c6c5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060c6c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c6cb: mov dword ptr [eax], 0x6d827c */ W32((u32)(r_eax), 0x6d827cu);
    /* 0060c6d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c6d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c6db: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x60c6e0u); f_0060ca10();
    /* 0060c6e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c6e3: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c6e7: je 0x60c6fe */ if (fZ) goto L_0060c6fe;
L_0060c6e9:; BB(0x0060c6e9);
    /* 0060c6e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c6ec: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0060c6ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060c6f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c6f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6f6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x60c6fbu); f_00686cae();
    /* 0060c6fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060c6fe:; BB(0x0060c6fe);
    /* 0060c6fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c705: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c708: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x60c70du); f_005e9e40();
    /* 0060c70d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c717: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c718: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c71a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c71b: ret  */ FN_RET(0x0060c6a0); r_esp += 4; return;
}

