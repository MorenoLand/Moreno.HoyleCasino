#include "protos.h"

void f_00572b00(void) /* RoadKillSlotRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572b00);
    /* 00572b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00572b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572b05: push 0x6a6138 */ { u32 v = 0x6a6138u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572b11: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572b14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00572b19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572b1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00572b1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00572b25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00572b28: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572b2b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x572b30u); f_005fc360();
    /* 00572b30: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00572b33: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00572b37: ja 0x572c91 */ if ((!fC&&!fZ)) goto L_00572c91;
L_00572b3d:; BB(0x00572b3d);
    /* 00572b3d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572b40: jmp dword ptr [eax*4 + 0x572cbc] */ { u32 t = R32((u32)(r_eax*4+0x572cbcu)); switch (t) { case 0x572b47u: goto L_00572b47; case 0x572b75u: goto L_00572b75; case 0x572bfdu: goto L_00572bfd; case 0x572c84u: goto L_00572c84; default: UNSUP(0x00572b40, "jump table entry is not a known target"); } }
L_00572b47:; BB(0x00572b47);
    /* 00572b47: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572b4d: call 0x56c370 */ r_esp -= 4; W32(r_esp, 0x572b52u); f_0056c370();
    /* 00572b52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572b57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00572b59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572b5c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00572b5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572b61u); call_ind(t); }
    /* 00572b61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572b66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00572b68: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572b6b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00572b6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572b70u); call_ind(t); }
    /* 00572b70: jmp 0x572cac */ goto L_00572cac;
L_00572b75:; BB(0x00572b75);
    /* 00572b75: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572b7b: mov byte ptr [ecx + 0x98], 1 */ W8((u32)(r_ecx+0x98u), 0x1u);
    /* 00572b82: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572b88: call 0x56de20 */ r_esp -= 4; W32(r_esp, 0x572b8du); f_0056de20();
    /* 00572b8d: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 00572b93: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00572b96: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572b9c: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00572b9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00572ba1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00572ba4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572ba6u); call_ind(t); }
    /* 00572ba6: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572bac: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572bb3: jne 0x572bd1 */ if (!fZ) goto L_00572bd1;
L_00572bb5:; BB(0x00572bb5);
    /* 00572bb5: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 00572bbb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00572bbe: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572bc4: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00572bc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00572bc9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00572bcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x572bd1u); call_ind(t); }
L_00572bd1:; BB(0x00572bd1);
    /* 00572bd1: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572bd7: movzx edx, byte ptr [ecx + 0x99] */ r_edx = (u32)R8((u32)(r_ecx+0x99u));
    /* 00572bde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572be0: jne 0x572bed */ if (!fZ) goto L_00572bed;
L_00572be2:; BB(0x00572be2);
    /* 00572be2: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572be8: call 0x56ed20 */ r_esp -= 4; W32(r_esp, 0x572bedu); f_0056ed20();
L_00572bed:; BB(0x00572bed);
    /* 00572bed: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572bf3: call 0x56e930 */ r_esp -= 4; W32(r_esp, 0x572bf8u); f_0056e930();
    /* 00572bf8: jmp 0x572cac */ goto L_00572cac;
L_00572bfd:; BB(0x00572bfd);
    /* 00572bfd: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00572c02: mov byte ptr [eax + 0x98], 0 */ W8((u32)(r_eax+0x98u), 0x0u);
    /* 00572c09: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572c0f: movzx edx, byte ptr [ecx + 0x99] */ r_edx = (u32)R8((u32)(r_ecx+0x99u));
    /* 00572c16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572c18: jne 0x572c25 */ if (!fZ) goto L_00572c25;
L_00572c1a:; BB(0x00572c1a);
    /* 00572c1a: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572c20: call 0x56f870 */ r_esp -= 4; W32(r_esp, 0x572c25u); f_0056f870();
L_00572c25:; BB(0x00572c25);
    /* 00572c25: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572c2b: call 0x56eb20 */ r_esp -= 4; W32(r_esp, 0x572c30u); f_0056eb20();
    /* 00572c30: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572c36: call 0x56e480 */ r_esp -= 4; W32(r_esp, 0x572c3bu); f_0056e480();
    /* 00572c3b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00572c3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x572c42u); f_00686d82();
    /* 00572c42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572c45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572c48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572c4f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572c53: je 0x572c62 */ if (fZ) goto L_00572c62;
L_00572c55:; BB(0x00572c55);
    /* 00572c55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572c58: call 0x56fc80 */ r_esp -= 4; W32(r_esp, 0x572c5du); f_0056fc80();
    /* 00572c5d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00572c60: jmp 0x572c69 */ goto L_00572c69;
L_00572c62:; BB(0x00572c62);
    /* 00572c62: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00572c69:; BB(0x00572c69);
    /* 00572c69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572c6c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00572c6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00572c76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00572c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572c7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572c7d: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x572c82u); f_005fc420();
    /* 00572c82: jmp 0x572cac */ goto L_00572cac;
L_00572c84:; BB(0x00572c84);
    /* 00572c84: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00572c8a: call 0x56ebc0 */ r_esp -= 4; W32(r_esp, 0x572c8fu); f_0056ebc0();
    /* 00572c8f: jmp 0x572cac */ goto L_00572cac;
L_00572c91:; BB(0x00572c91);
    /* 00572c91: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00572c93: jne 0x572cac */ if (!fZ) goto L_00572cac;
L_00572c95:; BB(0x00572c95);
    /* 00572c95: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 00572c9a: push 0x6caab4 */ { u32 v = 0x6caab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00572c9f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ca4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x572ca9u); f_005e9f20();
    /* 00572ca9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00572cac:; BB(0x00572cac);
    /* 00572cac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572caf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572cb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00572cb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572cba: ret  */ FN_RET(0x00572b00); r_esp += 4; return;
}

