#include "protos.h"

void f_005e85d0(void) /* HofAnimationScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e85d0);
    /* 005e85d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e85d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e85d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e85d5: push 0x6a9a31 */ { u32 v = 0x6a9a31u; r_esp -= 4; W32(r_esp, v); }
    /* 005e85da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e85e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e85e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e85e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e85e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e85eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e85ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e85ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e85f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e85f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e85fb: mov byte ptr [eax + 0x190], 1 */ W8((u32)(r_eax+0x190u), 0x1u);
    /* 005e8602: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8605: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x5e860au); f_005f5cc0();
    /* 005e860a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e860c: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8613: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8615: push 0x30f0ed */ { u32 v = 0x30f0edu; r_esp -= 4; W32(r_esp, v); }
    /* 005e861a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e861d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5e8622u); f_005eae80();
    /* 005e8622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8624: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8627: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8629: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e862c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e8632: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e8634u); call_ind(t); }
    /* 005e8634: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8637: mov dword ptr [ecx + 0x178], 3 */ W32((u32)(r_ecx+0x178u), 0x3u);
    /* 005e8641: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8643: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e8648u); f_00686d82();
    /* 005e8648: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e864b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e864e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e8655: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8659: je 0x5e8676 */ if (fZ) goto L_005e8676;
L_005e865b:; BB(0x005e865b);
    /* 005e865b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e865d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8660: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5e8665u); f_005fc0d0();
    /* 005e8665: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8668: mov dword ptr [edx], 0x6d5e64 */ W32((u32)(r_edx), 0x6d5e64u);
    /* 005e866e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e8671: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e8674: jmp 0x5e867d */ goto L_005e867d;
L_005e8676:; BB(0x005e8676);
    /* 005e8676: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e867d:; BB(0x005e867d);
    /* 005e867d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e8680: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e8683: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e868a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e868d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e868e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8691: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5e8696u); f_005f5df0();
    /* 005e8696: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e8699: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e86a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e86a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e86a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e86a4: ret  */ FN_RET(0x005e85d0); r_esp += 4; return;
}

void f_005e87d0(void) /* HofAnimationScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e87d0);
    /* 005e87d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e87d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e87d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e87d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e87d7: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005e87dc: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e87e0: je 0x5e87f6 */ if (fZ) goto L_005e87f6;
L_005e87e2:; BB(0x005e87e2);
    /* 005e87e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e87e5: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005e87e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e87e9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005e87ee: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005e87f1: call 0x5e86f0 */ r_esp -= 4; W32(r_esp, 0x5e87f6u); f_005e86f0();
L_005e87f6:; BB(0x005e87f6);
    /* 005e87f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e87f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e87f9: ret  */ FN_RET(0x005e87d0); r_esp += 4; return;
}

