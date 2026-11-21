#include "protos.h"

void f_005a8960(void) /* RoyalMatchActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8960);
    /* 005a8960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8961: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a8967: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a896b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a896e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5a8973u); f_005f71f0();
    /* 005a8973: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8976: mov dword ptr [eax], 0x6cf95c */ W32((u32)(r_eax), 0x6cf95cu);
    /* 005a897c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a897f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8982: ret  */ FN_RET(0x005a8960); r_esp += 4; return;
}

void f_005a89b0(void) /* RoyalMatchActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a89b0);
    /* 005a89b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a89b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a89b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a89b5: push 0x6a7a07 */ { u32 v = 0x6a7a07u; r_esp -= 4; W32(r_esp, v); }
    /* 005a89ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a89c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a89c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a89c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a89c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a89cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a89cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a89cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a89d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a89d8: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005a89de: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5a89e3u); f_005a7080();
    /* 005a89e3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005a89e5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a89eau); f_00686d82();
    /* 005a89ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a89ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a89f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a89f7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a89fb: je 0x5a8a0e */ if (fZ) goto L_005a8a0e;
L_005a89fd:; BB(0x005a89fd);
    /* 005a89fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8a04: call 0x5acb70 */ r_esp -= 4; W32(r_esp, 0x5a8a09u); f_005acb70();
    /* 005a8a09: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a8a0c: jmp 0x5a8a15 */ goto L_005a8a15;
L_005a8a0e:; BB(0x005a8a0e);
    /* 005a8a0e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005a8a15:; BB(0x005a8a15);
    /* 005a8a15: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a8a18: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a8a1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a8a22: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8a25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a26: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005a8a2b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005a8a2e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5a8a33u); f_005fc420();
    /* 005a8a33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8a36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a8a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a8a3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8a40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8a41: ret 4 */ FN_RET(0x005a89b0); r_esp += 8; return;
}

void f_005a8a50(void) /* RoyalMatchActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8a50);
    /* 005a8a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8a56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a8a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8a5c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005a8a60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8a62: jne 0x5a8a73 */ if (!fZ) goto L_005a8a73;
L_005a8a64:; BB(0x005a8a64);
    /* 005a8a64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8a67: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5a8a6cu); f_005f88f0();
    /* 005a8a6c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8a6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8a71: je 0x5a8a78 */ if (fZ) goto L_005a8a78;
L_005a8a73:; BB(0x005a8a73);
    /* 005a8a73: jmp 0x5a8c31 */ goto L_005a8c31;
L_005a8a78:; BB(0x005a8a78);
    /* 005a8a78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8a7b: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8a7f: jne 0x5a8c25 */ if (!fZ) goto L_005a8c25;
L_005a8a85:; BB(0x005a8a85);
    /* 005a8a85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8a88: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005a8a8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a8d: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5a8a93u); call_ind(t); }
    /* 005a8a93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8a96: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a8a99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a8a9c: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a8a9f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a8aa2: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a8aa6: ja 0x5a8c25 */ if ((!fC&&!fZ)) goto L_005a8c25;
L_005a8aac:; BB(0x005a8aac);
    /* 005a8aac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a8aaf: movzx edx, byte ptr [ecx + 0x5a8c54] */ r_edx = (u32)R8((u32)(r_ecx+0x5a8c54u));
    /* 005a8ab6: jmp dword ptr [edx*4 + 0x5a8c38] */ { u32 t = R32((u32)(r_edx*4+0x5a8c38u)); switch (t) { case 0x5a8b7fu: goto L_005a8b7f; case 0x5a8b44u: goto L_005a8b44; case 0x5a8bb7u: goto L_005a8bb7; case 0x5a8befu: goto L_005a8bef; case 0x5a8b09u: goto L_005a8b09; case 0x5a8abdu: goto L_005a8abd; case 0x5a8c25u: goto L_005a8c25; default: UNSUP(0x005a8ab6, "jump table entry is not a known target"); } }
