#include "protos.h"

void f_00677f70(void) /* CardBacksListText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677f70);
    /* 00677f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00677f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677f75: push 0x6ad737 */ { u32 v = 0x6ad737u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f81: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677f84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00677f89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00677f8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00677f95: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00677f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677f9d: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x677fa2u); f_005fb720();
    /* 00677fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677fa4: jne 0x677fbd */ if (!fZ) goto L_00677fbd;
L_00677fa6:; BB(0x00677fa6);
    /* 00677fa6: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 00677fab: push 0x6e1e24 */ { u32 v = 0x6e1e24u; r_esp -= 4; W32(r_esp, v); }
    /* 00677fb0: push 0x6e1be4 */ { u32 v = 0x6e1be4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677fb5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x677fbau); f_005e9f20();
    /* 00677fba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00677fbd:; BB(0x00677fbd);
    /* 00677fbd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00677fc4: jmp 0x677fcf */ goto L_00677fcf;
L_00677fc6:; BB(0x00677fc6);
    /* 00677fc6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677fc9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00677fcc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00677fcf:; BB(0x00677fcf);
    /* 00677fcf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677fd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677fd7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677fdd: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00677fe3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677fe5u); call_ind(t); }
    /* 00677fe5: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677fe8: jge 0x678097 */ if ((fS==fO)) goto L_00678097;
L_00677fee:; BB(0x00677fee);
    /* 00677fee: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ff0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x677ff5u); f_00686d82();
    /* 00677ff5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677ff8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00677ffb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678002: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678006: je 0x678021 */ if (fZ) goto L_00678021;
L_00678008:; BB(0x00678008);
    /* 00678008: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067800b: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x678010u); f_00629ab0();
    /* 00678010: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00678013: mov dword ptr [eax], 0x6e1e14 */ W32((u32)(r_eax), 0x6e1e14u);
    /* 00678019: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067801c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067801f: jmp 0x678028 */ goto L_00678028;
L_00678021:; BB(0x00678021);
    /* 00678021: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00678028:; BB(0x00678028);
    /* 00678028: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067802b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067802e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678035: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678038: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067803b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067803e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067803f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00678045: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678047: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067804d: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 00678053: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678055u); call_ind(t); }
    /* 00678055: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678058: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0067805b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067805d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067805f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678062: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00678065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678066: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067806c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067806e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00678074: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 0067807a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67807cu); call_ind(t); }
    /* 0067807c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067807d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678081: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678083: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678086: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x67808bu); f_005fb720();
    /* 0067808b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067808d: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x678092u); f_00628980();
    /* 00678092: jmp 0x677fc6 */ goto L_00677fc6;
L_00678097:; BB(0x00678097);
    /* 00678097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678099: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067809c: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6780a1u); f_005fb720();
    /* 006780a1: mov ecx, eax */ r_ecx = r_eax;
    /* 006780a3: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x6780a8u); f_00628d80();
    /* 006780a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006780ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006780b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006780b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006780b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006780b6: ret  */ FN_RET(0x00677f70); r_esp += 4; return;
}

