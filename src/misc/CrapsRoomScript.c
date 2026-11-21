#include "protos.h"

void f_004336e0(void) /* CrapsRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004336e0);
    /* 004336e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004336e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004336e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004336e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004336e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004336ec: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004336ef: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004336f2: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004336f6: jg 0x43370f */ if ((!fZ&&fS==fO)) goto L_0043370f;
L_004336f8:; BB(0x004336f8);
    /* 004336f8: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004336fc: je 0x433761 */ if (fZ) goto L_00433761;
L_004336fe:; BB(0x004336fe);
    /* 004336fe: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433702: je 0x43371d */ if (fZ) goto L_0043371d;
L_00433704:; BB(0x00433704);
    /* 00433704: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433708: je 0x43372d */ if (fZ) goto L_0043372d;
L_0043370a:; BB(0x0043370a);
    /* 0043370a: jmp 0x4337a5 */ goto L_004337a5;
L_0043370f:; BB(0x0043370f);
    /* 0043370f: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433716: je 0x43377a */ if (fZ) goto L_0043377a;
L_00433718:; BB(0x00433718);
    /* 00433718: jmp 0x4337a5 */ goto L_004337a5;
L_0043371d:; BB(0x0043371d);
    /* 0043371d: mov ecx, dword ptr [0x7906d8] */ r_ecx = R32((u32)(0x7906d8u));
    /* 00433723: call 0x42f230 */ r_esp -= 4; W32(r_esp, 0x433728u); f_0042f230();
    /* 00433728: jmp 0x4337c0 */ goto L_004337c0;
L_0043372d:; BB(0x0043372d);
    /* 0043372d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043372f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433732: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00433734: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433737: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0043373a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43373cu); call_ind(t); }
    /* 0043373c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043373e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00433744: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x433749u); f_00637810();
    /* 00433749: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043374c: add eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00433751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433752: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433755: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00433757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043375a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0043375d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43375fu); call_ind(t); }
    /* 0043375f: jmp 0x4337c0 */ goto L_004337c0;
L_00433761:; BB(0x00433761);
    /* 00433761: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433767: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0043376d: mov ecx, dword ptr [edx + 0x168] */ r_ecx = R32((u32)(r_edx+0x168u));
    /* 00433773: call 0x42df00 */ r_esp -= 4; W32(r_esp, 0x433778u); f_0042df00();
    /* 00433778: jmp 0x4337c0 */ goto L_004337c0;
L_0043377a:; BB(0x0043377a);
    /* 0043377a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00433780: call 0x434620 */ r_esp -= 4; W32(r_esp, 0x433785u); f_00434620();
    /* 00433785: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043378a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043378c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043378f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00433792: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433794u); call_ind(t); }
    /* 00433794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433796: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433799: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043379b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043379e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004337a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4337a3u); call_ind(t); }
    /* 004337a3: jmp 0x4337c0 */ goto L_004337c0;
L_004337a5:; BB(0x004337a5);
    /* 004337a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004337a7: jne 0x4337c0 */ if (!fZ) goto L_004337c0;
L_004337a9:; BB(0x004337a9);
    /* 004337a9: push 0x25f */ { u32 v = 0x25fu; r_esp -= 4; W32(r_esp, v); }
    /* 004337ae: push 0x6b7a64 */ { u32 v = 0x6b7a64u; r_esp -= 4; W32(r_esp, v); }
    /* 004337b3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004337b8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4337bdu); f_005e9f20();
    /* 004337bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004337c0:; BB(0x004337c0);
    /* 004337c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004337c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004337c3: ret  */ FN_RET(0x004336e0); r_esp += 4; return;
}

