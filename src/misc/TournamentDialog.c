#include "protos.h"

void f_005ce650(void) /* TournamentDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce650);
    /* 005ce650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce651: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce655: push 0x6a8c2e */ { u32 v = 0x6a8c2eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce65a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ce660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce662: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ce667: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce66a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ce66d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ce673: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ce676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce678: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce67a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce67d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5ce682u); f_005f71f0();
    /* 005ce682: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ce689: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce68c: mov dword ptr [eax], 0x6d2d64 */ W32((u32)(r_eax), 0x6d2d64u);
    /* 005ce692: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce694: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce699: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce69c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5ce6a1u); f_005f83d0();
    /* 005ce6a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce6a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ce6a7: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 005ce6ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ce6b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ce6b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce6ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce6c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce6c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce6c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce6c5: ret 8 */ FN_RET(0x005ce650); r_esp += 12; return;
}

void f_005ce6f0(void) /* TournamentDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce6f0);
    /* 005ce6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce6f3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce6f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ce6fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce700: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ce703: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005ce709: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce70f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5ce714u); f_006375b0();
    /* 005ce714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce715: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 005ce718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce719: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ce71f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce721: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ce727: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005ce72d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce72fu); call_ind(t); }
    /* 005ce72f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ce731: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005ce734: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005ce737: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce738: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce73e: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ce744: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce745: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ce74b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ce74d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce753: mov edx, dword ptr [eax + 0x338] */ r_edx = R32((u32)(r_eax+0x338u));
    /* 005ce759: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ce75bu); call_ind(t); }
    /* 005ce75b: push 0x6d2dbc */ { u32 v = 0x6d2dbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce760: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce765u); f_00630f40();
    /* 005ce765: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce769: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005ce76c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce76d: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5ce772u); f_00686ec6();
    /* 005ce772: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce775: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce777: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce779: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce77b: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005ce77e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce77f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce785: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5ce78au); f_005f73e0();
    /* 005ce78a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce78c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce78e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce790: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce792: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce794: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce799: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce79eu); f_00630f40();
    /* 005ce79e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7a4: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7a9: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7ab: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7b4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce7ba: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5ce7bfu); f_005f9de0();
    /* 005ce7bf: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7c3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7c5: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7c7: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7c9: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7ce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce7d3u); f_00630f40();
    /* 005ce7d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce7d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7d9: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7de: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7e3: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7ec: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce7f2: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5ce7f7u); f_005f9de0();
    /* 005ce7f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7fd: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce802: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce804: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce808: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce80d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce80f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce811: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce816: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce81a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce820: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5ce825u); f_005fa880();
    /* 005ce825: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce827: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce829: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce82b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce830: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce835: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce83a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce83c: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce841: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce843: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce845: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce854: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5ce859u); f_005fa880();
    /* 005ce859: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ce860: jmp 0x5ce86b */ goto L_005ce86b;
L_005ce862:; BB(0x005ce862);
    /* 005ce862: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce865: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ce868: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005ce86b:; BB(0x005ce86b);
    /* 005ce86b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce86f: jge 0x5ce929 */ if ((fS==fO)) goto L_005ce929;
L_005ce875:; BB(0x005ce875);
    /* 005ce875: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce879: push 0x6d2da4 */ { u32 v = 0x6d2da4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce87e: call 0x630f80 */ r_esp -= 4; W32(r_esp, 0x5ce883u); f_00630f80();
    /* 005ce883: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce887: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005ce88a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce88b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ce891u); call_ind(t); }
    /* 005ce891: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce894: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce896: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce898: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce89a: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce89c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce89e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8a0: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005ce8a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce8a9: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ce8ac: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce8af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8b0: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8b2: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce8bc: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce8bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8c4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce8ca: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5ce8cfu); f_005f9ff0();
    /* 005ce8cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8d3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce8d9: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5ce8deu); f_005fb3a0();
    /* 005ce8de: mov ecx, eax */ r_ecx = r_eax;
    /* 005ce8e0: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5ce8e5u); f_006065d0();
    /* 005ce8e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce8e8: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005ce8eb: cmp eax, dword ptr [edx*4 + 0x75d33c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x75d33cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce8f2: jge 0x5ce924 */ if ((fS==fO)) goto L_005ce924;
L_005ce8f4:; BB(0x005ce8f4);
    /* 005ce8f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce8f9: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce8fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8fd: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce903: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x5ce908u); f_005fb3f0();
    /* 005ce908: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005ce90e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ce914: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ce916: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ce91c: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005ce922: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ce924u); call_ind(t); }
L_005ce924:; BB(0x005ce924);
    /* 005ce924: jmp 0x5ce862 */ goto L_005ce862;
L_005ce929:; BB(0x005ce929);
    /* 005ce929: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce92f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ce935: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce936: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ce93c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ce93e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce944: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 005ce94a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ce94cu); call_ind(t); }
    /* 005ce94c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005ce94f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce953: je 0x5ce96c */ if (fZ) goto L_005ce96c;
L_005ce955:; BB(0x005ce955);
    /* 005ce955: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ce95b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce95c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005ce95f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce961: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005ce964: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005ce96a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce96cu); call_ind(t); }
L_005ce96c:; BB(0x005ce96c);
    /* 005ce96c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce96f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ce971: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ce976u); f_00686d72();
    /* 005ce976: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce979: ret  */ FN_RET(0x005ce6f0); r_esp += 4; return;
}

