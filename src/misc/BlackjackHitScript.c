#include "protos.h"

void f_00410d40(void) /* BlackjackHitScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410d40);
    /* 00410d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00410d43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410d45: push 0x69dc58 */ { u32 v = 0x69dc58u; r_esp -= 4; W32(r_esp, v); }
    /* 00410d4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410d51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410d54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00410d59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410d5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00410d5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00410d65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00410d68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00410d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410d6c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410d6f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x410d74u); f_005fc0d0();
    /* 00410d74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00410d7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410d7e: mov dword ptr [ecx], 0x6b3b14 */ W32((u32)(r_ecx), 0x6b3b14u);
    /* 00410d84: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410d86: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00410d8c: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x410d91u); f_00637810();
    /* 00410d91: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00410d93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410d96: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00410d99: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410d9c: mov byte ptr [eax + 0x20], dl */ W8((u32)(r_eax+0x20u), (u8)r_edx);
    /* 00410d9f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410da5: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 00410dab: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00410dae: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410db2: jne 0x410dbd */ if (!fZ) goto L_00410dbd;
L_00410db4:; BB(0x00410db4);
    /* 00410db4: mov dword ptr [ebp - 0x1c], 4 */ W32((u32)(r_ebp+0xffffffe4u), 0x4u);
    /* 00410dbb: jmp 0x410dd2 */ goto L_00410dd2;
L_00410dbd:; BB(0x00410dbd);
    /* 00410dbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00410dc0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00410dc3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410dc9: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 00410dcf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00410dd2:; BB(0x00410dd2);
    /* 00410dd2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410dd5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00410dd8: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00410ddb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410de2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00410de5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00410de8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410def: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410df0: mov esp, ebp */ r_esp = r_ebp;
    /* 00410df2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410df3: ret 4 */ FN_RET(0x00410d40); r_esp += 8; return;
}

void f_00410e90(void) /* BlackjackHitScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410e90);
    /* 00410e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00410e93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00410e95: push 0x69dc89 */ { u32 v = 0x69dc89u; r_esp -= 4; W32(r_esp, v); }
    /* 00410e9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00410ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410ea1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410ea4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00410ea9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00410eab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00410eac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00410eaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00410eb5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00410eb8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410ebb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x410ec0u); f_005fc360();
    /* 00410ec0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00410ec3: cmp dword ptr [ebp - 0x34], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00410ec7: ja 0x4112df */ if ((!fC&&!fZ)) goto L_004112df;
L_00410ecd:; BB(0x00410ecd);
    /* 00410ecd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00410ed0: jmp dword ptr [eax*4 + 0x4112f0] */ { u32 t = R32((u32)(r_eax*4+0x4112f0u)); switch (t) { case 0x410ed7u: goto L_00410ed7; case 0x410efau: goto L_00410efa; case 0x410f6cu: goto L_00410f6c; case 0x410fedu: goto L_00410fed; case 0x4110e5u: goto L_004110e5; case 0x41112au: goto L_0041112a; case 0x4112b4u: goto L_004112b4; default: UNSUP(0x00410ed0, "jump table entry is not a known target"); } }
L_00410ed7:; BB(0x00410ed7);
    /* 00410ed7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410ed9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410edc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410ede: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410ee1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410ee4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410ee6u); call_ind(t); }
    /* 00410ee6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410ee8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410eeb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410eed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410ef0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410ef5u); call_ind(t); }
    /* 00410ef5: jmp 0x4112df */ goto L_004112df;
L_00410efa:; BB(0x00410efa);
    /* 00410efa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410efc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410eff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410f01: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f04: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410f07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410f09u); call_ind(t); }
    /* 00410f09: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410f0f: mov edx, dword ptr [ecx + 0x464] */ r_edx = R32((u32)(r_ecx+0x464u));
    /* 00410f15: mov eax, dword ptr [edx + 0x808] */ r_eax = R32((u32)(r_edx+0x808u));
    /* 00410f1b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00410f1e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410f22: jge 0x410f2f */ if ((fS==fO)) goto L_00410f2f;
