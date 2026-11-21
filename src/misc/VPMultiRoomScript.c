#include "protos.h"

void f_005679a0(void) /* VPMultiRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005679a0);
    /* 005679a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005679a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005679a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005679a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005679a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005679ac: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005679af: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005679b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005679b5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005679b8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005679bb: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005679bf: ja 0x567abb */ if ((!fC&&!fZ)) goto L_00567abb;
L_005679c5:; BB(0x005679c5);
    /* 005679c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005679c8: jmp dword ptr [eax*4 + 0x567adc] */ { u32 t = R32((u32)(r_eax*4+0x567adcu)); switch (t) { case 0x5679cfu: goto L_005679cf; case 0x5679f9u: goto L_005679f9; case 0x567a0fu: goto L_00567a0f; case 0x567a3du: goto L_00567a3d; case 0x567a5du: goto L_00567a5d; case 0x567a88u: goto L_00567a88; case 0x567aa8u: goto L_00567aa8; default: UNSUP(0x005679c8, "jump table entry is not a known target"); } }
L_005679cf:; BB(0x005679cf);
    /* 005679cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005679d5: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005679d8: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 005679db: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005679df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005679e1: je 0x5679f4 */ if (fZ) goto L_005679f4;
L_005679e3:; BB(0x005679e3);
    /* 005679e3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005679e5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005679e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005679ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005679ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005679ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005679f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5679f4u); call_ind(t); }
L_005679f4:; BB(0x005679f4);
    /* 005679f4: jmp 0x567ad6 */ goto L_00567ad6;
L_005679f9:; BB(0x005679f9);
    /* 005679f9: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005679fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005679fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a05: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567a08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a0au); call_ind(t); }
    /* 00567a0a: jmp 0x567ad6 */ goto L_00567ad6;
L_00567a0f:; BB(0x00567a0f);
    /* 00567a0f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a11: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00567a17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a19: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00567a1f: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00567a25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a27u); call_ind(t); }
    /* 00567a27: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00567a29: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a33: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567a36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a38u); call_ind(t); }
    /* 00567a38: jmp 0x567ad6 */ goto L_00567ad6;
L_00567a3d:; BB(0x00567a3d);
    /* 00567a3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a3f: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567a45: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567a4au); f_00568fb0();
    /* 00567a4a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00567a4c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a56: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567a59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a5bu); call_ind(t); }
    /* 00567a5b: jmp 0x567ad6 */ goto L_00567ad6;
L_00567a5d:; BB(0x00567a5d);
    /* 00567a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a5f: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00567a65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a67: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00567a6d: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 00567a73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a75u); call_ind(t); }
    /* 00567a75: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00567a77: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a81: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567a84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567a86u); call_ind(t); }
    /* 00567a86: jmp 0x567ad6 */ goto L_00567ad6;
L_00567a88:; BB(0x00567a88);
    /* 00567a88: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a8a: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00567a90: call 0x568fb0 */ r_esp -= 4; W32(r_esp, 0x567a95u); f_00568fb0();
    /* 00567a95: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00567a97: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567a9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567a9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567aa1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567aa4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567aa6u); call_ind(t); }
    /* 00567aa6: jmp 0x567ad6 */ goto L_00567ad6;
L_00567aa8:; BB(0x00567aa8);
    /* 00567aa8: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00567aaa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567aac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567aaf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00567ab1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00567ab4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00567ab7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x567ab9u); call_ind(t); }
    /* 00567ab9: jmp 0x567ad6 */ goto L_00567ad6;
L_00567abb:; BB(0x00567abb);
    /* 00567abb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00567abd: jne 0x567ad6 */ if (!fZ) goto L_00567ad6;
L_00567abf:; BB(0x00567abf);
    /* 00567abf: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00567ac4: push 0x6c9df4 */ { u32 v = 0x6c9df4u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ac9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ace: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x567ad3u); f_005e9f20();
    /* 00567ad3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00567ad6:; BB(0x00567ad6);
    /* 00567ad6: mov esp, ebp */ r_esp = r_ebp;
    /* 00567ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567ad9: ret  */ FN_RET(0x005679a0); r_esp += 4; return;
}

