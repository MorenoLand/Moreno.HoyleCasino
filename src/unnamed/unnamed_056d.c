#include "protos.h"

void f_0056de20(void) /* sub_56DE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056de20);
    /* 0056de20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056de21: mov ebp, esp */ r_ebp = r_esp;
    /* 0056de23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056de26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056de29: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056de2f: jmp 0x56de3d */ goto L_0056de3d;
L_0056de31:; BB(0x0056de31);
    /* 0056de31: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056de35: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056de39: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0056de3d:; BB(0x0056de3d);
    /* 0056de3d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056de41: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056de44: jge 0x56de6a */ if ((fS==fO)) goto L_0056de6a;
L_0056de46:; BB(0x0056de46);
    /* 0056de46: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056de4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056de4d: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056de51: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056de55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056de58: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056de5c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056de5e: mov ecx, edx */ r_ecx = r_edx;
    /* 0056de60: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 0056de66: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56de68u); call_ind(t); }
    /* 0056de68: jmp 0x56de31 */ goto L_0056de31;
L_0056de6a:; BB(0x0056de6a);
    /* 0056de6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056de6d: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056de74: jne 0x56de8c */ if (!fZ) goto L_0056de8c;
L_0056de76:; BB(0x0056de76);
    /* 0056de76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056de79: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0056de7c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056de7f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0056de82: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056de84: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056de8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56de8cu); call_ind(t); }
L_0056de8c:; BB(0x0056de8c);
    /* 0056de8c: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0056de8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056de90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056de92: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56de97u); f_005dcb00();
    /* 0056de97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056de9a: mov ecx, eax */ r_ecx = r_eax;
    /* 0056de9c: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x56dea1u); f_005d5a90();
    /* 0056dea1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056dea4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056dea5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056dea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dea8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056deab: call 0x56dc60 */ r_esp -= 4; W32(r_esp, 0x56deb0u); f_0056dc60();
    /* 0056deb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056deb2: jne 0x56df10 */ if (!fZ) goto L_0056df10;
L_0056deb4:; BB(0x0056deb4);
    /* 0056deb4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056deb7: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056debe: jne 0x56df10 */ if (!fZ) goto L_0056df10;
L_0056dec0:; BB(0x0056dec0);
    /* 0056dec0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056dec3: cmp dword ptr [edx + 0xa4], 0 */ {  u32 a = R32((u32)(r_edx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056deca: jne 0x56df10 */ if (!fZ) goto L_0056df10;
L_0056decc:; BB(0x0056decc);
    /* 0056decc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056decf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0056ded2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ded5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056ded8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056deda: mov ecx, eax */ r_ecx = r_eax;
    /* 0056dedc: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056dee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56dee4u); call_ind(t); }
    /* 0056dee4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056dee7: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0056deea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056deed: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0056def0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056def2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056def8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56defau); call_ind(t); }
    /* 0056defa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056defd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0056df00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056df03: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0056df06: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056df08: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056df0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56df10u); call_ind(t); }
L_0056df10:; BB(0x0056df10);
    /* 0056df10: mov esp, ebp */ r_esp = r_ebp;
    /* 0056df12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056df13: ret  */ FN_RET(0x0056de20); r_esp += 4; return;
}

void f_0056df20(void) /* sub_56DF20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056df20);
    /* 0056df20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056df21: mov ebp, esp */ r_ebp = r_esp;
    /* 0056df23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056df26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056df29: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056df2f: jmp 0x56df3d */ goto L_0056df3d;
L_0056df31:; BB(0x0056df31);
    /* 0056df31: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0056df35: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056df39: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0056df3d:; BB(0x0056df3d);
    /* 0056df3d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056df41: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056df44: jge 0x56df6a */ if ((fS==fO)) goto L_0056df6a;
L_0056df46:; BB(0x0056df46);
    /* 0056df46: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056df4a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056df4d: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056df51: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0056df55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056df58: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056df5c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056df5e: mov ecx, edx */ r_ecx = r_edx;
    /* 0056df60: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0056df66: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56df68u); call_ind(t); }
    /* 0056df68: jmp 0x56df31 */ goto L_0056df31;
L_0056df6a:; BB(0x0056df6a);
    /* 0056df6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056df6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056df6d: ret  */ FN_RET(0x0056df20); r_esp += 4; return;
}

void f_0056df70(void) /* sub_56DF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056df70);
    /* 0056df70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056df71: mov ebp, esp */ r_ebp = r_esp;
    /* 0056df73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056df74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056df77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056df7a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0056df80: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056df83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056df86: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0056df8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056df8f: cmp dword ptr [eax + 0xa0], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056df99: jbe 0x56dfc9 */ if ((fC||fZ)) goto L_0056dfc9;
L_0056df9b:; BB(0x0056df9b);
    /* 0056df9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056df9d: push 0x6c54f0 */ { u32 v = 0x6c54f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dfa2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x56dfa7u); f_00630f40();
    /* 0056dfa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dfaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dfab: push 0x6ca310 */ { u32 v = 0x6ca310u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dfb0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x56dfb5u); f_00630f40();
    /* 0056dfb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dfb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dfb9: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x56dfbeu); f_0062ff10();
    /* 0056dfbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dfc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056dfc4: call 0x56e6b0 */ r_esp -= 4; W32(r_esp, 0x56dfc9u); f_0056e6b0();
L_0056dfc9:; BB(0x0056dfc9);
    /* 0056dfc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056dfcc: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0056dfd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056dfd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056dfd6: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0056dfd9: call 0x5709b0 */ r_esp -= 4; W32(r_esp, 0x56dfdeu); f_005709b0();
    /* 0056dfde: mov esp, ebp */ r_esp = r_ebp;
    /* 0056dfe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dfe1: ret 4 */ FN_RET(0x0056df70); r_esp += 8; return;
}

