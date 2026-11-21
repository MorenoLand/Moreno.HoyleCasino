#include "protos.h"

void f_00414ce0(void) /* BlackjackRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414ce0);
    /* 00414ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00414ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414ce5: push 0x69dd78 */ { u32 v = 0x69dd78u; r_esp -= 4; W32(r_esp, v); }
    /* 00414cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00414cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414cf1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00414cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00414cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00414d05: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00414d08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414d0b: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x414d10u); f_005d7b60();
    /* 00414d10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414d17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414d1a: mov dword ptr [eax], 0x6b3e54 */ W32((u32)(r_eax), 0x6b3e54u);
    /* 00414d20: push 0x138d */ { u32 v = 0x138du; r_esp -= 4; W32(r_esp, v); }
    /* 00414d25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414d28: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x414d2du); f_005f1ad0();
    /* 00414d2d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00414d34: jmp 0x414d3f */ goto L_00414d3f;
L_00414d36:; BB(0x00414d36);
    /* 00414d36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414d39: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414d3c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00414d3f:; BB(0x00414d3f);
    /* 00414d3f: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414d43: jge 0x414d65 */ if ((fS==fO)) goto L_00414d65;
L_00414d45:; BB(0x00414d45);
    /* 00414d45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414d4a: add edx, 0x1389 */ {  u32 a = r_edx; u32 b = 0x1389u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414d50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414d51: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d56: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00414d5b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00414d5e: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x414d63u); f_006044b0();
    /* 00414d63: jmp 0x414d36 */ goto L_00414d36;
L_00414d65:; BB(0x00414d65);
    /* 00414d65: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00414d6c: jmp 0x414d77 */ goto L_00414d77;
L_00414d6e:; BB(0x00414d6e);
    /* 00414d6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414d71: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414d74: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00414d77:; BB(0x00414d77);
    /* 00414d77: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414d7b: jge 0x414d9d */ if ((fS==fO)) goto L_00414d9d;
L_00414d7d:; BB(0x00414d7d);
    /* 00414d7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414d82: add edx, 0x13a2 */ {  u32 a = r_edx; u32 b = 0x13a2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414d88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414d89: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d8e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00414d93: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00414d96: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x414d9bu); f_006044b0();
    /* 00414d9b: jmp 0x414d6e */ goto L_00414d6e;
L_00414d9d:; BB(0x00414d9d);
    /* 00414d9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414da0: mov dword ptr [0x790320], ecx */ W32((u32)(0x790320u), r_ecx);
    /* 00414da6: mov dword ptr [0x790324], 0 */ W32((u32)(0x790324u), 0x0u);
    /* 00414db0: mov dword ptr [0x790328], 0 */ W32((u32)(0x790328u), 0x0u);
    /* 00414dba: mov dword ptr [0x79032c], 0 */ W32((u32)(0x79032cu), 0x0u);
    /* 00414dc4: mov dword ptr [0x790330], 0 */ W32((u32)(0x790330u), 0x0u);
    /* 00414dce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414dd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414dd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414ddb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414de3: mov esp, ebp */ r_esp = r_ebp;
    /* 00414de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414de6: ret  */ FN_RET(0x00414ce0); r_esp += 4; return;
}

void f_00414df0(void) /* BlackjackRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414df0);
    /* 00414df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00414df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414df5: push 0x69dd9b */ { u32 v = 0x69dd9bu; r_esp -= 4; W32(r_esp, v); }
    /* 00414dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00414e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414e01: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414e04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00414e09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414e0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00414e0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00414e15: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00414e18: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00414e1b: mov dword ptr [eax], 0x6b3e54 */ W32((u32)(r_eax), 0x6b3e54u);
    /* 00414e21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414e28: mov dword ptr [0x790320], 0 */ W32((u32)(0x790320u), 0x0u);
    /* 00414e32: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414e38: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00414e3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414e3e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00414e41: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414e45: je 0x414e5a */ if (fZ) goto L_00414e5a;
L_00414e47:; BB(0x00414e47);
    /* 00414e47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414e49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414e4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414e4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414e51: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414e53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414e55u); call_ind(t); }
    /* 00414e55: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00414e58: jmp 0x414e61 */ goto L_00414e61;
L_00414e5a:; BB(0x00414e5a);
    /* 00414e5a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00414e61:; BB(0x00414e61);
    /* 00414e61: mov dword ptr [0x790324], 0 */ W32((u32)(0x790324u), 0x0u);
    /* 00414e6b: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 00414e71: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00414e74: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414e77: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00414e7a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414e7e: je 0x414e93 */ if (fZ) goto L_00414e93;
L_00414e80:; BB(0x00414e80);
    /* 00414e80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414e82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414e85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414e87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414e8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414e8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414e8eu); call_ind(t); }
    /* 00414e8e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00414e91: jmp 0x414e9a */ goto L_00414e9a;
L_00414e93:; BB(0x00414e93);
    /* 00414e93: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00414e9a:; BB(0x00414e9a);
    /* 00414e9a: mov dword ptr [0x790328], 0 */ W32((u32)(0x790328u), 0x0u);
    /* 00414ea4: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00414eaa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00414ead: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414eb0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00414eb3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414eb7: je 0x414ecc */ if (fZ) goto L_00414ecc;
L_00414eb9:; BB(0x00414eb9);
    /* 00414eb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ebb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414ebe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414ec0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414ec3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414ec5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414ec7u); call_ind(t); }
    /* 00414ec7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00414eca: jmp 0x414ed3 */ goto L_00414ed3;
L_00414ecc:; BB(0x00414ecc);
    /* 00414ecc: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00414ed3:; BB(0x00414ed3);
    /* 00414ed3: mov dword ptr [0x79032c], 0 */ W32((u32)(0x79032cu), 0x0u);
    /* 00414edd: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00414ee3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00414ee6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00414ee9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00414eec: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414ef0: je 0x414f05 */ if (fZ) goto L_00414f05;
L_00414ef2:; BB(0x00414ef2);
    /* 00414ef2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414ef4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00414ef7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414ef9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00414efc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414efe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414f00u); call_ind(t); }
    /* 00414f00: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00414f03: jmp 0x414f0c */ goto L_00414f0c;
L_00414f05:; BB(0x00414f05);
    /* 00414f05: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00414f0c:; BB(0x00414f0c);
    /* 00414f0c: mov dword ptr [0x790330], 0 */ W32((u32)(0x790330u), 0x0u);
    /* 00414f16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414f1d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00414f20: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x414f25u); f_005d7bd0();
    /* 00414f25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414f28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414f2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414f30: mov esp, ebp */ r_esp = r_ebp;
    /* 00414f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414f33: ret  */ FN_RET(0x00414df0); r_esp += 4; return;
}

void f_00414f40(void) /* BlackjackRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414f40);
    /* 00414f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00414f43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414f45: push 0x69dded */ { u32 v = 0x69ddedu; r_esp -= 4; W32(r_esp, v); }
    /* 00414f4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00414f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414f51: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414f54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00414f59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414f5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00414f5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00414f65: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00414f68: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00414f6b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x414f70u); f_005d8230();
    /* 00414f70: push 0x504 */ { u32 v = 0x504u; r_esp -= 4; W32(r_esp, v); }
    /* 00414f75: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x414f7au); f_00686d82();
    /* 00414f7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414f7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414f80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414f87: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414f8b: je 0x414f9a */ if (fZ) goto L_00414f9a;
L_00414f8d:; BB(0x00414f8d);
    /* 00414f8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414f90: call 0x4182a0 */ r_esp -= 4; W32(r_esp, 0x414f95u); f_004182a0();
    /* 00414f95: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00414f98: jmp 0x414fa1 */ goto L_00414fa1;
L_00414f9a:; BB(0x00414f9a);
    /* 00414f9a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00414fa1:; BB(0x00414fa1);
    /* 00414fa1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00414fa4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00414fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414fae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00414fb1: mov dword ptr [0x790324], ecx */ W32((u32)(0x790324u), r_ecx);
    /* 00414fb7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414fbd: call 0x418750 */ r_esp -= 4; W32(r_esp, 0x414fc2u); f_00418750();
    /* 00414fc2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00414fc4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x414fc9u); f_00686d82();
    /* 00414fc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414fcc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00414fcf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00414fd6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414fda: je 0x414fe9 */ if (fZ) goto L_00414fe9;
L_00414fdc:; BB(0x00414fdc);
    /* 00414fdc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414fdf: call 0x412260 */ r_esp -= 4; W32(r_esp, 0x414fe4u); f_00412260();
    /* 00414fe4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00414fe7: jmp 0x414ff0 */ goto L_00414ff0;
L_00414fe9:; BB(0x00414fe9);
    /* 00414fe9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00414ff0:; BB(0x00414ff0);
    /* 00414ff0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00414ff3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00414ff6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414ffd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00415000: mov dword ptr [0x790328], eax */ W32((u32)(0x790328u), r_eax);
    /* 00415005: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0041500b: call 0x4122a0 */ r_esp -= 4; W32(r_esp, 0x415010u); f_004122a0();
    /* 00415010: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00415012: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x415017u); f_00686d82();
    /* 00415017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041501a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041501d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00415024: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415028: je 0x415037 */ if (fZ) goto L_00415037;
L_0041502a:; BB(0x0041502a);
    /* 0041502a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041502d: call 0x40c420 */ r_esp -= 4; W32(r_esp, 0x415032u); f_0040c420();
    /* 00415032: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00415035: jmp 0x41503e */ goto L_0041503e;
L_00415037:; BB(0x00415037);
    /* 00415037: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0041503e:; BB(0x0041503e);
    /* 0041503e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00415041: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00415044: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041504b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041504e: mov dword ptr [0x79032c], edx */ W32((u32)(0x79032cu), r_edx);
    /* 00415054: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041505a: call 0x40c770 */ r_esp -= 4; W32(r_esp, 0x41505fu); f_0040c770();
    /* 0041505f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00415061: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x415066u); f_00686d82();
    /* 00415066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415069: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0041506c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00415073: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415077: je 0x415086 */ if (fZ) goto L_00415086;
L_00415079:; BB(0x00415079);
    /* 00415079: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041507c: call 0x40a070 */ r_esp -= 4; W32(r_esp, 0x415081u); f_0040a070();
    /* 00415081: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00415084: jmp 0x41508d */ goto L_0041508d;
L_00415086:; BB(0x00415086);
    /* 00415086: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0041508d:; BB(0x0041508d);
    /* 0041508d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00415090: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00415093: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041509a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041509d: mov dword ptr [0x790330], ecx */ W32((u32)(0x790330u), r_ecx);
    /* 004150a3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004150a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4150aau); f_00686d82();
    /* 004150aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004150ad: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004150b0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004150b7: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004150bb: je 0x4150d8 */ if (fZ) goto L_004150d8;
L_004150bd:; BB(0x004150bd);
    /* 004150bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004150bf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004150c2: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4150c7u); f_005fc0d0();
    /* 004150c7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004150ca: mov dword ptr [edx], 0x6b4154 */ W32((u32)(r_edx), 0x6b4154u);
    /* 004150d0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004150d3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004150d6: jmp 0x4150df */ goto L_004150df;
