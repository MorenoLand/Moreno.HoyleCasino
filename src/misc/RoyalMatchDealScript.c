#include "protos.h"

void f_005aa980(void) /* RoyalMatchDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa980);
    /* 005aa980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa981: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa985: push 0x6a7b29 */ { u32 v = 0x6a7b29u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa98a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa991: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa992: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa997: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa99a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aa99d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aa9a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005aa9a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa9a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa9ab: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5aa9b0u); f_005fc0d0();
    /* 005aa9b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aa9b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa9ba: mov dword ptr [eax], 0x6cfcb4 */ W32((u32)(r_eax), 0x6cfcb4u);
    /* 005aa9c0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa9c2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005aa9c8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5aa9cdu); f_00637810();
    /* 005aa9cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005aa9cf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa9d2: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005aa9d5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa9d8: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 005aa9db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa9e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa9e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa9e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa9ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa9f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa9f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa9f3: ret  */ FN_RET(0x005aa980); r_esp += 4; return;
}

void f_005aaa20(void) /* RoyalMatchDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aaa20);
    /* 005aaa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa21: mov ebp, esp */ r_ebp = r_esp;
    /* 005aaa23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa25: push 0x6a7b65 */ { u32 v = 0x6a7b65u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aaa30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa31: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aaa34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aaa39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aaa3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aaa3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aaa45: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005aaa48: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaa4b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5aaa50u); f_005fc360();
    /* 005aaa50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005aaa53: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005aaa57: ja 0x5aad1f */ if ((!fC&&!fZ)) goto L_005aad1f;
L_005aaa5d:; BB(0x005aaa5d);
    /* 005aaa5d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005aaa60: jmp dword ptr [eax*4 + 0x5aad4c] */ { u32 t = R32((u32)(r_eax*4+0x5aad4cu)); switch (t) { case 0x5aaa67u: goto L_005aaa67; case 0x5aaaf9u: goto L_005aaaf9; case 0x5aabb2u: goto L_005aabb2; case 0x5aac6eu: goto L_005aac6e; case 0x5aacb3u: goto L_005aacb3; default: UNSUP(0x005aaa60, "jump table entry is not a known target"); } }
L_005aaa67:; BB(0x005aaa67);
    /* 005aaa67: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aaa6d: call 0x5b52e0 */ r_esp -= 4; W32(r_esp, 0x5aaa72u); f_005b52e0();
    /* 005aaa72: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaa75: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005aaa78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa7a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaa7d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005aaa7f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaa82: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005aaa85: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aaa87u); call_ind(t); }
    /* 005aaa87: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaa8a: call 0x5aad60 */ r_esp -= 4; W32(r_esp, 0x5aaa8fu); f_005aad60();
    /* 005aaa8f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005aaa92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaa94: je 0x5aaae5 */ if (fZ) goto L_005aaae5;
L_005aaa96:; BB(0x005aaa96);
    /* 005aaa96: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa98: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aaa9du); f_00686d82();
    /* 005aaa9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aaaa0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aaaa3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aaaaa: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aaaae: je 0x5aaac3 */ if (fZ) goto L_005aaac3;
L_005aaab0:; BB(0x005aaab0);
    /* 005aaab0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaab4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaab6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aaab9: call 0x5aa670 */ r_esp -= 4; W32(r_esp, 0x5aaabeu); f_005aa670();
    /* 005aaabe: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005aaac1: jmp 0x5aaaca */ goto L_005aaaca;
L_005aaac3:; BB(0x005aaac3);
    /* 005aaac3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005aaaca:; BB(0x005aaaca);
    /* 005aaaca: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aaacd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005aaad0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aaad7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aaada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aaadb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaade: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aaae3u); f_005fc420();
    /* 005aaae3: jmp 0x5aaaf4 */ goto L_005aaaf4;
L_005aaae5:; BB(0x005aaae5);
    /* 005aaae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaae7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaaea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aaaec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaaef: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aaaf2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaaf4u); call_ind(t); }
L_005aaaf4:; BB(0x005aaaf4);
    /* 005aaaf4: jmp 0x5aad3a */ goto L_005aad3a;
L_005aaaf9:; BB(0x005aaaf9);
    /* 005aaaf9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaafb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaafe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aab00: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab03: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aab06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aab08u); call_ind(t); }
    /* 005aab08: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab0b: call 0x5aad60 */ r_esp -= 4; W32(r_esp, 0x5aab10u); f_005aad60();
    /* 005aab10: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005aab13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aab15: je 0x5aab6d */ if (fZ) goto L_005aab6d;
L_005aab17:; BB(0x005aab17);
    /* 005aab17: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005aab19: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aab1eu); f_00686d82();
    /* 005aab1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aab21: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aab24: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aab2b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aab2f: je 0x5aab4b */ if (fZ) goto L_005aab4b;
L_005aab31:; BB(0x005aab31);
    /* 005aab31: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aab37: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab3a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005aab3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aab3e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aab41: call 0x5aadf0 */ r_esp -= 4; W32(r_esp, 0x5aab46u); f_005aadf0();
    /* 005aab46: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005aab49: jmp 0x5aab52 */ goto L_005aab52;
L_005aab4b:; BB(0x005aab4b);
    /* 005aab4b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005aab52:; BB(0x005aab52);
    /* 005aab52: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005aab55: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aab58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aab5f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aab62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab63: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab66: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aab6bu); f_005fc420();
    /* 005aab6b: jmp 0x5aabad */ goto L_005aabad;
