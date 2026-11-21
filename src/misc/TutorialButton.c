#include "protos.h"

void f_00652e20(void) /* TutorialButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652e20);
    /* 00652e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00652e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652e25: push 0x6ac3fd */ { u32 v = 0x6ac3fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00652e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652e31: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652e34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00652e39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652e3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00652e3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00652e45: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00652e48: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652e4b: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x652e50u); f_00601a80();
    /* 00652e50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652e57: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652e5a: mov dword ptr [eax], 0x6dd294 */ W32((u32)(r_eax), 0x6dd294u);
    /* 00652e60: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652e63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00652e66: mov dword ptr [ecx + 0x1f4], edx */ W32((u32)(r_ecx+0x1f4u), r_edx);
    /* 00652e6c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652e6f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00652e72: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 00652e78: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652e7f: jmp 0x652e8a */ goto L_00652e8a;
L_00652e81:; BB(0x00652e81);
    /* 00652e81: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652e84: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652e87: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00652e8a:; BB(0x00652e8a);
    /* 00652e8a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652e8e: jge 0x652ef5 */ if ((fS==fO)) goto L_00652ef5;
L_00652e90:; BB(0x00652e90);
    /* 00652e90: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00652e92: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x652e97u); f_00686d82();
    /* 00652e97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00652e9a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00652e9d: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00652ea1: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652ea5: je 0x652eb4 */ if (fZ) goto L_00652eb4;
L_00652ea7:; BB(0x00652ea7);
    /* 00652ea7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652eaa: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x652eafu); f_005f6130();
    /* 00652eaf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00652eb2: jmp 0x652ebb */ goto L_00652ebb;
L_00652eb4:; BB(0x00652eb4);
    /* 00652eb4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00652ebb:; BB(0x00652ebb);
    /* 00652ebb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00652ebe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00652ec1: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652ec5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652ec8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652ecb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00652ece: mov dword ptr [edx + ecx*4 + 0x1e0], eax */ W32((u32)(r_edx+r_ecx*4+0x1e0u), r_eax);
    /* 00652ed5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652ed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652ed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652edb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652edd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00652edf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652ee1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652ee4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652ee7: mov ecx, dword ptr [edx + ecx*4 + 0x1e0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 00652eee: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x652ef3u); f_005f61d0();
    /* 00652ef3: jmp 0x652e81 */ goto L_00652e81;
L_00652ef5:; BB(0x00652ef5);
    /* 00652ef5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652efc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652eff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652f02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652f0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00652f0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652f0d: ret 8 */ FN_RET(0x00652e20); r_esp += 12; return;
}

void f_00652f10(void) /* TutorialButton::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652f10);
    /* 00652f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00652f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652f15: push 0x6ac420 */ { u32 v = 0x6ac420u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f21: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652f24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00652f29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00652f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652f2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00652f2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00652f35: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00652f38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652f3b: mov dword ptr [eax], 0x6dd294 */ W32((u32)(r_eax), 0x6dd294u);
    /* 00652f41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652f48: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652f4f: jmp 0x652f5a */ goto L_00652f5a;
L_00652f51:; BB(0x00652f51);
    /* 00652f51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652f54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00652f57: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00652f5a:; BB(0x00652f5a);
    /* 00652f5a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652f5e: jge 0x652fa8 */ if ((fS==fO)) goto L_00652fa8;
L_00652f60:; BB(0x00652f60);
    /* 00652f60: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652f63: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652f66: cmp dword ptr [eax + edx*4 + 0x1e0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652f6e: je 0x652fa6 */ if (fZ) goto L_00652fa6;
L_00652f70:; BB(0x00652f70);
    /* 00652f70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652f73: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652f76: mov eax, dword ptr [edx + ecx*4 + 0x1e0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 00652f7d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00652f80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652f83: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00652f86: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652f8a: je 0x652f9f */ if (fZ) goto L_00652f9f;
L_00652f8c:; BB(0x00652f8c);
    /* 00652f8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00652f8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652f91: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00652f93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652f96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00652f98: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x652f9au); call_ind(t); }
    /* 00652f9a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00652f9d: jmp 0x652fa6 */ goto L_00652fa6;
L_00652f9f:; BB(0x00652f9f);
    /* 00652f9f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00652fa6:; BB(0x00652fa6);
    /* 00652fa6: jmp 0x652f51 */ goto L_00652f51;
L_00652fa8:; BB(0x00652fa8);
    /* 00652fa8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652faf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652fb2: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x652fb7u); f_00601ba0();
    /* 00652fb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652fba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00652fc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00652fc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00652fc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652fc5: ret  */ FN_RET(0x00652f10); r_esp += 4; return;
}

