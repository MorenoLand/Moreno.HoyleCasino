#include "protos.h"

void f_00457c30(void) /* PaiGowDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457c30);
    /* 00457c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00457c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457c35: push 0x69f026 */ { u32 v = 0x69f026u; r_esp -= 4; W32(r_esp, v); }
    /* 00457c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00457c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c41: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457c47: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457c48: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00457c4d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00457c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457c50: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00457c53: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00457c59: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00457c5f: mov dword ptr [ebp - 0x58], 5 */ W32((u32)(r_ebp+0xffffffa8u), 0x5u);
    /* 00457c66: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00457c6d: mov dword ptr [ebp - 0x3c], 2 */ W32((u32)(r_ebp+0xffffffc4u), 0x2u);
    /* 00457c74: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00457c7b: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00457c82: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 00457c89: mov dword ptr [ebp - 0x2c], 6 */ W32((u32)(r_ebp+0xffffffd4u), 0x6u);
    /* 00457c90: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 00457c97: mov dword ptr [ebp - 0x24], 7 */ W32((u32)(r_ebp+0xffffffdcu), 0x7u);
    /* 00457c9e: mov dword ptr [ebp - 0x54], 0x1b5 */ W32((u32)(r_ebp+0xffffffacu), 0x1b5u);
    /* 00457ca5: mov dword ptr [ebp - 0x50], 0x18a */ W32((u32)(r_ebp+0xffffffb0u), 0x18au);
    /* 00457cac: mov dword ptr [ebp - 0x4c], 0xe2 */ W32((u32)(r_ebp+0xffffffb4u), 0xe2u);
    /* 00457cb3: mov dword ptr [ebp - 0x48], 0xb9 */ W32((u32)(r_ebp+0xffffffb8u), 0xb9u);
    /* 00457cba: mov dword ptr [ebp - 0x1c], 0x77 */ W32((u32)(r_ebp+0xffffffe4u), 0x77u);
    /* 00457cc1: mov dword ptr [ebp - 0x18], 0xca */ W32((u32)(r_ebp+0xffffffe8u), 0xcau);
    /* 00457cc8: mov dword ptr [ebp - 0x14], 0xca */ W32((u32)(r_ebp+0xffffffecu), 0xcau);
    /* 00457ccf: mov dword ptr [ebp - 0x10], 0x77 */ W32((u32)(r_ebp+0xfffffff0u), 0x77u);
    /* 00457cd6: mov dword ptr [ebp - 0x44], 0x7dc */ W32((u32)(r_ebp+0xffffffbcu), 0x7dcu);
    /* 00457cdd: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00457ce3: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x457ce8u); f_0045e8e0();
    /* 00457ce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457cea: jne 0x457d17 */ if (!fZ) goto L_00457d17;
L_00457cec:; BB(0x00457cec);
    /* 00457cec: push 0x6b977c */ { u32 v = 0x6b977cu; r_esp -= 4; W32(r_esp, v); }
    /* 00457cf1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x457cf6u); f_00630f40();
    /* 00457cf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457cfa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00457d00: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x457d05u); f_005f38b0();
    /* 00457d05: push 0x7d1 */ { u32 v = 0x7d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457d0a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00457d10: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x457d15u); f_005f1ad0();
    /* 00457d15: jmp 0x457d57 */ goto L_00457d57;
L_00457d17:; BB(0x00457d17);
    /* 00457d17: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00457d1d: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x457d22u); f_0045e8e0();
    /* 00457d22: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d25: jne 0x457d57 */ if (!fZ) goto L_00457d57;
L_00457d27:; BB(0x00457d27);
    /* 00457d27: push 0x6b9768 */ { u32 v = 0x6b9768u; r_esp -= 4; W32(r_esp, v); }
    /* 00457d2c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x457d31u); f_00630f40();
    /* 00457d31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457d34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457d35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00457d3b: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x457d40u); f_005f38b0();
    /* 00457d40: push 0xfdeb */ { u32 v = 0xfdebu; r_esp -= 4; W32(r_esp, v); }
    /* 00457d45: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00457d4b: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x457d50u); f_005f1ad0();
    /* 00457d50: mov dword ptr [ebp - 0x44], 0xfded */ W32((u32)(r_ebp+0xffffffbcu), 0xfdedu);