L_004150d8:; BB(0x004150d8);
    /* 004150d8: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004150df:; BB(0x004150df);
    /* 004150df: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004150e2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004150e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004150ec: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004150ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004150f0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004150f3: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x4150f8u); f_005f1b70();
    /* 004150f8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004150fb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004150fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00415101: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00415104: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00415106: mov ecx, eax */ r_ecx = r_eax;
    /* 00415108: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0041510b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41510du); call_ind(t); }
    /* 0041510d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00415110: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x415115u); f_005d85e0();
    /* 00415115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415117: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0041511d: call 0x4122e0 */ r_esp -= 4; W32(r_esp, 0x415122u); f_004122e0();
    /* 00415122: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415125: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041512c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041512d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041512f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415130: ret  */ FN_RET(0x00414f40); r_esp += 4; return;
}

void f_00415140(void) /* BlackjackRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415140);
    /* 00415140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415141: mov ebp, esp */ r_ebp = r_esp;
    /* 00415143: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415146: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00415149: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041514c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041514d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00415150: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x415155u); f_005d7f40();
    /* 00415155: cmp dword ptr [0x790324], 0 */ {  u32 a = R32((u32)(0x790324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041515c: je 0x41516e */ if (fZ) goto L_0041516e;
L_0041515e:; BB(0x0041515e);
    /* 0041515e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415164: call 0x419dd0 */ r_esp -= 4; W32(r_esp, 0x415169u); f_00419dd0();
    /* 00415169: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041516c: jmp 0x415175 */ goto L_00415175;
L_0041516e:; BB(0x0041516e);
    /* 0041516e: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
L_00415175:; BB(0x00415175);
    /* 00415175: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00415178: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041517b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041517e: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415182: jne 0x415229 */ if (!fZ) goto L_00415229;
L_00415188:; BB(0x00415188);
    /* 00415188: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041518b: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0041518f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415191: jne 0x415229 */ if (!fZ) goto L_00415229;
L_00415197:; BB(0x00415197);
    /* 00415197: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041519b: je 0x415229 */ if (fZ) goto L_00415229;
L_004151a1:; BB(0x004151a1);
    /* 004151a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004151a4: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004151a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004151a9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x4151afu); call_ind(t); }
    /* 004151af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004151b2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004151b5: cmp dword ptr [ebp - 0x24], 0x74 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004151b9: je 0x4151bd */ if (fZ) goto L_004151bd;
L_004151bb:; BB(0x004151bb);
    /* 004151bb: jmp 0x415229 */ goto L_00415229;
L_004151bd:; BB(0x004151bd);
    /* 004151bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004151c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004151c1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4151c6u); f_005dcb00();
    /* 004151c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004151c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004151cb: je 0x415229 */ if (fZ) goto L_00415229;
L_004151cd:; BB(0x004151cd);
    /* 004151cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004151d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004151d1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4151d6u); f_005dcb00();
    /* 004151d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004151d9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004151dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004151df: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4151e4u); f_0063aac0();
    /* 004151e4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004151e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004151e9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004151ed: je 0x41520b */ if (fZ) goto L_0041520b;
L_004151ef:; BB(0x004151ef);
    /* 004151ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004151f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4151f7u); f_0063aac0();
    /* 004151f7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004151f9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004151fc: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415200: je 0x41520b */ if (fZ) goto L_0041520b;
L_00415202:; BB(0x00415202);
    /* 00415202: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00415209: jmp 0x415212 */ goto L_00415212;
L_0041520b:; BB(0x0041520b);
    /* 0041520b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00415212:; BB(0x00415212);
    /* 00415212: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 00415216: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415218: je 0x415229 */ if (fZ) goto L_00415229;
L_0041521a:; BB(0x0041521a);
    /* 0041521a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041521d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041521e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415224: call 0x41a0b0 */ r_esp -= 4; W32(r_esp, 0x415229u); f_0041a0b0();
L_00415229:; BB(0x00415229);
    /* 00415229: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041522c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00415230: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415232: jne 0x41528a */ if (!fZ) goto L_0041528a;
L_00415234:; BB(0x00415234);
    /* 00415234: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415237: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041523b: jne 0x41528a */ if (!fZ) goto L_0041528a;
L_0041523d:; BB(0x0041523d);
    /* 0041523d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415240: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00415244: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415247: jne 0x41528a */ if (!fZ) goto L_0041528a;
L_00415249:; BB(0x00415249);
    /* 00415249: cmp dword ptr [0x790324], 0 */ {  u32 a = R32((u32)(0x790324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415250: je 0x41528a */ if (fZ) goto L_0041528a;
L_00415252:; BB(0x00415252);
    /* 00415252: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415257: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041525d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00415260: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415264: je 0x41528a */ if (fZ) goto L_0041528a;
L_00415266:; BB(0x00415266);
    /* 00415266: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0041526c: mov eax, dword ptr [edx + 0x4d0] */ r_eax = R32((u32)(r_edx+0x4d0u));
    /* 00415272: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00415275: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00415278: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0041527e: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 00415285: call 0x5cb5b0 */ r_esp -= 4; W32(r_esp, 0x41528au); f_005cb5b0();
L_0041528a:; BB(0x0041528a);
    /* 0041528a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041528d: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00415291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415293: jne 0x4152fd */ if (!fZ) goto L_004152fd;
L_00415295:; BB(0x00415295);
    /* 00415295: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415298: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041529c: jne 0x4152fd */ if (!fZ) goto L_004152fd;
L_0041529e:; BB(0x0041529e);
    /* 0041529e: cmp dword ptr [0x79032c], 0 */ {  u32 a = R32((u32)(0x79032cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152a5: je 0x4152fd */ if (fZ) goto L_004152fd;
L_004152a7:; BB(0x004152a7);
    /* 004152a7: cmp dword ptr [0x790324], 0 */ {  u32 a = R32((u32)(0x790324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152ae: je 0x4152fd */ if (fZ) goto L_004152fd;
L_004152b0:; BB(0x004152b0);
    /* 004152b0: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004152b5: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152b9: je 0x4152fd */ if (fZ) goto L_004152fd;
L_004152bb:; BB(0x004152bb);
    /* 004152bb: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004152c1: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152c5: je 0x4152fd */ if (fZ) goto L_004152fd;
L_004152c7:; BB(0x004152c7);
    /* 004152c7: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 004152cd: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004152d0: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x4152d5u); f_005f54a0();
    /* 004152d5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004152d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152da: jne 0x4152f1 */ if (!fZ) goto L_004152f1;
L_004152dc:; BB(0x004152dc);
    /* 004152dc: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004152e2: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004152e5: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x4152eau); f_005f54a0();
    /* 004152ea: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004152ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004152ef: je 0x4152fd */ if (fZ) goto L_004152fd;
L_004152f1:; BB(0x004152f1);
    /* 004152f1: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 004152f6: mov byte ptr [eax + 0x4d8], 1 */ W8((u32)(r_eax+0x4d8u), 0x1u);
L_004152fd:; BB(0x004152fd);
    /* 004152fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004152ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415300: ret 4 */ FN_RET(0x00415140); r_esp += 8; return;
}

void f_00415310(void) /* BlackjackRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415310);
    /* 00415310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415311: mov ebp, esp */ r_ebp = r_esp;
    /* 00415313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415316: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415319: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041531c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041531f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415326: je 0x415336 */ if (fZ) goto L_00415336;
L_00415328:; BB(0x00415328);
    /* 00415328: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041532f: je 0x4153a2 */ if (fZ) goto L_004153a2;
L_00415331:; BB(0x00415331);
    /* 00415331: jmp 0x4153d7 */ goto L_004153d7;
L_00415336:; BB(0x00415336);
    /* 00415336: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415338: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041533d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415340: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x415345u); f_005fe640();
    /* 00415345: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415347: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041534c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041534f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x415354u); f_005fe640();
    /* 00415354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415356: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041535b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041535e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x415363u); f_005fe640();
    /* 00415363: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415365: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041536a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041536d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x415372u); f_005fe640();
    /* 00415372: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 00415379: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041537b: jne 0x415392 */ if (!fZ) goto L_00415392;
L_0041537d:; BB(0x0041537d);
    /* 0041537d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041537f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415381: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415383: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00415388: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041538b: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x415390u); f_005fe240();
    /* 00415390: jmp 0x41539e */ goto L_0041539e;
L_00415392:; BB(0x00415392);
    /* 00415392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415394: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00415396: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415399: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x41539eu); f_005fe640();
L_0041539e:; BB(0x0041539e);
    /* 0041539e: jmp 0x4153d7 */ goto L_004153d7;
L_004153a2:; BB(0x004153a2);
    /* 004153a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004153a4: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 004153a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004153ac: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4153b1u); f_005fe640();
    /* 004153b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004153b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004153b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004153b7: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 004153bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004153bf: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4153c4u); f_005fe240();
    /* 004153c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004153c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004153c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004153ca: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 004153cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004153d2: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4153d7u); f_005fe240();
L_004153d7:; BB(0x004153d7);
    /* 004153d7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004153da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004153db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004153de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004153df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004153e2: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x4153e7u); f_005d8670();
    /* 004153e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004153e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004153ea: ret 8 */ FN_RET(0x00415310); r_esp += 12; return;
}

void f_004153f0(void) /* BlackjackRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004153f0);
    /* 004153f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004153f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004153f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004153f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004153f7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004153fc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00415402: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x415407u); f_005df2e0();
    /* 00415407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415408: push 0x30d7e9 */ { u32 v = 0x30d7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041540d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415410: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x415415u); f_005f1e60();
    /* 00415415: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415418: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x41541du); f_0064e430();
    /* 0041541d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041541f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415420: ret  */ FN_RET(0x004153f0); r_esp += 4; return;
}

void f_00415430(void) /* BlackjackRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415430);
    /* 00415430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415431: mov ebp, esp */ r_ebp = r_esp;
    /* 00415433: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415436: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00415439: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041543e: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00415444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415447: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041544a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041544b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415450u); f_005dcb00();
    /* 00415450: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415455: je 0x415613 */ if (fZ) goto L_00415613;
L_0041545b:; BB(0x0041545b);
    /* 0041545b: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415460: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00415466: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415469: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041546c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041546d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415472u); f_005dcb00();
    /* 00415472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415475: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00415478: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041547b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x415480u); f_0063aac0();
    /* 00415480: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00415482: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00415485: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415489: je 0x4154a7 */ if (fZ) goto L_004154a7;
L_0041548b:; BB(0x0041548b);
    /* 0041548b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041548e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x415493u); f_0063aac0();
    /* 00415493: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00415495: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00415498: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041549c: je 0x4154a7 */ if (fZ) goto L_004154a7;
L_0041549e:; BB(0x0041549e);
    /* 0041549e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004154a5: jmp 0x4154ae */ goto L_004154ae;
L_004154a7:; BB(0x004154a7);
    /* 004154a7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_004154ae:; BB(0x004154ae);
    /* 004154ae: movzx edx, byte ptr [ebp - 0x34] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 004154b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154b4: je 0x415613 */ if (fZ) goto L_00415613;
L_004154ba:; BB(0x004154ba);
    /* 004154ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004154bd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004154c0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004154c3: sub ecx, 0x30d7ea */ {  u32 a = r_ecx; u32 b = 0x30d7eau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004154c9: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004154cc: cmp dword ptr [ebp - 0x38], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004154d0: ja 0x415613 */ if ((!fC&&!fZ)) goto L_00415613;
L_004154d6:; BB(0x004154d6);
    /* 004154d6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004154d9: jmp dword ptr [edx*4 + 0x41562c] */ { u32 t = R32((u32)(r_edx*4+0x41562cu)); switch (t) { case 0x4154e0u: goto L_004154e0; case 0x415518u: goto L_00415518; case 0x415551u: goto L_00415551; case 0x41558au: goto L_0041558a; case 0x4155bfu: goto L_004155bf; case 0x4155f5u: goto L_004155f5; default: UNSUP(0x004154d9, "jump table entry is not a known target"); } }
L_004154e0:; BB(0x004154e0);
    /* 004154e0: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 004154e5: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 004154eb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004154ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004154f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004154f2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004154f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004154f6: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 004154fc: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x415501u); f_00413360();
    /* 00415501: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415506: je 0x415513 */ if (fZ) goto L_00415513;
L_00415508:; BB(0x00415508);
    /* 00415508: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041550e: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x415513u); f_0040da70();
L_00415513:; BB(0x00415513);
    /* 00415513: jmp 0x415623 */ goto L_00415623;
L_00415518:; BB(0x00415518);
    /* 00415518: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041551e: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 00415524: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00415527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415529: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041552b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041552e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041552f: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 00415535: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x41553au); f_00413360();
    /* 0041553a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041553d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041553f: je 0x41554c */ if (fZ) goto L_0041554c;
L_00415541:; BB(0x00415541);
    /* 00415541: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00415547: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x41554cu); f_0040da70();
L_0041554c:; BB(0x0041554c);
    /* 0041554c: jmp 0x415623 */ goto L_00415623;
L_00415551:; BB(0x00415551);
    /* 00415551: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00415557: mov eax, dword ptr [edx + 0x4d0] */ r_eax = R32((u32)(r_edx+0x4d0u));
    /* 0041555d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00415560: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415562: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00415564: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00415567: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415568: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0041556e: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x415573u); f_00413360();
    /* 00415573: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00415576: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415578: je 0x415585 */ if (fZ) goto L_00415585;
L_0041557a:; BB(0x0041557a);
    /* 0041557a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00415580: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x415585u); f_0040da70();
L_00415585:; BB(0x00415585);
    /* 00415585: jmp 0x415623 */ goto L_00415623;
L_0041558a:; BB(0x0041558a);
    /* 0041558a: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041558f: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00415595: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00415598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041559a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041559c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041559f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004155a0: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 004155a6: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x4155abu); f_00413360();
    /* 004155ab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004155ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155b0: je 0x4155bd */ if (fZ) goto L_004155bd;
L_004155b2:; BB(0x004155b2);
    /* 004155b2: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004155b8: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x4155bdu); f_0040da70();
L_004155bd:; BB(0x004155bd);
    /* 004155bd: jmp 0x415623 */ goto L_00415623;
L_004155bf:; BB(0x004155bf);
    /* 004155bf: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004155c5: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 004155cb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004155ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004155d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004155d2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004155d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004155d6: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 004155dc: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x4155e1u); f_00413360();
    /* 004155e1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004155e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155e6: je 0x4155f3 */ if (fZ) goto L_004155f3;
L_004155e8:; BB(0x004155e8);
    /* 004155e8: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004155ee: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x4155f3u); f_0040da70();
L_004155f3:; BB(0x004155f3);
    /* 004155f3: jmp 0x415623 */ goto L_00415623;
L_004155f5:; BB(0x004155f5);
    /* 004155f5: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004155fb: mov eax, dword ptr [edx + 0x4d0] */ r_eax = R32((u32)(r_edx+0x4d0u));
    /* 00415601: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00415604: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00415607: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415608: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041560e: call 0x41a0b0 */ r_esp -= 4; W32(r_esp, 0x415613u); f_0041a0b0();
L_00415613:; BB(0x00415613);
    /* 00415613: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415616: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041561a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041561b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041561e: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x415623u); f_005dc7d0();
L_00415623:; BB(0x00415623);
    /* 00415623: mov esp, ebp */ r_esp = r_ebp;
    /* 00415625: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415626: ret 8 */ FN_RET(0x00415430); r_esp += 12; return;
}

void f_00415650(void) /* BlackjackRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415650);
    /* 00415650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415651: mov ebp, esp */ r_ebp = r_esp;
    /* 00415653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415657: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041565d: call 0x418c00 */ r_esp -= 4; W32(r_esp, 0x415662u); f_00418c00();
    /* 00415662: mov esp, ebp */ r_esp = r_ebp;
    /* 00415664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415665: ret  */ FN_RET(0x00415650); r_esp += 4; return;
}

void f_00415670(void) /* BlackjackRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415670);
    /* 00415670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415671: mov ebp, esp */ r_ebp = r_esp;
    /* 00415673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415677: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0041567b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041567d: je 0x41568c */ if (fZ) goto L_0041568c;
L_0041567f:; BB(0x0041567f);
    /* 0041567f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415681: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415687: call 0x4184c0 */ r_esp -= 4; W32(r_esp, 0x41568cu); f_004184c0();
L_0041568c:; BB(0x0041568c);
    /* 0041568c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041568f: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x415694u); f_005db9b0();
    /* 00415694: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041569a: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x41569fu); f_004189a0();
    /* 0041569f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004156a1: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 004156a7: call 0x4122e0 */ r_esp -= 4; W32(r_esp, 0x4156acu); f_004122e0();
    /* 004156ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004156ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004156af: ret 4 */ FN_RET(0x00415670); r_esp += 8; return;
}

void f_004156c0(void) /* BlackjackRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004156c0);
    /* 004156c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004156c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004156c3: sub esp, 0x134 */ {  u32 a = r_esp; u32 b = 0x134u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004156c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004156ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004156d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004156d3: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 004156d9: mov byte ptr [ebp - 0x125], 0 */ W8((u32)(r_ebp+0xfffffedbu), 0x0u);
    /* 004156e0: cmp dword ptr [ebp + 0x18], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004156e7: jl 0x4156f5 */ if ((fS!=fO)) goto L_004156f5;
L_004156e9:; BB(0x004156e9);
    /* 004156e9: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 004156eb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004156ee: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4156f3u); f_005ecc60();
    /* 004156f3: jmp 0x4156ff */ goto L_004156ff;
L_004156f5:; BB(0x004156f5);
    /* 004156f5: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 004156f7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004156fa: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4156ffu); f_005ecc60();
L_004156ff:; BB(0x004156ff);
    /* 004156ff: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00415702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415703: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00415706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415707: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41570cu); f_0064c8a0();
    /* 0041570c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041570f: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00415715: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0041571b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041571d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041571f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415721: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00415727: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415728: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0041572e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041572f: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00415735: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415736: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x41573bu); f_0064c8d0();
    /* 0041573b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041573e: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00415744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415745: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041574a: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00415750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415751: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x415757u); call_ind(t); }
    /* 00415757: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041575a: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00415760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415761: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00415764: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00415766: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00415769: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0041576f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x415771u); call_ind(t); }
    /* 00415771: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00415773: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415776: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00415778: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x41577du); f_00686d72();
    /* 0041577d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041577f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415780: ret 0x1c */ FN_RET(0x004156c0); r_esp += 32; return;
}

void f_00415790(void) /* BlackjackRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415790);
    /* 00415790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415791: mov ebp, esp */ r_ebp = r_esp;
    /* 00415793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415796: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00415799: mov dword ptr [ebp - 0x10], 0x190 */ W32((u32)(r_ebp+0xfffffff0u), 0x190u);
    /* 004157a0: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 004157a7: mov dword ptr [ebp - 8], 0x213 */ W32((u32)(r_ebp+0xfffffff8u), 0x213u);
    /* 004157ae: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004157b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004157b8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 004157bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004157be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004157bf: ret 4 */ FN_RET(0x00415790); r_esp += 8; return;
}

void f_004157d0(void) /* BlackjackRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004157d0);
    /* 004157d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004157d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004157d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004157d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004157d9: mov dword ptr [ebp - 0x10], 0x135 */ W32((u32)(r_ebp+0xfffffff0u), 0x135u);
    /* 004157e0: mov dword ptr [ebp - 0xc], 0x135 */ W32((u32)(r_ebp+0xfffffff4u), 0x135u);
    /* 004157e7: mov dword ptr [ebp - 8], 0xf1 */ W32((u32)(r_ebp+0xfffffff8u), 0xf1u);
    /* 004157ee: mov dword ptr [ebp - 4], 0xf1 */ W32((u32)(r_ebp+0xfffffffcu), 0xf1u);
    /* 004157f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004157f8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 004157fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004157fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004157ff: ret 4 */ FN_RET(0x004157d0); r_esp += 8; return;
}

void f_00415810(void) /* BlackjackRoom::vfunc115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415810);
    /* 00415810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415811: mov ebp, esp */ r_ebp = r_esp;
    /* 00415813: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415816: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415819: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00415820: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415823: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00415826: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415829: sub ecx, 0x7d0 */ {  u32 a = r_ecx; u32 b = 0x7d0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041582f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00415832: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00415836: ja 0x41589a */ if ((!fC&&!fZ)) goto L_0041589a;
L_00415838:; BB(0x00415838);
    /* 00415838: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041583b: jmp dword ptr [edx*4 + 0x4158a4] */ { u32 t = R32((u32)(r_edx*4+0x4158a4u)); switch (t) { case 0x415854u: goto L_00415854; case 0x41589au: goto L_0041589a; case 0x415866u: goto L_00415866; case 0x415878u: goto L_00415878; case 0x415842u: goto L_00415842; case 0x41588au: goto L_0041588a; default: UNSUP(0x0041583b, "jump table entry is not a known target"); } }
L_00415842:; BB(0x00415842);
    /* 00415842: push 0x6b419c */ { u32 v = 0x6b419cu; r_esp -= 4; W32(r_esp, v); }
    /* 00415847: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041584a: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x41584fu); f_00648330();
    /* 0041584f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00415852: jmp 0x41589a */ goto L_0041589a;
L_00415854:; BB(0x00415854);
    /* 00415854: push 0x6b4194 */ { u32 v = 0x6b4194u; r_esp -= 4; W32(r_esp, v); }
    /* 00415859: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041585c: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x415861u); f_00648330();
    /* 00415861: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00415864: jmp 0x41589a */ goto L_0041589a;
L_00415866:; BB(0x00415866);
    /* 00415866: push 0x6b4188 */ { u32 v = 0x6b4188u; r_esp -= 4; W32(r_esp, v); }
    /* 0041586b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041586e: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x415873u); f_00648330();
    /* 00415873: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00415876: jmp 0x41589a */ goto L_0041589a;
L_00415878:; BB(0x00415878);
    /* 00415878: push 0x6b417c */ { u32 v = 0x6b417cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041587d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415880: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x415885u); f_00648330();
    /* 00415885: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00415888: jmp 0x41589a */ goto L_0041589a;
L_0041588a:; BB(0x0041588a);
    /* 0041588a: push 0x6b4174 */ { u32 v = 0x6b4174u; r_esp -= 4; W32(r_esp, v); }
    /* 0041588f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415892: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x415897u); f_00648330();
    /* 00415897: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041589a:; BB(0x0041589a);
    /* 0041589a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041589d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041589f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004158a0: ret 8 */ FN_RET(0x00415810); r_esp += 12; return;
}

void f_004158d0(void) /* BlackjackRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004158d0);
    /* 004158d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004158d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004158d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004158d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004158d7: cmp dword ptr [0x790324], 0 */ {  u32 a = R32((u32)(0x790324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004158de: je 0x4158ed */ if (fZ) goto L_004158ed;
L_004158e0:; BB(0x004158e0);
    /* 004158e0: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004158e6: call 0x419080 */ r_esp -= 4; W32(r_esp, 0x4158ebu); f_00419080();
    /* 004158eb: jmp 0x4158ef */ goto L_004158ef;
L_004158ed:; BB(0x004158ed);
    /* 004158ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004158ef:; BB(0x004158ef);
    /* 004158ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004158f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004158f2: ret  */ FN_RET(0x004158d0); r_esp += 4; return;
}

void f_00415900(void) /* BlackjackRoom::vfunc163 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415900);
    /* 00415900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415901: mov ebp, esp */ r_ebp = r_esp;
    /* 00415903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415906: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415909: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041590c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041590e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415911: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 00415917: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x415919u); call_ind(t); }
    /* 00415919: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041591c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041591f: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00415926: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0041592c: call 0x4123c0 */ r_esp -= 4; W32(r_esp, 0x415931u); f_004123c0();
    /* 00415931: mov esp, ebp */ r_esp = r_ebp;
    /* 00415933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415934: ret  */ FN_RET(0x00415900); r_esp += 4; return;
}

void f_00415940(void) /* BlackjackRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415940);
    /* 00415940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415941: mov ebp, esp */ r_ebp = r_esp;
    /* 00415943: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415946: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415949: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00415950: jmp 0x41595b */ goto L_0041595b;
L_00415952:; BB(0x00415952);
    /* 00415952: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415955: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415958: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041595b:; BB(0x0041595b);
    /* 0041595b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041595f: jge 0x415987 */ if ((fS==fO)) goto L_00415987;
L_00415961:; BB(0x00415961);
    /* 00415961: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415964: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041596a: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0041596e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415971: je 0x415985 */ if (fZ) goto L_00415985;
L_00415973:; BB(0x00415973);
    /* 00415973: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415976: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041597c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00415980: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x415985u); f_005cd330();
L_00415985:; BB(0x00415985);
    /* 00415985: jmp 0x415952 */ goto L_00415952;
L_00415987:; BB(0x00415987);
    /* 00415987: mov esp, ebp */ r_esp = r_ebp;
    /* 00415989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041598a: ret 4 */ FN_RET(0x00415940); r_esp += 8; return;
}

void f_00415990(void) /* BlackjackRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415990);
    /* 00415990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415991: mov ebp, esp */ r_ebp = r_esp;
    /* 00415993: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415996: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00415999: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041599c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041599d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4159a2u); f_005dcb00();
    /* 004159a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004159a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004159a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004159ab: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 004159b1: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 004159b4: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004159b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004159ba: je 0x415a09 */ if (fZ) goto L_00415a09;
L_004159bc:; BB(0x004159bc);
    /* 004159bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004159bf: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004159c5: mov eax, dword ptr [edx + ecx*4 + 0x468] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 004159cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004159cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004159d2: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004159d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004159d8: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 004159dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004159de: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004159e1: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 004159e4: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 004159e8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004159eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004159ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004159f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004159f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004159f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004159f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004159f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004159fa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4159ffu); f_005dcb00();
    /* 004159ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a02: mov ecx, eax */ r_ecx = r_eax;
    /* 00415a04: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x415a09u); f_005d5cf0();
L_00415a09:; BB(0x00415a09);
    /* 00415a09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415a0c: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00415a12: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 00415a19: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x415a1eu); f_005cb9b0();
    /* 00415a1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00415a20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415a21: ret 4 */ FN_RET(0x00415990); r_esp += 8; return;
}

void f_00415a30(void) /* BlackjackRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415a30);
    /* 00415a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00415a33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415a36: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00415a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415a3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x415a42u); f_0064c8a0();
    /* 00415a42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a45: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00415a48: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00415a4b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00415a4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415a51: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00415a53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415a56: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00415a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415a5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415a62u); f_005dcb00();
    /* 00415a62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415a65: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00415a68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00415a6b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00415a71: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 00415a74: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00415a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415a7a: je 0x415a7e */ if (fZ) goto L_00415a7e;
L_00415a7c:; BB(0x00415a7c);
    /* 00415a7c: jmp 0x415aa8 */ goto L_00415aa8;
L_00415a7e:; BB(0x00415a7e);
    /* 00415a7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415a81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415a82: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00415a85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415a86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415a89: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415a8f: mov ecx, dword ptr [ecx + eax*4 + 0x468] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 00415a96: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x415a9bu); f_005cb880();
    /* 00415a9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00415a9d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00415aa0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415aa3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00415aa5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00415aa8:; BB(0x00415aa8);
    /* 00415aa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00415aaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415aab: ret 8 */ FN_RET(0x00415a30); r_esp += 12; return;
}

void f_00415ab0(void) /* BlackjackRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415ab0);
    /* 00415ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00415ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415ab7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415abd: call 0x418440 */ r_esp -= 4; W32(r_esp, 0x415ac2u); f_00418440();
    /* 00415ac2: mov esp, ebp */ r_esp = r_ebp;
    /* 00415ac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415ac5: ret  */ FN_RET(0x00415ab0); r_esp += 4; return;
}

void f_00415ad0(void) /* BlackjackRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415ad0);
    /* 00415ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00415ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415ad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415ad9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415adb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415ade: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00415ae1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415ae4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00415ae7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00415ae9: mov ecx, eax */ r_ecx = r_eax;
    /* 00415aeb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00415aee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x415af0u); call_ind(t); }
    /* 00415af0: mov esp, ebp */ r_esp = r_ebp;
    /* 00415af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415af3: ret  */ FN_RET(0x00415ad0); r_esp += 4; return;
}

void f_00415b00(void) /* BlackjackRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415b00);
    /* 00415b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00415b03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415b06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415b07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415b08: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00415b0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415b0f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415b14u); f_005dcb00();
    /* 00415b14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415b17: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 00415b1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415b1e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00415b24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415b25: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00415b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415b29: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415b2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415b2d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415b33: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415b38u); f_00418400();
    /* 00415b38: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415b3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00415b3d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x415b42u); f_0064c5c0();
    /* 00415b42: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00415b44: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00415b47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415b4b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415b51: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415b56u); f_00418400();
    /* 00415b56: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 00415b59: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00415b5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415b60: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415b65u); f_005dcb00();
    /* 00415b65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415b68: mov ecx, eax */ r_ecx = r_eax;
    /* 00415b6a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x415b6fu); f_0063b0a0();
    /* 00415b6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00415b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415b71: mov esp, ebp */ r_esp = r_ebp;
    /* 00415b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415b74: ret 4 */ FN_RET(0x00415b00); r_esp += 8; return;
}

