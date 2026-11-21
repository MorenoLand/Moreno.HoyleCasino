#include "protos.h"

void f_0052ea10(void) /* SlotMachineReel::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ea10);
    /* 0052ea10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea11: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ea13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea15: push 0x6a45f3 */ { u32 v = 0x6a45f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052ea20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea21: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ea24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052ea29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ea2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052ea2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052ea35: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0052ea38: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea3b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52ea40u); f_005f5bf0();
    /* 0052ea40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ea47: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea4a: mov dword ptr [eax], 0x6c3c9c */ W32((u32)(r_eax), 0x6c3c9cu);
    /* 0052ea50: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea53: mov dword ptr [ecx + 0x1a0], 0 */ W32((u32)(r_ecx+0x1a0u), 0x0u);
    /* 0052ea5d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea60: mov dword ptr [edx + 0x1a4], 0 */ W32((u32)(r_edx+0x1a4u), 0x0u);
    /* 0052ea6a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea6d: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 0052ea77: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ea7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052ea7d: mov dword ptr [ecx + 0x1ac], edx */ W32((u32)(r_ecx+0x1acu), r_edx);
    /* 0052ea83: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea88: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52ea8du); f_00686d82();
    /* 0052ea8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ea90: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052ea93: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052ea97: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ea9b: je 0x52eaaa */ if (fZ) goto L_0052eaaa;
L_0052ea9d:; BB(0x0052ea9d);
    /* 0052ea9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052eaa0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52eaa5u); f_005eaaf0();
    /* 0052eaa5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0052eaa8: jmp 0x52eab1 */ goto L_0052eab1;
L_0052eaaa:; BB(0x0052eaaa);
    /* 0052eaaa: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0052eab1:; BB(0x0052eab1);
    /* 0052eab1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052eab4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052eab7: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052eabb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052eabe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052eac1: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 0052eac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052eac9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eacb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eacd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eacf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ead1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ead4: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052eada: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52eadfu); f_005eae80();
    /* 0052eadf: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eae4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52eae9u); f_00686d82();
    /* 0052eae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052eaec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052eaef: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052eaf3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052eaf7: je 0x52eb06 */ if (fZ) goto L_0052eb06;
L_0052eaf9:; BB(0x0052eaf9);
    /* 0052eaf9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052eafc: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52eb01u); f_005eaaf0();
    /* 0052eb01: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0052eb04: jmp 0x52eb0d */ goto L_0052eb0d;
L_0052eb06:; BB(0x0052eb06);
    /* 0052eb06: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0052eb0d:; BB(0x0052eb0d);
    /* 0052eb0d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052eb10: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052eb13: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052eb17: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052eb1a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052eb1d: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
    /* 0052eb23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb2d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052eb30: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0052eb36: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52eb3bu); f_005eae80();
    /* 0052eb3b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb40: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52eb45u); f_00686d82();
    /* 0052eb45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052eb48: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052eb4b: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0052eb4f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052eb53: je 0x52eb62 */ if (fZ) goto L_0052eb62;
L_0052eb55:; BB(0x0052eb55);
    /* 0052eb55: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052eb58: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52eb5du); f_005eaaf0();
    /* 0052eb5d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052eb60: jmp 0x52eb69 */ goto L_0052eb69;
L_0052eb62:; BB(0x0052eb62);
    /* 0052eb62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0052eb69:; BB(0x0052eb69);
    /* 0052eb69: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052eb6c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052eb6f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052eb73: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052eb76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052eb79: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
    /* 0052eb7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb89: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052eb8c: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0052eb92: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52eb97u); f_005eae80();
    /* 0052eb97: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb9c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52eba1u); f_00686d82();
    /* 0052eba1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052eba4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052eba7: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0052ebab: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ebaf: je 0x52ebbe */ if (fZ) goto L_0052ebbe;
L_0052ebb1:; BB(0x0052ebb1);
    /* 0052ebb1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052ebb4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52ebb9u); f_005eaaf0();
    /* 0052ebb9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0052ebbc: jmp 0x52ebc5 */ goto L_0052ebc5;