L_00457d57:; BB(0x00457d57);
    /* 00457d57: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00457d5e: jmp 0x457d69 */ goto L_00457d69;
L_00457d60:; BB(0x00457d60);
    /* 00457d60: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457d63: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457d66: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00457d69:; BB(0x00457d69);
    /* 00457d69: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457d6d: jge 0x457eaa */ if ((fS==fO)) goto L_00457eaa;
L_00457d73:; BB(0x00457d73);
    /* 00457d73: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00457d75: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x457d7au); f_00686d82();
    /* 00457d7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457d7d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00457d80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457d87: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457d8b: je 0x457d9d */ if (fZ) goto L_00457d9d;
L_00457d8d:; BB(0x00457d8d);
    /* 00457d8d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00457d90: call 0x459b00 */ r_esp -= 4; W32(r_esp, 0x457d95u); f_00459b00();
    /* 00457d95: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00457d9b: jmp 0x457da7 */ goto L_00457da7;
L_00457d9d:; BB(0x00457d9d);
    /* 00457d9d: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00457da7:; BB(0x00457da7);
    /* 00457da7: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00457dad: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00457db0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457db7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457dba: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00457dc0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00457dc3: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 00457dc7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457dcb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457dce: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457dd4: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00457dd8: call 0x459c00 */ r_esp -= 4; W32(r_esp, 0x457dddu); f_00459c00();
    /* 00457ddd: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457de1: je 0x457ea5 */ if (fZ) goto L_00457ea5;
L_00457de7:; BB(0x00457de7);
    /* 00457de7: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00457ded: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x457df2u); f_0045e8e0();
    /* 00457df2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457df5: jne 0x457ea5 */ if (!fZ) goto L_00457ea5;
L_00457dfb:; BB(0x00457dfb);
    /* 00457dfb: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e00: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x457e05u); f_00686d82();
    /* 00457e05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457e08: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00457e0b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00457e12: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457e16: je 0x457e28 */ if (fZ) goto L_00457e28;
L_00457e18:; BB(0x00457e18);
    /* 00457e18: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00457e1b: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x457e20u); f_005eaaf0();
    /* 00457e20: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00457e26: jmp 0x457e32 */ goto L_00457e32;
L_00457e28:; BB(0x00457e28);
    /* 00457e28: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00457e32:; BB(0x00457e32);
    /* 00457e32: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00457e38: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00457e3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457e42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457e45: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457e4b: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00457e4e: mov dword ptr [ecx + eax*4 + 0x84], edx */ W32((u32)(r_ecx+r_eax*4+0x84u), r_edx);
    /* 00457e55: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457e57: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e5d: push 0x1adbd */ { u32 v = 0x1adbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00457e62: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457e65: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457e6b: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 00457e72: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x457e77u); f_005eae80();
    /* 00457e77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457e79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457e7c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00457e82: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 00457e89: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457e8c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00457e92: mov edx, dword ptr [eax + edx*4 + 0x84] */ r_edx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 00457e99: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00457e9b: mov ecx, edx */ r_ecx = r_edx;
    /* 00457e9d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00457ea3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x457ea5u); call_ind(t); }
L_00457ea5:; BB(0x00457ea5);
    /* 00457ea5: jmp 0x457d60 */ goto L_00457d60;
L_00457eaa:; BB(0x00457eaa);
    /* 00457eaa: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00457eb0: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x457eb5u); f_0045e8e0();
    /* 00457eb5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457eb8: jne 0x457ec1 */ if (!fZ) goto L_00457ec1;
L_00457eba:; BB(0x00457eba);
    /* 00457eba: mov dword ptr [ebp - 0x58], 9 */ W32((u32)(r_ebp+0xffffffa8u), 0x9u);
L_00457ec1:; BB(0x00457ec1);
    /* 00457ec1: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00457ec8: jmp 0x457ed3 */ goto L_00457ed3;
