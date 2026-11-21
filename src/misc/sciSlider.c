#include "protos.h"

void f_00604b80(void) /* sciSlider::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604b80);
    /* 00604b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00604b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604b85: push 0x6aab1e */ { u32 v = 0x6aab1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00604b8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00604b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604b91: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604b94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00604b99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604b9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00604b9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00604ba5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00604ba8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bab: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x604bb0u); f_005f49d0();
    /* 00604bb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604bb7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bba: mov dword ptr [eax], 0x6d788c */ W32((u32)(r_eax), 0x6d788cu);
    /* 00604bc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bc3: mov dword ptr [ecx + 0x80], 1 */ W32((u32)(r_ecx+0x80u), 0x1u);
    /* 00604bcd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bd0: mov byte ptr [edx + 0x6c], 1 */ W8((u32)(r_edx+0x6cu), 0x1u);
    /* 00604bd4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bd7: mov dword ptr [eax + 0x70], 0xffffffff */ W32((u32)(r_eax+0x70u), 0xffffffffu);
    /* 00604bde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604be1: mov dword ptr [ecx + 0x74], 0xffffffff */ W32((u32)(r_ecx+0x74u), 0xffffffffu);
    /* 00604be8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604beb: mov dword ptr [edx + 0x78], 0xffffffff */ W32((u32)(r_edx+0x78u), 0xffffffffu);
    /* 00604bf2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bf5: mov dword ptr [eax + 0x7c], 0xffffffff */ W32((u32)(r_eax+0x7cu), 0xffffffffu);
    /* 00604bfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604bff: mov dword ptr [ecx + 0x50], 0xffffffff */ W32((u32)(r_ecx+0x50u), 0xffffffffu);
    /* 00604c06: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c09: mov dword ptr [edx + 0x54], 0xffffffff */ W32((u32)(r_edx+0x54u), 0xffffffffu);
    /* 00604c10: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c13: mov dword ptr [eax + 0x58], 0xffffffff */ W32((u32)(r_eax+0x58u), 0xffffffffu);
    /* 00604c1a: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00604c1f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604c24u); f_00686d82();
    /* 00604c24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604c27: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00604c2a: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00604c2e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c32: je 0x604c45 */ if (fZ) goto L_00604c45;
L_00604c34:; BB(0x00604c34);
    /* 00604c34: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604c38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604c3b: call 0x605540 */ r_esp -= 4; W32(r_esp, 0x604c40u); f_00605540();
    /* 00604c40: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00604c43: jmp 0x604c4c */ goto L_00604c4c;
L_00604c45:; BB(0x00604c45);
    /* 00604c45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00604c4c:; BB(0x00604c4c);
    /* 00604c4c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00604c4f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00604c52: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604c56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604c5c: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00604c5f: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00604c64: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604c69u); f_00686d82();
    /* 00604c69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604c6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00604c6f: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00604c73: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c77: je 0x604c8a */ if (fZ) goto L_00604c8a;
L_00604c79:; BB(0x00604c79);
    /* 00604c79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604c7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00604c80: call 0x6058b0 */ r_esp -= 4; W32(r_esp, 0x604c85u); f_006058b0();
    /* 00604c85: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00604c88: jmp 0x604c91 */ goto L_00604c91;
L_00604c8a:; BB(0x00604c8a);
    /* 00604c8a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00604c91:; BB(0x00604c91);
    /* 00604c91: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00604c94: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00604c97: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604c9b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604c9e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604ca1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00604ca4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00604cab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604cae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604cb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00604cb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604cb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00604cbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604cbc: ret  */ FN_RET(0x00604b80); r_esp += 4; return;
}

void f_00604cc0(void) /* sciSlider::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604cc0);
    /* 00604cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604cc5: push 0x6aab41 */ { u32 v = 0x6aab41u; r_esp -= 4; W32(r_esp, v); }
    /* 00604cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00604cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604cd1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604cd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00604cd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604cdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00604cdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00604ce5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00604ce8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604ceb: mov dword ptr [eax], 0x6d788c */ W32((u32)(r_eax), 0x6d788cu);
    /* 00604cf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604cf8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604cfb: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00604cfe: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00604d01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00604d04: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00604d07: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d0b: je 0x604d20 */ if (fZ) goto L_00604d20;
L_00604d0d:; BB(0x00604d0d);
    /* 00604d0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604d0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604d12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00604d14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604d17: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604d19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604d1bu); call_ind(t); }
    /* 00604d1b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00604d1e: jmp 0x604d27 */ goto L_00604d27;