void f_00415b80(void) /* BlackjackRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415b80);
    /* 00415b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00415b83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415b86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415b87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415b88: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00415b8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415b8f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415b94u); f_005dcb00();
    /* 00415b94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415b97: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00415b9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415b9e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00415ba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ba5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00415ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415ba9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415bac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415bad: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415bb3: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415bb8u); f_00418400();
    /* 00415bb8: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415bbb: mov ecx, eax */ r_ecx = r_eax;
    /* 00415bbd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x415bc2u); f_0064c5c0();
    /* 00415bc2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00415bc4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00415bc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00415bca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415bcb: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415bd1: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415bd6u); f_00418400();
    /* 00415bd6: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00415bd9: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 00415bdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00415bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415be0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x415be5u); f_005dcb00();
    /* 00415be5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415be8: mov ecx, eax */ r_ecx = r_eax;
    /* 00415bea: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x415befu); f_0063b0a0();
    /* 00415bef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00415bf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415bf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00415bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415bf4: ret 4 */ FN_RET(0x00415b80); r_esp += 8; return;
}

void f_00415c00(void) /* BlackjackRoom::vfunc168 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415c00);
    /* 00415c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00415c03: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415c06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415c07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415c08: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00415c0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415c0e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x415c13u); f_0063aac0();
    /* 00415c13: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00415c15: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00415c18: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c1c: je 0x415c3a */ if (fZ) goto L_00415c3a;
