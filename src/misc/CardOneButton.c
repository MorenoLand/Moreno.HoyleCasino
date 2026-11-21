#include "protos.h"

void f_0046c3e0(void) /* CardOneButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c3e0);
    /* 0046c3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3ea: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46c3efu); f_00601a80();
    /* 0046c3ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3f2: mov dword ptr [eax], 0x6bbcbc */ W32((u32)(r_eax), 0x6bbcbcu);
    /* 0046c3f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c3fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046c3fe: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0046c404: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c407: mov byte ptr [eax + 0x1dc], 0 */ W8((u32)(r_eax+0x1dcu), 0x0u);
    /* 0046c40e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c411: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c414: ret 4 */ FN_RET(0x0046c3e0); r_esp += 8; return;
}

void f_0046c420(void) /* CardOneButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046c420);
    /* 0046c420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046c421: mov ebp, esp */ r_ebp = r_esp;
    /* 0046c423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046c424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046c427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c42a: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 0046c431: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046c433: je 0x46c4c6 */ if (fZ) goto L_0046c4c6;
L_0046c439:; BB(0x0046c439);
    /* 0046c439: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c43c: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c442: mov ecx, dword ptr [eax + 0x220] */ r_ecx = R32((u32)(r_eax+0x220u));
    /* 0046c448: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046c44b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c44e: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c454: mov dword ptr [eax + 0x220], ecx */ W32((u32)(r_eax+0x220u), r_ecx);
    /* 0046c45a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c45d: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0046c464: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c469: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c46eu); f_00630f40();
    /* 0046c46e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c472: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c475: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c47b: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0046c481: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c484: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046c48a: mov edx, dword ptr [eax + 0x1f4] */ r_edx = R32((u32)(r_eax+0x1f4u));
    /* 0046c490: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046c492: mov ecx, edx */ r_ecx = r_edx;
    /* 0046c494: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046c49a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c49cu); call_ind(t); }
    /* 0046c49c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c49f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c4a5: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0046c4ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4ae: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c4b4: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0046c4ba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c4bc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046c4bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c4c1u); call_ind(t); }
    /* 0046c4c1: jmp 0x46c570 */ goto L_0046c570;
L_0046c4c6:; BB(0x0046c4c6);
    /* 0046c4c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4c9: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c4cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4d2: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c4d8: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 0046c4de: cmp edx, dword ptr [ecx + 0x21c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x21cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046c4e4: jge 0x46c570 */ if ((fS==fO)) goto L_0046c570;
L_0046c4ea:; BB(0x0046c4ea);
    /* 0046c4ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4ed: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c4f3: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 0046c4f9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046c4fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c4ff: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c505: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 0046c50b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c50e: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 0046c515: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0046c51a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46c51fu); f_00630f40();
    /* 0046c51f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046c522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046c523: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c526: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c52c: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0046c532: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c535: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c53b: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0046c541: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046c543: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0046c549: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46c54bu); call_ind(t); }
    /* 0046c54b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c54e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c554: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0046c55a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c55d: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0046c563: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0046c569: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046c56b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0046c56e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46c570u); call_ind(t); }
L_0046c570:; BB(0x0046c570);
    /* 0046c570: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046c572: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046c575: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0046c57b: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x46c580u); f_00519a40();
    /* 0046c580: mov esp, ebp */ r_esp = r_ebp;
    /* 0046c582: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046c583: ret  */ FN_RET(0x0046c420); r_esp += 4; return;
}