void f_00652fd0(void) /* TutorialButton::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652fd0);
    /* 00652fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00652fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652fd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00652fd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00652fdc: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652fe0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652fe3: call 0x6024b0 */ r_esp -= 4; W32(r_esp, 0x652fe8u); f_006024b0();
    /* 00652fe8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652fef: jmp 0x652ffa */ goto L_00652ffa;
L_00652ff1:; BB(0x00652ff1);
    /* 00652ff1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652ff4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00652ff7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00652ffa:; BB(0x00652ffa);
    /* 00652ffa: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652ffe: jge 0x65302a */ if ((fS==fO)) goto L_0065302a;
L_00653000:; BB(0x00653000);
    /* 00653000: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00653003: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065300a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065300d: mov edx, dword ptr [ecx + eax*4 + 0x1e0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1e0u));
    /* 00653014: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653017: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065301a: mov ecx, dword ptr [ecx + eax*4 + 0x1e0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1e0u));
    /* 00653021: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00653023: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00653026: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653028u); call_ind(t); }
    /* 00653028: jmp 0x652ff1 */ goto L_00652ff1;
L_0065302a:; BB(0x0065302a);
    /* 0065302a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065302c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065302d: ret 4 */ FN_RET(0x00652fd0); r_esp += 8; return;
}

void f_00653030(void) /* TutorialButton::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653030);
    /* 00653030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653031: mov ebp, esp */ r_ebp = r_esp;
    /* 00653033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653036: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653039: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065303c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065303d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00653040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653041: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653044: call 0x5f5500 */ r_esp -= 4; W32(r_esp, 0x653049u); f_005f5500();
    /* 00653049: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653050: jmp 0x65305b */ goto L_0065305b;
L_00653052:; BB(0x00653052);
    /* 00653052: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653055: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653058: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0065305b:; BB(0x0065305b);
    /* 0065305b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065305f: jge 0x65309a */ if ((fS==fO)) goto L_0065309a;
L_00653061:; BB(0x00653061);
    /* 00653061: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653064: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00653066: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00653069: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065306b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065306c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065306f: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00653071: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00653074: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00653076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065307a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065307d: mov eax, dword ptr [edx + ecx*4 + 0x1e0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 00653084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653087: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065308a: mov ecx, dword ptr [edx + ecx*4 + 0x1e0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 00653091: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00653093: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00653096: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653098u); call_ind(t); }
    /* 00653098: jmp 0x653052 */ goto L_00653052;
L_0065309a:; BB(0x0065309a);
    /* 0065309a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065309c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065309d: ret 8 */ FN_RET(0x00653030); r_esp += 12; return;
}

void f_006530a0(void) /* TutorialButton::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006530a0);
    /* 006530a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006530a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006530a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006530a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006530a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006530ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006530ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006530b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006530b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006530b4: call 0x602470 */ r_esp -= 4; W32(r_esp, 0x6530b9u); f_00602470();
    /* 006530b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006530c0: jmp 0x6530cb */ goto L_006530cb;
L_006530c2:; BB(0x006530c2);
    /* 006530c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006530c5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006530c8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006530cb:; BB(0x006530cb);
    /* 006530cb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006530cf: jge 0x653104 */ if ((fS==fO)) goto L_00653104;