L_00415c1e:; BB(0x00415c1e);
    /* 00415c1e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415c21: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x415c26u); f_0063aac0();
    /* 00415c26: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00415c28: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00415c2b: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c2f: je 0x415c3a */ if (fZ) goto L_00415c3a;
L_00415c31:; BB(0x00415c31);
    /* 00415c31: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00415c38: jmp 0x415c41 */ goto L_00415c41;
L_00415c3a:; BB(0x00415c3a);
    /* 00415c3a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00415c41:; BB(0x00415c41);
    /* 00415c41: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 00415c45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c47: je 0x415c69 */ if (fZ) goto L_00415c69;
L_00415c49:; BB(0x00415c49);
    /* 00415c49: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00415c4f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x415c54u); f_005da830();
    /* 00415c54: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c59: jne 0x415c69 */ if (!fZ) goto L_00415c69;
L_00415c5b:; BB(0x00415c5b);
    /* 00415c5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00415c5e: movzx edx, byte ptr [ecx + 0x4b1] */ r_edx = (u32)R8((u32)(r_ecx+0x4b1u));
    /* 00415c65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415c67: je 0x415c6e */ if (fZ) goto L_00415c6e;
L_00415c69:; BB(0x00415c69);
    /* 00415c69: jmp 0x415d55 */ goto L_00415d55;
