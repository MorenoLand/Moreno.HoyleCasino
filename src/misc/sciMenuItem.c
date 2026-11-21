#include "protos.h"

void f_005fc850(void) /* sciMenuItem::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc850);
    /* 005fc850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc851: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc855: push 0x6aa5cb */ { u32 v = 0x6aa5cbu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc85a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc862: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fc867: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fc869: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc86a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fc86d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fc873: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fc876: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc878: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc87a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc87c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc87f: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5fc884u); f_00603120();
    /* 005fc884: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc88b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc88e: mov dword ptr [eax], 0x6d6fc4 */ W32((u32)(r_eax), 0x6d6fc4u);
    /* 005fc894: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc897: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fc89a: mov dword ptr [ecx + 0x1e8], edx */ W32((u32)(r_ecx+0x1e8u), r_edx);
    /* 005fc8a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fc8a6: mov dword ptr [eax + 0x1f0], ecx */ W32((u32)(r_eax+0x1f0u), r_ecx);
    /* 005fc8ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fc8b2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005fc8b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8b8: mov dword ptr [ecx + 0x1ec], 0xffffffff */ W32((u32)(r_ecx+0x1ecu), 0xffffffffu);
    /* 005fc8c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8c5: mov dword ptr [edx + 0x1f4], 0 */ W32((u32)(r_edx+0x1f4u), 0x0u);
    /* 005fc8cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8d2: mov dword ptr [eax + 0x1f8], 0 */ W32((u32)(r_eax+0x1f8u), 0x0u);
    /* 005fc8dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc8df: mov dword ptr [ecx + 0x200], 0 */ W32((u32)(r_ecx+0x200u), 0x0u);
    /* 005fc8e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc8eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc8ed: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fc8f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc8f5: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc8fb: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005fc8fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fc900u); call_ind(t); }
    /* 005fc900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc901: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc904: call 0x603190 */ r_esp -= 4; W32(r_esp, 0x5fc909u); f_00603190();
    /* 005fc909: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc910: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc913: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc916: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc91d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc91e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc920: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc921: ret 8 */ FN_RET(0x005fc850); r_esp += 12; return;
}

