#include "protos.h"

void f_0046c590(void) /* CardTwoButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c590);
    /* 0046c590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c591: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c59a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46c59fu); f_00601a80();
    /* 0046c59f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5a2: mov dword ptr [eax], 0x6bbdc4 */ W32((u32)(r_eax), 0x6bbdc4u);
    /* 0046c5a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c5ae: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0046c5b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5b7: mov byte ptr [eax + 0x1dc], 0 */ W8((u32)(r_eax+0x1dcu), 0x0u);
    /* 0046c5be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c5c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c5c4: ret 4 */ FN_RET(0x0046c590); r_esp += 8; return;
}

void f_0046c5d0(void) /* CardTwoButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c5d0);
    /* 0046c5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c5d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5da: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 0046c5e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c5e3: je 0x46c676 */ if (fZ) goto L_0046c676;
L_0046c5e9:; BB(0x0046c5e9);
    /* 0046c5e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5ec: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c5f2: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0046c5f8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c5fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c5fe: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c604: mov dword ptr [eax + 0x220], ecx */ W32((u32)(r_eax+0x220u), r_ecx);
    /* 0046c60a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c60d: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046c614: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c619: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c61eu); f_00630f40();
    /* 0046c61e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c622: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c625: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c62b: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0046c631: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c634: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c63a: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 0046c640: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046c642: mov ecx, edx */ r_ecx = r_edx;
    /* 0046c644: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046c64a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c64cu); call_ind(t); }
    /* 0046c64c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c64f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c655: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0046c65b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c65e: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c664: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 0046c66a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c66c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046c66f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c671u); call_ind(t); }
    /* 0046c671: jmp 0x46c720 */ goto L_0046c720;
L_0046c676:; BB(0x0046c676);
    /* 0046c676: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c679: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c67f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c682: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c688: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 0046c68e: cmp edx, dword ptr [ecx + 0x21c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c694: jge 0x46c720 */ if ((fS==fO)) goto L_0046c720;
L_0046c69a:; BB(0x0046c69a);
    /* 0046c69a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c69d: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c6a3: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0046c6a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046c6ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6af: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c6b5: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 0046c6bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6be: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 0046c6c5: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0046c6ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c6cfu); f_00630f40();
    /* 0046c6cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c6d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c6d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6d6: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c6dc: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0046c6e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6e5: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c6eb: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0046c6f1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c6f3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046c6f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c6fbu); call_ind(t); }
    /* 0046c6fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c6fe: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c704: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0046c70a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c70d: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c713: mov ecx, dword ptr [edx + 0x20c] */ r_ecx = R32((u32)(r_edx+0x20cu));
    /* 0046c719: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046c71b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0046c71e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c720u); call_ind(t); }
L_0046c720:; BB(0x0046c720);
    /* 0046c720: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c722: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c725: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c72b: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x46c730u); f_00519a40();
    /* 0046c730: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c733: ret  */ FN_RET(0x0046c5d0); r_esp += 4; return;
}