L_006530d1:; BB(0x006530d1);
    /* 006530d1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006530d4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006530d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006530d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006530db: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006530de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006530df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006530e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006530e5: mov ecx, dword ptr [eax + edx*4 + 0x1e0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1e0u));
    /* 006530ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006530ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006530f2: mov edx, dword ptr [eax + edx*4 + 0x1e0] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1e0u));
    /* 006530f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006530fb: mov ecx, edx */ r_ecx = r_edx;
    /* 006530fd: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00653100: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653102u); call_ind(t); }
    /* 00653102: jmp 0x6530c2 */ goto L_006530c2;
L_00653104:; BB(0x00653104);
    /* 00653104: mov esp, ebp */ r_esp = r_ebp;
    /* 00653106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653107: ret 8 */ FN_RET(0x006530a0); r_esp += 12; return;
}

void f_00653110(void) /* TutorialButton::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653110);
    /* 00653110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653111: mov ebp, esp */ r_ebp = r_esp;
    /* 00653113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653119: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065311c: call 0x602810 */ r_esp -= 4; W32(r_esp, 0x653121u); f_00602810();
    /* 00653121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653122: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653125: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00653127: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065312a: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00653130: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653132u); call_ind(t); }
    /* 00653132: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653135: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x65313au); f_00602500();
    /* 0065313a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065313d: cmp dword ptr [ecx + 0x1dc], 0x64 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653144: jl 0x653148 */ if ((fS!=fO)) goto L_00653148;
L_00653146:; BB(0x00653146);
    /* 00653146: jmp 0x653183 */ goto L_00653183;
L_00653148:; BB(0x00653148);
    /* 00653148: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065314f: jmp 0x65315a */ goto L_0065315a;
L_00653151:; BB(0x00653151);
    /* 00653151: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653154: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653157: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0065315a:; BB(0x0065315a);
    /* 0065315a: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065315e: jge 0x653183 */ if ((fS==fO)) goto L_00653183;
L_00653160:; BB(0x00653160);
    /* 00653160: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653163: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653166: mov edx, dword ptr [ecx + eax*4 + 0x1e0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1e0u));
    /* 0065316d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653170: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653173: mov ecx, dword ptr [ecx + eax*4 + 0x1e0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1e0u));
    /* 0065317a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065317c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065317f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653181u); call_ind(t); }
    /* 00653181: jmp 0x653151 */ goto L_00653151;
L_00653183:; BB(0x00653183);
    /* 00653183: mov esp, ebp */ r_esp = r_ebp;
    /* 00653185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653186: ret  */ FN_RET(0x00653110); r_esp += 4; return;
}

void f_00653190(void) /* TutorialButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653190);
    /* 00653190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653191: mov ebp, esp */ r_ebp = r_esp;
    /* 00653193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653196: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653199: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065319c: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x6531a1u); f_00602550();
    /* 006531a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006531a8: jmp 0x6531b3 */ goto L_006531b3;
L_006531aa:; BB(0x006531aa);
    /* 006531aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006531ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006531b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006531b3:; BB(0x006531b3);
    /* 006531b3: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006531b7: jge 0x6531dc */ if ((fS==fO)) goto L_006531dc;
L_006531b9:; BB(0x006531b9);
    /* 006531b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006531bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006531bf: mov eax, dword ptr [edx + ecx*4 + 0x1e0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 006531c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006531c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006531cc: mov ecx, dword ptr [edx + ecx*4 + 0x1e0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 006531d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006531d5: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006531d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6531dau); call_ind(t); }
    /* 006531da: jmp 0x6531aa */ goto L_006531aa;
L_006531dc:; BB(0x006531dc);
    /* 006531dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006531de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006531df: ret  */ FN_RET(0x00653190); r_esp += 4; return;
}

void f_006531e0(void) /* TutorialButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006531e0);
    /* 006531e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006531e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006531e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006531e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006531e9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006531ec: cmp dword ptr [eax + 0x1dc], 0x64 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006531f3: jl 0x6532d7 */ if ((fS!=fO)) goto L_006532d7;