L_00410f24:; BB(0x00410f24);
    /* 00410f24: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410f2a: call 0x418f50 */ r_esp -= 4; W32(r_esp, 0x410f2fu); f_00418f50();
L_00410f2f:; BB(0x00410f2f);
    /* 00410f2f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410f35: cmp dword ptr [ecx + 0x4d4], 2 */ {  u32 a = R32((u32)(r_ecx+0x4d4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410f3c: jne 0x410f58 */ if (!fZ) goto L_00410f58;
L_00410f3e:; BB(0x00410f3e);
    /* 00410f3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f40: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410f44: push 0xcc1a */ { u32 v = 0xcc1au; r_esp -= 4; W32(r_esp, v); }
    /* 00410f49: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410f4e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00410f51: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x410f56u); f_005cd7c0();
    /* 00410f56: jmp 0x410f67 */ goto L_00410f67;
L_00410f58:; BB(0x00410f58);
    /* 00410f58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f5a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410f5f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f62: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00410f65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410f67u); call_ind(t); }
L_00410f67:; BB(0x00410f67);
    /* 00410f67: jmp 0x4112df */ goto L_004112df;
L_00410f6c:; BB(0x00410f6c);
    /* 00410f6c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f6e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410f73: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f76: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410f79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410f7bu); call_ind(t); }
    /* 00410f7b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410f7e: call 0x410e00 */ r_esp -= 4; W32(r_esp, 0x410f83u); f_00410e00();
    /* 00410f83: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00410f86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410f88: je 0x410fd9 */ if (fZ) goto L_00410fd9;
L_00410f8a:; BB(0x00410f8a);
    /* 00410f8a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00410f8c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x410f91u); f_00686d82();
    /* 00410f91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00410f94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00410f97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00410f9e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410fa2: je 0x410fb7 */ if (fZ) goto L_00410fb7;
L_00410fa4:; BB(0x00410fa4);
    /* 00410fa4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410fa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00410fa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410faa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00410fad: call 0x4103e0 */ r_esp -= 4; W32(r_esp, 0x410fb2u); f_004103e0();
    /* 00410fb2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00410fb5: jmp 0x410fbe */ goto L_00410fbe;
L_00410fb7:; BB(0x00410fb7);
    /* 00410fb7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00410fbe:; BB(0x00410fbe);
    /* 00410fbe: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00410fc1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00410fc4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00410fcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410fcf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410fd2: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x410fd7u); f_005fc420();
    /* 00410fd7: jmp 0x410fe8 */ goto L_00410fe8;
L_00410fd9:; BB(0x00410fd9);
    /* 00410fd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410fdb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410fde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410fe0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410fe3: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00410fe6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410fe8u); call_ind(t); }
L_00410fe8:; BB(0x00410fe8);
    /* 00410fe8: jmp 0x4112df */ goto L_004112df;
L_00410fed:; BB(0x00410fed);
    /* 00410fed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410fef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410ff2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00410ff4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410ff7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00410ffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410ffcu); call_ind(t); }
    /* 00410ffc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00410fff: call 0x410e00 */ r_esp -= 4; W32(r_esp, 0x411004u); f_00410e00();
    /* 00411004: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00411007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411009: je 0x411061 */ if (fZ) goto L_00411061;
L_0041100b:; BB(0x0041100b);
    /* 0041100b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0041100d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x411012u); f_00686d82();
    /* 00411012: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411015: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00411018: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0041101f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411023: je 0x41103f */ if (fZ) goto L_0041103f;
L_00411025:; BB(0x00411025);
    /* 00411025: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411029: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041102b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041102e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00411031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411032: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00411035: call 0x4106f0 */ r_esp -= 4; W32(r_esp, 0x41103au); f_004106f0();
    /* 0041103a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0041103d: jmp 0x411046 */ goto L_00411046;
L_0041103f:; BB(0x0041103f);
    /* 0041103f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00411046:; BB(0x00411046);
    /* 00411046: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00411049: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0041104c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00411053: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00411056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411057: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041105a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x41105fu); f_005fc420();
    /* 0041105f: jmp 0x4110e0 */ goto L_004110e0;
L_00411061:; BB(0x00411061);
    /* 00411061: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411063: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411069: mov ecx, dword ptr [ecx + 0x464] */ r_ecx = R32((u32)(r_ecx+0x464u));
    /* 0041106f: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x411074u); f_006436c0();
    /* 00411074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411075: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411078: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0041107b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041107c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411082: call 0x419670 */ r_esp -= 4; W32(r_esp, 0x411087u); f_00419670();
    /* 00411087: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041108d: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x411092u); f_0040cc00();
    /* 00411092: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411098: call 0x418e20 */ r_esp -= 4; W32(r_esp, 0x41109du); f_00418e20();
    /* 0041109d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004110a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004110a2: je 0x4110d1 */ if (fZ) goto L_004110d1;
L_004110a4:; BB(0x004110a4);
    /* 004110a4: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 004110a9: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 004110af: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004110b2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4110b7u); f_005eaf00();
    /* 004110b7: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004110bc: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004110bf: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 004110c5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004110c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004110ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004110cc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004110cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4110d1u); call_ind(t); }
L_004110d1:; BB(0x004110d1);
    /* 004110d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004110d3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004110d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004110d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004110db: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004110de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4110e0u); call_ind(t); }
L_004110e0:; BB(0x004110e0);
    /* 004110e0: jmp 0x4112df */ goto L_004112df;
L_004110e5:; BB(0x004110e5);
    /* 004110e5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004110e7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004110ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004110ec: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004110ef: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004110f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4110f4u); call_ind(t); }
    /* 004110f4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004110f7: call 0x410e00 */ r_esp -= 4; W32(r_esp, 0x4110fcu); f_00410e00();
    /* 004110fc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004110ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411101: je 0x411116 */ if (fZ) goto L_00411116;
L_00411103:; BB(0x00411103);
    /* 00411103: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411107: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041110c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0041110f: call 0x40eb40 */ r_esp -= 4; W32(r_esp, 0x411114u); f_0040eb40();
    /* 00411114: jmp 0x411125 */ goto L_00411125;
L_00411116:; BB(0x00411116);
    /* 00411116: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411118: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041111b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041111d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411120: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00411123: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411125u); call_ind(t); }
L_00411125:; BB(0x00411125);
    /* 00411125: jmp 0x4112df */ goto L_004112df;
L_0041112a:; BB(0x0041112a);
    /* 0041112a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041112c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041112f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00411131: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411134: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00411137: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411139u); call_ind(t); }
    /* 00411139: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041113f: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00411142: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00411147: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0041114a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041114c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0041114f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411151u); call_ind(t); }
    /* 00411151: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00411157: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0041115a: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041115f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00411162: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00411164: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00411167: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411169u); call_ind(t); }
    /* 00411169: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041116f: mov byte ptr [ecx + 0x4d8], 0 */ W8((u32)(r_ecx+0x4d8u), 0x0u);
    /* 00411176: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411178: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041117b: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0041117e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041117f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411185: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x41118au); f_0041b990();
    /* 0041118a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041118d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041118f: je 0x411236 */ if (fZ) goto L_00411236;
L_00411195:; BB(0x00411195);
    /* 00411195: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411198: cmp dword ptr [edx + 0x24], 4 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041119c: jne 0x4111b9 */ if (!fZ) goto L_004111b9;
L_0041119e:; BB(0x0041119e);
    /* 0041119e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004111a0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004111a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004111a4: push 0xcb9d */ { u32 v = 0xcb9du; r_esp -= 4; W32(r_esp, v); }
    /* 004111a9: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004111af: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004111b2: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x4111b7u); f_005cd7c0();
    /* 004111b7: jmp 0x411234 */ goto L_00411234;
L_004111b9:; BB(0x004111b9);
    /* 004111b9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004111bc: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004111bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004111c2: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004111c6: jne 0x4111d1 */ if (!fZ) goto L_004111d1;
L_004111c8:; BB(0x004111c8);
    /* 004111c8: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 004111cf: jmp 0x411200 */ goto L_00411200;
L_004111d1:; BB(0x004111d1);
    /* 004111d1: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004111d5: jne 0x4111e0 */ if (!fZ) goto L_004111e0;
L_004111d7:; BB(0x004111d7);
    /* 004111d7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004111de: jmp 0x4111fa */ goto L_004111fa;
L_004111e0:; BB(0x004111e0);
    /* 004111e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004111e3: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004111e9: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004111ef: movsx eax, byte ptr [edx + ecx + 0x119] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x119u));
    /* 004111f7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_004111fa:; BB(0x004111fa);
    /* 004111fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004111fd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00411200:; BB(0x00411200);
    /* 00411200: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411202: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00411205: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411206: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411209: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0041120c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00411212: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00411216: call 0x40e190 */ r_esp -= 4; W32(r_esp, 0x41121bu); f_0040e190();
    /* 0041121b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041121d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411221: push 0xcc65 */ { u32 v = 0xcc65u; r_esp -= 4; W32(r_esp, v); }
    /* 00411226: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041122c: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0041122f: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x411234u); f_005cd7c0();
L_00411234:; BB(0x00411234);
    /* 00411234: jmp 0x4112b2 */ goto L_004112b2;
L_00411236:; BB(0x00411236);
    /* 00411236: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411239: cmp dword ptr [edx + 0x24], 4 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041123d: je 0x4112a3 */ if (fZ) goto L_004112a3;
L_0041123f:; BB(0x0041123f);
    /* 0041123f: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00411244: cmp dword ptr [eax + 0x4d4], 2 */ {  u32 a = R32((u32)(r_eax+0x4d4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041124b: je 0x4112a3 */ if (fZ) goto L_004112a3;
L_0041124d:; BB(0x0041124d);
    /* 0041124d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411250: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00411253: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00411259: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041125e: cmp byte ptr [eax + edx + 0x118], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00411266: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00411269: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041126c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041126e: jne 0x4112a3 */ if (!fZ) goto L_004112a3;
L_00411270:; BB(0x00411270);
    /* 00411270: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00411275: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00411278: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041127b: mov dword ptr [ecx + 0x4ec], 0xb */ W32((u32)(r_ecx+0x4ecu), 0xbu);
    /* 00411285: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411288: mov dword ptr [edx + 0x4f0], 4 */ W32((u32)(r_edx+0x4f0u), 0x4u);
    /* 00411292: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00411295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411296: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0041129c: call 0x413790 */ r_esp -= 4; W32(r_esp, 0x4112a1u); f_00413790();
    /* 004112a1: jmp 0x4112b2 */ goto L_004112b2;
L_004112a3:; BB(0x004112a3);
    /* 004112a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004112a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004112aa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112ad: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004112b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4112b2u); call_ind(t); }
L_004112b2:; BB(0x004112b2);
    /* 004112b2: jmp 0x4112df */ goto L_004112df;
L_004112b4:; BB(0x004112b4);
    /* 004112b4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112b7: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004112bb: je 0x4112df */ if (fZ) goto L_004112df;
L_004112bd:; BB(0x004112bd);
    /* 004112bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004112bf: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112c2: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004112c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112c8: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004112cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004112cd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004112d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4112d2u); call_ind(t); }
    /* 004112d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004112d4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004112d7: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004112da: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4112dfu); f_005fc420();
L_004112df:; BB(0x004112df);
    /* 004112df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004112e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004112e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004112ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004112ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004112ed: ret  */ FN_RET(0x00410e90); r_esp += 4; return;
}