L_00604d20:; BB(0x00604d20);
    /* 00604d20: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00604d27:; BB(0x00604d27);
    /* 00604d27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604d2a: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00604d2d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00604d30: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00604d33: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00604d36: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d3a: je 0x604d4f */ if (fZ) goto L_00604d4f;
L_00604d3c:; BB(0x00604d3c);
    /* 00604d3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604d3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604d41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00604d43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604d46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604d48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604d4au); call_ind(t); }
    /* 00604d4a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00604d4d: jmp 0x604d56 */ goto L_00604d56;
L_00604d4f:; BB(0x00604d4f);
    /* 00604d4f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00604d56:; BB(0x00604d56);
    /* 00604d56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00604d5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604d60: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x604d65u); f_005f4ad0();
    /* 00604d65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604d68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00604d6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604d70: mov esp, ebp */ r_esp = r_ebp;
    /* 00604d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604d73: ret  */ FN_RET(0x00604cc0); r_esp += 4; return;
}

void f_00604ef0(void) /* sciSlider::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604ef0);
    /* 00604ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604ef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604ef6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00604ef9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604efc: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00604eff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f02: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604f05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00604f07: mov ecx, eax */ r_ecx = r_eax;
    /* 00604f09: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604f0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f0eu); call_ind(t); }
    /* 00604f0e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00604f11: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00604f13: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00604f16: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f19: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604f1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f1f: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00604f22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604f24: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00604f27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f29u); call_ind(t); }
    /* 00604f29: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00604f2c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00604f2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604f31: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00604f34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604f35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604f39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f3c: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00604f3f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f42: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00604f45: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00604f47: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00604f4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f4cu); call_ind(t); }
    /* 00604f4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f4f: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00604f52: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f55: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00604f58: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00604f5a: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00604f5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f5fu); call_ind(t); }
    /* 00604f5f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604f63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f66: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00604f69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f6c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00604f6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00604f71: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604f74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f76u); call_ind(t); }
    /* 00604f76: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604f7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f7d: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00604f80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604f83: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00604f86: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00604f88: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00604f8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604f8du); call_ind(t); }
    /* 00604f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00604f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604f90: ret 8 */ FN_RET(0x00604ef0); r_esp += 12; return;
}

void f_00604fa0(void) /* sciSlider::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604fa0);
    /* 00604fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604fa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604fab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604fae: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00604fb1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604fb4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00604fb7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00604fb9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00604fbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604fbeu); call_ind(t); }
    /* 00604fbe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00604fc1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604fc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604fc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604fc8: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00604fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604fce: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00604fd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604fd3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00604fd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604fd8u); call_ind(t); }
    /* 00604fd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00604fda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604fdb: ret 4 */ FN_RET(0x00604fa0); r_esp += 8; return;
}

void f_00604fe0(void) /* sciSlider::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604fe0);
    /* 00604fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604fe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604fea: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x604fefu); f_005f5440();
    /* 00604fef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ff2: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00604ff5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ff8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604ffb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00604ffd: mov ecx, eax */ r_ecx = r_eax;
    /* 00604fff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00605002: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605004u); call_ind(t); }
    /* 00605004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605007: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0060500a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060500d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00605010: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605012: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00605015: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605017u); call_ind(t); }
    /* 00605017: mov esp, ebp */ r_esp = r_ebp;
    /* 00605019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060501a: ret  */ FN_RET(0x00604fe0); r_esp += 4; return;
}

void f_00605020(void) /* sciSlider::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605020);
    /* 00605020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605021: mov ebp, esp */ r_ebp = r_esp;
    /* 00605023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060502a: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x60502fu); f_005f5420();
    /* 0060502f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605032: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00605035: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605038: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0060503b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060503d: mov ecx, eax */ r_ecx = r_eax;
    /* 0060503f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00605042: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605044u); call_ind(t); }
    /* 00605044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605047: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0060504a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060504d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00605050: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605052: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00605055: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605057u); call_ind(t); }
    /* 00605057: mov esp, ebp */ r_esp = r_ebp;
    /* 00605059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060505a: ret  */ FN_RET(0x00605020); r_esp += 4; return;
}