L_00457eca:; BB(0x00457eca);
    /* 00457eca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457ecd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457ed0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00457ed3:; BB(0x00457ed3);
    /* 00457ed3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457ed6: cmp ecx, dword ptr [ebp - 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457ed9: jge 0x458212 */ if ((fS==fO)) goto L_00458212;
L_00457edf:; BB(0x00457edf);
    /* 00457edf: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00457ee2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00457ee5: cmp dword ptr [ebp - 0x20], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457ee8: jge 0x457f60 */ if ((fS==fO)) goto L_00457f60;
L_00457eea:; BB(0x00457eea);
    /* 00457eea: push 0xae8 */ { u32 v = 0xae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00457eef: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x457ef4u); f_00686d82();
    /* 00457ef4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457ef7: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00457efa: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00457f01: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457f05: je 0x457f34 */ if (fZ) goto L_00457f34;
L_00457f07:; BB(0x00457f07);
    /* 00457f07: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457f0a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00457f0b: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00457f0e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457f10: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00457f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457f14: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457f17: and eax, 0x80000003 */ {  u32 a = r_eax; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00457f1c: jns 0x457f23 */ if (!fS) goto L_00457f23;
L_00457f1e:; BB(0x00457f1e);
    /* 00457f1e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457f1f: or eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00457f22: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00457f23:; BB(0x00457f23);
    /* 00457f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457f24: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00457f27: call 0x45a120 */ r_esp -= 4; W32(r_esp, 0x457f2cu); f_0045a120();
    /* 00457f2c: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00457f32: jmp 0x457f3e */ goto L_00457f3e;
L_00457f34:; BB(0x00457f34);
    /* 00457f34: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00457f3e:; BB(0x00457f3e);
    /* 00457f3e: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00457f44: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00457f47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457f4e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457f51: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00457f57: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00457f5a: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 00457f5e: jmp 0x457fbb */ goto L_00457fbb;
L_00457f60:; BB(0x00457f60);
    /* 00457f60: push 0xae8 */ { u32 v = 0xae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00457f65: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x457f6au); f_00686d82();
    /* 00457f6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00457f6d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00457f70: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00457f77: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457f7b: je 0x457f91 */ if (fZ) goto L_00457f91;
L_00457f7d:; BB(0x00457f7d);
    /* 00457f7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457f7f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00457f81: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00457f84: call 0x45a120 */ r_esp -= 4; W32(r_esp, 0x457f89u); f_0045a120();
    /* 00457f89: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00457f8f: jmp 0x457f9b */ goto L_00457f9b;
L_00457f91:; BB(0x00457f91);
    /* 00457f91: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00457f9b:; BB(0x00457f9b);
    /* 00457f9b: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00457fa1: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00457fa4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457fab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457fae: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457fb4: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00457fb7: mov dword ptr [ecx + eax*4 + 0x18], edx */ W32((u32)(r_ecx+r_eax*4+0x18u), r_edx);
L_00457fbb:; BB(0x00457fbb);
    /* 00457fbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457fbd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00457fc3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00457fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457fc7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457fca: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457fd0: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00457fd4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x457fd9u); f_005eae80();
    /* 00457fd9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00457fdc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00457fdf: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457fe2: jge 0x4581bc */ if ((fS==fO)) goto L_004581bc;
L_00457fe8:; BB(0x00457fe8);
    /* 00457fe8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457feb: mov edx, dword ptr [ebp + ecx*4 - 0x40] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc0u));
    /* 00457fef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457ff0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457ff3: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00457ff9: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00457ffd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458000: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458006: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0045800a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045800c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00458012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458014u); call_ind(t); }
    /* 00458014: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458018: jge 0x4581bc */ if ((fS==fO)) goto L_004581bc;
L_0045801e:; BB(0x0045801e);
    /* 0045801e: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458024: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x458029u); f_0045e8e0();
    /* 00458029: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045802c: jne 0x4581bc */ if (!fZ) goto L_004581bc;
L_00458032:; BB(0x00458032);
    /* 00458032: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458035: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045803b: cmp dword ptr [edx + ecx*4 + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458043: je 0x4581bc */ if (fZ) goto L_004581bc;
L_00458049:; BB(0x00458049);
    /* 00458049: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045804c: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00458052: cmp dword ptr [ebp - 0xc0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458059: ja 0x4581bc */ if ((!fC&&!fZ)) goto L_004581bc;
L_0045805f:; BB(0x0045805f);
    /* 0045805f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00458065: jmp dword ptr [ecx*4 + 0x4586c0] */ { u32 t = R32((u32)(r_ecx*4+0x4586c0u)); switch (t) { case 0x45806cu: goto L_0045806c; case 0x458117u: goto L_00458117; default: UNSUP(0x00458065, "jump table entry is not a known target"); } }
L_0045806c:; BB(0x0045806c);
    /* 0045806c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458070: je 0x45808f */ if (fZ) goto L_0045808f;
L_00458072:; BB(0x00458072);
    /* 00458072: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458075: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0045807b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0045807f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x458084u); f_005f5550();
    /* 00458084: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458087: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0045808d: jmp 0x4580af */ goto L_004580af;
L_0045808f:; BB(0x0045808f);
    /* 0045808f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458092: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458098: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0045809f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x4580a4u); f_005f5550();
    /* 004580a4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004580a6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004580a9: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
L_004580af:; BB(0x004580af);
    /* 004580af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004580b2: mov esi, dword ptr [ebp + eax*4 - 0x40] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffc0u));
    /* 004580b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004580b9: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 004580bf: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 004580c6: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x4580cbu); f_005f5590();
    /* 004580cb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004580cc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004580ce: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004580d0: mov ecx, dword ptr [ebp + esi*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0xffffffe4u));
    /* 004580d4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004580d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004580d7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004580da: mov eax, dword ptr [ebp + edx*4 - 0x40] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffc0u));
    /* 004580de: mov ecx, dword ptr [ebp + eax*4 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffacu));
    /* 004580e2: add ecx, dword ptr [ebp - 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004580e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004580e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004580ec: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004580f2: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 004580f9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004580fc: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458102: mov edx, dword ptr [eax + edx*4 + 0x84] */ r_edx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 00458109: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0045810b: mov ecx, edx */ r_ecx = r_edx;
    /* 0045810d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00458110: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x458112u); call_ind(t); }
    /* 00458112: jmp 0x4581bc */ goto L_004581bc;
L_00458117:; BB(0x00458117);
    /* 00458117: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045811b: jne 0x45813a */ if (!fZ) goto L_0045813a;
L_0045811d:; BB(0x0045811d);
    /* 0045811d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458120: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458126: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0045812a: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x45812fu); f_005f5550();
    /* 0045812f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458132: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00458138: jmp 0x45815c */ goto L_0045815c;
L_0045813a:; BB(0x0045813a);
    /* 0045813a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045813d: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458143: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 0045814a: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x45814fu); f_005f5550();
    /* 0045814f: mov ecx, 0xfffffffe */ r_ecx = 0xfffffffeu;
    /* 00458154: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00458156: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
L_0045815c:; BB(0x0045815c);
    /* 0045815c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045815f: mov esi, dword ptr [ebp + edx*4 - 0x40] */ r_esi = R32((u32)(r_ebp+r_edx*4+0xffffffc0u));
    /* 00458163: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458166: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045816c: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00458170: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x458175u); f_005f5590();
    /* 00458175: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00458176: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458178: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045817a: mov edx, dword ptr [ebp + esi*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_esi*4+0xffffffe4u));
    /* 0045817e: lea eax, [edx + eax + 2] */ r_eax = (u32)(r_edx+r_eax+0x2u);
    /* 00458182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458183: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458186: mov edx, dword ptr [ebp + ecx*4 - 0x40] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc0u));
    /* 0045818a: mov eax, dword ptr [ebp + edx*4 - 0x54] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffacu));
    /* 0045818e: add eax, dword ptr [ebp - 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff38u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458195: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00458198: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045819e: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 004581a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004581a8: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 004581ae: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 004581b5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004581b7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004581ba: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4581bcu); call_ind(t); }
L_004581bc:; BB(0x004581bc);
    /* 004581bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004581be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004581c1: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004581c7: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 004581cb: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x4581d0u); f_005eb5d0();
    /* 004581d0: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 004581d6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004581d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004581da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004581dd: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 004581e3: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004581e7: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x4581ecu); f_005cc2c0();
    /* 004581ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004581ef: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004581f5: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 004581f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004581fc: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458202: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00458206: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458208: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0045820b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45820du); call_ind(t); }
    /* 0045820d: jmp 0x457eca */ goto L_00457eca;
L_00458212:; BB(0x00458212);
    /* 00458212: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 00458218: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45821du); f_0045e8e0();
    /* 0045821d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458220: jne 0x4583af */ if (!fZ) goto L_004583af;
L_00458226:; BB(0x00458226);
    /* 00458226: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00458228: push -0x29 */ { u32 v = 0xffffffd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045822a: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458230: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00458233: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458239: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0045823c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045823e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00458241: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458243u); call_ind(t); }
    /* 00458243: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00458245: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00458247: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045824d: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00458250: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458256: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00458259: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045825b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045825e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458260u); call_ind(t); }
    /* 00458260: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 00458262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458264: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045826a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0045826d: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458273: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00458276: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458278: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045827b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45827du); call_ind(t); }
    /* 0045827d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045827f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458281: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458287: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0045828a: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458290: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00458293: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458295: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00458298: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45829au); call_ind(t); }
    /* 0045829a: push -0x12 */ { u32 v = 0xffffffeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0045829c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0045829e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004582a4: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004582a7: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004582ad: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004582b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004582b2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004582b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4582b7u); call_ind(t); }
    /* 004582b7: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004582b9: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004582bb: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004582c1: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004582c4: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004582ca: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004582cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004582cf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004582d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4582d4u); call_ind(t); }
    /* 004582d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004582d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004582d8: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004582de: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004582e1: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004582e7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004582ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004582ec: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004582ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4582f1u); call_ind(t); }
    /* 004582f1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004582f3: push -0x15 */ { u32 v = 0xffffffebu; r_esp -= 4; W32(r_esp, v); }
    /* 004582f5: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004582fb: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004582fe: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458304: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00458307: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458309: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045830c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45830eu); call_ind(t); }
    /* 0045830e: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00458313: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00458318: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045831e: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00458324: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0045832a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00458330: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458332: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00458335: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458337u); call_ind(t); }
    /* 00458337: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045833c: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 00458341: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458347: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0045834d: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458353: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00458359: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045835b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0045835e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458360u); call_ind(t); }
    /* 00458360: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00458362: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458367: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045836d: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 00458373: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458379: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0045837f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00458381: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00458384: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458386u); call_ind(t); }
    /* 00458386: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 0045838b: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 00458390: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458396: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0045839c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004583a2: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 004583a8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004583aa: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004583ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4583afu); call_ind(t); }
L_004583af:; BB(0x004583af);
    /* 004583af: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 004583b4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4583b9u); f_00686d82();
    /* 004583b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004583bc: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004583bf: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004583c6: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004583ca: je 0x4583e8 */ if (fZ) goto L_004583e8;