L_005a8abd:; BB(0x005a8abd);
    /* 005a8abd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8abf: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ac4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8aca: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8acfu); f_005f2a60();
    /* 005a8acf: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8ad1: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8ad6u); f_006026d0();
    /* 005a8ad6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a8ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8adb: je 0x5a8b04 */ if (fZ) goto L_005a8b04;
L_005a8add:; BB(0x005a8add);
    /* 005a8add: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8ae3: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5a8ae8u); f_005b4f00();
    /* 005a8ae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ae9: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005a8aef: call 0x5a4b20 */ r_esp -= 4; W32(r_esp, 0x5a8af4u); f_005a4b20();
    /* 005a8af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8af5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8af8: call 0x5a8e90 */ r_esp -= 4; W32(r_esp, 0x5a8afdu); f_005a8e90();
    /* 005a8afd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8b00: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8b04:; BB(0x005a8b04);
    /* 005a8b04: jmp 0x5a8c25 */ goto L_005a8c25;
L_005a8b09:; BB(0x005a8b09);
    /* 005a8b09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b0b: push 0x3154eb */ { u32 v = 0x3154ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b10: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8b16: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8b1bu); f_005f2a60();
    /* 005a8b1b: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8b1d: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8b22u); f_006026d0();
    /* 005a8b22: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8b25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8b27: je 0x5a8b3f */ if (fZ) goto L_005a8b3f;
L_005a8b29:; BB(0x005a8b29);
    /* 005a8b29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8b2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8b30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8b33: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a8b36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8b38u); call_ind(t); }
    /* 005a8b38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8b3b: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8b3f:; BB(0x005a8b3f);
    /* 005a8b3f: jmp 0x5a8c25 */ goto L_005a8c25;
L_005a8b44:; BB(0x005a8b44);
    /* 005a8b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b46: push 0x3154ea */ { u32 v = 0x3154eau; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b4b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8b51: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8b56u); f_005f2a60();
    /* 005a8b56: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8b58: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8b5du); f_006026d0();
    /* 005a8b5d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8b60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8b62: je 0x5a8b7a */ if (fZ) goto L_005a8b7a;
L_005a8b64:; BB(0x005a8b64);
    /* 005a8b64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8b69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8b6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8b6e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a8b71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8b73u); call_ind(t); }
    /* 005a8b73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8b76: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8b7a:; BB(0x005a8b7a);
    /* 005a8b7a: jmp 0x5a8c25 */ goto L_005a8c25;
L_005a8b7f:; BB(0x005a8b7f);
    /* 005a8b7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b81: push 0x3154ec */ { u32 v = 0x3154ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b86: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8b8c: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8b91u); f_005f2a60();
    /* 005a8b91: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8b93: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8b98u); f_006026d0();
    /* 005a8b98: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8b9d: je 0x5a8bb5 */ if (fZ) goto L_005a8bb5;
L_005a8b9f:; BB(0x005a8b9f);
    /* 005a8b9f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ba1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8ba4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8ba6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8ba9: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a8bac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8baeu); call_ind(t); }
    /* 005a8bae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8bb1: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8bb5:; BB(0x005a8bb5);
    /* 005a8bb5: jmp 0x5a8c25 */ goto L_005a8c25;
L_005a8bb7:; BB(0x005a8bb7);
    /* 005a8bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8bb9: push 0x3154ed */ { u32 v = 0x3154edu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8bbe: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8bc4: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8bc9u); f_005f2a60();
    /* 005a8bc9: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8bcb: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8bd0u); f_006026d0();
    /* 005a8bd0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8bd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8bd5: je 0x5a8bed */ if (fZ) goto L_005a8bed;
L_005a8bd7:; BB(0x005a8bd7);
    /* 005a8bd7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8bd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8bdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8bde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8be1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a8be4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8be6u); call_ind(t); }
    /* 005a8be6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8be9: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8bed:; BB(0x005a8bed);
    /* 005a8bed: jmp 0x5a8c25 */ goto L_005a8c25;
