#include "protos.h"

void f_0060d6a0(void) /* sub_60D6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d6a0);
    /* 0060d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060d6a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6aa: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d6b1: je 0x60d6d9 */ if (fZ) goto L_0060d6d9;
L_0060d6b3:; BB(0x0060d6b3);
    /* 0060d6b3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6b8: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060d6bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6bf: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060d6c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6c3: call 0x687306 */ r_esp -= 4; W32(r_esp, 0x60d6c8u); f_00687306();
    /* 0060d6c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d6cb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0060d6cd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0060d6cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060d6d2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060d6d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d6d7: je 0x60d6de */ if (fZ) goto L_0060d6de;
L_0060d6d9:; BB(0x0060d6d9);
    /* 0060d6d9: jmp 0x60d796 */ goto L_0060d796;
L_0060d6de:; BB(0x0060d6de);
    /* 0060d6de: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6e3: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0060d6e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6ea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0060d6ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6f1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0060d6f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6f8: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0060d6fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d6fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d6ff: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0060d705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d706: call dword ptr [0x6b2004] */ { u32 t = R32((u32)(0x6b2004u)); r_esp -= 4; W32(r_esp, 0x60d70cu); call_ind(t); }
    /* 0060d70c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d70e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d711: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0060d714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d718: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0060d71b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d71c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d71f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0060d722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d723: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d726: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0060d729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d72a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d72d: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0060d733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d734: call dword ptr [0x6b2004] */ { u32 t = R32((u32)(0x6b2004u)); r_esp -= 4; W32(r_esp, 0x60d73au); call_ind(t); }
    /* 0060d73a: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d73c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d73f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0060d742: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d743: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d746: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060d749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d74a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d74d: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0060d750: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d751: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d754: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0060d757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d758: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d75b: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0060d761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d762: call dword ptr [0x6b2004] */ { u32 t = R32((u32)(0x6b2004u)); r_esp -= 4; W32(r_esp, 0x60d768u); call_ind(t); }
    /* 0060d768: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d76d: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0060d770: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d771: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d774: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0060d777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d778: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d77b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060d77e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d77f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d782: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0060d785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d786: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d789: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0060d78f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d790: call dword ptr [0x6b2004] */ { u32 t = R32((u32)(0x6b2004u)); r_esp -= 4; W32(r_esp, 0x60d796u); call_ind(t); }
L_0060d796:; BB(0x0060d796);
    /* 0060d796: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d799: ret  */ FN_RET(0x0060d6a0); r_esp += 4; return;
}

void f_0060dc00(void) /* sub_60DC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dc00);
    /* 0060dc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dc03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc06: push 0x15e5190 */ { u32 v = 0x15e5190u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc0d: call 0x60cc90 */ r_esp -= 4; W32(r_esp, 0x60dc12u); f_0060cc90();
    /* 0060dc12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060dc15: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060dc18: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dc1c: je 0x60dc22 */ if (fZ) goto L_0060dc22;
L_0060dc1e:; BB(0x0060dc1e);
    /* 0060dc1e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060dc20: jmp 0x60dc4a */ goto L_0060dc4a;
L_0060dc22:; BB(0x0060dc22);
    /* 0060dc22: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060dc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc28: mov ecx, dword ptr [0x15e5190] */ r_ecx = R32((u32)(0x15e5190u));
    /* 0060dc2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060dc30: mov eax, dword ptr [0x15e5190] */ r_eax = R32((u32)(0x15e5190u));
    /* 0060dc35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc36: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0060dc39: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x60dc3bu); call_ind(t); }
    /* 0060dc3b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060dc3e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dc42: je 0x60dc48 */ if (fZ) goto L_0060dc48;
L_0060dc44:; BB(0x0060dc44);
    /* 0060dc44: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060dc46: jmp 0x60dc4a */ goto L_0060dc4a;
L_0060dc48:; BB(0x0060dc48);
    /* 0060dc48: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0060dc4a:; BB(0x0060dc4a);
    /* 0060dc4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dc4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dc4d: ret  */ FN_RET(0x0060dc00); r_esp += 4; return;
}