L_006531f9:; BB(0x006531f9);
    /* 006531f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006531fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006531fe: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00653204: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x653209u); f_00652900();
    /* 00653209: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065320c: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00653212: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00653215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653218: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065321b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065321e: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00653222: ja 0x6532ba */ if ((!fC&&!fZ)) goto L_006532ba;
L_00653228:; BB(0x00653228);
    /* 00653228: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065322b: jmp dword ptr [edx*4 + 0x653304] */ { u32 t = R32((u32)(r_edx*4+0x653304u)); switch (t) { case 0x653232u: goto L_00653232; case 0x653277u: goto L_00653277; case 0x653265u: goto L_00653265; case 0x6532aau: goto L_006532aa; default: UNSUP(0x0065322b, "jump table entry is not a known target"); } }
L_00653232:; BB(0x00653232);
    /* 00653232: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653234: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653237: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0065323d: call 0x652500 */ r_esp -= 4; W32(r_esp, 0x653242u); f_00652500();
    /* 00653242: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653245: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0065324b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0065324e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653251: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 00653255: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653258: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0065325e: call 0x6526e0 */ r_esp -= 4; W32(r_esp, 0x653263u); f_006526e0();
    /* 00653263: jmp 0x6532d5 */ goto L_006532d5;
L_00653265:; BB(0x00653265);
    /* 00653265: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653267: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065326a: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 00653270: call 0x652500 */ r_esp -= 4; W32(r_esp, 0x653275u); f_00652500();
    /* 00653275: jmp 0x6532d5 */ goto L_006532d5;
L_00653277:; BB(0x00653277);
    /* 00653277: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653279: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065327c: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00653282: call 0x652500 */ r_esp -= 4; W32(r_esp, 0x653287u); f_00652500();
    /* 00653287: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065328a: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00653290: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00653293: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653296: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 0065329a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065329d: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 006532a3: call 0x6525d0 */ r_esp -= 4; W32(r_esp, 0x6532a8u); f_006525d0();
    /* 006532a8: jmp 0x6532d5 */ goto L_006532d5;
L_006532aa:; BB(0x006532aa);
    /* 006532aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006532ad: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 006532b3: call 0x6528c0 */ r_esp -= 4; W32(r_esp, 0x6532b8u); f_006528c0();
    /* 006532b8: jmp 0x6532d5 */ goto L_006532d5;
L_006532ba:; BB(0x006532ba);
    /* 006532ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006532bc: jne 0x6532d5 */ if (!fZ) goto L_006532d5;
L_006532be:; BB(0x006532be);
    /* 006532be: push 0x2a4 */ { u32 v = 0x2a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006532c3: push 0x6dd238 */ { u32 v = 0x6dd238u; r_esp -= 4; W32(r_esp, v); }
    /* 006532c8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006532cd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6532d2u); f_005e9f20();
    /* 006532d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006532d5:; BB(0x006532d5);
    /* 006532d5: jmp 0x6532fd */ goto L_006532fd;
L_006532d7:; BB(0x006532d7);
    /* 006532d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006532da: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 006532e0: call 0x652860 */ r_esp -= 4; W32(r_esp, 0x6532e5u); f_00652860();
    /* 006532e5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006532e8: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006532ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006532ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006532f2: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 006532f8: call 0x652420 */ r_esp -= 4; W32(r_esp, 0x6532fdu); f_00652420();
L_006532fd:; BB(0x006532fd);
    /* 006532fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006532ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653300: ret  */ FN_RET(0x006531e0); r_esp += 4; return;
}

void f_00653320(void) /* TutorialButton::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653320);
    /* 00653320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653321: mov ebp, esp */ r_ebp = r_esp;
    /* 00653323: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653326: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00653327: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065332a: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 0065332e: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00653332: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00653339: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065333c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065333d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653340: call 0x6027d0 */ r_esp -= 4; W32(r_esp, 0x653345u); f_006027d0();
    /* 00653345: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653348: cmp dword ptr [ecx + 0x1dc], 0x64 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065334f: jl 0x653356 */ if ((fS!=fO)) goto L_00653356;