L_0052ebbe:; BB(0x0052ebbe);
    /* 0052ebbe: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0052ebc5:; BB(0x0052ebc5);
    /* 0052ebc5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052ebc8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052ebcb: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ebcf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ebd2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052ebd5: mov dword ptr [ecx + 0x190], edx */ W32((u32)(r_ecx+0x190u), r_edx);
    /* 0052ebdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebe1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebe3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebe5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ebe8: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052ebee: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52ebf3u); f_005eae80();
    /* 0052ebf3: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebf8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52ebfdu); f_00686d82();
    /* 0052ebfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ec00: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0052ec03: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0052ec07: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec0b: je 0x52ec1a */ if (fZ) goto L_0052ec1a;
L_0052ec0d:; BB(0x0052ec0d);
    /* 0052ec0d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052ec10: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52ec15u); f_005eaaf0();
    /* 0052ec15: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052ec18: jmp 0x52ec21 */ goto L_0052ec21;
L_0052ec1a:; BB(0x0052ec1a);
    /* 0052ec1a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0052ec21:; BB(0x0052ec21);
    /* 0052ec21: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052ec24: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0052ec27: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ec2b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ec2e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ec31: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 0052ec37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec41: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ec44: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0052ec4a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52ec4fu); f_005eae80();
    /* 0052ec4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052ec56: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ec59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ec5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052ec63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052ec64: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ec66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ec67: ret 4 */ FN_RET(0x0052ea10); r_esp += 8; return;
}

void f_0052ec70(void) /* SlotMachineReel::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ec70);
    /* 0052ec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec71: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ec73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec75: push 0x6a4616 */ { u32 v = 0x6a4616u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052ec80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec81: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ec84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052ec89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ec8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052ec8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052ec95: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0052ec98: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ec9b: mov dword ptr [eax], 0x6c3c9c */ W32((u32)(r_eax), 0x6c3c9cu);
    /* 0052eca1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052eca8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ecab: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0052ecb1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0052ecb4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052ecb7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052ecba: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ecbe: je 0x52ecd3 */ if (fZ) goto L_0052ecd3;
L_0052ecc0:; BB(0x0052ecc0);
    /* 0052ecc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ecc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ecc5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ecc7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ecca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052eccc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ecceu); call_ind(t); }
    /* 0052ecce: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0052ecd1: jmp 0x52ecda */ goto L_0052ecda;
L_0052ecd3:; BB(0x0052ecd3);
    /* 0052ecd3: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0052ecda:; BB(0x0052ecda);
    /* 0052ecda: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ecdd: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0052ece3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0052ece6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ece9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052ecec: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ecf0: je 0x52ed05 */ if (fZ) goto L_0052ed05;
L_0052ecf2:; BB(0x0052ecf2);
    /* 0052ecf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ecf4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ecf7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ecf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ecfc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ecfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ed00u); call_ind(t); }
    /* 0052ed00: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0052ed03: jmp 0x52ed0c */ goto L_0052ed0c;
L_0052ed05:; BB(0x0052ed05);
    /* 0052ed05: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0052ed0c:; BB(0x0052ed0c);
    /* 0052ed0c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ed0f: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052ed15: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0052ed18: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052ed1b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052ed1e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ed22: je 0x52ed37 */ if (fZ) goto L_0052ed37;
L_0052ed24:; BB(0x0052ed24);
    /* 0052ed24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ed26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052ed29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ed2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052ed2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ed30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ed32u); call_ind(t); }
    /* 0052ed32: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052ed35: jmp 0x52ed3e */ goto L_0052ed3e;
L_0052ed37:; BB(0x0052ed37);
    /* 0052ed37: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0052ed3e:; BB(0x0052ed3e);
    /* 0052ed3e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ed41: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0052ed47: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0052ed4a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052ed4d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052ed50: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ed54: je 0x52ed69 */ if (fZ) goto L_0052ed69;
L_0052ed56:; BB(0x0052ed56);
    /* 0052ed56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ed58: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052ed5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ed5d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052ed60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ed62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ed64u); call_ind(t); }
    /* 0052ed64: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0052ed67: jmp 0x52ed70 */ goto L_0052ed70;
L_0052ed69:; BB(0x0052ed69);
    /* 0052ed69: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0052ed70:; BB(0x0052ed70);
    /* 0052ed70: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ed73: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052ed79: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0052ed7c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0052ed7f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0052ed82: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ed86: je 0x52ed9b */ if (fZ) goto L_0052ed9b;
L_0052ed88:; BB(0x0052ed88);
    /* 0052ed88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ed8a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ed8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ed8f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ed92: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ed94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ed96u); call_ind(t); }
    /* 0052ed96: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052ed99: jmp 0x52eda2 */ goto L_0052eda2;
L_0052ed9b:; BB(0x0052ed9b);
    /* 0052ed9b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0052eda2:; BB(0x0052eda2);
    /* 0052eda2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052eda9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052edac: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x52edb1u); f_005f5c40();
    /* 0052edb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052edb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052edbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052edbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0052edbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052edbf: ret  */ FN_RET(0x0052ec70); r_esp += 4; return;
}

