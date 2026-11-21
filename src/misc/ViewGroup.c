#include "protos.h"

void f_00518900(void) /* ViewGroup::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00518900);
    /* 00518900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518901: mov ebp, esp */ r_ebp = r_esp;
    /* 00518903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00518907: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051890a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051890b: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0051890e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051890f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518912: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x518917u); f_005f71f0();
    /* 00518917: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051891a: mov dword ptr [edx], 0x6c13dc */ W32((u32)(r_edx), 0x6c13dcu);
    /* 00518920: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518923: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 0051892d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518930: mov dword ptr [ecx + 0x1d8], 0 */ W32((u32)(r_ecx+0x1d8u), 0x0u);
    /* 0051893a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051893d: mov dword ptr [edx + 0x1dc], 0 */ W32((u32)(r_edx+0x1dcu), 0x0u);
    /* 00518947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051894a: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 00518954: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518957: mov dword ptr [ecx + 0x1c0], 0 */ W32((u32)(r_ecx+0x1c0u), 0x0u);
    /* 00518961: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518964: mov dword ptr [edx + 0x1c8], 0 */ W32((u32)(r_edx+0x1c8u), 0x0u);
    /* 0051896e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518971: mov esp, ebp */ r_esp = r_ebp;
    /* 00518973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518974: ret 8 */ FN_RET(0x00518900); r_esp += 12; return;
}

void f_00518980(void) /* ViewGroup::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00518980);
    /* 00518980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518981: mov ebp, esp */ r_ebp = r_esp;
    /* 00518983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518985: push 0x6a3c68 */ { u32 v = 0x6a3c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0051898a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00518990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518991: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00518994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00518999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051899b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051899c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051899f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005189a5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005189a8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005189ab: mov dword ptr [eax], 0x6c13dc */ W32((u32)(r_eax), 0x6c13dcu);
    /* 005189b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005189b8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005189bb: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005189c2: je 0x518a03 */ if (fZ) goto L_00518a03;
L_005189c4:; BB(0x005189c4);
    /* 005189c4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005189c7: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005189cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005189d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005189d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005189d6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005189da: je 0x5189ef */ if (fZ) goto L_005189ef;
L_005189dc:; BB(0x005189dc);
    /* 005189dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005189de: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005189e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005189e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005189e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005189e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5189eau); call_ind(t); }
    /* 005189ea: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005189ed: jmp 0x5189f6 */ goto L_005189f6;
L_005189ef:; BB(0x005189ef);
    /* 005189ef: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005189f6:; BB(0x005189f6);
    /* 005189f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005189f9: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
L_00518a03:; BB(0x00518a03);
    /* 00518a03: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a06: cmp dword ptr [ecx + 0x1c0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518a0d: je 0x518a4e */ if (fZ) goto L_00518a4e;
L_00518a0f:; BB(0x00518a0f);
    /* 00518a0f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a12: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00518a18: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00518a1b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518a1e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00518a21: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518a25: je 0x518a3a */ if (fZ) goto L_00518a3a;
L_00518a27:; BB(0x00518a27);
    /* 00518a27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518a29: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00518a2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00518a2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00518a31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518a33: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x518a35u); call_ind(t); }
    /* 00518a35: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00518a38: jmp 0x518a41 */ goto L_00518a41;
L_00518a3a:; BB(0x00518a3a);
    /* 00518a3a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00518a41:; BB(0x00518a41);
    /* 00518a41: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a44: mov dword ptr [eax + 0x1c0], 0 */ W32((u32)(r_eax+0x1c0u), 0x0u);
L_00518a4e:; BB(0x00518a4e);
    /* 00518a4e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a51: cmp dword ptr [ecx + 0x1c8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518a58: je 0x518a99 */ if (fZ) goto L_00518a99;
L_00518a5a:; BB(0x00518a5a);
    /* 00518a5a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a5d: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00518a63: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00518a66: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00518a69: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00518a6c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518a70: je 0x518a85 */ if (fZ) goto L_00518a85;
L_00518a72:; BB(0x00518a72);
    /* 00518a72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518a74: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00518a77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00518a79: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00518a7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518a7e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x518a80u); call_ind(t); }
    /* 00518a80: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00518a83: jmp 0x518a8c */ goto L_00518a8c;
L_00518a85:; BB(0x00518a85);
    /* 00518a85: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00518a8c:; BB(0x00518a8c);
    /* 00518a8c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518a8f: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
L_00518a99:; BB(0x00518a99);
    /* 00518a99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518aa0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518aa3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x518aa8u); f_005f7260();
    /* 00518aa8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00518aab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00518ab2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00518ab3: mov esp, ebp */ r_esp = r_ebp;
    /* 00518ab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518ab6: ret  */ FN_RET(0x00518980); r_esp += 4; return;
}

