#include "protos.h"

void f_0053fa80(void) /* ThreeCardPokerSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fa80);
    /* 0053fa80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa81: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fa83: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fa86: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053fa89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053fa90: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa97: jne 0x53fa9e */ if (!fZ) goto L_0053fa9e;
L_0053fa99:; BB(0x0053fa99);
    /* 0053fa99: jmp 0x53fb96 */ goto L_0053fb96;
L_0053fa9e:; BB(0x0053fa9e);
    /* 0053fa9e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053faa0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053faa6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53faabu); f_005fb350();
    /* 0053faab: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053faae: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0053fab5: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fab7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053fabd: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53fac2u); f_005fb350();
    /* 0053fac2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053fac5: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0053facc: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0053fad3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0053fada: jmp 0x53fae5 */ goto L_0053fae5;
L_0053fadc:; BB(0x0053fadc);
    /* 0053fadc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fadf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053fae2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0053fae5:; BB(0x0053fae5);
    /* 0053fae5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fae8: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053faeb: jge 0x53fb28 */ if ((fS==fO)) goto L_0053fb28;
L_0053faed:; BB(0x0053faed);
    /* 0053faed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053faf0: cmp dword ptr [ebp + edx*8 - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053faf5: je 0x53fb26 */ if (fZ) goto L_0053fb26;
L_0053faf7:; BB(0x0053faf7);
    /* 0053faf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fafa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fafb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fafe: mov edx, dword ptr [ebp + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u));
    /* 0053fb02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fb05: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 0053fb09: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053fb0b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0053fb11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53fb13u); call_ind(t); }
    /* 0053fb13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053fb16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fb18: je 0x53fb26 */ if (fZ) goto L_0053fb26;
L_0053fb1a:; BB(0x0053fb1a);
    /* 0053fb1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fb1d: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 0053fb21: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053fb24: jmp 0x53fb28 */ goto L_0053fb28;
L_0053fb26:; BB(0x0053fb26);
    /* 0053fb26: jmp 0x53fadc */ goto L_0053fadc;
L_0053fb28:; BB(0x0053fb28);
    /* 0053fb28: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fb2c: jne 0x53fb4e */ if (!fZ) goto L_0053fb4e;
L_0053fb2e:; BB(0x0053fb2e);
    /* 0053fb2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053fb31: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fb35: jne 0x53fb4c */ if (!fZ) goto L_0053fb4c;
L_0053fb37:; BB(0x0053fb37);
    /* 0053fb37: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fb3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053fb41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb44: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0053fb4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53fb4cu); call_ind(t); }
L_0053fb4c:; BB(0x0053fb4c);
    /* 0053fb4c: jmp 0x53fb96 */ goto L_0053fb96;
L_0053fb4e:; BB(0x0053fb4e);
    /* 0053fb4e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fb52: jne 0x53fb72 */ if (!fZ) goto L_0053fb72;
L_0053fb54:; BB(0x0053fb54);
    /* 0053fb54: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fb59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53fb5eu); f_00630f40();
    /* 0053fb5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fb62: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053fb67: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb6a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0053fb70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53fb72u); call_ind(t); }
L_0053fb72:; BB(0x0053fb72);
    /* 0053fb72: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fb76: jne 0x53fb96 */ if (!fZ) goto L_0053fb96;
L_0053fb78:; BB(0x0053fb78);
    /* 0053fb78: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fb7d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53fb82u); f_00630f40();
    /* 0053fb82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fb85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fb86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb89: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053fb8b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053fb8e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0053fb94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53fb96u); call_ind(t); }
L_0053fb96:; BB(0x0053fb96);
    /* 0053fb96: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fb98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fb99: ret 4 */ FN_RET(0x0053fa80); r_esp += 8; return;
}