L_00653351:; BB(0x00653351);
    /* 00653351: jmp 0x6535a0 */ goto L_006535a0;
L_00653356:; BB(0x00653356);
    /* 00653356: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653359: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0065335f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653360: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653363: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00653369: call 0x652c70 */ r_esp -= 4; W32(r_esp, 0x65336eu); f_00652c70();
    /* 0065336e: mov esi, eax */ r_esi = r_eax;
    /* 00653370: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653373: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 00653379: call 0x652a10 */ r_esp -= 4; W32(r_esp, 0x65337eu); f_00652a10();
    /* 0065337e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00653380: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653382: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00653385: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00653388: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065338b: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00653391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653392: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653395: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0065339b: call 0x652c70 */ r_esp -= 4; W32(r_esp, 0x6533a0u); f_00652c70();
    /* 006533a0: mov esi, eax */ r_esi = r_eax;
    /* 006533a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006533a5: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 006533ab: call 0x652a10 */ r_esp -= 4; W32(r_esp, 0x6533b0u); f_00652a10();
    /* 006533b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006533b2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006533b4: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 006533b7: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 006533ba: mov dword ptr [ebp - 0x10], 0x5e */ W32((u32)(r_ebp+0xfffffff0u), 0x5eu);
    /* 006533c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006533c4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006533c7: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006533cb: ja 0x65342b */ if ((!fC&&!fZ)) goto L_0065342b;
L_006533cd:; BB(0x006533cd);
    /* 006533cd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006533d0: jmp dword ptr [eax*4 + 0x6535a8] */ { u32 t = R32((u32)(r_eax*4+0x6535a8u)); switch (t) { case 0x6533d7u: goto L_006533d7; case 0x65340bu: goto L_0065340b; case 0x653414u: goto L_00653414; case 0x65341du: goto L_0065341d; default: UNSUP(0x006533d0, "jump table entry is not a known target"); } }
L_006533d7:; BB(0x006533d7);
    /* 006533d7: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 006533db: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006533dd: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006533df: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006533e1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006533e4: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 006533e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006533ea: je 0x6533f3 */ if (fZ) goto L_006533f3;
L_006533ec:; BB(0x006533ec);
    /* 006533ec: mov dword ptr [ebp - 0x10], 0x5f */ W32((u32)(r_ebp+0xfffffff0u), 0x5fu);
L_006533f3:; BB(0x006533f3);
    /* 006533f3: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 006533f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006533f9: je 0x653409 */ if (fZ) goto L_00653409;
L_006533fb:; BB(0x006533fb);
    /* 006533fb: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 00653402: mov dword ptr [ebp - 0x10], 0x61 */ W32((u32)(r_ebp+0xfffffff0u), 0x61u);
L_00653409:; BB(0x00653409);
    /* 00653409: jmp 0x65342b */ goto L_0065342b;
L_0065340b:; BB(0x0065340b);
    /* 0065340b: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00653412: jmp 0x65342b */ goto L_0065342b;
L_00653414:; BB(0x00653414);
    /* 00653414: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0065341b: jmp 0x65342b */ goto L_0065342b;
L_0065341d:; BB(0x0065341d);
    /* 0065341d: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00653424: mov dword ptr [ebp - 0x10], 0x60 */ W32((u32)(r_ebp+0xfffffff0u), 0x60u);
L_0065342b:; BB(0x0065342b);
    /* 0065342b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653432: jmp 0x65343d */ goto L_0065343d;
L_00653434:; BB(0x00653434);
    /* 00653434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653437: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065343a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0065343d:; BB(0x0065343d);
    /* 0065343d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653441: jge 0x65355f */ if ((fS==fO)) goto L_0065355f;