L_004583cc:; BB(0x004583cc);
    /* 004583cc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004583cf: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x4583d4u); f_005cd6a0();
    /* 004583d4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004583d7: mov dword ptr [ecx], 0x6b96a4 */ W32((u32)(r_ecx), 0x6b96a4u);
    /* 004583dd: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004583e0: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 004583e6: jmp 0x4583f2 */ goto L_004583f2;
L_004583e8:; BB(0x004583e8);
    /* 004583e8: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_004583f2:; BB(0x004583f2);
    /* 004583f2: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004583f8: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004583fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00458402: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458408: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0045840b: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0045840e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458414: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458416: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458418: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0045841e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00458421: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x458426u); f_005eae80();
    /* 00458426: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0045842b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x458430u); f_00686d82();
    /* 00458430: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458433: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00458439: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00458440: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458447: je 0x45845c */ if (fZ) goto L_0045845c;
L_00458449:; BB(0x00458449);
    /* 00458449: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0045844f: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x458454u); f_005f5bf0();
    /* 00458454: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0045845a: jmp 0x458466 */ goto L_00458466;
L_0045845c:; BB(0x0045845c);
    /* 0045845c: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00458466:; BB(0x00458466);
    /* 00458466: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0045846c: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00458472: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00458479: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045847f: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00458485: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00458488: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045848a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045848c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045848e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458490: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00458495: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045849b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0045849e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4584a3u); f_005eae80();
    /* 004584a3: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 004584a8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4584adu); f_00686d82();
    /* 004584ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004584b0: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004584b6: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004584bd: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004584c4: je 0x4584d9 */ if (fZ) goto L_004584d9;