void f_0052ee70(void) /* SlotMachineReel::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ee70);
    /* 0052ee70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee71: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ee73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ee76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052ee79: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ee7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052ee7f: mov dword ptr [eax + 0x1a4], ecx */ W32((u32)(r_eax+0x1a4u), r_ecx);
    /* 0052ee85: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ee88: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052ee8b: mov dword ptr [edx + 0x1a8], eax */ W32((u32)(r_edx+0x1a8u), r_eax);
    /* 0052ee91: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ee96: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052ee9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee9d: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052eea3: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52eea8u); f_00537880();
    /* 0052eea8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052eeab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052eeae: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052eeb4: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052eeb7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052eeba: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052eec0: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 0052eec5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052eec8: jne 0x52efea */ if (!fZ) goto L_0052efea;
L_0052eece:; BB(0x0052eece);
    /* 0052eece: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052eed1: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 0052eed7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052eed8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052eeda: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0052eedc: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052eedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052eee0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052eee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052eee4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052eee7: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052eeed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052eef0: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0052eef6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052eef8: mov ecx, eax */ r_ecx = r_eax;
    /* 0052eefa: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052eefd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52eeffu); call_ind(t); }
    /* 0052eeff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef02: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 0052ef08: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052ef09: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef0b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0052ef0d: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef10: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef13: mov ecx, dword ptr [edx + 0x1a0] */ r_ecx = R32((u32)(r_edx+0x1a0u));
    /* 0052ef19: lea edx, [eax + ecx + 3] */ r_edx = (u32)(r_eax+r_ecx+0x3u);
    /* 0052ef1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052ef21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef25: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0052ef2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef2e: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052ef34: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ef36: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052ef39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ef3bu); call_ind(t); }
    /* 0052ef3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef3e: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 0052ef44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052ef45: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef47: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0052ef49: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef4c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef4f: mov ecx, dword ptr [edx + 0x1a0] */ r_ecx = R32((u32)(r_edx+0x1a0u));
    /* 0052ef55: lea ecx, [eax + ecx + 3] */ r_ecx = (u32)(r_eax+r_ecx+0x3u);
    /* 0052ef59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef5c: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 0052ef62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052ef63: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef65: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0052ef67: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef6a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ef6c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052ef6f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef72: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052ef78: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef7b: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0052ef81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ef83: mov ecx, eax */ r_ecx = r_eax;
    /* 0052ef85: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0052ef88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ef8au); call_ind(t); }
    /* 0052ef8a: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052ef91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef95: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0052ef9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052ef9e: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0052efa4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052efa6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052efa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52efabu); call_ind(t); }
    /* 0052efab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052efae: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0052efb4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052efb7: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052efbd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052efbf: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0052efc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52efc4u); call_ind(t); }
    /* 0052efc4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052efc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052efc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052efcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052efcc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052efcf: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0052efd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052efd8: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0052efde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052efe0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052efe3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52efe5u); call_ind(t); }
    /* 0052efe5: jmp 0x52f0bd */ goto L_0052f0bd;