void f_0060dc50(void) /* sub_60DC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dc50);
    /* 0060dc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dc53: cmp dword ptr [0x15e5190], 0 */ {  u32 a = R32((u32)(0x15e5190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dc5a: je 0x60dca6 */ if (fZ) goto L_0060dca6;
L_0060dc5c:; BB(0x0060dc5c);
    /* 0060dc5c: mov eax, dword ptr [0x15e5190] */ r_eax = R32((u32)(0x15e5190u));
    /* 0060dc61: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060dc63: mov edx, dword ptr [0x15e5190] */ r_edx = R32((u32)(0x15e5190u));
    /* 0060dc69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc6a: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0060dc6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60dc6fu); call_ind(t); }
    /* 0060dc6f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060dc74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc75: mov edx, dword ptr [0x15e5190] */ r_edx = R32((u32)(0x15e5190u));
    /* 0060dc7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060dc7d: mov ecx, dword ptr [0x15e5190] */ r_ecx = R32((u32)(0x15e5190u));
    /* 0060dc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc84: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0060dc87: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60dc89u); call_ind(t); }
    /* 0060dc89: mov eax, dword ptr [0x15e5190] */ r_eax = R32((u32)(0x15e5190u));
    /* 0060dc8e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060dc90: mov edx, dword ptr [0x15e5190] */ r_edx = R32((u32)(0x15e5190u));
    /* 0060dc96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc97: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0060dc9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60dc9cu); call_ind(t); }
    /* 0060dc9c: mov dword ptr [0x15e5190], 0 */ W32((u32)(0x15e5190u), 0x0u);
L_0060dca6:; BB(0x0060dca6);
    /* 0060dca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dca7: ret  */ FN_RET(0x0060dc50); r_esp += 4; return;
}

void f_0060dd10(void) /* sub_60DD10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dd10);
    /* 0060dd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dd13: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060dd19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd1a: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0060dd1d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dd20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060dd22: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dd25: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0060dd28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60dd2au); call_ind(t); }
    /* 0060dd2a: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0060dd2d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060dd30: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dd33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060dd35: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dd38: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0060dd3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60dd3du); call_ind(t); }
    /* 0060dd3d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060dd40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060dd43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd45: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0060dd48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd4b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd4d: call dword ptr [0x6b23bc] */ { u32 t = R32((u32)(0x6b23bcu)); r_esp -= 4; W32(r_esp, 0x60dd53u); call_ind(t); }
    /* 0060dd53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dd55: jne 0x60dd7b */ if (!fZ) goto L_0060dd7b;
L_0060dd57:; BB(0x0060dd57);
    /* 0060dd57: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0060dd5e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0060dd65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd67: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60dd6du); call_ind(t); }
    /* 0060dd6d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060dd70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd72: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60dd78u); call_ind(t); }
    /* 0060dd78: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0060dd7b:; BB(0x0060dd7b);
    /* 0060dd7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060dd7e: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060dd81: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0060dd84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060dd87: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060dd8a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060dd8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd8f: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60dd95u); call_ind(t); }
    /* 0060dd95: mov esi, eax */ r_esi = r_eax;
    /* 0060dd97: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dd9a: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60dd9fu); f_00613620();
    /* 0060dd9f: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0060dda2: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060dda4: jg 0x60ddd0 */ if ((!fZ&&fS==fO)) goto L_0060ddd0;
L_0060dda6:; BB(0x0060dda6);
    /* 0060dda6: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060ddaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ddac: je 0x60ddd0 */ if (fZ) goto L_0060ddd0;
L_0060ddae:; BB(0x0060ddae);
    /* 0060ddae: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060ddb1: movzx ecx, byte ptr [eax + 0x5c] */ r_ecx = (u32)R8((u32)(r_eax+0x5cu));
    /* 0060ddb5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ddb7: jne 0x60ddd0 */ if (!fZ) goto L_0060ddd0;
L_0060ddb9:; BB(0x0060ddb9);
    /* 0060ddb9: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060ddbc: mov byte ptr [edx + 0x96], 1 */ W8((u32)(r_edx+0x96u), 0x1u);
    /* 0060ddc3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060ddc6: call 0x60e050 */ r_esp -= 4; W32(r_esp, 0x60ddcbu); f_0060e050();
    /* 0060ddcb: jmp 0x60e03f */ goto L_0060e03f;
L_0060ddd0:; BB(0x0060ddd0);
    /* 0060ddd0: mov dword ptr [ebp - 0x24], 0xcb0000 */ W32((u32)(r_ebp+0xffffffdcu), 0xcb0000u);
    /* 0060ddd7: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060ddda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dddb: mov ecx, dword ptr [0x16306b4] */ r_ecx = R32((u32)(0x16306b4u));
    /* 0060dde1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dde2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dde4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dde6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dde9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ddea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ddee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ddf1: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060ddf4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060ddf5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060ddf7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0060ddf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ddfa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060ddfd: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060de00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060de01: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060de03: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0060de05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060de06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060de09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de0a: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de0d: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0060de13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060de14: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de17: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 0060de1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060de20: call dword ptr [0x6b23c0] */ { u32 t = R32((u32)(0x6b23c0u)); r_esp -= 4; W32(r_esp, 0x60de26u); call_ind(t); }
    /* 0060de26: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de29: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0060de2f: movzx edx, byte ptr [0x795fba] */ r_edx = (u32)R8((u32)(0x795fbau));
    /* 0060de36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de37: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de3a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060de40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de41: call dword ptr [0x6b2398] */ { u32 t = R32((u32)(0x6b2398u)); r_esp -= 4; W32(r_esp, 0x60de47u); call_ind(t); }
    /* 0060de47: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de4a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060de50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060de51: call dword ptr [0x6b23c4] */ { u32 t = R32((u32)(0x6b23c4u)); r_esp -= 4; W32(r_esp, 0x60de57u); call_ind(t); }
    /* 0060de57: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de5a: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0060de60: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0060de63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de64: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060de67: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060de6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de6e: call dword ptr [0x6b23c8] */ { u32 t = R32((u32)(0x6b23c8u)); r_esp -= 4; W32(r_esp, 0x60de74u); call_ind(t); }
    /* 0060de74: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060de77: sub edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060de7a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0060de7d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060de80: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0060de83: cmp dword ptr [ebp - 0x80], 0x480 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x480u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060de8a: jg 0x60deb2 */ if ((!fZ&&fS==fO)) goto L_0060deb2;
L_0060de8c:; BB(0x0060de8c);
    /* 0060de8c: cmp dword ptr [ebp - 0x80], 0x480 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x480u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060de93: je 0x60dee1 */ if (fZ) goto L_0060dee1;
L_0060de95:; BB(0x0060de95);
    /* 0060de95: cmp dword ptr [ebp - 0x80], 0x280 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060de9c: je 0x60dec6 */ if (fZ) goto L_0060dec6;
L_0060de9e:; BB(0x0060de9e);
    /* 0060de9e: cmp dword ptr [ebp - 0x80], 0x320 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x320u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dea5: je 0x60decf */ if (fZ) goto L_0060decf;
L_0060dea7:; BB(0x0060dea7);
    /* 0060dea7: cmp dword ptr [ebp - 0x80], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060deae: je 0x60ded8 */ if (fZ) goto L_0060ded8;
L_0060deb0:; BB(0x0060deb0);
    /* 0060deb0: jmp 0x60defc */ goto L_0060defc;
L_0060deb2:; BB(0x0060deb2);
    /* 0060deb2: cmp dword ptr [ebp - 0x80], 0x500 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060deb9: je 0x60deea */ if (fZ) goto L_0060deea;
L_0060debb:; BB(0x0060debb);
    /* 0060debb: cmp dword ptr [ebp - 0x80], 0x640 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x640u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dec2: je 0x60def3 */ if (fZ) goto L_0060def3;
L_0060dec4:; BB(0x0060dec4);
    /* 0060dec4: jmp 0x60defc */ goto L_0060defc;
L_0060dec6:; BB(0x0060dec6);
    /* 0060dec6: mov dword ptr [ebp - 0x28], 0x1e0 */ W32((u32)(r_ebp+0xffffffd8u), 0x1e0u);
    /* 0060decd: jmp 0x60df05 */ goto L_0060df05;
L_0060decf:; BB(0x0060decf);
    /* 0060decf: mov dword ptr [ebp - 0x28], 0x258 */ W32((u32)(r_ebp+0xffffffd8u), 0x258u);
    /* 0060ded6: jmp 0x60df05 */ goto L_0060df05;
L_0060ded8:; BB(0x0060ded8);
    /* 0060ded8: mov dword ptr [ebp - 0x28], 0x300 */ W32((u32)(r_ebp+0xffffffd8u), 0x300u);
    /* 0060dedf: jmp 0x60df05 */ goto L_0060df05;
L_0060dee1:; BB(0x0060dee1);
    /* 0060dee1: mov dword ptr [ebp - 0x28], 0x360 */ W32((u32)(r_ebp+0xffffffd8u), 0x360u);
    /* 0060dee8: jmp 0x60df05 */ goto L_0060df05;
L_0060deea:; BB(0x0060deea);
    /* 0060deea: mov dword ptr [ebp - 0x28], 0x400 */ W32((u32)(r_ebp+0xffffffd8u), 0x400u);
    /* 0060def1: jmp 0x60df05 */ goto L_0060df05;
L_0060def3:; BB(0x0060def3);
    /* 0060def3: mov dword ptr [ebp - 0x28], 0x4b0 */ W32((u32)(r_ebp+0xffffffd8u), 0x4b0u);
    /* 0060defa: jmp 0x60df05 */ goto L_0060df05;
L_0060defc:; BB(0x0060defc);
    /* 0060defc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060deff: sub ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060df02: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0060df05:; BB(0x0060df05);
    /* 0060df05: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060df08: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060df0b: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0060df0e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060df11: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060df14: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0060df17: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060df1a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0060df1d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060df20: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0060df23: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060df26: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060df29: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0060df2c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060df2f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0060df32: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0060df34: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060df37: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060df3a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0060df3d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060df40: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0060df43: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0060df46: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060df49: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0060df4c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0060df4f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060df52: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060df55: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0060df58: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060df5b: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060df5e: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0060df61: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060df64: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0060df67: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060df6a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0060df6d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060df70: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060df73: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0060df76: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060df79: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060df7c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0060df7e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060df81: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0060df84: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0060df87: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0060df8a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060df8d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0060df90: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060df93: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0060df96: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0060df99: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0060df9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060df9d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dfa0: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060dfa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dfa7: call dword ptr [0x6b23cc] */ { u32 t = R32((u32)(0x6b23ccu)); r_esp -= 4; W32(r_esp, 0x60dfadu); call_ind(t); }
    /* 0060dfad: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060dfb0: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0060dfb3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060dfb6: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0060dfb9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060dfbc: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0060dfbf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060dfc2: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0060dfc5: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dfc8: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060dfcb: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0060dfce: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0060dfd1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0060dfd4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0060dfd6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0060dfd9: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0060dfdc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0060dfdf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0060dfe2: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0060dfe5: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0060dfe8: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0060dfeb: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0060dfee: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0060dff1: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dff4: mov byte ptr [edx + 0x95], 0 */ W8((u32)(r_edx+0x95u), 0x0u);
    /* 0060dffb: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0060dffe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060e000: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0060e003: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060e006: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60e008u); call_ind(t); }
    /* 0060e008: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060e00c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e00e: je 0x60e025 */ if (fZ) goto L_0060e025;
L_0060e010:; BB(0x0060e010);
    /* 0060e010: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e012: push 0x6d82f0 */ { u32 v = 0x6d82f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e017: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0060e01d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0060e020: call 0x607930 */ r_esp -= 4; W32(r_esp, 0x60e025u); f_00607930();
L_0060e025:; BB(0x0060e025);
    /* 0060e025: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060e029: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0060e02b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0060e02d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060e030: mov byte ptr [0x15e55d0], al */ W8((u32)(0x15e55d0u), (u8)r_eax);
    /* 0060e035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e037: call 0x60cd90 */ r_esp -= 4; W32(r_esp, 0x60e03cu); f_0060cd90();
    /* 0060e03c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060e03f:; BB(0x0060e03f);
    /* 0060e03f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060e040: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e043: ret 4 */ FN_RET(0x0060dd10); r_esp += 8; return;
}