L_004584c6:; BB(0x004584c6);
    /* 004584c6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004584cc: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4584d1u); f_005f5bf0();
    /* 004584d1: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 004584d7: jmp 0x4584e3 */ goto L_004584e3;
L_004584d9:; BB(0x004584d9);
    /* 004584d9: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_004584e3:; BB(0x004584e3);
    /* 004584e3: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 004584e9: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 004584ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004584f6: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 004584fc: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00458502: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00458505: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458507: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00458509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045850b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045850d: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 00458512: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458518: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0045851b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x458520u); f_005eae80();
    /* 00458520: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00458525: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45852au); f_00686d82();
    /* 0045852a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045852d: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00458533: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0045853a: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458541: je 0x458556 */ if (fZ) goto L_00458556;
L_00458543:; BB(0x00458543);
    /* 00458543: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00458549: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x45854eu); f_005f5bf0();
    /* 0045854e: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00458554: jmp 0x458560 */ goto L_00458560;
L_00458556:; BB(0x00458556);
    /* 00458556: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00458560:; BB(0x00458560);
    /* 00458560: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00458566: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0045856c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00458573: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458579: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0045857f: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00458582: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458584: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458586: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045858a: push 0x7d7 */ { u32 v = 0x7d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045858f: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00458595: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00458598: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x45859du); f_005eae80();
    /* 0045859d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004585a2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4585a7u); f_00686d82();
    /* 004585a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004585aa: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004585b0: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004585b7: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004585be: je 0x4585d3 */ if (fZ) goto L_004585d3;
