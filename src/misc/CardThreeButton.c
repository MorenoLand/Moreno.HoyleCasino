#include "protos.h"

void f_0046c740(void) /* CardThreeButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c740);
    /* 0046c740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c741: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c74a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46c74fu); f_00601a80();
    /* 0046c74f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c752: mov dword ptr [eax], 0x6bbebc */ W32((u32)(r_eax), 0x6bbebcu);
    /* 0046c758: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c75b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c75e: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0046c764: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c767: mov byte ptr [eax + 0x1dc], 0 */ W8((u32)(r_eax+0x1dcu), 0x0u);
    /* 0046c76e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c771: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c774: ret 4 */ FN_RET(0x0046c740); r_esp += 8; return;
}

void f_0046c780(void) /* CardThreeButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c780);
    /* 0046c780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c781: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c78a: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 0046c791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c793: je 0x46c826 */ if (fZ) goto L_0046c826;
L_0046c799:; BB(0x0046c799);
    /* 0046c799: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c79c: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c7a2: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0046c7a8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c7ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7ae: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c7b4: mov dword ptr [eax + 0x220], ecx */ W32((u32)(r_eax+0x220u), r_ecx);
    /* 0046c7ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7bd: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046c7c4: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c7c9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c7ceu); f_00630f40();
    /* 0046c7ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c7d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c7d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7d5: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c7db: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0046c7e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7e4: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c7ea: mov edx, dword ptr [eax + 0x1fc] */ r_edx = R32((u32)(r_eax+0x1fcu));
    /* 0046c7f0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046c7f2: mov ecx, edx */ r_ecx = r_edx;
    /* 0046c7f4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046c7fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c7fcu); call_ind(t); }
    /* 0046c7fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c7ff: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c805: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0046c80b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c80e: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c814: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 0046c81a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c81c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046c81f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c821u); call_ind(t); }
    /* 0046c821: jmp 0x46c8d0 */ goto L_0046c8d0;
L_0046c826:; BB(0x0046c826);
    /* 0046c826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c829: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c82f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c832: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c838: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 0046c83e: cmp edx, dword ptr [ecx + 0x21c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c844: jge 0x46c8d0 */ if ((fS==fO)) goto L_0046c8d0;
L_0046c84a:; BB(0x0046c84a);
    /* 0046c84a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c84d: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c853: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0046c859: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046c85c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c85f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c865: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 0046c86b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c86e: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 0046c875: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0046c87a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c87fu); f_00630f40();
    /* 0046c87f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c883: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c886: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c88c: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0046c892: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c895: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c89b: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0046c8a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c8a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046c8a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c8abu); call_ind(t); }
    /* 0046c8ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8ae: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c8b4: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0046c8ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8bd: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c8c3: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 0046c8c9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046c8cb: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0046c8ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c8d0u); call_ind(t); }
L_0046c8d0:; BB(0x0046c8d0);
    /* 0046c8d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8d5: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c8db: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x46c8e0u); f_00519a40();
    /* 0046c8e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c8e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c8e3: ret  */ FN_RET(0x0046c780); r_esp += 4; return;
}