void f_005fc930(void) /* sciMenuItem::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc930);
    /* 005fc930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc931: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc935: push 0x6aa5ee */ { u32 v = 0x6aa5eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc941: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc944: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fc949: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fc94b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc94c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fc94f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fc955: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005fc958: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc95b: mov dword ptr [eax], 0x6d6fc4 */ W32((u32)(r_eax), 0x6d6fc4u);
    /* 005fc961: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc968: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc96b: mov dword ptr [ecx + 0x1f0], 0 */ W32((u32)(r_ecx+0x1f0u), 0x0u);
    /* 005fc975: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc978: cmp dword ptr [edx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_edx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc97f: je 0x5fc9db */ if (fZ) goto L_005fc9db;
L_005fc981:; BB(0x005fc981);
    /* 005fc981: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc984: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fc98a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc98d: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fc993: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc995: mov ecx, eax */ r_ecx = r_eax;
    /* 005fc997: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fc99a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc99cu); call_ind(t); }
    /* 005fc99c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc99f: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 005fc9a5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005fc9a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fc9ab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fc9ae: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc9b2: je 0x5fc9c7 */ if (fZ) goto L_005fc9c7;
L_005fc9b4:; BB(0x005fc9b4);
    /* 005fc9b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc9b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc9b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc9bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc9be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc9c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc9c2u); call_ind(t); }
    /* 005fc9c2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fc9c5: jmp 0x5fc9ce */ goto L_005fc9ce;
L_005fc9c7:; BB(0x005fc9c7);
    /* 005fc9c7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fc9ce:; BB(0x005fc9ce);
    /* 005fc9ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc9d1: mov dword ptr [ecx + 0x1f4], 0 */ W32((u32)(r_ecx+0x1f4u), 0x0u);
L_005fc9db:; BB(0x005fc9db);
    /* 005fc9db: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc9de: cmp dword ptr [edx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_edx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc9e5: je 0x5fca41 */ if (fZ) goto L_005fca41;
L_005fc9e7:; BB(0x005fc9e7);
    /* 005fc9e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc9ea: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 005fc9f0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fc9f3: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fc9f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc9fb: mov ecx, eax */ r_ecx = r_eax;
    /* 005fc9fd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fca00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fca02u); call_ind(t); }
    /* 005fca02: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca05: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fca0b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005fca0e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fca11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fca14: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fca18: je 0x5fca2d */ if (fZ) goto L_005fca2d;
L_005fca1a:; BB(0x005fca1a);
    /* 005fca1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fca1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fca1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fca21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fca24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fca26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fca28u); call_ind(t); }
    /* 005fca28: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005fca2b: jmp 0x5fca34 */ goto L_005fca34;
L_005fca2d:; BB(0x005fca2d);
    /* 005fca2d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005fca34:; BB(0x005fca34);
    /* 005fca34: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca37: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
L_005fca41:; BB(0x005fca41);
    /* 005fca41: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca44: cmp dword ptr [edx + 0x200], 0 */ {  u32 a = R32((u32)(r_edx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fca4b: je 0x5fcaa7 */ if (fZ) goto L_005fcaa7;
L_005fca4d:; BB(0x005fca4d);
    /* 005fca4d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca50: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fca56: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca59: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 005fca5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fca61: mov ecx, eax */ r_ecx = r_eax;
    /* 005fca63: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fca66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fca68u); call_ind(t); }
    /* 005fca68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca6b: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 005fca71: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005fca74: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fca77: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fca7a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fca7e: je 0x5fca93 */ if (fZ) goto L_005fca93;
L_005fca80:; BB(0x005fca80);
    /* 005fca80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fca82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fca85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fca87: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fca8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fca8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fca8eu); call_ind(t); }
    /* 005fca8e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005fca91: jmp 0x5fca9a */ goto L_005fca9a;
L_005fca93:; BB(0x005fca93);
    /* 005fca93: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005fca9a:; BB(0x005fca9a);
    /* 005fca9a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fca9d: mov dword ptr [ecx + 0x200], 0 */ W32((u32)(r_ecx+0x200u), 0x0u);
L_005fcaa7:; BB(0x005fcaa7);
    /* 005fcaa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fcaae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fcab1: call 0x603170 */ r_esp -= 4; W32(r_esp, 0x5fcab6u); f_00603170();
    /* 005fcab6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcab9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcac0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fcac1: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcac4: ret  */ FN_RET(0x005fc930); r_esp += 4; return;
}

void f_005fcad0(void) /* sciMenuItem::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcad0);
    /* 005fcad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcad5: push 0x6aa614 */ { u32 v = 0x6aa614u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcada: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fcae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcae1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcae4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fcae9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fcaeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcaec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fcaef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fcaf5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fcaf8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fcafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcafc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcaff: call 0x602020 */ r_esp -= 4; W32(r_esp, 0x5fcb04u); f_00602020();
    /* 005fcb04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb07: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fcb0cu); f_005f5400();
    /* 005fcb0c: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb0f: jne 0x5fcb16 */ if (!fZ) goto L_005fcb16;
L_005fcb11:; BB(0x005fcb11);
    /* 005fcb11: jmp 0x5fcc3e */ goto L_005fcc3e;
L_005fcb16:; BB(0x005fcb16);
    /* 005fcb16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fcb19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb1a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fcb1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb22: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005fcb28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fcb2au); call_ind(t); }
    /* 005fcb2a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fcb2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb2f: je 0x5fcbf3 */ if (fZ) goto L_005fcbf3;
L_005fcb35:; BB(0x005fcb35);
    /* 005fcb35: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb38: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 005fcb3e: call 0x5ff0a0 */ r_esp -= 4; W32(r_esp, 0x5fcb43u); f_005ff0a0();
    /* 005fcb43: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb46: cmp dword ptr [edx + 0x1ec], -1 */ {  u32 a = R32((u32)(r_edx+0x1ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb4d: je 0x5fcbd7 */ if (fZ) goto L_005fcbd7;
L_005fcb53:; BB(0x005fcb53);
    /* 005fcb53: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb56: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fcb5bu); f_006026d0();
    /* 005fcb5b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fcb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb60: je 0x5fcbd7 */ if (fZ) goto L_005fcbd7;
L_005fcb62:; BB(0x005fcb62);
    /* 005fcb62: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb65: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 005fcb6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb6c: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fcb72: call 0x5f2920 */ r_esp -= 4; W32(r_esp, 0x5fcb77u); f_005f2920();
    /* 005fcb77: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fcb7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb7c: jne 0x5fcbd7 */ if (!fZ) goto L_005fcbd7;
L_005fcb7e:; BB(0x005fcb7e);
    /* 005fcb7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcb81: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcb88: jne 0x5fcbd7 */ if (!fZ) goto L_005fcbd7;
L_005fcb8a:; BB(0x005fcb8a);
    /* 005fcb8a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcb8c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fcb91u); f_00686d82();
    /* 005fcb91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fcb94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fcb97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fcb9e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcba2: je 0x5fcbb7 */ if (fZ) goto L_005fcbb7;
L_005fcba4:; BB(0x005fcba4);
    /* 005fcba4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcba6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fcbad: call 0x5ff190 */ r_esp -= 4; W32(r_esp, 0x5fcbb2u); f_005ff190();
    /* 005fcbb2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fcbb5: jmp 0x5fcbbe */ goto L_005fcbbe;
L_005fcbb7:; BB(0x005fcbb7);
    /* 005fcbb7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fcbbe:; BB(0x005fcbbe);
    /* 005fcbbe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fcbc1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fcbc4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fcbcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fcbce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbcf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcbd2: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5fcbd7u); f_005f5df0();
L_005fcbd7:; BB(0x005fcbd7);
    /* 005fcbd7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcbda: cmp dword ptr [edx + 0x1ec], -1 */ {  u32 a = R32((u32)(r_edx+0x1ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcbe1: jne 0x5fcbf1 */ if (!fZ) goto L_005fcbf1;
L_005fcbe3:; BB(0x005fcbe3);
    /* 005fcbe3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcbe6: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005fcbec: call 0x5feff0 */ r_esp -= 4; W32(r_esp, 0x5fcbf1u); f_005feff0();
L_005fcbf1:; BB(0x005fcbf1);
    /* 005fcbf1: jmp 0x5fcc3e */ goto L_005fcc3e;
L_005fcbf3:; BB(0x005fcbf3);
    /* 005fcbf3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcbf6: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 005fcbfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcbfd: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fcc03: call 0x5f2920 */ r_esp -= 4; W32(r_esp, 0x5fcc08u); f_005f2920();
    /* 005fcc08: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fcc0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcc0d: je 0x5fcc34 */ if (fZ) goto L_005fcc34;
L_005fcc0f:; BB(0x005fcc0f);
    /* 005fcc0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fcc12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc13: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcc16: call 0x5fcc50 */ r_esp -= 4; W32(r_esp, 0x5fcc1bu); f_005fcc50();
    /* 005fcc1b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005fcc1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcc20: je 0x5fcc34 */ if (fZ) goto L_005fcc34;
L_005fcc22:; BB(0x005fcc22);
    /* 005fcc22: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc24: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcc27: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcc29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcc2c: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005fcc32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcc34u); call_ind(t); }
L_005fcc34:; BB(0x005fcc34);
    /* 005fcc34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fcc39: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5fcc3eu); f_005f5df0();
L_005fcc3e:; BB(0x005fcc3e);
    /* 005fcc3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcc41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fcc48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fcc49: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcc4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcc4c: ret 4 */ FN_RET(0x005fcad0); r_esp += 8; return;
}

void f_005fcd30(void) /* sciMenuItem::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcd30);
    /* 005fcd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcd33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcd36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd37: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fcd3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd3d: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fcd42u); f_006026d0();
    /* 005fcd42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd46: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fcd4bu); f_005f5400();
    /* 005fcd4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcd4c: mov eax, dword ptr [0x15e55e4] */ r_eax = R32((u32)(0x15e55e4u));
    /* 005fcd51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcd53: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fcd59: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005fcd5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcd5eu); call_ind(t); }
    /* 005fcd5e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005fcd61: movzx esi, byte ptr [ebp - 1] */ r_esi = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005fcd65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd68: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fcd6du); f_006026d0();
    /* 005fcd6d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fcd70: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcd72: je 0x5fcd9e */ if (fZ) goto L_005fcd9e;
L_005fcd74:; BB(0x005fcd74);
    /* 005fcd74: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005fcd78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcd7a: je 0x5fcd8e */ if (fZ) goto L_005fcd8e;
L_005fcd7c:; BB(0x005fcd7c);
    /* 005fcd7c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcd81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd84: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005fcd8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcd8cu); call_ind(t); }
    /* 005fcd8c: jmp 0x5fcd9e */ goto L_005fcd9e;
L_005fcd8e:; BB(0x005fcd8e);
    /* 005fcd8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fcd93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcd96: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005fcd9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcd9eu); call_ind(t); }
L_005fcd9e:; BB(0x005fcd9e);
    /* 005fcd9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcda1: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x5fcda6u); f_00602500();
    /* 005fcda6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcda9: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fcdaeu); f_005f5400();
    /* 005fcdae: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcdb1: jne 0x5fcdc6 */ if (!fZ) goto L_005fcdc6;
L_005fcdb3:; BB(0x005fcdb3);
    /* 005fcdb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcdb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcdb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcdb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdbc: call 0x603190 */ r_esp -= 4; W32(r_esp, 0x5fcdc1u); f_00603190();
    /* 005fcdc1: jmp 0x5fcf56 */ goto L_005fcf56;
L_005fcdc6:; BB(0x005fcdc6);
    /* 005fcdc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdc9: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcdd0: je 0x5fce20 */ if (fZ) goto L_005fce20;
L_005fcdd2:; BB(0x005fcdd2);
    /* 005fcdd2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fcdd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdda: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fcddd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fcddfu); call_ind(t); }
    /* 005fcddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcde0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcde3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcde5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcde8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fcdeb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcdedu); call_ind(t); }
    /* 005fcded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcdee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdf1: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fcdf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcdfa: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 005fce00: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fce02: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fce05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fce07u); call_ind(t); }
    /* 005fce07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce0a: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fce10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce13: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 005fce19: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fce1b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fce1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fce20u); call_ind(t); }
L_005fce20:; BB(0x005fce20);
    /* 005fce20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce23: cmp dword ptr [ecx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fce2a: je 0x5fce9c */ if (fZ) goto L_005fce9c;
L_005fce2c:; BB(0x005fce2c);
    /* 005fce2c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce2f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fce31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce34: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fce37: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fce39u); call_ind(t); }
    /* 005fce39: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fce3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fce3d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fce42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce45: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fce48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fce4au); call_ind(t); }
    /* 005fce4a: mov esi, eax */ r_esi = r_eax;
    /* 005fce4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce4f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fce54u); f_005f5550();
    /* 005fce54: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fce56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce59: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 005fce5f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fce64u); f_005f5550();
    /* 005fce64: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fce66: sub esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fce69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fce6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce6d: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fce73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce76: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 005fce7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fce7e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fce81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fce83u); call_ind(t); }
    /* 005fce83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce86: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 005fce8c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce8f: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fce95: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fce97: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fce9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fce9cu); call_ind(t); }
L_005fce9c:; BB(0x005fce9c);
    /* 005fce9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fce9f: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcea6: je 0x5fcf56 */ if (fZ) goto L_005fcf56;
L_005fceac:; BB(0x005fceac);
    /* 005fceac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fceaf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fceb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fceb4: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fceb7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fceb9u); call_ind(t); }
    /* 005fceb9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fcebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fcebd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcec0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcec2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcec5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fcec8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcecau); call_ind(t); }
    /* 005fceca: mov esi, eax */ r_esi = r_eax;
    /* 005fcecc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcecf: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fced4u); f_005f5550();
    /* 005fced4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fced6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fced9: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 005fcedf: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fcee4u); f_005f5550();
    /* 005fcee4: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fcee6: sub esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fcee9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fceea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fceed: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 005fcef3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcef6: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 005fcefc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcefe: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fcf01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcf03u); call_ind(t); }
    /* 005fcf03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcf06: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 005fcf0c: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005fcf0f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fcf12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf13: mov ecx, esp */ r_ecx = r_esp;
    /* 005fcf15: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005fcf1c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005fcf1f: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005fcf24: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005fcf27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcf2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf2d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcf30: mov ecx, dword ptr [edx + 0x200] */ r_ecx = R32((u32)(r_edx+0x200u));
    /* 005fcf36: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5fcf3bu); f_005ecd00();
    /* 005fcf3b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcf3e: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fcf44: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcf47: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 005fcf4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fcf4f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fcf51: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fcf54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcf56u); call_ind(t); }
L_005fcf56:; BB(0x005fcf56);
    /* 005fcf56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fcf57: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcf59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcf5a: ret  */ FN_RET(0x005fcd30); r_esp += 4; return;
}

void f_005fcf60(void) /* sciMenuItem::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcf60);
    /* 005fcf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf61: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fcf67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf6a: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x5fcf6fu); f_00602550();
    /* 005fcf6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf72: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 005fcf78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf79: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fcf7f: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x5fcf84u); f_005f2840();
    /* 005fcf84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf87: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fcf8cu); f_006026d0();
    /* 005fcf8c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005fcf8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcf91: je 0x5fcfa5 */ if (fZ) goto L_005fcfa5;
L_005fcf93:; BB(0x005fcf93);
    /* 005fcf93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fcf95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcf9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcf9d: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005fcfa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcfa5u); call_ind(t); }
L_005fcfa5:; BB(0x005fcfa5);
    /* 005fcfa5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfa8: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcfaf: je 0x5fcfca */ if (fZ) goto L_005fcfca;
L_005fcfb1:; BB(0x005fcfb1);
    /* 005fcfb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfb4: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fcfba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfbd: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fcfc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcfc5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fcfc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcfcau); call_ind(t); }
L_005fcfca:; BB(0x005fcfca);
    /* 005fcfca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfcd: cmp dword ptr [ecx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcfd4: je 0x5fcfef */ if (fZ) goto L_005fcfef;
L_005fcfd6:; BB(0x005fcfd6);
    /* 005fcfd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfd9: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fcfdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcfe2: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 005fcfe8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fcfea: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fcfed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcfefu); call_ind(t); }
L_005fcfef:; BB(0x005fcfef);
    /* 005fcfef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcff2: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcff9: je 0x5fd014 */ if (fZ) goto L_005fd014;
L_005fcffb:; BB(0x005fcffb);
    /* 005fcffb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcffe: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 005fd004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd007: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 005fd00d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd00f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fd012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd014u); call_ind(t); }
L_005fd014:; BB(0x005fd014);
    /* 005fd014: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd016: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd017: ret  */ FN_RET(0x005fcf60); r_esp += 4; return;
}

void f_005fd020(void) /* sciMenuItem::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd020);
    /* 005fd020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd021: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd023: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd026: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fd029: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd02c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd031u); f_005f5400();
    /* 005fd031: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd034: jne 0x5fd03b */ if (!fZ) goto L_005fd03b;
L_005fd036:; BB(0x005fd036);
    /* 005fd036: jmp 0x5fd22f */ goto L_005fd22f;
L_005fd03b:; BB(0x005fd03b);
    /* 005fd03b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd03e: call 0x602f60 */ r_esp -= 4; W32(r_esp, 0x5fd043u); f_00602f60();
    /* 005fd043: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd046: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 005fd04c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fd04f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd053: je 0x5fd06e */ if (fZ) goto L_005fd06e;
L_005fd055:; BB(0x005fd055);
    /* 005fd055: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd059: je 0x5fd128 */ if (fZ) goto L_005fd128;
L_005fd05f:; BB(0x005fd05f);
    /* 005fd05f: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd063: je 0x5fd171 */ if (fZ) goto L_005fd171;
L_005fd069:; BB(0x005fd069);
    /* 005fd069: jmp 0x5fd22f */ goto L_005fd22f;
L_005fd06e:; BB(0x005fd06e);
    /* 005fd06e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd071: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fd076u); f_006026d0();
    /* 005fd076: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005fd079: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd07b: je 0x5fd119 */ if (fZ) goto L_005fd119;
L_005fd081:; BB(0x005fd081);
    /* 005fd081: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd084: cmp dword ptr [eax + 0x1f4], 0 */ {  u32 a = R32((u32)(r_eax+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd08b: je 0x5fd0ab */ if (fZ) goto L_005fd0ab;
L_005fd08d:; BB(0x005fd08d);
    /* 005fd08d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd08f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd092: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 005fd098: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd09b: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fd0a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fd0a3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd0a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd0abu); call_ind(t); }
L_005fd0ab:; BB(0x005fd0ab);
    /* 005fd0ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd0ae: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd0b5: je 0x5fd0d5 */ if (fZ) goto L_005fd0d5;
L_005fd0b7:; BB(0x005fd0b7);
    /* 005fd0b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd0bc: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fd0c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd0c5: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd0cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd0cd: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd0d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd0d5u); call_ind(t); }
L_005fd0d5:; BB(0x005fd0d5);
    /* 005fd0d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd0d8: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd0df: je 0x5fd119 */ if (fZ) goto L_005fd119;
L_005fd0e1:; BB(0x005fd0e1);
    /* 005fd0e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd0e4: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005fd0ea: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005fd0ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd0f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0f1: mov edx, esp */ r_edx = r_esp;
    /* 005fd0f3: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005fd0f9: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005fd0fc: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005fd102: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005fd105: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd107: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd10a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd10b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd10e: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fd114: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5fd119u); f_005ecd00();
L_005fd119:; BB(0x005fd119);
    /* 005fd119: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd11b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd11e: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5fd123u); f_005f5df0();
    /* 005fd123: jmp 0x5fd22f */ goto L_005fd22f;
L_005fd128:; BB(0x005fd128);
    /* 005fd128: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd12b: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd132: je 0x5fd16c */ if (fZ) goto L_005fd16c;
L_005fd134:; BB(0x005fd134);
    /* 005fd134: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd137: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005fd13d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005fd140: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fd143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd144: mov edx, esp */ r_edx = r_esp;
    /* 005fd146: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005fd14c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005fd14f: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005fd155: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005fd158: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd15a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd15d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd15e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd161: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fd167: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5fd16cu); f_005ecd00();
L_005fd16c:; BB(0x005fd16c);
    /* 005fd16c: jmp 0x5fd22f */ goto L_005fd22f;
L_005fd171:; BB(0x005fd171);
    /* 005fd171: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd174: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd179u); f_005f5400();
    /* 005fd179: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd17c: je 0x5fd22f */ if (fZ) goto L_005fd22f;
L_005fd182:; BB(0x005fd182);
    /* 005fd182: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd185: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5fd18au); f_006026d0();
    /* 005fd18a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fd18d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd18f: je 0x5fd22f */ if (fZ) goto L_005fd22f;
L_005fd195:; BB(0x005fd195);
    /* 005fd195: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd198: cmp dword ptr [edx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_edx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd19f: je 0x5fd1c1 */ if (fZ) goto L_005fd1c1;
L_005fd1a1:; BB(0x005fd1a1);
    /* 005fd1a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd1a3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1a6: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fd1ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1af: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fd1b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd1b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd1b9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd1bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd1c1u); call_ind(t); }
L_005fd1c1:; BB(0x005fd1c1);
    /* 005fd1c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1c4: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd1cb: je 0x5fd1eb */ if (fZ) goto L_005fd1eb;
L_005fd1cd:; BB(0x005fd1cd);
    /* 005fd1cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd1cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1d2: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fd1d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1db: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd1e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd1e3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd1e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd1ebu); call_ind(t); }
L_005fd1eb:; BB(0x005fd1eb);
    /* 005fd1eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1ee: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd1f5: je 0x5fd22f */ if (fZ) goto L_005fd22f;
L_005fd1f7:; BB(0x005fd1f7);
    /* 005fd1f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd1fa: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005fd200: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005fd203: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fd206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd207: mov edx, esp */ r_edx = r_esp;
    /* 005fd209: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005fd20f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005fd212: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005fd218: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005fd21b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd21d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd220: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd221: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd224: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fd22a: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5fd22fu); f_005ecd00();
L_005fd22f:; BB(0x005fd22f);
    /* 005fd22f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd232: ret  */ FN_RET(0x005fd020); r_esp += 4; return;
}

void f_005fd240(void) /* sciMenuItem::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd240);
    /* 005fd240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd241: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd243: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd246: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fd249: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd24c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd251u); f_005f5400();
    /* 005fd251: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd254: jne 0x5fd25b */ if (!fZ) goto L_005fd25b;
L_005fd256:; BB(0x005fd256);
    /* 005fd256: jmp 0x5fd324 */ goto L_005fd324;
L_005fd25b:; BB(0x005fd25b);
    /* 005fd25b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd25e: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005fd264: cmp dword ptr [ecx + 0x1b4], 1 */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd26b: jne 0x5fd2b4 */ if (!fZ) goto L_005fd2b4;
L_005fd26d:; BB(0x005fd26d);
    /* 005fd26d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd270: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 005fd276: cmp dword ptr [eax + 0x1c0], 0 */ {  u32 a = R32((u32)(r_eax+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd27d: je 0x5fd2b2 */ if (fZ) goto L_005fd2b2;
L_005fd27f:; BB(0x005fd27f);
    /* 005fd27f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd284: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd289u); f_005f5400();
    /* 005fd289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd28a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd28d: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 005fd293: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005fd299: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd29c: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 005fd2a2: mov ecx, dword ptr [edx + 0x1c0] */ r_ecx = R32((u32)(r_edx+0x1c0u));
    /* 005fd2a8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005fd2aa: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 005fd2b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fd2b2u); call_ind(t); }
L_005fd2b2:; BB(0x005fd2b2);
    /* 005fd2b2: jmp 0x5fd324 */ goto L_005fd324;
L_005fd2b4:; BB(0x005fd2b4);
    /* 005fd2b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd2b7: cmp dword ptr [eax + 0x1ec], -1 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd2be: jne 0x5fd2cd */ if (!fZ) goto L_005fd2cd;
L_005fd2c0:; BB(0x005fd2c0);
    /* 005fd2c0: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd2c6: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x5fd2cbu); f_005f2870();
    /* 005fd2cb: jmp 0x5fd2d7 */ goto L_005fd2d7;
L_005fd2cd:; BB(0x005fd2cd);
    /* 005fd2cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd2d0: call 0x5fd330 */ r_esp -= 4; W32(r_esp, 0x5fd2d5u); f_005fd330();
    /* 005fd2d5: jmp 0x5fd324 */ goto L_005fd324;
L_005fd2d7:; BB(0x005fd2d7);
    /* 005fd2d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd2da: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd2e1: je 0x5fd2fd */ if (fZ) goto L_005fd2fd;
L_005fd2e3:; BB(0x005fd2e3);
    /* 005fd2e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd2e6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005fd2e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd2ec: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005fd2f2: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 005fd2f8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005fd2fb: jmp 0x5fd304 */ goto L_005fd304;
L_005fd2fd:; BB(0x005fd2fd);
    /* 005fd2fd: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
L_005fd304:; BB(0x005fd304);
    /* 005fd304: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd308: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd30b: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd310u); f_005f5400();
    /* 005fd310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd311: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd317: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd319: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd31f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fd322: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd324u); call_ind(t); }
L_005fd324:; BB(0x005fd324);
    /* 005fd324: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd326: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd327: ret  */ FN_RET(0x005fd240); r_esp += 4; return;
}

void f_005fd630(void) /* sciMenuItem::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd630);
    /* 005fd630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd631: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd637: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd63a: movzx ecx, byte ptr [eax + 0x1a8] */ r_ecx = (u32)R8((u32)(r_eax+0x1a8u));
    /* 005fd641: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd643: jne 0x5fd6a3 */ if (!fZ) goto L_005fd6a3;
L_005fd645:; BB(0x005fd645);
    /* 005fd645: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd648: call 0x6025c0 */ r_esp -= 4; W32(r_esp, 0x5fd64du); f_006025c0();
    /* 005fd64d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd650: cmp dword ptr [edx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_edx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd657: je 0x5fd679 */ if (fZ) goto L_005fd679;
L_005fd659:; BB(0x005fd659);
    /* 005fd659: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd65b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd65e: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fd664: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd667: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fd66d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd66f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd671: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd679u); call_ind(t); }
L_005fd679:; BB(0x005fd679);
    /* 005fd679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd67c: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd683: je 0x5fd6a3 */ if (fZ) goto L_005fd6a3;
L_005fd685:; BB(0x005fd685);
    /* 005fd685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd687: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd68a: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fd690: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd693: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd699: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd69b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd6a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd6a3u); call_ind(t); }
L_005fd6a3:; BB(0x005fd6a3);
    /* 005fd6a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd6a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd6a6: ret  */ FN_RET(0x005fd630); r_esp += 4; return;
}

void f_005fd6b0(void) /* sciMenuItem::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd6b0);
    /* 005fd6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd6b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6ba: movzx ecx, byte ptr [eax + 0x1a8] */ r_ecx = (u32)R8((u32)(r_eax+0x1a8u));
    /* 005fd6c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd6c3: je 0x5fd723 */ if (fZ) goto L_005fd723;
L_005fd6c5:; BB(0x005fd6c5);
    /* 005fd6c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6c8: call 0x602650 */ r_esp -= 4; W32(r_esp, 0x5fd6cdu); f_00602650();
    /* 005fd6cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6d0: cmp dword ptr [edx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_edx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd6d7: je 0x5fd6f9 */ if (fZ) goto L_005fd6f9;
L_005fd6d9:; BB(0x005fd6d9);
    /* 005fd6d9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6de: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fd6e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6e7: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fd6ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd6ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd6f1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd6f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd6f9u); call_ind(t); }
L_005fd6f9:; BB(0x005fd6f9);
    /* 005fd6f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd6fc: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd703: je 0x5fd723 */ if (fZ) goto L_005fd723;
L_005fd705:; BB(0x005fd705);
    /* 005fd705: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd707: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd70a: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fd710: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd713: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd719: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd71b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fd721: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd723u); call_ind(t); }
L_005fd723:; BB(0x005fd723);
    /* 005fd723: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd726: ret  */ FN_RET(0x005fd6b0); r_esp += 4; return;
}