L_00415c6e:; BB(0x00415c6e);
    /* 00415c6e: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415c73: cmp dword ptr [eax + 0x4e0], 0 */ {  u32 a = R32((u32)(r_eax+0x4e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415c7a: jge 0x415cbb */ if ((fS==fO)) goto L_00415cbb;
L_00415c7c:; BB(0x00415c7c);
    /* 00415c7c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00415c7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415c80: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00415c83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415c84: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00415c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415c88: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415c8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415c8c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415c92: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415c97u); f_00418400();
    /* 00415c97: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415c9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00415c9c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x415ca1u); f_0064c5c0();
    /* 00415ca1: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00415ca3: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00415ca6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415caa: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415cb0: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415cb5u); f_00418400();
    /* 00415cb5: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 00415cb8: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
L_00415cbb:; BB(0x00415cbb);
    /* 00415cbb: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415cc0: cmp dword ptr [eax + 0x4e0], 0 */ {  u32 a = R32((u32)(r_eax+0x4e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415cc7: jne 0x415d08 */ if (!fZ) goto L_00415d08;
L_00415cc9:; BB(0x00415cc9);
    /* 00415cc9: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00415ccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ccd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00415cd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415cd1: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00415cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415cd5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415cd9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415cdf: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415ce4u); f_00418400();
    /* 00415ce4: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415ce7: mov ecx, eax */ r_ecx = r_eax;
    /* 00415ce9: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x415ceeu); f_0064c5c0();
    /* 00415cee: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00415cf0: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00415cf3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415cf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415cf7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415cfd: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415d02u); f_00418400();
    /* 00415d02: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00415d05: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
L_00415d08:; BB(0x00415d08);
    /* 00415d08: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415d0d: cmp dword ptr [eax + 0x4e0], 0 */ {  u32 a = R32((u32)(r_eax+0x4e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415d14: jle 0x415d55 */ if ((fZ||fS!=fO)) goto L_00415d55;
L_00415d16:; BB(0x00415d16);
    /* 00415d16: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00415d19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d1a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00415d1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d1e: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00415d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415d22: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00415d25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d26: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415d2c: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415d31u); f_00418400();
    /* 00415d31: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415d34: mov ecx, eax */ r_ecx = r_eax;
    /* 00415d36: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x415d3bu); f_0064c5c0();
    /* 00415d3b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00415d3d: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00415d40: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00415d43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d44: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415d4a: call 0x418400 */ r_esp -= 4; W32(r_esp, 0x415d4fu); f_00418400();
    /* 00415d4f: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00415d52: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
L_00415d55:; BB(0x00415d55);
    /* 00415d55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00415d56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415d57: mov esp, ebp */ r_esp = r_ebp;
    /* 00415d59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415d5a: ret 0x10 */ FN_RET(0x00415c00); r_esp += 20; return;
}

void f_00415d60(void) /* BlackjackRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415d60);
    /* 00415d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00415d63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415d66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00415d69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415d6b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00415d71: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x415d76u); f_005df700();
    /* 00415d76: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415d79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d7b: je 0x415d8c */ if (fZ) goto L_00415d8c;
L_00415d7d:; BB(0x00415d7d);
    /* 00415d7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00415d80: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x415d85u); f_005da7b0();
    /* 00415d85: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00415d88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d8a: je 0x415d8e */ if (fZ) goto L_00415d8e;
L_00415d8c:; BB(0x00415d8c);
    /* 00415d8c: jmp 0x415df8 */ goto L_00415df8;
L_00415d8e:; BB(0x00415d8e);
    /* 00415d8e: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00415d94: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d98: je 0x415dc5 */ if (fZ) goto L_00415dc5;
L_00415d9a:; BB(0x00415d9a);
    /* 00415d9a: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00415d9f: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00415da5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415da8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415dab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415dac: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 00415db2: call 0x40b260 */ r_esp -= 4; W32(r_esp, 0x415db7u); f_0040b260();
    /* 00415db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415db8: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00415dbd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00415dc0: call 0x411c20 */ r_esp -= 4; W32(r_esp, 0x415dc5u); f_00411c20();
L_00415dc5:; BB(0x00415dc5);
    /* 00415dc5: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00415dcb: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415dcf: je 0x415df8 */ if (fZ) goto L_00415df8;
L_00415dd1:; BB(0x00415dd1);
    /* 00415dd1: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00415dd7: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00415dda: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00415de0: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00415de6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00415de9: mov edx, dword ptr [eax + 0x1bc] */ r_edx = R32((u32)(r_eax+0x1bcu));
    /* 00415def: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00415df1: mov ecx, edx */ r_ecx = r_edx;
    /* 00415df3: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00415df6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x415df8u); call_ind(t); }
L_00415df8:; BB(0x00415df8);
    /* 00415df8: mov esp, ebp */ r_esp = r_ebp;
    /* 00415dfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415dfb: ret 4 */ FN_RET(0x00415d60); r_esp += 8; return;
}

void f_00415e00(void) /* BlackjackRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415e00);
    /* 00415e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00415e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415e07: mov eax, 0x416 */ r_eax = 0x416u;
    /* 00415e0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00415e0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415e0f: ret 4 */ FN_RET(0x00415e00); r_esp += 8; return;
}

void f_00415e20(void) /* BlackjackRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415e20);
    /* 00415e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00415e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00415e27: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00415e2d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x415e32u); f_00636e70();
    /* 00415e32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415e34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00415e37: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00415e3a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x415e3fu); f_005fc420();
    /* 00415e3f: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00415e45: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x415e4au); f_0040cc00();
    /* 00415e4a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00415e50: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x415e55u); f_004189a0();
    /* 00415e55: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 00415e5b: call 0x4123c0 */ r_esp -= 4; W32(r_esp, 0x415e60u); f_004123c0();
    /* 00415e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00415e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415e63: ret 8 */ FN_RET(0x00415e20); r_esp += 12; return;
}

void f_00415e70(void) /* BlackjackRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00415e70);
    /* 00415e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00415e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415e75: push 0x69de16 */ { u32 v = 0x69de16u; r_esp -= 4; W32(r_esp, v); }
    /* 00415e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00415e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415e81: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415e87: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00415e8c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415e8f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00415e92: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00415e98: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 00415e9e: mov dword ptr [ebp - 0x60], 0x6b442c */ W32((u32)(r_ebp+0xffffffa0u), 0x6b442cu);
    /* 00415ea5: mov dword ptr [ebp - 0x5c], 0x6b4408 */ W32((u32)(r_ebp+0xffffffa4u), 0x6b4408u);
    /* 00415eac: mov dword ptr [ebp - 0x58], 0x6b43e4 */ W32((u32)(r_ebp+0xffffffa8u), 0x6b43e4u);
    /* 00415eb3: mov dword ptr [ebp - 0x54], 0x6b43c0 */ W32((u32)(r_ebp+0xffffffacu), 0x6b43c0u);
    /* 00415eba: mov dword ptr [ebp - 0x50], 0x6b439c */ W32((u32)(r_ebp+0xffffffb0u), 0x6b439cu);
    /* 00415ec1: mov dword ptr [ebp - 0x4c], 0x6b4374 */ W32((u32)(r_ebp+0xffffffb4u), 0x6b4374u);
    /* 00415ec8: mov dword ptr [ebp - 0x48], 0x6b4350 */ W32((u32)(r_ebp+0xffffffb8u), 0x6b4350u);
    /* 00415ecf: mov dword ptr [ebp - 0x44], 0x6b4330 */ W32((u32)(r_ebp+0xffffffbcu), 0x6b4330u);
    /* 00415ed6: mov dword ptr [ebp - 0xb4], 0x10e */ W32((u32)(r_ebp+0xffffff4cu), 0x10eu);
    /* 00415ee0: mov dword ptr [ebp - 0xb0], 0xcc */ W32((u32)(r_ebp+0xffffff50u), 0xccu);
    /* 00415eea: mov dword ptr [ebp - 0xac], 0x10e */ W32((u32)(r_ebp+0xffffff54u), 0x10eu);
    /* 00415ef4: mov dword ptr [ebp - 0xa8], 0xdf */ W32((u32)(r_ebp+0xffffff58u), 0xdfu);
    /* 00415efe: mov dword ptr [ebp - 0xa4], 0x10e */ W32((u32)(r_ebp+0xffffff5cu), 0x10eu);
    /* 00415f08: mov dword ptr [ebp - 0xa0], 0xf2 */ W32((u32)(r_ebp+0xffffff60u), 0xf2u);
    /* 00415f12: mov dword ptr [ebp - 0x9c], 0x10e */ W32((u32)(r_ebp+0xffffff64u), 0x10eu);
    /* 00415f1c: mov dword ptr [ebp - 0x98], 0x105 */ W32((u32)(r_ebp+0xffffff68u), 0x105u);
    /* 00415f26: mov dword ptr [ebp - 0x94], 0x10e */ W32((u32)(r_ebp+0xffffff6cu), 0x10eu);
    /* 00415f30: mov dword ptr [ebp - 0x90], 0xcc */ W32((u32)(r_ebp+0xffffff70u), 0xccu);
    /* 00415f3a: mov dword ptr [ebp - 0x8c], 0x10e */ W32((u32)(r_ebp+0xffffff74u), 0x10eu);
    /* 00415f44: mov dword ptr [ebp - 0x88], 0xdf */ W32((u32)(r_ebp+0xffffff78u), 0xdfu);
    /* 00415f4e: mov dword ptr [ebp - 0x84], 0x10e */ W32((u32)(r_ebp+0xffffff7cu), 0x10eu);
    /* 00415f58: mov dword ptr [ebp - 0x80], 0xf2 */ W32((u32)(r_ebp+0xffffff80u), 0xf2u);
    /* 00415f5f: mov dword ptr [ebp - 0x7c], 0x10e */ W32((u32)(r_ebp+0xffffff84u), 0x10eu);
    /* 00415f66: mov dword ptr [ebp - 0x78], 0xcc */ W32((u32)(r_ebp+0xffffff88u), 0xccu);
    /* 00415f6d: mov dword ptr [ebp - 0x74], 0x10e */ W32((u32)(r_ebp+0xffffff8cu), 0x10eu);
    /* 00415f74: mov dword ptr [ebp - 0x70], 0xdf */ W32((u32)(r_ebp+0xffffff90u), 0xdfu);
    /* 00415f7b: mov dword ptr [ebp - 0x6c], 0x10e */ W32((u32)(r_ebp+0xffffff94u), 0x10eu);
    /* 00415f82: mov dword ptr [ebp - 0x68], 0xf2 */ W32((u32)(r_ebp+0xffffff98u), 0xf2u);
    /* 00415f89: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 00415f90: mov dword ptr [ebp - 0x38], 0x50 */ W32((u32)(r_ebp+0xffffffc8u), 0x50u);
    /* 00415f97: mov dword ptr [ebp - 0x34], 0x14 */ W32((u32)(r_ebp+0xffffffccu), 0x14u);
    /* 00415f9e: mov dword ptr [ebp - 0x30], 0x7d */ W32((u32)(r_ebp+0xffffffd0u), 0x7du);
    /* 00415fa5: mov dword ptr [ebp - 0x2c], 0x14 */ W32((u32)(r_ebp+0xffffffd4u), 0x14u);
    /* 00415fac: mov dword ptr [ebp - 0x28], 0xaa */ W32((u32)(r_ebp+0xffffffd8u), 0xaau);
    /* 00415fb3: mov dword ptr [ebp - 0x24], 0x14 */ W32((u32)(r_ebp+0xffffffdcu), 0x14u);
    /* 00415fba: mov dword ptr [ebp - 0x20], 0xd7 */ W32((u32)(r_ebp+0xffffffe0u), 0xd7u);
    /* 00415fc1: mov dword ptr [ebp - 0x1c], 0x14 */ W32((u32)(r_ebp+0xffffffe4u), 0x14u);
    /* 00415fc8: mov dword ptr [ebp - 0x18], 0x104 */ W32((u32)(r_ebp+0xffffffe8u), 0x104u);
    /* 00415fcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415fd1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00415fd4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00415fd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415fd9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00415fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415fdd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00415fe0: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415fe4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00415fe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415fe8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00415fea: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00415fec: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00415fee: push 0x6b4314 */ { u32 v = 0x6b4314u; r_esp -= 4; W32(r_esp, v); }
    /* 00415ff3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x415ff8u); f_00630f40();
    /* 00415ff8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415ffc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415ffe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416000: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416003: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x416008u); f_005fa5b0();
    /* 00416008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416009: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041600c: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416011u); f_005ff5a0();
    /* 00416011: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416013: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00416015: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00416017: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416019: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041601e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416020: push 0x30d7f0 */ { u32 v = 0x30d7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416025: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416027: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041602a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041602b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041602e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041602f: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416034: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416036: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416038: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041603b: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x416040u); f_005faee0();
    /* 00416040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416041: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416044: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416049u); f_005ff5a0();
    /* 00416049: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041604b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041604d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041604f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00416052: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416056: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00416059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041605a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041605c: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00416061: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416063: push 0x6b42f0 */ { u32 v = 0x6b42f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416068: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41606du); f_00630f40();
    /* 0041606d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416071: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416073: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416075: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416078: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x41607du); f_005fa5b0();
    /* 0041607d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041607e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416081: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416086u); f_005ff5a0();
    /* 00416086: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416088: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0041608a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0041608c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041608e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416093: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416095: push 0x30d7f1 */ { u32 v = 0x30d7f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041609a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041609c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041609f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004160a0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004160a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004160a4: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 004160a9: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004160ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004160ad: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004160b0: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x4160b5u); f_005faee0();
    /* 004160b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004160b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004160b9: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4160beu); f_005ff5a0();
    /* 004160be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004160c0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004160c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004160c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004160c7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004160ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004160cb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004160ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004160cf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004160d1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004160d3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004160d5: push 0x6b42d0 */ { u32 v = 0x6b42d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004160da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4160dfu); f_00630f40();
    /* 004160df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004160e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004160e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004160e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004160e7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004160ea: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4160efu); f_005fa5b0();
    /* 004160ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004160f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004160f3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4160f8u); f_005ff5a0();
    /* 004160f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004160fa: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004160fc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 004160fe: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416100: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416107: push 0x30d7f2 */ { u32 v = 0x30d7f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041610c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041610e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00416111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416112: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00416115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416116: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041611b: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0041611d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041611f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416122: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x416127u); f_005faee0();
    /* 00416127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416128: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041612b: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416130u); f_005ff5a0();
    /* 00416130: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416132: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416134: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416136: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00416139: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041613c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041613d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00416140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416141: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00416143: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00416145: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416147: push 0x6b42b0 */ { u32 v = 0x6b42b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041614c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x416151u); f_00630f40();
    /* 00416151: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416155: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416157: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416159: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041615c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x416161u); f_005fa5b0();
    /* 00416161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416162: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416165: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x41616au); f_005ff5a0();
    /* 0041616a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041616c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0041616e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00416170: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416172: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416177: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416179: push 0x30d7f3 */ { u32 v = 0x30d7f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041617e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416180: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00416183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416184: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00416187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416188: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041618d: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0041618f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416191: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416194: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x416199u); f_005faee0();
    /* 00416199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041619a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041619d: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4161a2u); f_005ff5a0();
    /* 004161a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004161a4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004161a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004161a8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004161ab: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004161ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004161af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004161b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004161b3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004161b5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004161b7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004161b9: push 0x6b4290 */ { u32 v = 0x6b4290u; r_esp -= 4; W32(r_esp, v); }
    /* 004161be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4161c3u); f_00630f40();
    /* 004161c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004161c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004161c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004161c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004161cb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004161ce: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4161d3u); f_005fa5b0();
    /* 004161d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004161d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004161d7: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4161dcu); f_005ff5a0();
    /* 004161dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004161de: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004161e0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 004161e2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004161e4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004161e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004161eb: push 0x30d7f4 */ { u32 v = 0x30d7f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004161f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004161f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004161f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004161f6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004161f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004161fa: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 004161ff: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416201: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416203: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416206: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x41620bu); f_005faee0();
    /* 0041620b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041620c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041620f: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416214u); f_005ff5a0();
    /* 00416214: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0041621b: jmp 0x416226 */ goto L_00416226;
L_0041621d:; BB(0x0041621d);
    /* 0041621d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00416220: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416223: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00416226:; BB(0x00416226);
    /* 00416226: cmp dword ptr [ebp - 0x40], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041622a: jge 0x416281 */ if ((fS==fO)) goto L_00416281;
L_0041622c:; BB(0x0041622c);
    /* 0041622c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041622e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00416230: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416232: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00416234: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00416236: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416238: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041623b: mov edx, dword ptr [ebp + ecx*4 - 0x60] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffa0u));
    /* 0041623f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416240: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x416245u); f_00630f40();
    /* 00416245: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416249: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041624b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041624e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416251: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416255: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00416258: mov edx, dword ptr [ebp + ecx*8 - 0xb4] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff4cu));
    /* 0041625f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416260: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416265: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00416268: add eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041626b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041626c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041626e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416271: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x416276u); f_005f9ef0();
    /* 00416276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416277: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041627a: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x41627fu); f_005ff5a0();
    /* 0041627f: jmp 0x41621d */ goto L_0041621d;
L_00416281:; BB(0x00416281);
    /* 00416281: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416283: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00416285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00416287: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0041628c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0041628e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00416290: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416295: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00416297: push 0x6b4278 */ { u32 v = 0x6b4278u; r_esp -= 4; W32(r_esp, v); }
    /* 0041629c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4162a1u); f_00630f40();
    /* 004162a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004162a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004162a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004162a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004162a9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004162ac: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4162b1u); f_005fa5b0();
    /* 004162b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004162b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004162b5: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4162bau); f_005ff5a0();
    /* 004162ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004162bc: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004162c0: push 0x157 */ { u32 v = 0x157u; r_esp -= 4; W32(r_esp, v); }
    /* 004162c5: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004162c7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004162c9: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004162cb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004162cd: push 0x6b4274 */ { u32 v = 0x6b4274u; r_esp -= 4; W32(r_esp, v); }
    /* 004162d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004162d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004162d6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004162d9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x4162deu); f_005fa5b0();
    /* 004162de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004162df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004162e2: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x4162e7u); f_005ff5a0();
    /* 004162e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004162e9: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004162eb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004162ed: push 0x157 */ { u32 v = 0x157u; r_esp -= 4; W32(r_esp, v); }
    /* 004162f2: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 004162f4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004162f6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004162f8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004162fa: push 0x6b4270 */ { u32 v = 0x6b4270u; r_esp -= 4; W32(r_esp, v); }
    /* 004162ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416303: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416306: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x41630bu); f_005fa5b0();
    /* 0041630b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041630c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041630f: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x416314u); f_005ff5a0();
    /* 00416314: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00416316: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00416318: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041631a: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041631f: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00416321: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00416323: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416328: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041632a: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041632f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00416331: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00416336: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041633a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041633d: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x416342u); f_005faa90();
    /* 00416342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416343: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416346: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x41634bu); f_005ff5a0();
    /* 0041634b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041634d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416352: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416357: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041635c: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416361: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00416363: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00416365: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00416367: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0041636c: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00416371: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00416373: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416378: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0041637a: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041637f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x416384u); f_00630f40();
    /* 00416384: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416388: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041638a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041638c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041638f: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x416394u); f_005fa790();
    /* 00416394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416395: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416398: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x41639du); f_005ff5a0();
    /* 0041639d: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004163a2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4163a7u); f_00686d82();
    /* 004163a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004163aa: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004163b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004163b7: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004163be: je 0x4163e5 */ if (fZ) goto L_004163e5;
L_004163c0:; BB(0x004163c0);
    /* 004163c0: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004163c6: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4163cbu); f_005ec5a0();
    /* 004163cb: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 004163d1: mov dword ptr [ecx], 0x6b41ac */ W32((u32)(r_ecx), 0x6b41acu);
    /* 004163d7: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 004163dd: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 004163e3: jmp 0x4163ef */ goto L_004163ef;
L_004163e5:; BB(0x004163e5);
    /* 004163e5: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_004163ef:; BB(0x004163ef);
    /* 004163ef: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 004163f5: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004163fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00416402: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00416404: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416406: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00416408: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 0041640d: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 00416412: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00416414: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416419: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0041641b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00416420: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416422: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00416428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416429: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041642c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x416431u); f_005fa5b0();
    /* 00416431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416432: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00416435: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x41643au); f_005ff5a0();
    /* 0041643a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00416442: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x416447u); f_006375d0();
    /* 00416447: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0041644a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041644c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416452: call 0x4184e0 */ r_esp -= 4; W32(r_esp, 0x416457u); f_004184e0();
    /* 00416457: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0041645a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041645b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0041645d: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416463: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416468u); f_005fb5e0();
    /* 00416468: mov ecx, eax */ r_ecx = r_eax;
    /* 0041646a: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x41646fu); f_00605ef0();
    /* 0041646f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00416475: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x41647au); f_005da830();
    /* 0041647a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041647d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041647f: je 0x416498 */ if (fZ) goto L_00416498;
L_00416481:; BB(0x00416481);
    /* 00416481: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00416487: mov edx, dword ptr [ecx + 0x4ef4] */ r_edx = R32((u32)(r_ecx+0x4ef4u));
    /* 0041648d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416490: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00416496: jmp 0x4164a5 */ goto L_004164a5;
L_00416498:; BB(0x00416498);
    /* 00416498: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041649b: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0041649f: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
L_004164a5:; BB(0x004164a5);
    /* 004164a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004164a7: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 004164ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004164ae: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004164b0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004164b6: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4164bbu); f_005fb5e0();
    /* 004164bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004164bd: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x4164c2u); f_00605ef0();
    /* 004164c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004164c4: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004164ca: call 0x4186d0 */ r_esp -= 4; W32(r_esp, 0x4164cfu); f_004186d0();
    /* 004164cf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004164d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004164d3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004164d5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004164db: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4164e0u); f_005fb5e0();
    /* 004164e0: mov ecx, eax */ r_ecx = r_eax;
    /* 004164e2: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x4164e7u); f_00605ef0();
    /* 004164e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004164e9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004164ef: call 0x418580 */ r_esp -= 4; W32(r_esp, 0x4164f4u); f_00418580();
    /* 004164f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004164f7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004164f9: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004164fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004164fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004164ff: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416501: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416507: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x41650cu); f_005fb5e0();
    /* 0041650c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041650e: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416513u); f_00605ef0();
    /* 00416513: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00416519: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x41651eu); f_005da830();
    /* 0041651e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00416521: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416523: je 0x416531 */ if (fZ) goto L_00416531;
L_00416525:; BB(0x00416525);
    /* 00416525: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 0041652f: jmp 0x41653e */ goto L_0041653e;
L_00416531:; BB(0x00416531);
    /* 00416531: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00416534: movsx ecx, byte ptr [eax + 6] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x6u));
    /* 00416538: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
L_0041653e:; BB(0x0041653e);
    /* 0041653e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416540: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00416546: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416547: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416549: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041654f: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416554u); f_005fb5e0();
    /* 00416554: mov ecx, eax */ r_ecx = r_eax;
    /* 00416556: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x41655bu); f_00605ef0();
    /* 0041655b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416561: call 0x418650 */ r_esp -= 4; W32(r_esp, 0x416566u); f_00418650();
    /* 00416566: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041656b: je 0x416596 */ if (fZ) goto L_00416596;
L_0041656d:; BB(0x0041656d);
    /* 0041656d: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0041656f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416575: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41657au); f_005fb350();
    /* 0041657a: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00416580: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00416586: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416588: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0041658e: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416594: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416596u); call_ind(t); }
L_00416596:; BB(0x00416596);
    /* 00416596: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041659c: call 0x418690 */ r_esp -= 4; W32(r_esp, 0x4165a1u); f_00418690();
    /* 004165a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004165a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165a6: je 0x4165d1 */ if (fZ) goto L_004165d1;
L_004165a8:; BB(0x004165a8);
    /* 004165a8: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004165aa: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004165b0: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4165b5u); f_005fb350();
    /* 004165b5: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 004165bb: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004165c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004165c3: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004165c9: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 004165cf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4165d1u); call_ind(t); }
L_004165d1:; BB(0x004165d1);
    /* 004165d1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004165d7: call 0x418540 */ r_esp -= 4; W32(r_esp, 0x4165dcu); f_00418540();
    /* 004165dc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004165e1: je 0x41660c */ if (fZ) goto L_0041660c;
L_004165e3:; BB(0x004165e3);
    /* 004165e3: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004165e5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004165eb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4165f0u); f_005fb350();
    /* 004165f0: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 004165f6: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 004165fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004165fe: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00416604: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0041660a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41660cu); call_ind(t); }
L_0041660c:; BB(0x0041660c);
    /* 0041660c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416612: call 0x4185c0 */ r_esp -= 4; W32(r_esp, 0x416617u); f_004185c0();
    /* 00416617: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041661a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041661c: je 0x416647 */ if (fZ) goto L_00416647;
L_0041661e:; BB(0x0041661e);
    /* 0041661e: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00416620: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416626: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41662bu); f_005fb350();
    /* 0041662b: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00416631: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00416637: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416639: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0041663f: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00416645: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x416647u); call_ind(t); }
L_00416647:; BB(0x00416647);
    /* 00416647: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041664a: movsx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xau));
    /* 0041664e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416650: je 0x41667b */ if (fZ) goto L_0041667b;
L_00416652:; BB(0x00416652);
    /* 00416652: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00416654: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041665a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41665fu); f_005fb350();
    /* 0041665f: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00416665: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 0041666b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041666d: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00416673: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00416679: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41667bu); call_ind(t); }
L_0041667b:; BB(0x0041667b);
    /* 0041667b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041667e: movsx ecx, byte ptr [eax + 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xbu));
    /* 00416682: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416684: je 0x4166af */ if (fZ) goto L_004166af;
L_00416686:; BB(0x00416686);
    /* 00416686: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00416688: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041668e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416693u); f_005fb350();
    /* 00416693: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00416699: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0041669f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004166a1: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 004166a7: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 004166ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4166afu); call_ind(t); }
L_004166af:; BB(0x004166af);
    /* 004166af: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004166b2: movsx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xcu));
    /* 004166b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004166b8: je 0x4166e3 */ if (fZ) goto L_004166e3;
L_004166ba:; BB(0x004166ba);
    /* 004166ba: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004166bc: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004166c2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4166c7u); f_005fb350();
    /* 004166c7: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 004166cd: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 004166d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004166d5: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 004166db: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 004166e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4166e3u); call_ind(t); }
L_004166e3:; BB(0x004166e3);
    /* 004166e3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004166e6: movsx ecx, byte ptr [eax + 0xd] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xdu));
    /* 004166ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004166ec: je 0x416717 */ if (fZ) goto L_00416717;
L_004166ee:; BB(0x004166ee);
    /* 004166ee: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 004166f0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004166f6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4166fbu); f_005fb350();
    /* 004166fb: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00416701: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 00416707: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416709: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0041670f: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00416715: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x416717u); call_ind(t); }
L_00416717:; BB(0x00416717);
    /* 00416717: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041671e: je 0x416780 */ if (fZ) goto L_00416780;
L_00416720:; BB(0x00416720);
    /* 00416720: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00416726: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x41672bu); f_005cdd60();
    /* 0041672b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041672e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416730: je 0x41675a */ if (fZ) goto L_0041675a;
L_00416732:; BB(0x00416732);
    /* 00416732: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 00416734: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416737: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41673cu); f_005fb350();
    /* 0041673c: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00416742: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00416748: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041674a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00416750: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416756: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416758u); call_ind(t); }
    /* 00416758: jmp 0x416780 */ goto L_00416780;
L_0041675a:; BB(0x0041675a);
    /* 0041675a: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0041675c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041675f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416764u); f_005fb350();
    /* 00416764: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0041676a: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00416770: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416772: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00416778: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0041677e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416780u); call_ind(t); }
L_00416780:; BB(0x00416780);
    /* 00416780: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416782: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416788: call 0x418510 */ r_esp -= 4; W32(r_esp, 0x41678du); f_00418510();
    /* 0041678d: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 00416790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416791: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416793: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416799: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x41679eu); f_005fb860();
    /* 0041679e: mov ecx, eax */ r_ecx = r_eax;
    /* 004167a0: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x4167a5u); f_00605110();
    /* 004167a5: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 004167ab: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 004167af: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 004167b5: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4167bau); f_005da830();
    /* 004167ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004167bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004167bf: je 0x41695f */ if (fZ) goto L_0041695f;
L_004167c5:; BB(0x004167c5);
    /* 004167c5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004167c7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004167cd: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4167d2u); f_005fb5e0();
    /* 004167d2: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 004167d8: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 004167de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004167e0: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 004167e6: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004167ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4167eeu); call_ind(t); }
    /* 004167ee: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004167f0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004167f6: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4167fbu); f_005fb5e0();
    /* 004167fb: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00416801: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00416807: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416809: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0041680f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00416815: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416817u); call_ind(t); }
    /* 00416817: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00416819: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041681f: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416824u); f_005fb5e0();
    /* 00416824: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0041682a: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00416830: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416832: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00416838: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0041683e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416840u); call_ind(t); }
    /* 00416840: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416842: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416848: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x41684du); f_005fb5e0();
    /* 0041684d: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00416853: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00416859: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041685b: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00416861: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00416867: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416869u); call_ind(t); }
    /* 00416869: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0041686b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416871: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416876u); f_005fb5e0();
    /* 00416876: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0041687c: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00416882: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416884: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0041688a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00416890: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416892u); call_ind(t); }
    /* 00416892: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00416894: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041689a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41689fu); f_005fb350();
    /* 0041689f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 004168a5: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004168ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004168ad: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004168b3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004168b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4168bbu); call_ind(t); }
    /* 004168bb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004168bd: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004168c3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4168c8u); f_005fb350();
    /* 004168c8: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 004168ce: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004168d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004168d6: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 004168dc: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004168e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4168e4u); call_ind(t); }
    /* 004168e4: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004168e6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004168ec: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4168f1u); f_005fb350();
    /* 004168f1: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 004168f7: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 004168fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004168ff: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00416905: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0041690b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41690du); call_ind(t); }
    /* 0041690d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0041690f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416915: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41691au); f_005fb350();
    /* 0041691a: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00416920: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00416926: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416928: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0041692e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00416934: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416936u); call_ind(t); }
    /* 00416936: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416938: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041693e: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x416943u); f_005fb860();
    /* 00416943: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00416949: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0041694f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416951: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00416957: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0041695d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41695fu); call_ind(t); }
L_0041695f:; BB(0x0041695f);
    /* 0041695f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416962: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00416969: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041696a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041696c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041696d: ret 0x10 */ FN_RET(0x00415e70); r_esp += 20; return;
}

void f_00416970(void) /* BlackjackRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416970);
    /* 00416970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416971: mov ebp, esp */ r_ebp = r_esp;
    /* 00416973: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416976: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00416979: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00416981: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x416986u); f_006375d0();
    /* 00416986: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00416989: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041698b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416991: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416996u); f_005fb350();
    /* 00416996: mov ecx, eax */ r_ecx = r_eax;
    /* 00416998: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x41699du); f_00600230();
    /* 0041699d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169a0: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 004169a3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004169a5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004169ab: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4169b0u); f_005fb350();
    /* 004169b0: mov ecx, eax */ r_ecx = r_eax;
    /* 004169b2: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4169b7u); f_00600230();
    /* 004169b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169ba: mov byte ptr [edx + 0xb], al */ W8((u32)(r_edx+0xbu), (u8)r_eax);
    /* 004169bd: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004169bf: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004169c5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4169cau); f_005fb350();
    /* 004169ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004169cc: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4169d1u); f_00600230();
    /* 004169d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169d4: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 004169d7: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 004169d9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004169df: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4169e4u); f_005fb350();
    /* 004169e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004169e6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4169ebu); f_00600230();
    /* 004169eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004169ee: mov byte ptr [edx + 0xd], al */ W8((u32)(r_edx+0xdu), (u8)r_eax);
    /* 004169f1: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169f8: je 0x416a1f */ if (fZ) goto L_00416a1f;
L_004169fa:; BB(0x004169fa);
    /* 004169fa: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 004169fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004169ff: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416a04u); f_005fb350();
    /* 00416a04: mov ecx, eax */ r_ecx = r_eax;
    /* 00416a06: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x416a0bu); f_00600230();
    /* 00416a0b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a10: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00416a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00416a14: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00416a1a: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x416a1fu); f_005cdd10();
L_00416a1f:; BB(0x00416a1f);
    /* 00416a1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416a22: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x416a27u); f_005da7b0();
    /* 00416a27: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00416a2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a2c: je 0x416a3e */ if (fZ) goto L_00416a3e;
L_00416a2e:; BB(0x00416a2e);
    /* 00416a2e: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00416a34: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x416a39u); f_0040cc00();
    /* 00416a39: jmp 0x416ba1 */ goto L_00416ba1;
L_00416a3e:; BB(0x00416a3e);
    /* 00416a3e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a40: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416a46: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416a4bu); f_005fb5e0();
    /* 00416a4b: mov ecx, eax */ r_ecx = r_eax;
    /* 00416a4d: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x416a52u); f_00605f40();
    /* 00416a52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a55: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00416a57: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a59: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416a5f: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416a64u); f_005fb5e0();
    /* 00416a64: mov ecx, eax */ r_ecx = r_eax;
    /* 00416a66: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x416a6bu); f_00605f40();
    /* 00416a6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a6e: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 00416a71: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a73: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416a79: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416a7eu); f_005fb5e0();
    /* 00416a7e: mov ecx, eax */ r_ecx = r_eax;
    /* 00416a80: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x416a85u); f_00605f40();
    /* 00416a85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416a88: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 00416a8b: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416a8d: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416a93: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416a98u); f_005fb5e0();
    /* 00416a98: mov ecx, eax */ r_ecx = r_eax;
    /* 00416a9a: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x416a9fu); f_00605f40();
    /* 00416a9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416aa2: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 00416aa5: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416aa7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416aad: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416ab2u); f_005fb5e0();
    /* 00416ab2: mov ecx, eax */ r_ecx = r_eax;
    /* 00416ab4: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x416ab9u); f_00605f40();
    /* 00416ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416abc: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00416abf: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ac1: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416ac7: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416accu); f_005fb350();
    /* 00416acc: mov ecx, eax */ r_ecx = r_eax;
    /* 00416ace: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x416ad3u); f_00600230();
    /* 00416ad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416ad6: mov byte ptr [edx + 7], al */ W8((u32)(r_edx+0x7u), (u8)r_eax);
    /* 00416ad9: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00416adb: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416ae1: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416ae6u); f_005fb350();
    /* 00416ae6: mov ecx, eax */ r_ecx = r_eax;
    /* 00416ae8: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x416aedu); f_00600230();
    /* 00416aed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416af0: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 00416af3: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00416af5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416afb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416b00u); f_005fb350();
    /* 00416b00: mov ecx, eax */ r_ecx = r_eax;
    /* 00416b02: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x416b07u); f_00600230();
    /* 00416b07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416b0a: mov byte ptr [edx + 3], al */ W8((u32)(r_edx+0x3u), (u8)r_eax);
    /* 00416b0d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00416b0f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416b15: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416b1au); f_005fb350();
    /* 00416b1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00416b1c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x416b21u); f_00600230();
    /* 00416b21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416b24: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00416b27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416b29: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416b2f: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x416b34u); f_005fb860();
    /* 00416b34: mov ecx, eax */ r_ecx = r_eax;
    /* 00416b36: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x416b3bu); f_006051d0();
    /* 00416b3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416b3e: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 00416b41: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00416b47: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x416b4cu); f_00637610();
    /* 00416b4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416b4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416b51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416b54: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00416b5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416b5cu); call_ind(t); }
    /* 00416b5c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00416b5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b61: je 0x416b6e */ if (fZ) goto L_00416b6e;
L_00416b63:; BB(0x00416b63);
    /* 00416b63: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416b69: call 0x418d60 */ r_esp -= 4; W32(r_esp, 0x416b6eu); f_00418d60();
L_00416b6e:; BB(0x00416b6e);
    /* 00416b6e: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00416b74: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x416b79u); f_0040cc00();
    /* 00416b79: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416b7c: movzx eax, byte ptr [edx + 0x7c] */ r_eax = (u32)R8((u32)(r_edx+0x7cu));
    /* 00416b80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b82: je 0x416ba1 */ if (fZ) goto L_00416ba1;
L_00416b84:; BB(0x00416b84);
    /* 00416b84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416b87: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 00416b8b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00416b91: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x416b96u); f_004189a0();
    /* 00416b96: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 00416b9c: call 0x4123c0 */ r_esp -= 4; W32(r_esp, 0x416ba1u); f_004123c0();
L_00416ba1:; BB(0x00416ba1);
    /* 00416ba1: mov esp, ebp */ r_esp = r_ebp;
    /* 00416ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416ba4: ret 8 */ FN_RET(0x00416970); r_esp += 12; return;
}

void f_00416bb0(void) /* BlackjackRoom::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416bb0);
    /* 00416bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00416bb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416bb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416bb9: cmp dword ptr [ebp + 0x14], 0x33 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bbd: je 0x416bd1 */ if (fZ) goto L_00416bd1;
L_00416bbf:; BB(0x00416bbf);
    /* 00416bbf: cmp dword ptr [ebp + 0x14], 0x34 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bc3: je 0x416bd1 */ if (fZ) goto L_00416bd1;
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: cmp dword ptr [ebp + 0x14], 0x35 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bc9: je 0x416bd1 */ if (fZ) goto L_00416bd1;
L_00416bcb:; BB(0x00416bcb);
    /* 00416bcb: cmp dword ptr [ebp + 0x14], 0x36 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bcf: jne 0x416bfa */ if (!fZ) goto L_00416bfa;
L_00416bd1:; BB(0x00416bd1);
    /* 00416bd1: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416bd3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416bd9: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416bdeu); f_005fb5e0();
    /* 00416bde: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416be1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416be3: push 0x30d7f9 */ { u32 v = 0x30d7f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416be8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416beb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416bed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416bf0: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00416bf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416bf8u); call_ind(t); }
    /* 00416bf8: jmp 0x416c50 */ goto L_00416c50;
L_00416bfa:; BB(0x00416bfa);
    /* 00416bfa: cmp dword ptr [ebp + 0x14], 0x32 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bfe: jne 0x416c50 */ if (!fZ) goto L_00416c50;
L_00416c00:; BB(0x00416c00);
    /* 00416c00: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00416c03: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00416c06: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c09: sub edx, 0x30d7f5 */ {  u32 a = r_edx; u32 b = 0x30d7f5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416c0f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00416c12: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416c16: ja 0x416c50 */ if ((!fC&&!fZ)) goto L_00416c50;
L_00416c18:; BB(0x00416c18);
    /* 00416c18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416c1b: jmp dword ptr [eax*4 + 0x416c58] */ { u32 t = R32((u32)(r_eax*4+0x416c58u)); switch (t) { case 0x416c22u: goto L_00416c22; case 0x416c2eu: goto L_00416c2e; case 0x416c3au: goto L_00416c3a; case 0x416c46u: goto L_00416c46; default: UNSUP(0x00416c1b, "jump table entry is not a known target"); } }
L_00416c22:; BB(0x00416c22);
    /* 00416c22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416c27: call 0x416cc0 */ r_esp -= 4; W32(r_esp, 0x416c2cu); f_00416cc0();
    /* 00416c2c: jmp 0x416c50 */ goto L_00416c50;
L_00416c2e:; BB(0x00416c2e);
    /* 00416c2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416c33: call 0x416cc0 */ r_esp -= 4; W32(r_esp, 0x416c38u); f_00416cc0();
    /* 00416c38: jmp 0x416c50 */ goto L_00416c50;
L_00416c3a:; BB(0x00416c3a);
    /* 00416c3a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416c3f: call 0x416cc0 */ r_esp -= 4; W32(r_esp, 0x416c44u); f_00416cc0();
    /* 00416c44: jmp 0x416c50 */ goto L_00416c50;
L_00416c46:; BB(0x00416c46);
    /* 00416c46: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00416c4b: call 0x416cc0 */ r_esp -= 4; W32(r_esp, 0x416c50u); f_00416cc0();
L_00416c50:; BB(0x00416c50);
    /* 00416c50: mov esp, ebp */ r_esp = r_ebp;
    /* 00416c52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416c53: ret 0x10 */ FN_RET(0x00416bb0); r_esp += 20; return;
}

void f_00416c70(void) /* BlackjackRoom::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416c70);
    /* 00416c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00416c73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416c76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416c79: cmp dword ptr [ebp + 0x10], 0x37 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c7d: je 0x416c91 */ if (fZ) goto L_00416c91;
L_00416c7f:; BB(0x00416c7f);
    /* 00416c7f: cmp dword ptr [ebp + 0x10], 0x38 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c83: je 0x416c91 */ if (fZ) goto L_00416c91;
L_00416c85:; BB(0x00416c85);
    /* 00416c85: cmp dword ptr [ebp + 0x10], 0x39 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c89: je 0x416c91 */ if (fZ) goto L_00416c91;
L_00416c8b:; BB(0x00416c8b);
    /* 00416c8b: cmp dword ptr [ebp + 0x10], 0x3a */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c8f: jne 0x416cb8 */ if (!fZ) goto L_00416cb8;
L_00416c91:; BB(0x00416c91);
    /* 00416c91: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416c93: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416c99: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416c9eu); f_005fb5e0();
    /* 00416c9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416ca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ca3: push 0x30d7f9 */ { u32 v = 0x30d7f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ca8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416cab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416cad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416cb0: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00416cb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416cb8u); call_ind(t); }
L_00416cb8:; BB(0x00416cb8);
    /* 00416cb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00416cba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416cbb: ret 0xc */ FN_RET(0x00416c70); r_esp += 16; return;
}