L_005aab6d:; BB(0x005aab6d);
    /* 005aab6d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aab6f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aab75: mov ecx, dword ptr [ecx + 0x57c] */ r_ecx = R32((u32)(r_ecx+0x57cu));
    /* 005aab7b: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5aab80u); f_006436c0();
    /* 005aab80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab81: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aab84: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005aab87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aab88: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aab8e: call 0x5b31b0 */ r_esp -= 4; W32(r_esp, 0x5aab93u); f_005b31b0();
    /* 005aab93: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aab99: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5aab9eu); f_005a7ea0();
    /* 005aab9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaba0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaba3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aaba5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaba8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aabab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aabadu); call_ind(t); }
L_005aabad:; BB(0x005aabad);
    /* 005aabad: jmp 0x5aad3a */ goto L_005aad3a;
L_005aabb2:; BB(0x005aabb2);
    /* 005aabb2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aabb4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aabb6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aabbc: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5aabc1u); f_005b5830();
    /* 005aabc1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aabc4: jne 0x5aabdc */ if (!fZ) goto L_005aabdc;
L_005aabc6:; BB(0x005aabc6);
    /* 005aabc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aabc8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aabca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabcd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aabcf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabd2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aabd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aabd7u); call_ind(t); }
    /* 005aabd7: jmp 0x5aac69 */ goto L_005aac69;
L_005aabdc:; BB(0x005aabdc);
    /* 005aabdc: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aabe2: call 0x5b52e0 */ r_esp -= 4; W32(r_esp, 0x5aabe7u); f_005b52e0();
    /* 005aabe7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabea: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005aabed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aabef: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabf2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005aabf4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabf7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005aabfa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aabfcu); call_ind(t); }
    /* 005aabfc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aabff: call 0x5aad60 */ r_esp -= 4; W32(r_esp, 0x5aac04u); f_005aad60();
    /* 005aac04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005aac07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aac09: je 0x5aac5a */ if (fZ) goto L_005aac5a;
L_005aac0b:; BB(0x005aac0b);
    /* 005aac0b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005aac0d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aac12u); f_00686d82();
    /* 005aac12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aac15: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aac18: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005aac1f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aac23: je 0x5aac38 */ if (fZ) goto L_005aac38;
L_005aac25:; BB(0x005aac25);
    /* 005aac25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aac29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aac2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aac2e: call 0x5aa670 */ r_esp -= 4; W32(r_esp, 0x5aac33u); f_005aa670();
    /* 005aac33: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005aac36: jmp 0x5aac3f */ goto L_005aac3f;
L_005aac38:; BB(0x005aac38);
    /* 005aac38: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005aac3f:; BB(0x005aac3f);
    /* 005aac3f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005aac42: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005aac45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aac4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aac4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aac50: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac53: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aac58u); f_005fc420();
    /* 005aac58: jmp 0x5aac69 */ goto L_005aac69;
L_005aac5a:; BB(0x005aac5a);
    /* 005aac5a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aac5c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aac61: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac64: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aac67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aac69u); call_ind(t); }
L_005aac69:; BB(0x005aac69);
    /* 005aac69: jmp 0x5aad3a */ goto L_005aad3a;
L_005aac6e:; BB(0x005aac6e);
    /* 005aac6e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aac70: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aac75: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac78: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aac7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aac7du); call_ind(t); }
    /* 005aac7d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac80: call 0x5aad60 */ r_esp -= 4; W32(r_esp, 0x5aac85u); f_005aad60();
    /* 005aac85: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005aac88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aac8a: je 0x5aac9f */ if (fZ) goto L_005aac9f;
L_005aac8c:; BB(0x005aac8c);
    /* 005aac8c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aac8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aac90: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aac95: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005aac98: call 0x5aa380 */ r_esp -= 4; W32(r_esp, 0x5aac9du); f_005aa380();
    /* 005aac9d: jmp 0x5aacae */ goto L_005aacae;
L_005aac9f:; BB(0x005aac9f);
    /* 005aac9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aaca1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaca4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aaca6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aaca9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aacac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aacaeu); call_ind(t); }
L_005aacae:; BB(0x005aacae);
    /* 005aacae: jmp 0x5aad3a */ goto L_005aad3a;
L_005aacb3:; BB(0x005aacb3);
    /* 005aacb3: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aacb9: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aacbc: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aacc1: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aacc4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aacc6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005aacc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aaccbu); call_ind(t); }
    /* 005aaccb: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aacd1: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aacd4: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aacd9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aacdc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aacde: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005aace1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aace3u); call_ind(t); }
    /* 005aace3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aace9: mov byte ptr [ecx + 0x5c0], 0 */ W8((u32)(r_ecx+0x5c0u), 0x0u);
    /* 005aacf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aacf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aacf4: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005aacfa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aacfd: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aad03: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005aad06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aad08: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aad0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aad0du); call_ind(t); }
    /* 005aad0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aad0f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aad15: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005aad18: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aad1du); f_005fc420();
    /* 005aad1d: jmp 0x5aad3a */ goto L_005aad3a;
L_005aad1f:; BB(0x005aad1f);
    /* 005aad1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005aad21: jne 0x5aad3a */ if (!fZ) goto L_005aad3a;
L_005aad23:; BB(0x005aad23);
    /* 005aad23: push 0x48e */ { u32 v = 0x48eu; r_esp -= 4; W32(r_esp, v); }
    /* 005aad28: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005aad2d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005aad32: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5aad37u); f_005e9f20();
    /* 005aad37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aad3a:; BB(0x005aad3a);
    /* 005aad3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aad3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aad44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aad45: mov esp, ebp */ r_esp = r_ebp;
    /* 005aad47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aad48: ret  */ FN_RET(0x005aaa20); r_esp += 4; return;
}