L_005a8bef:; BB(0x005a8bef);
    /* 005a8bef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8bf1: push 0x3154ee */ { u32 v = 0x3154eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8bf6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8bfc: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5a8c01u); f_005f2a60();
    /* 005a8c01: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8c03: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5a8c08u); f_006026d0();
    /* 005a8c08: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8c0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8c0d: je 0x5a8c25 */ if (fZ) goto L_005a8c25;
L_005a8c0f:; BB(0x005a8c0f);
    /* 005a8c0f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8c14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8c16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8c19: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a8c1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8c1eu); call_ind(t); }
    /* 005a8c1e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8c21: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005a8c25:; BB(0x005a8c25);
    /* 005a8c25: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a8c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8c2c: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x5a8c31u); f_005f72f0();
L_005a8c31:; BB(0x005a8c31);
    /* 005a8c31: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8c33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8c34: ret 4 */ FN_RET(0x005a8a50); r_esp += 8; return;
}

void f_005a8c70(void) /* RoyalMatchActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8c70);
    /* 005a8c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c71: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8c73: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8c76: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005a8c79: mov dword ptr [ebp - 0x40], 0x6cfa14 */ W32((u32)(r_ebp+0xffffffc0u), 0x6cfa14u);
    /* 005a8c80: mov dword ptr [ebp - 0x3c], 0x6cfa00 */ W32((u32)(r_ebp+0xffffffc4u), 0x6cfa00u);
    /* 005a8c87: mov dword ptr [ebp - 0x38], 0x6cf9e8 */ W32((u32)(r_ebp+0xffffffc8u), 0x6cf9e8u);
    /* 005a8c8e: mov dword ptr [ebp - 0x34], 0x6cf9d0 */ W32((u32)(r_ebp+0xffffffccu), 0x6cf9d0u);
    /* 005a8c95: mov dword ptr [ebp - 0x30], 0x6cf9b4 */ W32((u32)(r_ebp+0xffffffd0u), 0x6cf9b4u);
    /* 005a8c9c: mov dword ptr [ebp - 0x28], 0x20 */ W32((u32)(r_ebp+0xffffffd8u), 0x20u);
    /* 005a8ca3: mov dword ptr [ebp - 0x24], 0x22 */ W32((u32)(r_ebp+0xffffffdcu), 0x22u);
    /* 005a8caa: mov dword ptr [ebp - 0x20], 0x20 */ W32((u32)(r_ebp+0xffffffe0u), 0x20u);
    /* 005a8cb1: mov dword ptr [ebp - 0x1c], 0x40 */ W32((u32)(r_ebp+0xffffffe4u), 0x40u);
    /* 005a8cb8: mov dword ptr [ebp - 0x18], 0x20 */ W32((u32)(r_ebp+0xffffffe8u), 0x20u);
    /* 005a8cbf: mov dword ptr [ebp - 0x14], 0x5e */ W32((u32)(r_ebp+0xffffffecu), 0x5eu);
    /* 005a8cc6: mov dword ptr [ebp - 0x10], 0x20 */ W32((u32)(r_ebp+0xfffffff0u), 0x20u);
    /* 005a8ccd: mov dword ptr [ebp - 0xc], 0x7c */ W32((u32)(r_ebp+0xfffffff4u), 0x7cu);
    /* 005a8cd4: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005a8cdb: mov dword ptr [ebp - 4], 0x9a */ W32((u32)(r_ebp+0xfffffffcu), 0x9au);
    /* 005a8ce2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8ce8: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5a8cedu); f_005b4f00();
    /* 005a8ced: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a8cf0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8cf4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8cfa: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a8cffu); f_005b4e50();
    /* 005a8cff: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a8d02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d04: push 0x1396 */ { u32 v = 0x1396u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d09: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8d0c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5a8d11u); f_005f83d0();
    /* 005a8d11: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d13: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8d16: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5a8d1bu); f_005f89d0();
    /* 005a8d1b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d1f: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d21: push 0x6cf99c */ { u32 v = 0x6cf99cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d26: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a8d2bu); f_00630f40();
    /* 005a8d2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d2f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8d32: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5a8d37u); f_005f73e0();
    /* 005a8d37: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005a8d3e: jmp 0x5a8d49 */ goto L_005a8d49;
