#include "protos.h"

void f_006765a0(void) /* sub_6765A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006765a0);
    /* 006765a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006765a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006765a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006765a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006765a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006765aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006765ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006765ae: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6765b3u); f_0060ca40();
    /* 006765b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006765b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006765b6: ret 4 */ FN_RET(0x006765a0); r_esp += 8; return;
}

void f_00676840(void) /* sub_676840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676840);
    /* 00676840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676841: mov ebp, esp */ r_ebp = r_esp;
    /* 00676843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676846: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00676849: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067684c: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x676851u); f_005f85d0();
    /* 00676851: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00676854: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0067685a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0067685d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067685f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676863: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00676866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676867: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067686d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067686f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676875: mov eax, dword ptr [edx + 0x3c0] */ r_eax = R32((u32)(r_edx+0x3c0u));
    /* 0067687b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67687du); call_ind(t); }
    /* 0067687d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067687f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676880: ret  */ FN_RET(0x00676840); r_esp += 4; return;
}

void f_00676a50(void) /* sub_676A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676a50);
    /* 00676a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00676a53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676a56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00676a59: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676a5f: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x676a64u); f_00637670();
    /* 00676a64: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00676a67: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676a6a: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00676a70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676a71: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676a73: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676a76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676a77: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00676a7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00676a7e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676a84: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 00676a8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676a8cu); call_ind(t); }
    /* 00676a8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676a8f: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 00676a95: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x676a9au); f_0063b0a0();
    /* 00676a9a: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676aa1: jne 0x676b1e */ if (!fZ) goto L_00676b1e;
L_00676aa3:; BB(0x00676aa3);
    /* 00676aa3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676aa6: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00676aac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00676aaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00676ab2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x676ab7u); f_0063aac0();
    /* 00676ab7: mov cl, byte ptr [eax + 0x25d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25du))) & 0xffu);
    /* 00676abd: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 00676ac0: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00676ac4: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00676ac8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676aca: je 0x676b1e */ if (fZ) goto L_00676b1e;
L_00676acc:; BB(0x00676acc);
    /* 00676acc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676acf: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 00676ad5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00676ad8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676adb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x676ae0u); f_0063aac0();
    /* 00676ae0: mov al, byte ptr [eax + 0x25d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x25du))) & 0xffu);
    /* 00676ae6: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00676ae9: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00676aed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676aef: je 0x676b09 */ if (fZ) goto L_00676b09;
L_00676af1:; BB(0x00676af1);
    /* 00676af1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00676af7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00676af9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676aff: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 00676b05: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x676b07u); call_ind(t); }
    /* 00676b07: jmp 0x676b1e */ goto L_00676b1e;
L_00676b09:; BB(0x00676b09);
    /* 00676b09: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00676b0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00676b10: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676b16: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00676b1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676b1eu); call_ind(t); }
L_00676b1e:; BB(0x00676b1e);
    /* 00676b1e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00676b24: call 0x64f740 */ r_esp -= 4; W32(r_esp, 0x676b29u); f_0064f740();
    /* 00676b29: mov esp, ebp */ r_esp = r_ebp;
    /* 00676b2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676b2c: ret  */ FN_RET(0x00676a50); r_esp += 4; return;
}

void f_00676fc0(void) /* sub_676FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676fc0);
    /* 00676fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00676fc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676fc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676fc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676fcc: call 0x677180 */ r_esp -= 4; W32(r_esp, 0x676fd1u); f_00677180();
    /* 00676fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676fd4: call 0x677350 */ r_esp -= 4; W32(r_esp, 0x676fd9u); f_00677350();
    /* 00676fd9: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 00676fe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676fe2: je 0x677001 */ if (fZ) goto L_00677001;
L_00676fe4:; BB(0x00676fe4);
    /* 00676fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676fe6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676fe9: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x676feeu); f_005fb720();
    /* 00676fee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00676ff1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00676ff4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00676ff6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00676ff9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00676fff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677001u); call_ind(t); }
L_00677001:; BB(0x00677001);
    /* 00677001: mov esp, ebp */ r_esp = r_ebp;
    /* 00677003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677004: ret  */ FN_RET(0x00676fc0); r_esp += 4; return;
}