void f_005cea60(void) /* TournamentDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cea60);
    /* 005cea60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cea61: mov ebp, esp */ r_ebp = r_esp;
    /* 005cea63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cea66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cea69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cea6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cea6f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cea73: je 0x5cea84 */ if (fZ) goto L_005cea84;
L_005cea75:; BB(0x005cea75);
    /* 005cea75: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cea79: je 0x5ceb42 */ if (fZ) goto L_005ceb42;
L_005cea7f:; BB(0x005cea7f);
    /* 005cea7f: jmp 0x5ceb4d */ goto L_005ceb4d;
L_005cea84:; BB(0x005cea84);
    /* 005cea84: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005cea8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cea8c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005cea92: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 005cea98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cea9au); call_ind(t); }
    /* 005cea9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cea9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cea9f: jne 0x5ceab1 */ if (!fZ) goto L_005ceab1;
L_005ceaa1:; BB(0x005ceaa1);
    /* 005ceaa1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ceaa7: call 0x5dbe20 */ r_esp -= 4; W32(r_esp, 0x5ceaacu); f_005dbe20();
    /* 005ceaac: jmp 0x5ceb4d */ goto L_005ceb4d;
L_005ceab1:; BB(0x005ceab1);
    /* 005ceab1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceab4: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005ceaba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceabb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceabe: call 0x5ce980 */ r_esp -= 4; W32(r_esp, 0x5ceac3u); f_005ce980();
    /* 005ceac3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ceac9: call 0x5dbe20 */ r_esp -= 4; W32(r_esp, 0x5ceaceu); f_005dbe20();
    /* 005ceace: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005cead4: mov byte ptr [ecx + 0x4ee9], 1 */ W8((u32)(r_ecx+0x4ee9u), 0x1u);
    /* 005ceadb: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005ceae1: mov byte ptr [edx + 0x4eea], 0 */ W8((u32)(r_edx+0x4eeau), 0x0u);
    /* 005ceae8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceaea: push 0x6d2e40 */ { u32 v = 0x6d2e40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceaef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ceaf4u); f_00630f40();
    /* 005ceaf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceaf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceaf8: push 0x6d2e18 */ { u32 v = 0x6d2e18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceafd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ceb02u); f_00630f40();
    /* 005ceb02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceb05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb06: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5ceb0bu); f_0062ff10();
    /* 005ceb0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceb0e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceb11: jne 0x5ceb1f */ if (!fZ) goto L_005ceb1f;
L_005ceb13:; BB(0x005ceb13);
    /* 005ceb13: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005ceb18: mov byte ptr [eax + 0x4eea], 1 */ W8((u32)(r_eax+0x4eeau), 0x1u);
L_005ceb1f:; BB(0x005ceb1f);
    /* 005ceb1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ceb24: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005ceb2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb2b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005ceb30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ceb32: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ceb38: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005ceb3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ceb40u); call_ind(t); }
    /* 005ceb40: jmp 0x5ceb4d */ goto L_005ceb4d;
L_005ceb42:; BB(0x005ceb42);
    /* 005ceb42: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ceb48: call 0x5dbe20 */ r_esp -= 4; W32(r_esp, 0x5ceb4du); f_005dbe20();
L_005ceb4d:; BB(0x005ceb4d);
    /* 005ceb4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceb4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceb50: ret 4 */ FN_RET(0x005cea60); r_esp += 8; return;
}