L_005a8d40:; BB(0x005a8d40);
    /* 005a8d40: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8d46: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_005a8d49:; BB(0x005a8d49);
    /* 005a8d49: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8d4d: jge 0x5a8db1 */ if ((fS==fO)) goto L_005a8db1;
L_005a8d4f:; BB(0x005a8d4f);
    /* 005a8d4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d51: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d53: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d55: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d57: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d59: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d5c: mov eax, dword ptr [ebp + edx*4 - 0x40] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffc0u));
    /* 005a8d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a8d66u); f_00630f40();
    /* 005a8d66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d6a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d6c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d6f: mov edx, dword ptr [ebp + ecx*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffdcu));
    /* 005a8d73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d74: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d77: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 005a8d7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a8d7e: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8d82: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a8d85: add edx, 0x30d4de */ {  u32 a = r_edx; u32 b = 0x30d4deu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a8d8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d8c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d92: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8d95: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5a8d9au); f_005f9de0();
    /* 005a8d9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d9c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a8d9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8da0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8da3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5a8da8u); f_005fb300();
    /* 005a8da8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8daa: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5a8dafu); f_005eb700();
    /* 005a8daf: jmp 0x5a8d40 */ goto L_005a8d40;
L_005a8db1:; BB(0x005a8db1);
    /* 005a8db1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8db4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8db5: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8dbb: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5a8dc0u); f_005b6170();
    /* 005a8dc0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a8dc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8dc5: je 0x5a8de4 */ if (fZ) goto L_005a8de4;
L_005a8dc7:; BB(0x005a8dc7);
    /* 005a8dc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8dc9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8dcc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5a8dd1u); f_005fb300();
    /* 005a8dd1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005a8dd4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a8dd7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a8dd9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a8ddc: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005a8de2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8de4u); call_ind(t); }
L_005a8de4:; BB(0x005a8de4);
    /* 005a8de4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8de7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8de8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8dee: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5a8df3u); f_005b3430();
    /* 005a8df3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8df6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8df8: jne 0x5a8e17 */ if (!fZ) goto L_005a8e17;
L_005a8dfa:; BB(0x005a8dfa);
    /* 005a8dfa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8dfc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8dff: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5a8e04u); f_005fb300();
    /* 005a8e04: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a8e07: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005a8e0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8e0c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a8e0f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005a8e15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8e17u); call_ind(t); }
L_005a8e17:; BB(0x005a8e17);
    /* 005a8e17: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a8e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e1b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8e1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e1f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8e25: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5a8e2au); f_005b3710();
    /* 005a8e2a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a8e2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8e2f: jne 0x5a8e4e */ if (!fZ) goto L_005a8e4e;
L_005a8e31:; BB(0x005a8e31);
    /* 005a8e31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e33: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8e36: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5a8e3bu); f_005fb300();
    /* 005a8e3b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005a8e3e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a8e41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a8e43: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a8e46: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005a8e4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8e4eu); call_ind(t); }
L_005a8e4e:; BB(0x005a8e4e);
    /* 005a8e4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8e51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e52: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8e58: call 0x5b37f0 */ r_esp -= 4; W32(r_esp, 0x5a8e5du); f_005b37f0();
    /* 005a8e5d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8e60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8e62: jne 0x5a8e81 */ if (!fZ) goto L_005a8e81;
L_005a8e64:; BB(0x005a8e64);
    /* 005a8e64: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e66: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a8e69: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5a8e6eu); f_005fb300();
    /* 005a8e6e: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a8e71: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a8e74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8e76: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a8e79: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005a8e7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8e81u); call_ind(t); }
L_005a8e81:; BB(0x005a8e81);
    /* 005a8e81: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8e83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8e84: ret  */ FN_RET(0x005a8c70); r_esp += 4; return;
}

