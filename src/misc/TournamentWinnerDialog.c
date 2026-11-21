#include "protos.h"

void f_005cecc0(void) /* TournamentWinnerDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cecc0);
    /* 005cecc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cecc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cecc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cecc5: push 0x6a8c74 */ { u32 v = 0x6a8c74u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cecd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cecd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cecd2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cecd7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cecd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cecda: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cecdd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cece3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cece6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cece8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceced: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cecf2u); f_005f71f0();
    /* 005cecf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cecf9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cecfc: mov dword ptr [eax], 0x6d2eb4 */ W32((u32)(r_eax), 0x6d2eb4u);
    /* 005ced02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced04: push 0x4e7 */ { u32 v = 0x4e7u; r_esp -= 4; W32(r_esp, v); }
    /* 005ced09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ced0c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5ced11u); f_005f83d0();
    /* 005ced11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ced14: mov byte ptr [ecx + 0x1bc], 0 */ W8((u32)(r_ecx+0x1bcu), 0x0u);
    /* 005ced1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ced22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ced25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ced28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ced2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ced30: mov esp, ebp */ r_esp = r_ebp;
    /* 005ced32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ced33: ret  */ FN_RET(0x005cecc0); r_esp += 4; return;
}

void f_005ced60(void) /* TournamentWinnerDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ced60);
    /* 005ced60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ced61: mov ebp, esp */ r_ebp = r_esp;
    /* 005ced63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ced67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced6a: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5ced6fu); f_005f88f0();
    /* 005ced6f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ced72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced74: jne 0x5ced81 */ if (!fZ) goto L_005ced81;
L_005ced76:; BB(0x005ced76);
    /* 005ced76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ced79: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005ced7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced7f: je 0x5ced86 */ if (fZ) goto L_005ced86;
L_005ced81:; BB(0x005ced81);
    /* 005ced81: jmp 0x5cee0c */ goto L_005cee0c;
L_005ced86:; BB(0x005ced86);
    /* 005ced86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ced89: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced8d: jne 0x5ceda5 */ if (!fZ) goto L_005ceda5;
L_005ced8f:; BB(0x005ced8f);
    /* 005ced8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ced92: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005ced96: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced99: jne 0x5ceda5 */ if (!fZ) goto L_005ceda5;
L_005ced9b:; BB(0x005ced9b);
    /* 005ced9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced9e: mov byte ptr [eax + 0x1bc], 1 */ W8((u32)(r_eax+0x1bcu), 0x1u);
L_005ceda5:; BB(0x005ceda5);
    /* 005ceda5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ceda8: cmp dword ptr [ecx + 0x18], 2 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cedac: jne 0x5cedb8 */ if (!fZ) goto L_005cedb8;
L_005cedae:; BB(0x005cedae);
    /* 005cedae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cedb1: mov byte ptr [edx + 0x1bc], 1 */ W8((u32)(r_edx+0x1bcu), 0x1u);
L_005cedb8:; BB(0x005cedb8);
    /* 005cedb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cedbb: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005cedc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cedc4: je 0x5cee0c */ if (fZ) goto L_005cee0c;
L_005cedc6:; BB(0x005cedc6);
    /* 005cedc6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cedc9: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005cedcd: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cedd3: call 0x5dc0a0 */ r_esp -= 4; W32(r_esp, 0x5cedd8u); f_005dc0a0();
    /* 005cedd8: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cedde: call 0x5dbf30 */ r_esp -= 4; W32(r_esp, 0x5cede3u); f_005dbf30();
    /* 005cede3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005cede8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cedea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cedf0: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 005cedf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cedf8u); call_ind(t); }
    /* 005cedf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cedf9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cedff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cee01: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cee07: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005cee0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cee0cu); call_ind(t); }
L_005cee0c:; BB(0x005cee0c);
    /* 005cee0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cee0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cee0f: ret 4 */ FN_RET(0x005ced60); r_esp += 8; return;
}