L_00653447:; BB(0x00653447);
    /* 00653447: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065344a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065344d: mov ecx, dword ptr [eax + edx*4 + 0x1e0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1e0u));
    /* 00653454: call 0x5f6410 */ r_esp -= 4; W32(r_esp, 0x653459u); f_005f6410();
    /* 00653459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065345b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065345d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065345f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653462: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653465: mov ecx, dword ptr [edx + ecx*4 + 0x1e0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1e0u));
    /* 0065346c: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x653471u); f_005f6580();
    /* 00653471: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653475: jne 0x6534ca */ if (!fZ) goto L_006534ca;
L_00653477:; BB(0x00653477);
    /* 00653477: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065347a: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065347d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653480: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653483: mov dl, byte ptr [eax + ecx + 0x76d588] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x76d588u))) & 0xffu);
    /* 0065348a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065348b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065348e: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653494: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653497: mov dl, byte ptr [eax + ecx + 0x76d584] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x76d584u))) & 0xffu);
    /* 0065349e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065349f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006534a2: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006534a8: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534ab: mov dl, byte ptr [eax + ecx + 0x76d580] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x76d580u))) & 0xffu);
    /* 006534b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006534b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006534b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006534b9: mov ecx, dword ptr [ecx + eax*4 + 0x1e0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1e0u));
    /* 006534c0: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x6534c5u); f_005f6580();
    /* 006534c5: jmp 0x65355a */ goto L_0065355a;
L_006534ca:; BB(0x006534ca);
    /* 006534ca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006534cd: imul edx, edx, 0x3c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006534d3: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534d6: cmp dword ptr [edx + eax + 0x76d580], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x76d580u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006534de: jne 0x65350c */ if (!fZ) goto L_0065350c;
L_006534e0:; BB(0x006534e0);
    /* 006534e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006534e3: imul ecx, ecx, 0x3c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006534e9: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534ec: cmp dword ptr [ecx + edx + 0x76d584], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x76d584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006534f4: jne 0x65350c */ if (!fZ) goto L_0065350c;
L_006534f6:; BB(0x006534f6);
    /* 006534f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006534f9: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006534fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006534ff: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653502: cmp dword ptr [eax + ecx + 0x76d588], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x76d588u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065350a: je 0x65355a */ if (fZ) goto L_0065355a;
L_0065350c:; BB(0x0065350c);
    /* 0065350c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065350f: imul edx, edx, 0x3c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653512: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653515: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653518: mov cl, byte ptr [edx + eax + 0x76d588] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x76d588u))) & 0xffu);
    /* 0065351f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653520: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653523: imul edx, edx, 0x3c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653526: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653529: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065352c: mov cl, byte ptr [edx + eax + 0x76d584] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x76d584u))) & 0xffu);
    /* 00653533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653534: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653537: imul edx, edx, 0x3c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065353a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065353d: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00653540: mov cl, byte ptr [edx + eax + 0x76d580] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0x76d580u))) & 0xffu);
    /* 00653547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00653548: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065354b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065354e: mov ecx, dword ptr [eax + edx*4 + 0x1e0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1e0u));
    /* 00653555: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x65355au); f_005f6490();
L_0065355a:; BB(0x0065355a);
    /* 0065355a: jmp 0x653434 */ goto L_00653434;
L_0065355f:; BB(0x0065355f);
    /* 0065355f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653562: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00653568: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065356b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065356f: je 0x6535a0 */ if (fZ) goto L_006535a0;
L_00653571:; BB(0x00653571);
    /* 00653571: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653574: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0065357a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065357d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065357e: mov edx, esp */ r_edx = r_esp;
    /* 00653580: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00653586: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00653589: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0065358f: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00653592: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653594: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653598: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065359b: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x6535a0u); f_005ecd00();
L_006535a0:; BB(0x006535a0);
    /* 006535a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006535a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006535a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006535a4: ret 4 */ FN_RET(0x00653320); r_esp += 8; return;
}

