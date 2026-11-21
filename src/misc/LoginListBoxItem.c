#include "protos.h"

void f_0065e7f0(void) /* LoginListBoxItem::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e7f0);
    /* 0065e7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7f5: push 0x6ac938 */ { u32 v = 0x6ac938u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e801: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e805: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065e80a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e80c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e80d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065e810: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065e816: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065e819: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0065e81c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065e81f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e821: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65e826u); f_00686d82();
    /* 0065e826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e829: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065e82c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e833: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e837: je 0x65e852 */ if (fZ) goto L_0065e852;
L_0065e839:; BB(0x0065e839);
    /* 0065e839: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e83c: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x65e841u); f_00629ab0();
    /* 0065e841: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e844: mov dword ptr [ecx], 0x6decf8 */ W32((u32)(r_ecx), 0x6decf8u);
    /* 0065e84a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e84d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065e850: jmp 0x65e859 */ goto L_0065e859;
L_0065e852:; BB(0x0065e852);
    /* 0065e852: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065e859:; BB(0x0065e859);
    /* 0065e859: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e85c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065e85f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e866: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e869: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065e86c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e86e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e870: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065e873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e874: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e878: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e87a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e87d: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e882u); f_005fb720();
    /* 0065e882: mov ecx, eax */ r_ecx = r_eax;
    /* 0065e884: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x65e889u); f_00628980();
    /* 0065e889: movsx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x14u));
    /* 0065e88d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e890: je 0x65e8b4 */ if (fZ) goto L_0065e8b4;
L_0065e892:; BB(0x0065e892);
    /* 0065e892: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0065e895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e896: call 0x663bb0 */ r_esp -= 4; W32(r_esp, 0x65e89bu); f_00663bb0();
    /* 0065e89b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e89e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065e8a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e8a3: jne 0x65e8b4 */ if (!fZ) goto L_0065e8b4;
L_0065e8a5:; BB(0x0065e8a5);
    /* 0065e8a5: mov byte ptr [ebp + 0x14], 2 */ W8((u32)(r_ebp+0x14u), 0x2u);
    /* 0065e8a9: mov byte ptr [ebp + 0x18], 0 */ W8((u32)(r_ebp+0x18u), 0x0u);
    /* 0065e8ad: mov dword ptr [ebp - 0x10], 0x6b27f8 */ W32((u32)(r_ebp+0xfffffff0u), 0x6b27f8u);
L_0065e8b4:; BB(0x0065e8b4);
    /* 0065e8b4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0065e8b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e8bb: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065e8be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8bf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65e8c4u); f_00686d8e();
    /* 0065e8c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e8c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e8ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e8ce: add ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e8d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8d2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65e8d7u); f_00686d8e();
    /* 0065e8d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e8da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e8dd: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0065e8e0: mov byte ptr [edx + 0x3a], al */ W8((u32)(r_edx+0x3au), (u8)r_eax);
    /* 0065e8e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e8e6: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0065e8e9: mov byte ptr [ecx + 0x3b], dl */ W8((u32)(r_ecx+0x3bu), (u8)r_edx);
    /* 0065e8ec: movsx esi, byte ptr [ebp + 0x18] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0x18u));
    /* 0065e8f0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065e8f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e8f7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e8fd: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0065e903: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e905u); call_ind(t); }
    /* 0065e905: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e907: jl 0x65e910 */ if ((fS!=fO)) goto L_0065e910;
L_0065e909:; BB(0x0065e909);
    /* 0065e909: mov byte ptr [0x795fbe], 1 */ W8((u32)(0x795fbeu), 0x1u);
L_0065e910:; BB(0x0065e910);
    /* 0065e910: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e913: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e91a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e91b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065e91c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e91e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e91f: ret 0x14 */ FN_RET(0x0065e7f0); r_esp += 24; return;
}

void f_006611d0(void) /* LoginListBoxItem::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006611d0);
    /* 006611d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006611d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006611d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006611d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006611d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006611da: mov dword ptr [eax], 0x6decf8 */ W32((u32)(r_eax), 0x6decf8u);
    /* 006611e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006611e3: call 0x629b00 */ r_esp -= 4; W32(r_esp, 0x6611e8u); f_00629b00();
    /* 006611e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006611eb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006611ee: je 0x6611fc */ if (fZ) goto L_006611fc;
L_006611f0:; BB(0x006611f0);
    /* 006611f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006611f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006611f4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6611f9u); f_00686cae();
    /* 006611f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006611fc:; BB(0x006611fc);
    /* 006611fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006611ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00661201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661202: ret 4 */ FN_RET(0x006611d0); r_esp += 8; return;
}

