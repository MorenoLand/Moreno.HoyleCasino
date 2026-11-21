#include "protos.h"

void f_00464050(void) /* sub_464050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464050);
    /* 00464050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464051: mov ebp, esp */ r_ebp = r_esp;
    /* 00464053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464057: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046405a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046405d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00464060: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00464063: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464065: jne 0x46406d */ if (!fZ) goto L_0046406d;
L_00464067:; BB(0x00464067);
    /* 00464067: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464069: jmp 0x46406f */ goto L_0046406f;
L_0046406d:; BB(0x0046406d);
    /* 0046406d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0046406f:; BB(0x0046406f);
    /* 0046406f: mov esp, ebp */ r_esp = r_ebp;
    /* 00464071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464072: ret 4 */ FN_RET(0x00464050); r_esp += 8; return;
}

void f_004640b0(void) /* sub_4640B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004640b0);
    /* 004640b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004640b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004640b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004640b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004640b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004640ba: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004640bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004640c0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004640c3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004640c5: jne 0x4640cd */ if (!fZ) goto L_004640cd;
L_004640c7:; BB(0x004640c7);
    /* 004640c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004640c9: jmp 0x4640cf */ goto L_004640cf;
L_004640cd:; BB(0x004640cd);
    /* 004640cd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004640cf:; BB(0x004640cf);
    /* 004640cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004640d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004640d2: ret 4 */ FN_RET(0x004640b0); r_esp += 8; return;
}

void f_004640e0(void) /* sub_4640E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004640e0);
    /* 004640e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004640e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004640e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004640e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004640e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004640ea: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004640ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004640f0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004640f3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004640f5: jne 0x4640fd */ if (!fZ) goto L_004640fd;
L_004640f7:; BB(0x004640f7);
    /* 004640f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004640f9: jmp 0x4640ff */ goto L_004640ff;
L_004640fd:; BB(0x004640fd);
    /* 004640fd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004640ff:; BB(0x004640ff);
    /* 004640ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00464101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464102: ret 4 */ FN_RET(0x004640e0); r_esp += 8; return;
}

void f_00464110(void) /* sub_464110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464110);
    /* 00464110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464111: mov ebp, esp */ r_ebp = r_esp;
    /* 00464113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046411a: mov byte ptr [eax], 0xff */ W8((u32)(r_eax), 0xffu);
    /* 0046411d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464120: mov esp, ebp */ r_esp = r_ebp;
    /* 00464122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464123: ret  */ FN_RET(0x00464110); r_esp += 4; return;
}

void f_004646a0(void) /* sub_4646A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004646a0);
    /* 004646a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004646a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004646a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004646a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004646a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646aa: mov word ptr [eax], 0xffff */ W16((u32)(r_eax), 0xffffu);
    /* 004646af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646b2: mov word ptr [ecx + 2], 0 */ W16((u32)(r_ecx+0x2u), 0x0u);
    /* 004646b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646bb: mov word ptr [edx + 4], 0 */ W16((u32)(r_edx+0x4u), 0x0u);
    /* 004646c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646c4: mov word ptr [eax + 6], 0 */ W16((u32)(r_eax+0x6u), 0x0u);
    /* 004646ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646cd: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 004646d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646d4: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 004646d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646db: mov esp, ebp */ r_esp = r_ebp;
    /* 004646dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004646de: ret  */ FN_RET(0x004646a0); r_esp += 4; return;
}

void f_004646f0(void) /* sub_4646F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004646f0);
    /* 004646f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004646f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004646f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004646f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004646f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004646fa: mov word ptr [eax], 0x1fff */ W16((u32)(r_eax), 0x1fffu);
    /* 004646ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464702: mov word ptr [ecx + 2], 0x1fff */ W16((u32)(r_ecx+0x2u), 0x1fffu);
    /* 00464708: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046470b: mov word ptr [edx + 4], 0x1fff */ W16((u32)(r_edx+0x4u), 0x1fffu);
    /* 00464711: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464714: mov word ptr [eax + 6], 0x1fff */ W16((u32)(r_eax+0x6u), 0x1fffu);
    /* 0046471a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046471d: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00464721: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464724: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00464728: mov esp, ebp */ r_esp = r_ebp;
    /* 0046472a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046472b: ret  */ FN_RET(0x004646f0); r_esp += 4; return;
}

void f_00464860(void) /* sub_464860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464860);
    /* 00464860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464861: mov ebp, esp */ r_ebp = r_esp;
    /* 00464863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464866: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464869: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046486f: jmp 0x46487d */ goto L_0046487d;
L_00464871:; BB(0x00464871);
    /* 00464871: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00464875: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00464879: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0046487d:; BB(0x0046487d);
    /* 0046487d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00464881: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00464884: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00464888: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046488a: jge 0x4648a0 */ if ((fS==fO)) goto L_004648a0;
L_0046488c:; BB(0x0046488c);
    /* 0046488c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00464890: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00464893: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00464895: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464896: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464899: call 0x464770 */ r_esp -= 4; W32(r_esp, 0x46489eu); f_00464770();
    /* 0046489e: jmp 0x464871 */ goto L_00464871;
L_004648a0:; BB(0x004648a0);
    /* 004648a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004648a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004648a3: ret 4 */ FN_RET(0x00464860); r_esp += 8; return;
}

void f_004649c0(void) /* sub_4649C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004649c0);
    /* 004649c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004649c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004649c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004649c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004649c9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004649cf: jmp 0x4649dd */ goto L_004649dd;
L_004649d1:; BB(0x004649d1);
    /* 004649d1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004649d5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004649d9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004649dd:; BB(0x004649dd);
    /* 004649dd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004649e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004649e4: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 004649e8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004649ea: jge 0x464a00 */ if ((fS==fO)) goto L_00464a00;
L_004649ec:; BB(0x004649ec);
    /* 004649ec: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004649f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004649f3: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004649f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004649f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004649f9: call 0x4648b0 */ r_esp -= 4; W32(r_esp, 0x4649feu); f_004648b0();
    /* 004649fe: jmp 0x4649d1 */ goto L_004649d1;
L_00464a00:; BB(0x00464a00);
    /* 00464a00: mov esp, ebp */ r_esp = r_ebp;
    /* 00464a02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464a03: ret 4 */ FN_RET(0x004649c0); r_esp += 8; return;
}

void f_00464fd0(void) /* sub_464FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464fd0);
    /* 00464fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00464fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464fd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464fd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464fdc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00464fdf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464fe2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464fe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464fe6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x464febu); f_00686cae();
    /* 00464feb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00464fee: mov esp, ebp */ r_esp = r_ebp;
    /* 00464ff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464ff1: ret  */ FN_RET(0x00464fd0); r_esp += 4; return;
}