L_004585c0:; BB(0x004585c0);
    /* 004585c0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004585c6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4585cbu); f_005eaaf0();
    /* 004585cb: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 004585d1: jmp 0x4585dd */ goto L_004585dd;
L_004585d3:; BB(0x004585d3);
    /* 004585d3: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_004585dd:; BB(0x004585dd);
    /* 004585dd: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004585e3: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 004585e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004585f0: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 004585f6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004585fc: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 004585ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458601: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458603: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458607: push 0x7e2 */ { u32 v = 0x7e2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045860c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458612: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00458615: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x45861au); f_005eae80();
    /* 0045861a: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458620: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00458623: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00458629: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0045862c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045862e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00458631: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458633u); call_ind(t); }
    /* 00458633: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00458638: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45863du); f_00686d82();
    /* 0045863d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458640: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00458646: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0045864d: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458654: je 0x458669 */ if (fZ) goto L_00458669;
L_00458656:; BB(0x00458656);
    /* 00458656: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0045865c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x458661u); f_005eaaf0();
    /* 00458661: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00458667: jmp 0x458673 */ goto L_00458673;
L_00458669:; BB(0x00458669);
    /* 00458669: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00458673:; BB(0x00458673);
    /* 00458673: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00458679: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0045867f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00458686: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0045868c: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00458692: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00458695: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458697: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458699: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045869b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045869d: push 0x7e3 */ { u32 v = 0x7e3u; r_esp -= 4; W32(r_esp, v); }
    /* 004586a2: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004586a8: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004586ab: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4586b0u); f_005eae80();
    /* 004586b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004586b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004586ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004586bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004586bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004586be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004586bf: ret  */ FN_RET(0x00457c30); r_esp += 4; return;
}

