#include "protos.h"

void f_00672a50(void) /* LegendDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672a50);
    /* 00672a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00672a53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672a55: push 0x6ad29b */ { u32 v = 0x6ad29bu; r_esp -= 4; W32(r_esp, v); }
    /* 00672a5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672a61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672a62: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00672a67: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00672a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672a6a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00672a6d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00672a73: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00672a76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672a78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672a7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672a7d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x672a82u); f_005f71f0();
    /* 00672a82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672a89: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672a8c: mov dword ptr [eax], 0x6e1334 */ W32((u32)(r_eax), 0x6e1334u);
    /* 00672a92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672a95: mov dword ptr [ecx + 0x1bc], 0xffffffff */ W32((u32)(r_ecx+0x1bcu), 0xffffffffu);
    /* 00672a9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672aa2: mov byte ptr [edx + 0x1c0], 0 */ W8((u32)(r_edx+0x1c0u), 0x0u);
    /* 00672aa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672aac: mov dword ptr [eax + 0x1f0], 0 */ W32((u32)(r_eax+0x1f0u), 0x0u);
    /* 00672ab6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672ab9: mov dword ptr [ecx + 0x1f4], 0 */ W32((u32)(r_ecx+0x1f4u), 0x0u);
    /* 00672ac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ac5: push 0x36ee81 */ { u32 v = 0x36ee81u; r_esp -= 4; W32(r_esp, v); }
    /* 00672aca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672acd: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x672ad2u); f_005f83d0();
    /* 00672ad2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ad4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ad6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672ad9: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x672adeu); f_005f7340();
    /* 00672ade: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00672ae5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672ae8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672aeb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672af2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672af3: mov esp, ebp */ r_esp = r_ebp;
    /* 00672af5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672af6: ret  */ FN_RET(0x00672a50); r_esp += 4; return;
}

void f_00672da0(void) /* LegendDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672da0);
    /* 00672da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00672da3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672da6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00672da9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00672dac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00672daf: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672db3: je 0x672dca */ if (fZ) goto L_00672dca;
L_00672db5:; BB(0x00672db5);
    /* 00672db5: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672db9: je 0x672ded */ if (fZ) goto L_00672ded;
L_00672dbb:; BB(0x00672dbb);
    /* 00672dbb: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672dbf: je 0x672ea8 */ if (fZ) goto L_00672ea8;
L_00672dc5:; BB(0x00672dc5);
    /* 00672dc5: jmp 0x672f79 */ goto L_00672f79;
L_00672dca:; BB(0x00672dca);
    /* 00672dca: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00672dd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672dd2: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00672dd8: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00672dde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672de0u); call_ind(t); }
    /* 00672de0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672de3: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x672de8u); f_005f87d0();
    /* 00672de8: jmp 0x672f79 */ goto L_00672f79;
L_00672ded:; BB(0x00672ded);
    /* 00672ded: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672df0: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00672df6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00672df9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672dfc: mov dword ptr [eax + 0x1f4], edx */ W32((u32)(r_eax+0x1f4u), r_edx);
    /* 00672e02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e05: cmp dword ptr [ecx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672e0c: jge 0x672e1b */ if ((fS==fO)) goto L_00672e1b;
L_00672e0e:; BB(0x00672e0e);
    /* 00672e0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e11: mov dword ptr [edx + 0x1f4], 0 */ W32((u32)(r_edx+0x1f4u), 0x0u);
L_00672e1b:; BB(0x00672e1b);
    /* 00672e1b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e20: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672e25u); f_005fb300();
    /* 00672e25: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00672e28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672e2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00672e2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672e30: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00672e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672e38u); call_ind(t); }
    /* 00672e38: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e3d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672e42u); f_005fb300();
    /* 00672e42: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00672e45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672e48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672e4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672e4d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00672e53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672e55u); call_ind(t); }
    /* 00672e55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e58: cmp dword ptr [ecx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672e5f: jne 0x672e7e */ if (!fZ) goto L_00672e7e;
L_00672e61:; BB(0x00672e61);
    /* 00672e61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e66: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672e6bu); f_005fb300();
    /* 00672e6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672e6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672e71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672e73: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672e76: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00672e7c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x672e7eu); call_ind(t); }
L_00672e7e:; BB(0x00672e7e);
    /* 00672e7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e81: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00672e87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e8a: mov eax, dword ptr [edx + ecx*4 + 0x1c4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c4u));
    /* 00672e91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672e92: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672e97: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x672e9cu); f_005fb2b0();
    /* 00672e9c: mov ecx, eax */ r_ecx = r_eax;
    /* 00672e9e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x672ea3u); f_005eaf00();
    /* 00672ea3: jmp 0x672f79 */ goto L_00672f79;
L_00672ea8:; BB(0x00672ea8);
    /* 00672ea8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672eab: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00672eb1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00672eb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672eb7: mov dword ptr [eax + 0x1f4], edx */ W32((u32)(r_eax+0x1f4u), r_edx);
    /* 00672ebd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672ec0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672ec3: mov eax, dword ptr [ecx + 0x1f4] */ r_eax = R32((u32)(r_ecx+0x1f4u));
    /* 00672ec9: cmp eax, dword ptr [edx + 0x1f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1f0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672ecf: jl 0x672ee6 */ if ((fS!=fO)) goto L_00672ee6;
L_00672ed1:; BB(0x00672ed1);
    /* 00672ed1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672ed4: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00672eda: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00672edd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672ee0: mov dword ptr [eax + 0x1f4], edx */ W32((u32)(r_eax+0x1f4u), r_edx);
L_00672ee6:; BB(0x00672ee6);
    /* 00672ee6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672eeb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672ef0u); f_005fb300();
    /* 00672ef0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00672ef3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672ef6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672ef8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672efb: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00672f01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672f03u); call_ind(t); }
    /* 00672f03: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672f05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f08: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672f0du); f_005fb300();
    /* 00672f0d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00672f10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00672f13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672f15: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00672f18: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00672f1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672f20u); call_ind(t); }
    /* 00672f20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f23: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00672f29: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00672f2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f2f: cmp dword ptr [eax + 0x1f4], edx */ {  u32 a = R32((u32)(r_eax+0x1f4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672f35: jne 0x672f54 */ if (!fZ) goto L_00672f54;
L_00672f37:; BB(0x00672f37);
    /* 00672f37: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672f39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f3c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672f41u); f_005fb300();
    /* 00672f41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672f44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672f47: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672f49: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672f4c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00672f52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672f54u); call_ind(t); }
L_00672f54:; BB(0x00672f54);
    /* 00672f54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f57: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00672f5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f60: mov ecx, dword ptr [eax + edx*4 + 0x1c4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c4u));
    /* 00672f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672f68: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672f6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f6d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x672f72u); f_005fb2b0();
    /* 00672f72: mov ecx, eax */ r_ecx = r_eax;
    /* 00672f74: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x672f79u); f_005eaf00();
L_00672f79:; BB(0x00672f79);
    /* 00672f79: mov esp, ebp */ r_esp = r_ebp;
    /* 00672f7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672f7c: ret 4 */ FN_RET(0x00672da0); r_esp += 8; return;
}