void f_00605060(void) /* sciSlider::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605060);
    /* 00605060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605061: mov ebp, esp */ r_ebp = r_esp;
    /* 00605063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605067: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060506a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060506b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060506e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060506f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605072: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00605075: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605078: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0060507b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060507d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00605083: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605085u); call_ind(t); }
    /* 00605085: mov esp, ebp */ r_esp = r_ebp;
    /* 00605087: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605088: ret 8 */ FN_RET(0x00605060); r_esp += 12; return;
}

void f_00605090(void) /* sciSlider::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605090);
    /* 00605090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605091: mov ebp, esp */ r_ebp = r_esp;
    /* 00605093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060509a: mov byte ptr [eax + 0x6c], 1 */ W8((u32)(r_eax+0x6cu), 0x1u);
    /* 0060509e: mov esp, ebp */ r_esp = r_ebp;
    /* 006050a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006050a1: ret  */ FN_RET(0x00605090); r_esp += 4; return;
}

void f_006050b0(void) /* sciSlider::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006050b0);
    /* 006050b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006050b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006050b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006050b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006050b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006050ba: mov byte ptr [eax + 0x6c], 0 */ W8((u32)(r_eax+0x6cu), 0x0u);
    /* 006050be: mov esp, ebp */ r_esp = r_ebp;
    /* 006050c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006050c1: ret  */ FN_RET(0x006050b0); r_esp += 4; return;
}

void f_006052f0(void) /* scislider::func_006052f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006052f0);
    /* 006052f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006052f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006052f3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006052f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006052f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006052fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006052ff: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00605302: sub edx, dword ptr [ecx + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605305: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605306: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60530bu); f_00686eba();
    /* 0060530b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060530e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00605311: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605314: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x605319u); f_006050f0();
    /* 00605319: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060531c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060531e: je 0x605334 */ if (fZ) goto L_00605334;
L_00605320:; BB(0x00605320);
    /* 00605320: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605323: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605326: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00605329: sub eax, dword ptr [edx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060532c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060532f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00605332: jmp 0x605346 */ goto L_00605346;
L_00605334:; BB(0x00605334);
    /* 00605334: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605337: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060533a: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0060533d: sub eax, dword ptr [edx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00605340: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605343: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00605346:; BB(0x00605346);
    /* 00605346: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00605349: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060534c: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0060534f: fidiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffe8u));
    /* 00605352: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00605355: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605358: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x60535du); f_006050f0();
    /* 0060535d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00605360: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605362: je 0x605387 */ if (fZ) goto L_00605387;
L_00605364:; BB(0x00605364);
    /* 00605364: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605367: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0060536a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060536d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00605370: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00605372: mov ecx, eax */ r_ecx = r_eax;
    /* 00605374: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00605377: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605379u); call_ind(t); }
    /* 00605379: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060537c: sub eax, dword ptr [ecx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060537f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00605382: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00605385: jmp 0x6053a6 */ goto L_006053a6;
L_00605387:; BB(0x00605387);
    /* 00605387: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060538a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0060538d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605390: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00605393: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605395: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00605398: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60539au); call_ind(t); }
    /* 0060539a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060539d: sub eax, dword ptr [ecx + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006053a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006053a3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_006053a6:; BB(0x006053a6);
    /* 006053a6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006053a9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006053ac: fldz  */ FPUSH(0.0);
    /* 006053ae: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 006053b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006053b3: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006053b6: jp 0x6053d5 */ if (fP) goto L_006053d5;
L_006053b8:; BB(0x006053b8);
    /* 006053b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006053ba: jne 0x6053d3 */ if (!fZ) goto L_006053d3;
L_006053bc:; BB(0x006053bc);
    /* 006053bc: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 006053c1: push 0x6d7948 */ { u32 v = 0x6d7948u; r_esp -= 4; W32(r_esp, v); }
    /* 006053c6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006053cb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6053d0u); f_005e9f20();
    /* 006053d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006053d3:; BB(0x006053d3);
    /* 006053d3: jmp 0x6053f9 */ goto L_006053f9;
L_006053d5:; BB(0x006053d5);
    /* 006053d5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006053d8: fild dword ptr [edx + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x50u)));
    /* 006053db: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006053de: fdiv qword ptr [ebp - 0x20] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffe0u));
    /* 006053e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006053e3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 006053e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006053e8: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 006053eb: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6053f0u); f_00686cc0();
    /* 006053f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006053f1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006053f4: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x6053f9u); f_00605110();
L_006053f9:; BB(0x006053f9);
    /* 006053f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006053fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006053fc: ret  */ FN_RET(0x006052f0); r_esp += 4; return;
}

