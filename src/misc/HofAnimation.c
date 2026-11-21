#include "protos.h"

void f_005dc8e0(void) /* HofAnimation::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc8e0);
    /* 005dc8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8e5: push 0x6a94b1 */ { u32 v = 0x6a94b1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc8f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc8f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dc8f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dc8ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dc905: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005dc908: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 005dc90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc911: jne 0x5dc91e */ if (!fZ) goto L_005dc91e;
L_005dc913:; BB(0x005dc913);
    /* 005dc913: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 005dc91a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc91c: je 0x5dc923 */ if (fZ) goto L_005dc923;
L_005dc91e:; BB(0x005dc91e);
    /* 005dc91e: jmp 0x5dc9b6 */ goto L_005dc9b6;
L_005dc923:; BB(0x005dc923);
    /* 005dc923: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc926: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc92a: je 0x5dc945 */ if (fZ) goto L_005dc945;
L_005dc92c:; BB(0x005dc92c);
    /* 005dc92c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc92f: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005dc932: mov dl, byte ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x190u))) & 0xffu);
    /* 005dc938: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005dc93b: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005dc93f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc941: je 0x5dc945 */ if (fZ) goto L_005dc945;
L_005dc943:; BB(0x005dc943);
    /* 005dc943: jmp 0x5dc9b6 */ goto L_005dc9b6;
L_005dc945:; BB(0x005dc945);
    /* 005dc945: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc948: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc94c: jne 0x5dc9ab */ if (!fZ) goto L_005dc9ab;
L_005dc94e:; BB(0x005dc94e);
    /* 005dc94e: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc953: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc958u); f_00686d82();
    /* 005dc958: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc95b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dc95e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc965: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc969: je 0x5dc98e */ if (fZ) goto L_005dc98e;
L_005dc96b:; BB(0x005dc96b);
    /* 005dc96b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc96e: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5dc973u); f_005f5f50();
    /* 005dc973: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc976: mov dword ptr [edx], 0x6d458c */ W32((u32)(r_edx), 0x6d458cu);
    /* 005dc97c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc97f: mov byte ptr [eax + 0x190], 1 */ W8((u32)(r_eax+0x190u), 0x1u);
    /* 005dc986: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dc989: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dc98c: jmp 0x5dc995 */ goto L_005dc995;
L_005dc98e:; BB(0x005dc98e);
    /* 005dc98e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005dc995:; BB(0x005dc995);
    /* 005dc995: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc998: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005dc99b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc9a2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc9a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dc9a8: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
L_005dc9ab:; BB(0x005dc9ab);
    /* 005dc9ab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc9ae: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 005dc9b1: call 0x5e85d0 */ r_esp -= 4; W32(r_esp, 0x5dc9b6u); f_005e85d0();
L_005dc9b6:; BB(0x005dc9b6);
    /* 005dc9b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc9b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc9c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc9c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc9c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc9c4: ret  */ FN_RET(0x005dc8e0); r_esp += 4; return;
}

void f_005dca30(void) /* HofAnimation::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dca30);
    /* 005dca30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dca31: mov ebp, esp */ r_ebp = r_esp;
    /* 005dca33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dca37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca3a: mov dword ptr [eax], 0x6d458c */ W32((u32)(r_eax), 0x6d458cu);
    /* 005dca40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca43: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x5dca48u); f_005f5fa0();
    /* 005dca48: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dca4b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005dca4e: je 0x5dca5c */ if (fZ) goto L_005dca5c;
L_005dca50:; BB(0x005dca50);
    /* 005dca50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca54: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5dca59u); f_00686cae();
    /* 005dca59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dca5c:; BB(0x005dca5c);
    /* 005dca5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005dca61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dca62: ret 4 */ FN_RET(0x005dca30); r_esp += 8; return;
}