L_0052efea:; BB(0x0052efea);
    /* 0052efea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052efed: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0052eff0: sub edx, dword ptr [ecx + 0x1a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1a0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052eff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052eff7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052effa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052effb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052effe: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0052f004: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f007: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052f00d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f00f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052f012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f014u); call_ind(t); }
    /* 0052f014: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0052f017: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f018: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052f01b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f01c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f01f: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052f025: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f028: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0052f02e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052f030: mov ecx, eax */ r_ecx = r_eax;
    /* 0052f032: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052f035: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f037u); call_ind(t); }
    /* 0052f037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f03a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0052f03d: add edx, dword ptr [ecx + 0x1a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1a0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f044: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052f047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f048: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f04b: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052f051: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f054: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0052f05a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f05c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052f05f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f061u); call_ind(t); }
    /* 0052f061: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f064: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 0052f06a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052f06d: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0052f070: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f071: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052f074: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f075: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f078: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052f07e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f081: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0052f087: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052f089: mov ecx, eax */ r_ecx = r_eax;
    /* 0052f08b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052f08e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f090u); call_ind(t); }
    /* 0052f090: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f093: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 0052f099: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f09c: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f09f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052f0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f0a7: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052f0ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f0b0: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052f0b6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f0b8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052f0bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f0bdu); call_ind(t); }
L_0052f0bd:; BB(0x0052f0bd);
    /* 0052f0bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f0bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f0c0: ret 8 */ FN_RET(0x0052ee70); r_esp += 12; return;
}

void f_0052f0d0(void) /* SlotMachineReel::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f0d0);
    /* 0052f0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f0d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f0d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052f0d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f0dc: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052f0e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f0e5: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0052f0eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052f0ed: mov ecx, eax */ r_ecx = r_eax;
    /* 0052f0ef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f0f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f0f4u); call_ind(t); }
    /* 0052f0f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f0f7: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0052f0fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f100: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052f106: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f108: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052f10b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f10du); call_ind(t); }
    /* 0052f10d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f10f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f112: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 0052f118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f119: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052f11f: call 0x537880 */ r_esp -= 4; W32(r_esp, 0x52f124u); f_00537880();
    /* 0052f124: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052f127: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f12a: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 0052f130: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052f133: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f136: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052f13c: movsx eax, byte ptr [edx + ecx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x15u));
    /* 0052f141: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f144: jne 0x52f161 */ if (!fZ) goto L_0052f161;
L_0052f146:; BB(0x0052f146);
    /* 0052f146: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f149: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052f14f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f152: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0052f158: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f15a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f15d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f15fu); call_ind(t); }
    /* 0052f15f: jmp 0x52f17a */ goto L_0052f17a;
L_0052f161:; BB(0x0052f161);
    /* 0052f161: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f164: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052f16a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f16d: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0052f173: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f175: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052f178: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f17au); call_ind(t); }
L_0052f17a:; BB(0x0052f17a);
    /* 0052f17a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f17d: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0052f183: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f186: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052f18c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f18e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052f191: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f193u); call_ind(t); }
    /* 0052f193: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f196: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052f19c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052f19f: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052f1a5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f1a7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f1aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f1acu); call_ind(t); }
    /* 0052f1ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f1ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f1af: ret  */ FN_RET(0x0052f0d0); r_esp += 4; return;
}

void f_0052f1b0(void) /* SlotMachineReel::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f1b0);
    /* 0052f1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f1b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052f1b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1ba: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0052f1c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1c3: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0052f1c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052f1cb: mov ecx, eax */ r_ecx = r_eax;
    /* 0052f1cd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f1d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f1d2u); call_ind(t); }
    /* 0052f1d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1d5: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0052f1db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1de: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052f1e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f1e6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f1e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f1ebu); call_ind(t); }
    /* 0052f1eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1ee: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0052f1f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f1f7: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0052f1fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f1ff: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f202: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f204u); call_ind(t); }
    /* 0052f204: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f207: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0052f20d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f210: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0052f216: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f218: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f21b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f21du); call_ind(t); }
    /* 0052f21d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f220: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0052f226: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f229: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052f22f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f231: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f234: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f236u); call_ind(t); }
    /* 0052f236: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f239: ret  */ FN_RET(0x0052f1b0); r_esp += 4; return;
}

