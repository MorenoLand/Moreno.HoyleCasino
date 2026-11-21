#include "protos.h"

void f_0046c8f0(void) /* CardFourButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c8f0);
    /* 0046c8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c8f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c8fa: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46c8ffu); f_00601a80();
    /* 0046c8ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c902: mov dword ptr [eax], 0x6bbfb4 */ W32((u32)(r_eax), 0x6bbfb4u);
    /* 0046c908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c90b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c90e: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0046c914: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c917: mov byte ptr [eax + 0x1dc], 0 */ W8((u32)(r_eax+0x1dcu), 0x0u);
    /* 0046c91e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c921: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c924: ret 4 */ FN_RET(0x0046c8f0); r_esp += 8; return;
}

void f_0046c930(void) /* CardFourButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c930);
    /* 0046c930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c931: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c93a: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 0046c941: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c943: je 0x46c9d6 */ if (fZ) goto L_0046c9d6;
L_0046c949:; BB(0x0046c949);
    /* 0046c949: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c94c: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c952: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0046c958: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c95b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c95e: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c964: mov dword ptr [eax + 0x220], ecx */ W32((u32)(r_eax+0x220u), r_ecx);
    /* 0046c96a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c96d: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046c974: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c979: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c97eu); f_00630f40();
    /* 0046c97e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c982: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c985: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c98b: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0046c991: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c994: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c99a: mov edx, dword ptr [eax + 0x200] */ r_edx = R32((u32)(r_eax+0x200u));
    /* 0046c9a0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046c9a2: mov ecx, edx */ r_ecx = r_edx;
    /* 0046c9a4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046c9aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c9acu); call_ind(t); }
    /* 0046c9ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9af: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c9b5: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0046c9bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9be: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c9c4: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 0046c9ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c9cc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046c9cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c9d1u); call_ind(t); }
    /* 0046c9d1: jmp 0x46ca80 */ goto L_0046ca80;
L_0046c9d6:; BB(0x0046c9d6);
    /* 0046c9d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9d9: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c9df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9e2: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c9e8: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 0046c9ee: cmp edx, dword ptr [ecx + 0x21c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c9f4: jge 0x46ca80 */ if ((fS==fO)) goto L_0046ca80;
L_0046c9fa:; BB(0x0046c9fa);
    /* 0046c9fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c9fd: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ca03: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0046ca09: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046ca0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca0f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ca15: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 0046ca1b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca1e: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 0046ca25: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca2a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46ca2fu); f_00630f40();
    /* 0046ca2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ca32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca36: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ca3c: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0046ca42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca45: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ca4b: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 0046ca51: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046ca53: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046ca59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46ca5bu); call_ind(t); }
    /* 0046ca5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca5e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046ca64: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0046ca6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca6d: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046ca73: mov ecx, dword ptr [edx + 0x214] */ r_ecx = R32((u32)(r_edx+0x214u));
    /* 0046ca79: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046ca7b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0046ca7e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46ca80u); call_ind(t); }
L_0046ca80:; BB(0x0046ca80);
    /* 0046ca80: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ca82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ca85: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046ca8b: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x46ca90u); f_00519a40();
    /* 0046ca90: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ca92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ca93: ret  */ FN_RET(0x0046c930); r_esp += 4; return;
}