void f_00417130(void) /* BlackjackRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417130);
    /* 00417130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417131: mov ebp, esp */ r_ebp = r_esp;
    /* 00417133: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417136: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00417139: mov dword ptr [ebp - 0x28], 0x149 */ W32((u32)(r_ebp+0xffffffd8u), 0x149u);
    /* 00417140: mov dword ptr [ebp - 0x24], 0xdb */ W32((u32)(r_ebp+0xffffffdcu), 0xdbu);
    /* 00417147: mov dword ptr [ebp - 0x20], 0x86 */ W32((u32)(r_ebp+0xffffffe0u), 0x86u);
    /* 0041714e: mov dword ptr [ebp - 0x1c], 0xdb */ W32((u32)(r_ebp+0xffffffe4u), 0xdbu);
    /* 00417155: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 0041715c: mov dword ptr [ebp - 0x14], 0x93 */ W32((u32)(r_ebp+0xffffffecu), 0x93u);
    /* 00417163: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 0041716a: mov dword ptr [ebp - 0xc], 0x93 */ W32((u32)(r_ebp+0xfffffff4u), 0x93u);
    /* 00417171: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00417178: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041717f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417183: jge 0x41719d */ if ((fS==fO)) goto L_0041719d;
L_00417185:; BB(0x00417185);
    /* 00417185: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00417188: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0041718c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00417190: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00417193: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00417195: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00417198: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041719b: jmp 0x4171c9 */ goto L_004171c9;
L_0041719d:; BB(0x0041719d);
    /* 0041719d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041719f: jne 0x4171b8 */ if (!fZ) goto L_004171b8;
L_004171a1:; BB(0x004171a1);
    /* 004171a1: push 0x2c3 */ { u32 v = 0x2c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004171a6: push 0x6b4450 */ { u32 v = 0x6b4450u; r_esp -= 4; W32(r_esp, v); }
    /* 004171ab: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004171b0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4171b5u); f_005e9f20();
    /* 004171b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004171b8:; BB(0x004171b8);
    /* 004171b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004171bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004171be: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004171c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004171c3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004171c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_004171c9:; BB(0x004171c9);
    /* 004171c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004171cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004171cc: ret 8 */ FN_RET(0x00417130); r_esp += 12; return;
}

