#include "protos.h"

void f_0046caa0(void) /* CardFiveButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046caa0);
    /* 0046caa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046caa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046caa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046caa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046caa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046caaa: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46caafu); f_00601a80();
    /* 0046caaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cab2: mov dword ptr [eax], 0x6bc0ac */ W32((u32)(r_eax), 0x6bc0acu);
    /* 0046cab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cabb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046cabe: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0046cac4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cac7: mov byte ptr [eax + 0x1dc], 0 */ W8((u32)(r_eax+0x1dcu), 0x0u);
    /* 0046cace: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cad1: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cad3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cad4: ret 4 */ FN_RET(0x0046caa0); r_esp += 8; return;
}

void f_0046cae0(void) /* CardFiveButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cae0);
    /* 0046cae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046caea: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 0046caf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046caf3: je 0x46cb86 */ if (fZ) goto L_0046cb86;
L_0046caf9:; BB(0x0046caf9);
    /* 0046caf9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cafc: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046cb02: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0046cb08: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cb0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb0e: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046cb14: mov dword ptr [eax + 0x220], ecx */ W32((u32)(r_eax+0x220u), r_ecx);
    /* 0046cb1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb1d: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046cb24: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb29: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46cb2eu); f_00630f40();
    /* 0046cb2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046cb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cb32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb35: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046cb3b: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046cb41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb44: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046cb4a: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 0046cb50: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046cb52: mov ecx, edx */ r_ecx = r_edx;
    /* 0046cb54: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046cb5a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46cb5cu); call_ind(t); }
    /* 0046cb5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb5f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cb65: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 0046cb6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb6e: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cb74: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 0046cb7a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046cb7c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046cb7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46cb81u); call_ind(t); }
    /* 0046cb81: jmp 0x46cc30 */ goto L_0046cc30;
L_0046cb86:; BB(0x0046cb86);
    /* 0046cb86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb89: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046cb8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cb92: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cb98: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 0046cb9e: cmp edx, dword ptr [ecx + 0x21c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cba4: jge 0x46cc30 */ if ((fS==fO)) goto L_0046cc30;
L_0046cbaa:; BB(0x0046cbaa);
    /* 0046cbaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbad: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cbb3: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0046cbb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046cbbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbbf: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cbc5: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 0046cbcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbce: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 0046cbd5: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbda: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46cbdfu); f_00630f40();
    /* 0046cbdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046cbe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cbe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbe6: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cbec: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0046cbf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cbf5: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cbfb: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0046cc01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046cc03: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046cc09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46cc0bu); call_ind(t); }
    /* 0046cc0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc0e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046cc14: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 0046cc1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc1d: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046cc23: mov ecx, dword ptr [edx + 0x218] */ r_ecx = R32((u32)(r_edx+0x218u));
    /* 0046cc29: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046cc2b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0046cc2e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46cc30u); call_ind(t); }
L_0046cc30:; BB(0x0046cc30);
    /* 0046cc30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc35: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046cc3b: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x46cc40u); f_00519a40();
    /* 0046cc40: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cc42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cc43: ret  */ FN_RET(0x0046cae0); r_esp += 4; return;
}

